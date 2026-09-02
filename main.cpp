// consider making a song if you're checking the code and familiar with raylib!
#include <raylib.h>
#include <vector>
#include "Arrow.hpp"
#include "CameraEase.hpp"
#include "blammed.hpp"
#include "include/SaveManager.hpp"
#include "include/scenes.hpp"
#include "songSelect.hpp"
#include "stress.hpp"
#include "scenes.hpp"
#include <string>

// DEFINITIONS
int targetRadius = 64;
int score = 0;
int misses = 13;
int difficultySelect = 1;
int framesCounter = 0;
int playerFramesCounter = 0;
int currentFrame = 0;
int currentFrame2 = 0;
int currentFrame3 = 1; // titleText
int currentFrame4 = 0; // when to exit out of promptMenu
int framesSpeed = 15;
double loadStart;
double loadDuration;
Color leftColor = WHITE;
Color downColor = WHITE;
Color upColor = WHITE;
Color rightColor = WHITE;
Color leftColorCPU = WHITE;
Color downColorCPU = WHITE;
Color upColorCPU = WHITE;
Color rightColorCPU = WHITE;
Color menuBGTint = WHITE;
// the amount of songs in the game loaded
const int totalSongCount = 2;
Color songListColors[totalSongCount];
Color gameOverFade = {0,0,0,0};
bool shouldFade = false;
// these are all for the FNF style transitions
bool passedPrompt = false;
bool goToSongList = false;
bool goToCredits = false;
float stickSensitivity = 0.7f;
int listIterator = 0;
unsigned char freePlayTrans = 255;
unsigned char creditsTrans = 255;
// credits lines
const char* l1 = "Made by hdfsyu, all assets made by ninjamuffin99.";
const char* l2 = "Special thanks to raylib!";
// this is for player music interruption, maybe scrap this for console builds?
bool isPaused = false;
Scenes sceneIndex = introText;
std::string songName = "";
// Arrow list
std::vector<Arrow> playerArrows;
std::vector<Arrow> computerArrows;
// Camera2D
Camera2D camera;
// DEFINE textures
Texture2D gfSpeakerTemp;
Texture2D menuBG;
Texture2D logoAtlas;
Texture2D freePlay;
Texture2D credits;
Texture2D titleText;
Texture2D gameOver_boyfriend;
Rectangle logoRec;
Rectangle freePlayRec;
Rectangle creditsRec;
Rectangle gfSpeakerRec;
Rectangle playerRec;
Rectangle enemyRec;
Rectangle gameOverRec;
Rectangle titleTextRec;
RenderTexture2D target;
Font fnfFont;
Font scoreFont;
// DEFINE sounds
Music gameOverBGM;
Music player;
Music instrumental;
Music titleTrack;
Sound wrong;
Sound scrollMenu;
Sound confirmMenu;
Sound cancelMenu;
Sound gameOverEnd;

// idle animation must be 5 frames long
enum EnemyStates{
	// idle is on another height level
	// -- second row --
    idleEnemy = 0,
	// -- first row --
    upEnemy = 0,
    leftEnemy = 260,
    rightEnemy = 260*2,
    downEnemy = 260*3
};
enum PlayerStates{
	// -- second row --
    idlePlayer = 0,
	// -- first row --
    upPlayer = 0,
    leftPlayer = 225,
    rightPlayer = 225*2,
    downPlayer = 225*3,
	// -- third row --
	leftPlayerMissed = 0,
	upPlayerMissed = 225,
	rightPlayerMissed = 225*2,
	downPlayerMissed = 225*3,
};
// INITIALIZE
int main()
{
	void UpdateDrawFrame();
	// Create the window and OpenGL context
	InitWindow(640, 480, "Vibin'");
	InitAudioDevice();
	// NOTE: you can remove this just expect some glitchy animations and trailSize to go down really quick
	SetTargetFPS(60);
	for(int i = 0; i < totalSongCount; i++){
		songListColors[i] = WHITE;
	}
	// LIMIT OF ARROWS
	// vvvvvvvvvvvvvvv
	playerArrows.reserve(512);
	computerArrows.reserve(512);
	// ^^^^^^^^^^^^^^^
	// LIMIT OF ARROWS
	scoreFont = LoadFont("/cd/ScoreText.fnt");
	fnfFont = LoadFont("/cd/FridayNightFunkin-Regular.fnt");
	storageBlammed = LoadStorageValue(STORAGE_POSITION_BLAMMED);
	storageStress = LoadStorageValue(STORAGE_POSITION_STRESS);
	Load_menus(&scrollMenu, &confirmMenu, &cancelMenu, &titleTrack, &gfSpeakerTemp, &freePlay, &credits, &logoAtlas, &titleText, &menuBG, &freePlayRec, &creditsRec, &gfSpeakerRec, &logoRec, &titleTextRec);
	PlayMusicStream(titleTrack);
	#if defined(PLATFORM_WEB)
		emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
	#else
		while (!WindowShouldClose())
		{
			UpdateDrawFrame();
		}
	#endif
	// CLEANUP
	UnloadTexture(leftArrow);
	UnloadTexture(downArrow);
	UnloadTexture(upArrow);
	UnloadTexture(rightArrow);
	UnloadTexture(gfSpeakerTemp);
	UnloadTexture(logoAtlas);
	UnloadTexture(menuBG);
	UnloadTexture(credits);
	UnloadTexture(freePlay);
	UnloadTexture(gameOver_boyfriend);
	UnloadTexture(titleText);



	UnloadFont(fnfFont);
	songCleanup(songName);
	CloseAudioDevice();
	// destroy the window and cleanup the OpenGL context
	CloseWindow();
	return 0;
}





void CheckCollision(float x, PlayerStates hitState, PlayerStates missState){
	playerFramesCounter = 0;
	if(CheckCollisionCircles({playerArrows.back().pos.x + 50, playerArrows.back().pos.y+48}, playerArrows.back().radius, {x,80}, targetRadius) && playerArrows.back().side == playerSide && !playerArrows.empty()){
		if(playerArrows.back().pos.y < 100){
			playerRec.y = 0;
			playerRec.x = hitState;
			misses--;
			if(isPaused){
				SetMusicVolume(player, 1);
				isPaused = false;
			}
			if(playerArrows.back().trailSize == 0){
				score += 100;
				playerArrows.pop_back();
			}
			
		}else{
			playerRec.y = 0;
			playerRec.x = hitState;
			misses--;
			if(isPaused){
				SetMusicVolume(player, 1);
				isPaused = false;
			}
			if(playerArrows.back().trailSize == 0){
				score += 50;
				playerArrows.pop_back();
			}
		}
	}else{
		playerRec.y = 450;
		score -= 10;
		misses++;
		SetMusicVolume(player, 0);
		isPaused = true;
		PlaySound(wrong);
		playerRec.x = missState;
	}
}
void CheckCollisionTrail(float x, PlayerStates hitState){
	playerFramesCounter = 0;
	if(playerArrows.back().trailSize != 0){
		if(CheckCollisionCircles({playerArrows.back().pos.x + 50, playerArrows.back().pos.y+48}, playerArrows.back().radius, {x,80}, targetRadius) && playerArrows.back().side == playerSide && !playerArrows.empty()){
			playerArrows.back().arrowRec.height = 0;
			playerArrows.back().arrowRec.width = 0;
			playerArrows.back().speed = 0;
			playerArrows.back().trailSize -= 1500 * GetFrameTime();
			if(playerArrows.back().trailSize - 20 <= 0){
				playerRec.x = hitState;
				if(playerArrows.back().trailSize < 0){
					score += -playerArrows.back().trailSize;
				}
				else{
					score += playerArrows.back().trailSize;
				}
				if(isPaused){
					SetMusicVolume(player, 1);
					isPaused = false;
				}
				playerArrows.pop_back();
			}
		}
	}
}

// GAME LOOP
void UpdateDrawFrame(){
	switch (sceneIndex)
	{
	case gameOver:
		UpdateMusicStream(gameOverBGM);
		framesCounter++;
		camera.zoom = 1.2f;
		if(shouldFade){
			if(gameOverFade.a >= 250){
				playerArrows.clear();
				computerArrows.clear();
				misses = 13;
				isPaused = false;
				score = 0;
				framesCounter = 0;
				shouldFade = false;
				gameOverFade = {0,0,0,0};
				StopMusicStream(gameOverBGM);
				framesSpeed = 15;
				loadStart = GetTime();
				songCleanup(songName);
				songLoad(songName, &playerArrows, &computerArrows, &instrumental, &player, &playerRec, &enemyRec, &camera, difficultySelect);
				loadDuration = GetTime() - loadStart;
				SeekMusicStream(instrumental, loadDuration);
				SeekMusicStream(player, loadDuration);
				PlayMusicStream(instrumental);
				PlayMusicStream(player);
				camera.zoom = 1.0f;
				sceneIndex = songChosen;
			}
			framesCounter++;
			if(framesCounter > 5){
				gameOverFade.a += 5; // framerate dependant
				framesCounter = 0;
			}
		}
		if(framesCounter >= (60 / framesSpeed)){
			framesCounter = 0;
			currentFrame++;
			// 450 is one tile
			gameOverRec.x = (float)currentFrame*(float)gameOver_boyfriend.width/29;
			if(currentFrame >= 29){
				currentFrame = 0;
				framesSpeed = 8;
			}
			if(currentFrame == 4){
				currentFrame = 0;
			}
		}
		CameraEaseExtreme(&camera, {(1280/2+320)/2, 480/2}, GetFrameTime(), 640, 480);
		BeginDrawing();
		BeginMode2D(camera);
		ClearBackground(gameOverFade);
		DrawTextureRec(gameOver_boyfriend, gameOverRec, {(1280/2+142)/2, 300/2}, WHITE);
		EndMode2D();
		DrawRectangle(0,0,640,480,gameOverFade);
		EndDrawing();
		if(IsGamepadButtonPressed(0, 7) && !shouldFade){
			StopMusicStream(gameOverBGM);
			PlaySound(gameOverEnd);
			shouldFade = true;
		}else if(IsGamepadButtonPressed(0, 6)){
			songCleanup(songName);
			playerArrows.clear();
			computerArrows.clear();
			misses = 13;
			isPaused = false;
			score = 0;
			framesCounter = 0;
			shouldFade = false;
			gameOverFade = {0,0,0,0};
			framesSpeed = 15;
			camera.zoom = 1.0f;
			StopMusicStream(gameOverBGM);
			Unload_SongChosen(&wrong, &gameOverEnd, &gameOverBGM, &leftArrow, &upArrow, &downArrow, &rightArrow, &holdAssets, &notes, &gameOver_boyfriend);
			Load_menus(&scrollMenu, &confirmMenu, &cancelMenu, &titleTrack, &gfSpeakerTemp, &freePlay, &credits, &logoAtlas, &titleText, &menuBG, &freePlayRec, &creditsRec, &gfSpeakerRec, &logoRec, &titleTextRec);
			PlayMusicStream(titleTrack);
			sceneIndex = songList;
		}
		break;
	case creditsList:
		UpdateMusicStream(titleTrack);
		if(IsGamepadButtonPressed(0, 6)){
			sceneIndex = titleScreen;
			PlaySound(cancelMenu);
		}
		
		BeginDrawing();
		ClearBackground(BLACK);
		DrawTexture(menuBG, 0, 0, GRAY);
		DrawTextEx(scoreFont, l1, {260/2, (720/2 - 128)/2}, 12, 0.0f, WHITE);
		DrawTextEx(scoreFont, l2, {256/2, (720/2 - 64)/2}, 24, 0, WHITE);
		DrawRectangle((1280/2-128)/2, (720-(256+48))/2, 128, 128, RAYWHITE);
		DrawRectangleLinesEx({(1280/2-128)/2, (720-(256+48))/2, 128, 128}, 8, BLACK);
		DrawText("raylib", (1280/2 - 44)/2,  (720-(128))/2, 25, BLACK);
		EndDrawing();
		break;
	case songList:
		UpdateMusicStream(titleTrack);
		if(IsGamepadButtonPressed(0, 6)){
			sceneIndex = titleScreen;
			PlaySound(cancelMenu);
		}
		if(IsGamepadButtonPressed(0, 3)){
			songListColors[listIterator].r = 255;
			if(listIterator + 1 < totalSongCount){
				listIterator++;
			}
			songListColors[listIterator].r = 0;
			PlaySound(scrollMenu);
		}
		if(IsGamepadButtonPressed(0, 1)){
			songListColors[listIterator].r = 255;
			if(listIterator - 1 >= 0){
				listIterator--;
			}
			songListColors[listIterator].r = 0;
			PlaySound(scrollMenu);
		}
		if(IsGamepadButtonPressed(0, 2)){
			if(difficultySelect+1 < 3){
				difficultySelect++;
			}else if(difficultySelect == 2){
				difficultySelect = 0;
			}
			PlaySound(scrollMenu);
		}
		if(IsGamepadButtonPressed(0, 4)){
			if(difficultySelect-1 >= 0){
				difficultySelect--;
			}else if(difficultySelect == 0){
				difficultySelect = 2;
			}
			PlaySound(scrollMenu);
		}
		if(IsKeyPressed(KEY_ENTER) || IsGamepadButtonPressed(0, 15) || IsGamepadButtonPressed(0, 7)){
			currentFrame = 0;
			// TODO: maybe make a new function for this in songSelect.hpp?
			switch (listIterator)
			{
			case 0:
				StopMusicStream(titleTrack);
				loadStart = GetTime();
				Unload_menus(&scrollMenu, &confirmMenu, &cancelMenu, &titleTrack, &gfSpeakerTemp, &freePlay, &credits, &logoAtlas, &titleText, &menuBG);
				TestSong(&playerArrows, &computerArrows, &instrumental, &player, &playerRec, &enemyRec, &camera, difficultySelect);
				Load_SongChosen(&wrong, &gameOverEnd, &gameOverBGM, &leftArrow, &upArrow, &downArrow, &rightArrow, &holdAssets, &notes, &gameOver_boyfriend, &gameOverRec);
				loadDuration = GetTime() - loadStart;
				SeekMusicStream(instrumental, loadDuration);
				SeekMusicStream(player, loadDuration);
				PlayMusicStream(instrumental);
				PlayMusicStream(player);
				songName = "TestSong";
				sceneIndex = songChosen;
				break;
			case 1:
				StopMusicStream(titleTrack);
				loadStart = GetTime();
				Unload_menus(&scrollMenu, &confirmMenu, &cancelMenu, &titleTrack, &gfSpeakerTemp, &freePlay, &credits, &logoAtlas, &titleText, &menuBG);
				Stress(&playerArrows, &computerArrows, &instrumental, &player, &playerRec, &enemyRec, &camera, difficultySelect);
				Load_SongChosen(&wrong, &gameOverEnd, &gameOverBGM, &leftArrow, &upArrow, &downArrow, &rightArrow, &holdAssets, &notes, &gameOver_boyfriend, &gameOverRec);
				loadDuration = GetTime() - loadStart;
				SeekMusicStream(instrumental, loadDuration);
				SeekMusicStream(player, loadDuration);
				PlayMusicStream(instrumental);
				PlayMusicStream(player);
				songName = "Stress";
				sceneIndex = songChosen;
				break;
			case 2:
			default:
				break;
			}
		}
		
		BeginDrawing();
		ClearBackground(BLACK);
		DrawTexture(menuBG, 0, 0, PURPLE);
		songChoices(fnfFont, songListColors);
		DrawRectangle(950/2, 0, 350/2, 96/2, {0,0,0,50});
		if(difficultySelect == 0){
			DrawTextEx(scoreFont, "Difficulty: Easy", {1000/2, 24/2}, 24/2, -2, WHITE);
		}else if(difficultySelect == 1){
			DrawTextEx(scoreFont, "Difficulty: Normal", {1000/2, 24/2}, 24/2, -2, WHITE);
		}else if(difficultySelect == 2){
			DrawTextEx(scoreFont, "Difficulty: Hard", {1000/2, 24/2}, 24/2, -2, WHITE);
		}
		EndDrawing();
		break;
	case introText:
		UpdateMusicStream(titleTrack);
		if(IsKeyPressed(KEY_ENTER) || IsGamepadButtonPressed(0, 15)){
			sceneIndex = promptMenu;
		}
		// title
		BeginDrawing();
		if(GetMusicTimePlayed(titleTrack) >= 1.5 && GetMusicTimePlayed(titleTrack) < 4.5){
			DrawTextEx(fnfFont, "ITS ALL IN", {(1280/2 - 100)/2, (720/2 - 30)/2}, 48/2, 1.0f, WHITE);
		}

		if(GetMusicTimePlayed(titleTrack) >= 2.5 && GetMusicTimePlayed(titleTrack) < 4.5){
			DrawTextEx(fnfFont, "RAYLIB", {(1280/2 - 100)/2, (720/2 + 18)/2}, 48/2, 1.0f, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 4.5 && GetMusicTimePlayed(titleTrack) < 6.5){
			ClearBackground(BLACK);
		}
		if(GetMusicTimePlayed(titleTrack) >= 7){
			DrawTextEx(fnfFont, "FRIDAY", {(1280/2 - 100)/2, (720/2 - 30)/2}, 48/2, 1.0f, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 7.5){
			DrawTextEx(fnfFont, "NIGHT", {(1280/2 - 100)/2, (720/2 + 18)/2}, 48/2, 1.0f, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 8.5){
			DrawTextEx(fnfFont, "FUNKIN", {(1280/2 - 100)/2, (720/2 + 66)/2}, 48/2, 1.0f, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 9.5){
			sceneIndex = promptMenu;
		}
		EndDrawing();
		
		break;
	case promptMenu:
		UpdateMusicStream(titleTrack);
		framesCounter++;
		if(framesCounter >= (60 / framesSpeed)){
			if(passedPrompt){
				titleTextRec.y = (float)currentFrame3*(float)titleText.height/3;
				if(currentFrame3 == 2){
					currentFrame3 = 0;
				}
				currentFrame3++;
				currentFrame4++;
				if(currentFrame4 == 30){
					sceneIndex = titleScreen;
					currentFrame3 = 1;
					currentFrame4 = 0;
					passedPrompt = false;
					titleTextRec.y = 0;
				}
			}
			framesCounter = 0;
			currentFrame++;
			currentFrame2++;
			if(currentFrame < 5){
				logoRec.x = (float)currentFrame2*(float)815;
			}
			if (currentFrame % 5 == 0){
				gfSpeakerRec.y = (float)currentFrame*(float)gfSpeakerTemp.height/4;
				gfSpeakerRec.x = 0;
			}
			else{ gfSpeakerRec.x = (float)currentFrame*(float)gfSpeakerTemp.width/5; }
			if(currentFrame > 19){
				currentFrame = 1;
				currentFrame2 = 1;
			}
		}
		// keep updating the title track music, seamless transition
		
		if(IsKeyPressed(KEY_ENTER) || IsGamepadButtonPressed(0, 15)){
			passedPrompt = true;
			if(!IsSoundPlaying(confirmMenu)){
				PlaySound(confirmMenu);
			}
			
		}
		BeginDrawing();
		ClearBackground(BLACK);
		DrawTextureRec(gfSpeakerTemp, gfSpeakerRec, {550/2, 50/2}, WHITE);
		DrawTextureRec(logoAtlas, logoRec, {-100/2, -100/2}, WHITE);
		DrawTextureRec(titleText, titleTextRec, {128/2, (720/2 + 232)/2}, WHITE);
		EndDrawing();		
	   break;
	case titleScreen:
		UpdateMusicStream(titleTrack);
		// freePlay.height = chosen
		// freePlay.height/2 = not selected
		
		framesCounter++;
		if(framesCounter >= (60 / framesSpeed)){
			if(goToSongList){
				currentFrame3++;
				if(currentFrame3 < 10){
					freePlayTrans = 255;
					menuBGTint = PURPLE;
				}
				if(currentFrame3 >= 10){
					freePlayTrans = 0;
					menuBGTint = WHITE;
				}
				
				currentFrame4++;
				if(currentFrame4 == 90){
					currentFrame3 = 1;
					currentFrame4 = 0;
					menuBGTint = WHITE;
					freePlayTrans = 255;
					goToSongList = false;
					sceneIndex = songList;
				}
				if(currentFrame3 > 15){
					currentFrame3 = 0;
				}
			}else if(goToCredits){
				currentFrame3++;
				if(currentFrame3 < 10){
					creditsTrans = 255;
					menuBGTint = PURPLE;
				}
				if(currentFrame3 >= 10){
					creditsTrans = 0;
					menuBGTint = WHITE;
				}
				
				currentFrame4++;
				if(currentFrame4 == 90){
					currentFrame3 = 1;
					currentFrame4 = 0;
					menuBGTint = WHITE;
					creditsTrans = 255;
					goToCredits = false;
					sceneIndex = creditsList;
				}
				if(currentFrame3 > 15){
					currentFrame3 = 0;
				}
			}
		}
		if(IsGamepadButtonPressed(0, 6)){
			sceneIndex = promptMenu;
			goToCredits = false;
			goToSongList = false;
			currentFrame3 = 1;
			currentFrame4 = 0;
			menuBGTint = WHITE;
			creditsTrans = 255;
			freePlayTrans = 255;
			passedPrompt = false;
			PlaySound(cancelMenu);
		}
		if((IsKeyPressed(KEY_ENTER)|| IsGamepadButtonPressed(0, 15) || IsGamepadButtonPressed(0, 7)) && freePlayRec.y == freePlay.height){
			goToSongList = true;
			if(!IsSoundPlaying(confirmMenu)){
				PlaySound(confirmMenu);
			}
		}else if((IsKeyPressed(KEY_ENTER)|| IsGamepadButtonPressed(0, 15) || IsGamepadButtonPressed(0, 7)) && creditsRec.y == credits.height){
			goToCredits = true;
			if(!IsSoundPlaying(confirmMenu)){
				PlaySound(confirmMenu);
			}
			
		}
		if(!goToCredits && !goToSongList && (IsKeyPressed(KEY_UP) || IsGamepadButtonPressed(0, 1) || GetGamepadAxisMovement(0, GAMEPAD_AXIS_LEFT_Y) <= -stickSensitivity) && freePlayRec.y == freePlay.height/2){
			creditsRec.y = credits.height/2;
			freePlayRec.y = freePlay.height;
			PlaySound(scrollMenu);
		}else if(!goToCredits && !goToSongList && (IsKeyPressed(KEY_DOWN) || IsGamepadButtonPressed(0, 3) || GetGamepadAxisMovement(0, GAMEPAD_AXIS_LEFT_Y) >= stickSensitivity)  && freePlayRec.y == freePlay.height){
			freePlayRec.y = freePlay.height/2;
			creditsRec.y = credits.height;
			PlaySound(scrollMenu);
		}
		BeginDrawing();
		ClearBackground({3, 20, 40}); // dark blue #032040
		DrawTexture(menuBG, 0, 0, menuBGTint);
		DrawTextureRec(freePlay, freePlayRec, {(1280/2 - 300)/2, (720/2)/2}, {255,255,255,freePlayTrans});
		DrawTextureRec(credits, creditsRec, {(1280/2 - 300)/2, (720/2 + 200)/2}, {255,255,255,creditsTrans});
		EndDrawing();	
		break;
	case songChosen:
		leftColor = WHITE;
		downColor = WHITE;
		upColor = WHITE;
		rightColor = WHITE;
		leftColorCPU = WHITE;
		downColorCPU = WHITE;
		upColorCPU = WHITE;
		rightColorCPU = WHITE;
		if((!IsKeyDown(KEY_LEFT) || !IsKeyDown(KEY_DOWN) || !IsKeyDown(KEY_UP) || !IsKeyDown(KEY_RIGHT))){
			playerFramesCounter++;
		}
		framesCounter++;
		// make all the input polls execute a function instead of this repeating mess
		if(!playerArrows.empty() && (IsKeyPressed(KEY_LEFT) || IsGamepadButtonPressed(0, 4) || IsGamepadButtonPressed(0, 8))){
			CheckCollision(850/2, leftPlayer, leftPlayerMissed);
		}
		if(!playerArrows.empty() && (IsKeyDown(KEY_LEFT) || IsGamepadButtonDown(0, 4) || IsGamepadButtonDown(0, 8))){
			CheckCollisionTrail(850/2, leftPlayer);
			leftColor = PURPLE;
		}
		if(!playerArrows.empty() && (IsKeyPressed(KEY_DOWN) || IsGamepadButtonPressed(0, 3) || IsGamepadButtonPressed(0, 7))){
			CheckCollision(950/2, downPlayer, downPlayerMissed);
		}
		if(!playerArrows.empty() && (IsKeyDown(KEY_DOWN) || IsGamepadButtonDown(0, 3) || IsGamepadButtonDown(0, 7))){
			CheckCollisionTrail(950/2, downPlayer);
			downColor = BLUE;
		}
		if(!playerArrows.empty() && (IsKeyPressed(KEY_UP) || IsGamepadButtonPressed(0, 1) || IsGamepadButtonPressed(0, 5))){
			CheckCollision(1050/2, upPlayer, upPlayerMissed);
		}
		if(!playerArrows.empty() && (IsKeyDown(KEY_UP) || IsGamepadButtonDown(0, 1) || IsGamepadButtonDown(0, 5))){
			CheckCollisionTrail(1050/2, upPlayer);
			upColor = GREEN;
		}
		if(!playerArrows.empty() && (IsKeyPressed(KEY_RIGHT) || IsGamepadButtonPressed(0, 2) || IsGamepadButtonPressed(0, 6))){
			CheckCollision(1150/2, rightPlayer, rightPlayerMissed);
		}
		if(!playerArrows.empty() && (IsKeyDown(KEY_RIGHT) || IsGamepadButtonDown(0, 2) || IsGamepadButtonDown(0, 6))){
			CheckCollisionTrail(1150/2, rightPlayer);
			rightColor = RED;
		}
		if(!computerArrows.empty() && computerArrows.back().pos.y <= 80 && computerArrows.back().side == computerSide){
			enemyRec.y = 0;
			switch((int)computerArrows.back().pos.x){
				case 800/2:
					leftColorCPU = PURPLE;
					enemyRec.x = leftEnemy;
					if(computerArrows.back().trailSize == 0){
						computerArrows.pop_back();
					}else{
						computerArrows.back().arrowRec.height = 0;
						computerArrows.back().arrowRec.width = 0;
						computerArrows.back().speed = 0;
						computerArrows.back().trailSize -= 20;
						if(computerArrows.back().trailSize - 20 <= 0){
							computerArrows.pop_back();
						}
					}
					break;
				case 900/2:
					downColorCPU = BLUE;
					enemyRec.x = downEnemy;
					if(computerArrows.back().trailSize == 0){
						computerArrows.pop_back();
					}else{
						computerArrows.back().arrowRec.height = 0;
						computerArrows.back().arrowRec.width = 0;
						computerArrows.back().speed = 0;
						computerArrows.back().trailSize -= 20;
						if(computerArrows.back().trailSize - 20 <= 0){
							computerArrows.pop_back();
						}
					}
					break;
				case 1000/2:
					upColorCPU = GREEN;
					enemyRec.x = upEnemy;
					if(computerArrows.back().trailSize == 0){
						computerArrows.pop_back();
					}else{
						computerArrows.back().arrowRec.height = 0;
						computerArrows.back().arrowRec.width = 0;
						computerArrows.back().speed = 0;
						computerArrows.back().trailSize -= 20;
						if(computerArrows.back().trailSize - 20 <= 0){
							computerArrows.pop_back();
						}
					}
					break;
				case 1100/2:
					rightColorCPU = RED;
					enemyRec.x = rightEnemy;
					if(computerArrows.back().trailSize == 0){
						computerArrows.pop_back();
					}else{
						computerArrows.back().arrowRec.height = 0;
						computerArrows.back().arrowRec.width = 0;
						computerArrows.back().speed = 0;
						computerArrows.back().trailSize -= 20;
						if(computerArrows.back().trailSize - 20 <= 0){
							computerArrows.pop_back();
						}
					}
					break;
			}
		}
		// !! THIS IS A DEBUG FEATURE, DO NOT USE THIS AS IT IS PRONE TO MEMORY LEAKS !!
		/*if(IsKeyDown(KEY_APOSTROPHE)){
			// reload
			playerArrows.clear();
			computerArrows.clear();
			misses = 13;
			isPaused = false;
			score = 0;
			TestSong(&arrows, &instrumental, &player, &playerRec, &enemyRec);
		}*/
		if(score <= -1){
			score = 0;
		}
		UpdateMusicStream(player);
		UpdateMusicStream(instrumental);
		// drawing
		BeginDrawing();
		songDraw(songName, &camera, &playerRec, &enemyRec);
		DrawTextureEx(leftArrow, {800/2, 30/2}, 0.0f, 0.7f, leftColor);
		DrawTextureEx(downArrow, {900/2, 30/2}, 0.0f, 0.7f, downColor);
		DrawTextureEx(upArrow, {1000/2, 30/2}, 0.0f, 0.7f, upColor);
		DrawTextureEx(rightArrow, {1100/2, 30/2}, 0.0f, 0.7f, rightColor);
		DrawTextureEx(leftArrow, {70/2, 30/2}, 0.0f, 0.7f, leftColorCPU);
		DrawTextureEx(downArrow, {170/2, 30/2}, 0.0f, 0.7f, downColorCPU);
		DrawTextureEx(upArrow, {270/2, 30/2}, 0.0f, 0.7f, upColorCPU);
		DrawTextureEx(rightArrow, {370/2, 30/2}, 0.0f, 0.7f, rightColorCPU);
		DrawRectangle(150/2, 440, 960/2, 12/2, GREEN);
		DrawRectangle(150/2, 440, (38*misses)/2, 12/2, RED);
		DrawRectangleLinesEx({150/2, 440, 964/2, 16/2}, 2, BLACK);	
		DrawTextEx(scoreFont, (std::string("Score: ") + std::to_string(score)).c_str(), {900/2, 460}, 18/2, 0, WHITE); // score	
		for (int i = playerArrows.size() - 1; i >= 0; i--)
		{
			if(playerArrows.at(i).pos.y < 560){
				playerArrows.at(i).Draw();
			}
			playerArrows.at(i).Update();
		}
		for (int i = computerArrows.size() - 1; i >= 0; i--)
		{
			if(computerArrows.at(i).pos.y < 560){
				computerArrows.at(i).Draw();
			}
			computerArrows.at(i).Update();
		}
		// DEBUGS
		/*DrawFPS(128, 160);
		DrawText(std::to_string(playerArrows.size()).c_str(), 128, 192, 36, WHITE);
		DrawCircleLines(850, 80, targetRadius, PURPLE);
		DrawCircleLines(950, 80, targetRadius, BLUE);
		DrawCircleLines(1050, 80, targetRadius, GREEN);
		DrawCircleLines(1150, 80, targetRadius, RED);*/

		// end the frame and get ready for the next one  (display frame, poll input, etc...)
		EndDrawing();
		if(!playerArrows.empty() && playerArrows.back().pos.y < -16){
			if(playerArrows.back().side == playerSide){
				playerRec.y = 450;
				score -= 10;
				SetMusicVolume(player, 0);
				isPaused = true;
				misses++;
				PlaySound(wrong);
				switch((int)playerArrows.back().pos.x){
					case 800/2:
						playerRec.x = leftPlayerMissed;
						break;
					case 900/2:
						playerRec.x = downPlayerMissed;
						break;
					case 1000/2:
						playerRec.x = upPlayerMissed;
						break;
					case 1100/2:
						playerRec.x = rightPlayerMissed;
						break;
				}
			}
			playerArrows.pop_back();
		}
		if((GetMusicTimePlayed(instrumental) >= GetMusicTimeLength(instrumental) - 5) || (GetMusicTimePlayed(player) >= GetMusicTimeLength(player) - 5)){
			misses = 13;
			playerArrows.clear();
			computerArrows.clear();
			songSave(songName, score);
			songCleanup(songName);
			score = 0;
			StopMusicStream(player);
			StopMusicStream(instrumental);
			UnloadMusicStream(player);
			UnloadMusicStream(instrumental);
			Unload_SongChosen(&wrong, &gameOverEnd, &gameOverBGM, &leftArrow, &upArrow, &downArrow, &rightArrow, &holdAssets, &notes, &gameOver_boyfriend);
			Load_menus(&scrollMenu, &confirmMenu, &cancelMenu, &titleTrack, &gfSpeakerTemp, &freePlay, &credits, &logoAtlas, &titleText, &menuBG, &freePlayRec, &creditsRec, &gfSpeakerRec, &logoRec, &titleTextRec);
			PlayMusicStream(titleTrack);
			sceneIndex = songList;
		}
		if(GetGamepadAxisMovement(0, GAMEPAD_AXIS_RIGHT_TRIGGER) >= 1.0f){ //RT to exit
			score = 0;
			misses = 13;
			playerArrows.clear();
			computerArrows.clear();
			songCleanup(songName);
			StopMusicStream(player);
			StopMusicStream(instrumental);
			UnloadMusicStream(player);
			UnloadMusicStream(instrumental);
			Unload_SongChosen(&wrong, &gameOverEnd, &gameOverBGM, &leftArrow, &upArrow, &downArrow, &rightArrow, &holdAssets, &notes, &gameOver_boyfriend);
			Load_menus(&scrollMenu, &confirmMenu, &cancelMenu, &titleTrack, &gfSpeakerTemp, &freePlay, &credits, &logoAtlas, &titleText, &menuBG, &freePlayRec, &creditsRec, &gfSpeakerRec, &logoRec, &titleTextRec);
			PlayMusicStream(titleTrack);
			sceneIndex = songList;
		}
		if(misses <= -1){
			misses = 0;
		}
		if(misses >= 26){
			StopMusicStream(player);
			StopMusicStream(instrumental);
			PlayMusicStream(gameOverBGM);
			currentFrame = 5;
			currentFrame2 = 0;
			sceneIndex = gameOver;
		}
		if(framesCounter >= 60 / framesSpeed){
			framesCounter = 0;
			currentFrame++;
			if(currentFrame < 4){
				enemyRec.y = 260;
				enemyRec.x = (float)currentFrame*260;
			}
			if(currentFrame > 20){
				currentFrame = 0;
			}
		}
		if(playerFramesCounter >= 60 / framesSpeed){
			playerFramesCounter = 0;
			if(currentFrame < 4){
				playerRec.y = 225;
				playerRec.x = (float)currentFrame*225;
			}
		}
		
		
		if(!playerArrows.empty()){
			playerArrows.back().speed = 1000;
		}
		if(!computerArrows.empty()){
			computerArrows.back().speed = 1000;
		}
		break;
	}
}
