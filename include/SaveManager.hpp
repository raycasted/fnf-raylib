// TODO: actually implement this
#pragma once
#include <kos.h>
#include <raylib.h>
#include <stdlib.h>         // Required for: calloc(), free()
#define STORAGE_DATA_FILE   "/vmu/a1/storage.data"   // Storage file
/* An icon is always 32x32 4bpp */
#define ICON_SIZE (32 * 32 / 2)

#define NB_ICONS_MAX 3
// this represents where the data is gonna be written in the file (check a hex editor)
typedef enum {
    STORAGE_POSITION_BLAMMED = 832,
    STORAGE_POSITION_STRESS = 249
} StorageData;
static unsigned char vmu_icon[ICON_SIZE * NB_ICONS_MAX];
bool SaveStorageValue(unsigned int position, int value)
{
    bool success = false;
    int dataSize = 0;
    int newDataSize = 0;
    unsigned char *fileData = LoadFileData(STORAGE_DATA_FILE, &dataSize);
    unsigned char *newFileData = NULL;
    vmu_pkg_t pkg;
    if (fileData != NULL)
    {
        if (dataSize <= (position*sizeof(int)))
        {
            // Increase data size up to position and store value
            newDataSize = (position + 1)*sizeof(int);
            newFileData = (unsigned char *)RL_REALLOC(fileData, newDataSize);

            if (newFileData != NULL)
            {
                // RL_REALLOC succeded
                int *dataPtr = (int *)newFileData;
                dataPtr[position] = value;
            }
            else
            {
                // RL_REALLOC failed
                TraceLog(LOG_WARNING, "FILEIO: [%s] Failed to realloc data (%u), position in bytes (%u) bigger than actual file size", STORAGE_DATA_FILE, dataSize, position*sizeof(int));

                // We store the old size of the file
                newFileData = fileData;
                newDataSize = dataSize;
            }
        }
        else
        {
            // Store the old size of the file
            newFileData = fileData;
            newDataSize = dataSize;

            // Replace value on selected position
            int *dataPtr = (int *)newFileData;
            dataPtr[position] = value;
        }
        strcpy(pkg.desc_short, "storage.data");
        strcpy(pkg.desc_long, "Save for Friday Night Funkin'");
        strcpy(pkg.app_id, "FNF");
        pkg.icon_cnt = NB_ICONS_MAX;
        pkg.icon_data = vmu_icon;
        pkg.icon_anim_speed = 8;
        pkg.eyecatch_type = VMUPKG_EC_NONE;
        pkg.data_len = newDataSize;
        pkg.data = newFileData;
        vmu_pkg_load_icon(&pkg, "/cd/save.ico");
        vmu_pkg_build(&pkg, &newFileData, &newDataSize);
        success = SaveFileData(STORAGE_DATA_FILE, newFileData, newDataSize);
        RL_FREE(newFileData);

        TraceLog(LOG_INFO, "FILEIO: [%s] Saved storage value: %i", STORAGE_DATA_FILE, value);
    }
    else
    {
        TraceLog(LOG_INFO, "FILEIO: [%s] File created successfully", STORAGE_DATA_FILE);

        dataSize = (position + 1)*sizeof(int);
        fileData = (unsigned char *)RL_MALLOC(dataSize);
        int *dataPtr = (int *)fileData;
        dataPtr[position] = value;
        strcpy(pkg.desc_short, "storage.data");
        strcpy(pkg.desc_long, "Save for Friday Night Funkin'");
        strcpy(pkg.app_id, "FNF");
        pkg.icon_cnt = NB_ICONS_MAX;
        pkg.icon_data = vmu_icon;
        pkg.icon_anim_speed = 8;
        pkg.eyecatch_type = VMUPKG_EC_NONE;
        pkg.data_len = dataSize;
        pkg.data = fileData;
        vmu_pkg_load_icon(&pkg, "/cd/save.ico");
        vmu_pkg_build(&pkg, &fileData, &dataSize);
        success = SaveFileData(STORAGE_DATA_FILE, fileData, dataSize);
        UnloadFileData(fileData);

        TraceLog(LOG_INFO, "FILEIO: [%s] Saved storage value: %i", STORAGE_DATA_FILE, value);
    }

    return success;
}

// Load integer value from storage file (from defined position)
// NOTE: If requested position could not be found, value 0 is returned
int LoadStorageValue(unsigned int position)
{
    int value = 0;
    int dataSize = 0;
    unsigned char *fileData = LoadFileData(STORAGE_DATA_FILE, &dataSize);

    if (fileData != NULL)
    {
        if (dataSize < ((int)(position*4))) TraceLog(LOG_WARNING, "FILEIO: [%s] Failed to find storage position: %i", STORAGE_DATA_FILE, position);
        else
        {
            int *dataPtr = (int *)fileData;
            value = dataPtr[position];
        }

        UnloadFileData(fileData);

        TraceLog(LOG_INFO, "FILEIO: [%s] Loaded storage value: %i", STORAGE_DATA_FILE, value);
    }

    return value;
}