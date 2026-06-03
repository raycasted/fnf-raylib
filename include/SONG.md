# Making a new song
## Creating
1. Copy any existing song
2. Rename the file to your song name
3. Replace all the variable suffixes with _YourSongNameHere
4. Load all your assets, and edit the scene accordingly
5. Change `totalSongCount` in main.cpp by 1, or by however many songs you're adding.
## Chart
1. Create a chart using `level-editor/editor.py`
2. Paste chart in your new song
## Load into engine
1. Edit SaveManager.hpp and add your song entry, it should be prefixed with STORAGE_POSITION_ and the value should be one more than the last entry in the enum.
2. Edit songSelect.hpp to `#include` your song with your songName
3. Go to main.cpp at line ~444 and add your song there
4. Test and play!
# Convert to DC (im sorry for how vague this is)
0. Switch to the `dreamcast` branch
1. Change the offset to 240 (or whatever you would like, play around with that number)
2. Run `halve_arrow_distances.py` (which actually /1.7 the arrow distances) to fix the spacing with your chart
3. Make sure all your textures are POT with a max res of 512x512
4. Resize all your textures with raylib's `.width` and `.height` properties to half of the PC textures
(e.g if my original PC texture was 5200x2180 it would be 2600x1090)
5. The save system has changed a little bit, make sure to add your song to the list of integers in songSelect, and add your song to the functions where it reloads the integer.
6. Test and play!