#pragma once
#include <raylib.h>
#include <dc/sound/sfxmgr.h>
#include <wav/sndwav.h>
enum Scenes{ // scenes should be in numbered order
	introText = 0,
	promptMenu = 1,
	titleScreen = 2,
	songChosen = 3,
	gameOver = 4,
	creditsList = 5,
	songList = 6
};
// sound fx pan should be 128, which is middle
void Load_menus(sfxhnd_t* scrollMenu, sfxhnd_t* confirmMenu, sfxhnd_t* cancelMenu, wav_stream_hnd_t* titleTrack, Texture2D* gfSpeakerTemp, Texture2D* freePlay, Texture2D* credits, Texture2D* logoAtlas, Texture2D* titleText, Texture2D* menuBG, Rectangle* freePlayRec, Rectangle* creditsRec, Rectangle* gfSpeakerRec, Rectangle* logoRec, Rectangle* titleTextRec){
	*scrollMenu = snd_sfx_load("/cd/scrollMenu.wav");
	*confirmMenu = snd_sfx_load("/cd/confirmMenu.wav");
	*cancelMenu = snd_sfx_load("/cd/cancelMenu.wav");
	*titleTrack = wav_create("/cd/title-track.wav", 1);
	*gfSpeakerTemp = LoadTexture("/cd/shared/gfDanceTitle2.png");
	gfSpeakerTemp->width = 1816;
	gfSpeakerTemp->height = 1332;
	SetTextureFilter(*gfSpeakerTemp, TEXTURE_FILTER_BILINEAR);
	*freePlay = LoadTexture("/cd/freePlay.png");
	freePlay->width = 312;
	freePlay->height = 170;
	*credits = LoadTexture("/cd/credits.png");
	credits->width = 312;
	credits->height = 170;
	*menuBG = LoadTexture("/cd/menuBG.png");
	menuBG->width = 640;
	menuBG->height = 480;
	*logoAtlas = LoadTexture("/cd/logoAtlas.png");
	logoAtlas->width = 1630;
	logoAtlas->height = 287;
	*titleText = LoadTexture("/cd/titleText.png");
	titleText->width = 503;
	titleText->height = 127;
	*gfSpeakerRec = { 0.0f, 0.0f, (float)gfSpeakerTemp->width/5, (float)gfSpeakerTemp->height/4 };
	*logoRec = {0.0f, 0.0f, (float)logoAtlas->width/4, (float)logoAtlas->height};
	*freePlayRec = {0.0f, (float)freePlay->height, (float)freePlay->width, (float)freePlay->height/2};
	*creditsRec = {0.0f, (float)credits->height/2, (float)credits->width, (float)credits->height/2};
	*titleTextRec = {0.0f, 0.0f, (float)titleText->width, (float)titleText->height/3};
	TraceLog(LOG_WARNING, "Loaded all menus.");
}
void Unload_menus(sfxhnd_t* scrollMenu, sfxhnd_t* confirmMenu, sfxhnd_t* cancelMenu, wav_stream_hnd_t* titleTrack, Texture2D* gfSpeakerTemp, Texture2D* freePlay, Texture2D* credits, Texture2D* logoAtlas, Texture2D* titleText, Texture2D* menuBG){
	snd_sfx_unload(*scrollMenu);
	snd_sfx_unload(*confirmMenu);
	snd_sfx_unload(*cancelMenu);
	wav_destroy(*titleTrack);
	UnloadTexture(*freePlay);
	UnloadTexture(*gfSpeakerTemp);
	UnloadTexture(*credits);
	UnloadTexture(*menuBG);
	UnloadTexture(*logoAtlas);
	UnloadTexture(*titleText);
	TraceLog(LOG_WARNING, "Unloaded all menus.");
}
void Load_SongChosen(sfxhnd_t* wrong, sfxhnd_t* gameOverEnd, wav_stream_hnd_t* gameOverBGM, Texture2D* leftArrow, Texture2D* upArrow, Texture2D* downArrow, Texture2D* rightArrow, Texture2D* holdAssets, Texture2D* notes, Texture2D* gameOver_boyfriend, Rectangle* gameOverRec){
	*wrong = snd_sfx_load("/cd/missnote.wav");
	*gameOverEnd = snd_sfx_load("/cd/gameOverEnd.wav");
	*gameOverBGM = wav_create("/cd/gameOver.wav", 1);
	*leftArrow = LoadTexture("/cd/leftArrow.png");
	leftArrow->width = 80;
	leftArrow->height = 78;
	*upArrow = LoadTexture("/cd/upArrow.png");
	upArrow->width = 80;
	upArrow->height = 78;
	*rightArrow = LoadTexture("/cd/rightArrow.png");
	rightArrow->width = 80;
	rightArrow->height = 78;
	*downArrow = LoadTexture("/cd/downArrow.png");
	downArrow->width = 80;
	downArrow->height = 78;
	*holdAssets = LoadTexture("/cd/holdAssets.png");
	*notes = LoadTexture("/cd/notes.png");
	notes->width = 155;
	notes->height = 155;
	notes->width *= 0.7f;
	notes->height *= 0.7f;
	*gameOver_boyfriend = LoadTexture("/cd/boyfriendGameOver.png");
	gameOver_boyfriend->width = 6525;
	gameOver_boyfriend->height = 225;
	*gameOverRec = {0.0f, 0.0f, (float)gameOver_boyfriend->width/29, (float)gameOver_boyfriend->height};
	TraceLog(LOG_WARNING, "Loaded Song UI.");
}
void Unload_SongChosen(sfxhnd_t* wrong, sfxhnd_t* gameOverEnd, wav_stream_hnd_t* gameOverBGM, Texture2D* leftArrow, Texture2D* upArrow, Texture2D* downArrow, Texture2D* rightArrow, Texture2D* holdAssets, Texture2D* notes, Texture2D* gameOver_boyfriend){
	snd_sfx_unload(*wrong);
	snd_sfx_unload(*gameOverEnd);
	wav_destroy(*gameOverBGM);
	UnloadTexture(*leftArrow);
	UnloadTexture(*upArrow);
	UnloadTexture(*rightArrow);
	UnloadTexture(*downArrow);
	UnloadTexture(*holdAssets);
	UnloadTexture(*notes);
	UnloadTexture(*gameOver_boyfriend);
	TraceLog(LOG_WARNING, "Unloaded Song UI.");
}
/*void Load_GameOver(Texture2D* gameOver_boyfriend, wav_stream_hnd_t* gameOverBGM, wav_stream_hnd_t* gameOverEnd){
	*gameOver_boyfriend = LoadTexture("resources/boyfriendGameOver.png");
	*gameOverBGM = LoadMusicStream("resources/gameOver.mp3");
	*gameOverEnd = LoadMusicStream("resources/gameOverEnd.mp3");
	gameOver_boyfriend->width = 13050; // this is needed so ES3 can load our huge image
}
void Unload_GameOver(Texture2D* gameOver_boyfriend, wav_stream_hnd_t* gameOverBGM, wav_stream_hnd_t* gameOverEnd){
	UnloadTexture(*gameOver_boyfriend);
	UnloadMusicStream(*gameOverBGM);
	UnloadMusicStream(*gameOverEnd);
}
// TODO: update rectangles respectively as parameters
void Load_PromptMenu(Texture2D* gfSpeakerTemp, Texture2D* logoAtlas){
	*gfSpeakerTemp = LoadTexture("resources/shared/gfDanceTitle2.png");
	*logoAtlas = LoadTexture("resources/logoAtlas.png");
}
void Unload_PromptMenu(Texture2D* gfSpeakerTemp, Texture2D* logoAtlas){
	UnloadTexture(*gfSpeakerTemp);
	UnloadTexture(*logoAtlas);
}
void Load_TitleScreen(Texture2D* menuBG, Texture2D* freePlay, Texture2D* credits){
	*menuBG = LoadTexture("resources/menuBG.png");
	*freePlay = LoadTexture("resources/freePlay.png");
	*credits = LoadTexture("resources/credits.png");
}
void Unload_TitleScreen(Texture2D* menuBG, Texture2D* freePlay, Texture2D* credits){
	UnloadTexture(*menuBG);
	UnloadTexture(*freePlay);
	UnloadTexture(*credits);
}
// why reload menuBG, figure out a way to optimize?
void Load_SongList(Texture2D* menuBG){
	*menuBG = LoadTexture("resources/menuBG.png");
}
void Unload_SongList(Texture2D* menuBG){
	UnloadTexture(*menuBG);
}
void Load_SongChosen(Texture2D* leftArrow, Texture2D* downArrow, Texture2D* upArrow, Texture2D* rightArrow, sfxhnd_t* wrong, wav_stream_hnd_t* titleTrack){
	*leftArrow = LoadTexture("resources/leftArrow.png");
	*upArrow = LoadTexture("resources/upArrow.png");
	*rightArrow = LoadTexture("resources/rightArrow.png");
	*downArrow = LoadTexture("resources/downArrow.png");
	*wrong = snd_sfx_load("resources/buzzer-error.mp3");
	UnloadMusicStream(*titleTrack);
}
void Unload_SongChosen(Texture2D* leftArrow, Texture2D* downArrow, Texture2D* upArrow, Texture2D* rightArrow, sfxhnd_t* wrong, wav_stream_hnd_t* titleTrack, wav_stream_hnd_t* instrumental, wav_stream_hnd_t* player){
	UnloadTexture(*leftArrow);
	UnloadTexture(*upArrow);
	UnloadTexture(*rightArrow);
	UnloadTexture(*downArrow);
	UnloadMusicStream(*instrumental);
	UnloadMusicStream(*player);
	*titleTrack = LoadMusicStream("resources/title-track-alt.mp3");
}*/