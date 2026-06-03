#pragma once
#include <raylib.h>
enum Scenes{ // scenes should be in numbered order
	introText = 0,
	promptMenu = 1,
	titleScreen = 2,
	songChosen = 3,
	gameOver = 4,
	creditsList = 5,
	songList = 6
};
/*void Load_GameOver(Texture2D* gameOver_boyfriend, Music* gameOverBGM, Music* gameOverEnd){
	*gameOver_boyfriend = LoadTexture("resources/boyfriendGameOver.png");
	*gameOverBGM = LoadMusicStream("resources/gameOver.mp3");
	*gameOverEnd = LoadMusicStream("resources/gameOverEnd.mp3");
	gameOver_boyfriend->width = 13050; // this is needed so ES3 can load our huge image
}
void Unload_GameOver(Texture2D* gameOver_boyfriend, Music* gameOverBGM, Music* gameOverEnd){
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
void Load_SongChosen(Texture2D* leftArrow, Texture2D* downArrow, Texture2D* upArrow, Texture2D* rightArrow, Sound* wrong, Music* titleTrack){
	*leftArrow = LoadTexture("resources/leftArrow.png");
	*upArrow = LoadTexture("resources/upArrow.png");
	*rightArrow = LoadTexture("resources/rightArrow.png");
	*downArrow = LoadTexture("resources/downArrow.png");
	*wrong = LoadSound("resources/buzzer-error.mp3");
	UnloadMusicStream(*titleTrack);
}
void Unload_SongChosen(Texture2D* leftArrow, Texture2D* downArrow, Texture2D* upArrow, Texture2D* rightArrow, Sound* wrong, Music* titleTrack, Music* instrumental, Music* player){
	UnloadTexture(*leftArrow);
	UnloadTexture(*upArrow);
	UnloadTexture(*rightArrow);
	UnloadTexture(*downArrow);
	UnloadMusicStream(*instrumental);
	UnloadMusicStream(*player);
	*titleTrack = LoadMusicStream("resources/title-track-alt.mp3");
}*/