#pragma once
#include <raylib.h>
#include <string>
#include "blammed.hpp"
#include "stress.hpp"
#include "SaveManager.hpp"
// add your own song here, make sure to change the y position by 48 and add it to the switch statement in main
void songChoices(Font fnfFont, Color songListColors[]){
	// NOTE: loading a storage value over and over again is pretty wasteful
	// try to load it on song end
	// make your own string variable here, then make a new text entry passing that string variable
	std::string blammedText = (std::string("BLAMMED ") + std::to_string(LoadStorageValue(STORAGE_POSITION_BLAMMED))).c_str();
	std::string stressText = (std::string("STRESS ") + std::to_string(LoadStorageValue(STORAGE_POSITION_STRESS))).c_str();
	//std::string YourText = (std::string("YOUR SONG") + std::to_string(LoadStorageValue(STORAGE_POSITION_YOURSONG))).c_str();

    DrawTextEx(fnfFont, blammedText.c_str(), {64, 720/2}, 48, 0.0f, songListColors[0]);
    DrawTextEx(fnfFont, stressText.c_str(), {64, 720/2+48}, 48, 0.0f, songListColors[1]);
    //DrawTextEx(fnfFont, "YOUR SONG", {64, 720/2+96}, 48, 0.0f, songListColors[2]);
}
void songCleanup(std::string songName){
    if(songName == "TestSong"){
		TestSongCleanup();
	}else if(songName == "Stress"){
		StressCleanup();
	}
}
void songDraw(std::string songName, Camera2D* camera, Rectangle* playerRec, Rectangle* enemyRec){
    if(songName == "TestSong"){
		TestSongDraw(playerRec, enemyRec, camera);
	}else if(songName == "Stress"){
		StressDraw(playerRec, enemyRec, camera);
	}
}
void songLoad(std::string songName, std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList, Music* instrumental, Music* player, Rectangle* playerRec, Rectangle* enemyRec, Camera2D* camera, int difficulty){
    if(songName == "TestSong"){
		TestSong(playerArrowList, computerArrowList, instrumental, player, playerRec, enemyRec, camera, difficulty);
	}else if(songName == "Stress"){
		Stress(playerArrowList, computerArrowList, instrumental, player, playerRec, enemyRec, camera, difficulty);
	}
}
void songSave(std::string songName, int score){
	if(songName == "TestSong" && score > LoadStorageValue(STORAGE_POSITION_BLAMMED)){
		SaveStorageValue(STORAGE_POSITION_BLAMMED, score);
	}else if(songName == "Stress" && score > LoadStorageValue(STORAGE_POSITION_STRESS)){
		SaveStorageValue(STORAGE_POSITION_STRESS, score);
	}
}