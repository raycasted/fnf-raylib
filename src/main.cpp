// consider making a song if you're checking the code and familiar with raylib!
#include <cstddef>
#include <raylib.h>
#include <vector>
#include "Arrow.hpp"
#include "CameraEase.hpp"
#include "blammed.hpp"
#include "songSelect.hpp"
#include "stress.hpp"
#include "scenes.hpp"
#include <string>
// TODO: might need to write audio helper for N64's audio subsystem 
// https://n64squid.com/homebrew/libdragon/audio/playing/
#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif
#define MAX(a, b) ((a)>(b)? (a) : (b))
#define MIN(a, b) ((a)<(b)? (a) : (b))

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
const int totalSongCount = 3;
Color songListColors[totalSongCount];
Color gameOverFade = {0,0,0,0};
bool shouldFade = false;
// these are all for the FNF style transitions
bool passedPrompt = false;
bool goToSongList = false;
bool goToCredits = false;
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
Music titleTrack;
Music gameOverBGM;
Music player;
Music instrumental;
Sound wrong;
Sound scrollMenu;
Sound confirmMenu;
Sound cancelMenu;
Sound gameOverEnd;

// must be a 2600 width
// idle animation must be 5 frames long
enum EnemyStates{
	// idle is on another height level
	// -- second row --
    idleEnemy = 0,
	// -- first row --
    upEnemy = 0,
    leftEnemy = 513,
    rightEnemy = 513*2,
    downEnemy = 513*3
};
enum PlayerStates{
	// -- second row --
    idlePlayer = 0,
	// -- first row --
    upPlayer = 0,
    leftPlayer = 450,
    rightPlayer = 450*2,
    downPlayer = 450*3,
	// -- third row --
	leftPlayerMissed = 0,
	upPlayerMissed = 450,
	rightPlayerMissed = 450*2,
	downPlayerMissed = 450*3,
};
// INITIALIZE
int main()
{
	void UpdateDrawFrame();
	// Tell the window to use vsync (not anymore) and work on high DPI displays
	#if defined(PLATFORM_WEB)
		SetConfigFlags(FLAG_WINDOW_HIGHDPI);
	#else
		SetConfigFlags(FLAG_WINDOW_HIGHDPI | FLAG_WINDOW_RESIZABLE);
	#endif
	// Create the window and OpenGL context
	// look into using render textures for downscaling/upscaling the game to different resolutions
	InitWindow(1280, 720, "Vibin'");
	InitAudioDevice();
	// NOTE: you can remove this just expect some glitchy animations and trailSize to go down really quick
	SetTargetFPS(60);
	// LOAD ALL THE VARIABLES HERE, WEB BUILD ERRORS OUT OTHERWISE
	for(int i = 0; i < totalSongCount; i++){
		songListColors[i] = WHITE;
	}
	// LIMIT OF ARROWS
	// vvvvvvvvvvvvvvv
	playerArrows.reserve(512);
	computerArrows.reserve(512);
	// ^^^^^^^^^^^^^^^
	// LIMIT OF ARROWS
	wrong = LoadSound("resources/missnote.mp3");
	SetSoundVolume(wrong, 0.3);
	scrollMenu = LoadSound("resources/scrollMenu.mp3");
	confirmMenu = LoadSound("resources/confirmMenu.mp3");
	cancelMenu = LoadSound("resources/cancelMenu.mp3");
	titleTrack = LoadMusicStream("resources/title-track.mp3");
	fnfFont = LoadFont("resources/FridayNightFunkin-Regular.ttf");
	scoreFont = LoadFont("resources/ScoreText.ttf");
	gameOverBGM = LoadMusicStream("resources/gameOver.mp3");
	gameOverEnd = LoadSound("resources/gameOverEnd.mp3");
	gfSpeakerTemp = LoadTexture("resources/shared/gfDanceTitle2.png");
	menuBG = LoadTexture("resources/menuBG.png");
	leftArrow = LoadTexture("resources/leftArrow.png");
	upArrow = LoadTexture("resources/upArrow.png");
	rightArrow = LoadTexture("resources/rightArrow.png");
	downArrow = LoadTexture("resources/downArrow.png");
	holdAssets = LoadTexture("resources/holdAssets.png");
	notes = LoadTexture("resources/notes.png");
	notes.width *= 0.7f;
	notes.height *= 0.7f;

	logoAtlas = LoadTexture("resources/logoAtlas.png");
	freePlay = LoadTexture("resources/freePlay.png");
	credits = LoadTexture("resources/credits.png");
	titleText = LoadTexture("resources/titleText.png");
	#if defined(PLATFORM_WEB)
		gameOver_boyfriend = LoadTexture("resources/boyfriendGameOver_Compressed.png");
		gameOver_boyfriend.width /= 0.7f;
	#else
		gameOver_boyfriend = LoadTexture("resources/boyfriendGameOver.png");
	#endif
	gfSpeakerRec = { 0.0f, 0.0f, (float)gfSpeakerTemp.width/5, (float)gfSpeakerTemp.height/4 };
	logoRec = {0.0f, 0.0f, (float)logoAtlas.width/4, (float)logoAtlas.height};
	freePlayRec = {0.0f, (float)freePlay.height, (float)freePlay.width, (float)freePlay.height/2};
	creditsRec = {0.0f, (float)credits.height/2, (float)credits.width, (float)credits.height/2};
	gameOverRec = {0.0f, 0.0f, (float)gameOver_boyfriend.width/29, (float)gameOver_boyfriend.height};
	titleTextRec = {0.0f, 0.0f, (float)titleText.width, (float)titleText.height/3};
	// Render texture initialization, used to hold the rendering result so we can easily resize it
    target = LoadRenderTexture(1280, 720);
	//SeekMusicStream(titleTrack, 50);
	PlayMusicStream(titleTrack);
	#if defined(PLATFORM_WEB)
		emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
	#else
		while (!WindowShouldClose())		// run the loop until the user presses ESCAPE or presses the Close button on the window
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


	UnloadSound(wrong);
	UnloadSound(scrollMenu);
	UnloadSound(confirmMenu);
	UnloadSound(cancelMenu);

	UnloadMusicStream(titleTrack);
	UnloadMusicStream(gameOverBGM);
	UnloadMusicStream(instrumental);
	UnloadMusicStream(player);


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
				SetMusicVolume(player, 1.0);
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
				SetMusicVolume(player, 1.0);
				isPaused = false;
			}
			if(playerArrows.back().trailSize == 0){
				score += 50;
				playerArrows.pop_back();
			}
		}
	}else{
		playerRec.y = 450*2;
		score -= 10;
		misses++;
		SetMusicVolume(player, 0.0);
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
				playerRec.y = 0;
				playerRec.x = hitState;
				if(playerArrows.back().trailSize < 0){
					score += -playerArrows.back().trailSize;
				}
				else{
					score += playerArrows.back().trailSize;
				}
				if(isPaused){
					SetMusicVolume(player, 1.0);
					isPaused = false;
				}
				playerArrows.pop_back();
			}
		}
	}
}

// make scene manager later? (done, its the one big switch statement of DOOOOOOOMMMMMM)
// GAME LOOP
void UpdateDrawFrame(){
	float scale = MIN((float)GetScreenWidth()/1280, (float)GetScreenHeight()/720);
	switch (sceneIndex)
	{
	case gameOver:
		framesCounter++;
		camera.zoom = 1.2f;
		if(shouldFade){
			// this may unnecessarily load new textures into VRAM, cleanup song before?
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
				StopSound(gameOverEnd);
				framesSpeed = 15;
				loadStart = GetTime();
				songLoad(songName, &playerArrows, &computerArrows, &instrumental, &player, &playerRec, &enemyRec, &camera, difficultySelect);
				loadDuration = GetTime() - loadStart;
				PlayMusicStream(instrumental);
				PlayMusicStream(player);
				SeekMusicStream(instrumental, loadDuration);
				SeekMusicStream(player, loadDuration);
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
		if(IsKeyPressed(KEY_ENTER) && !shouldFade){
			StopMusicStream(gameOverBGM);
			PlaySound(gameOverEnd);
			shouldFade = true;
		}else if(IsKeyPressed(KEY_BACKSPACE)){
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
			PlayMusicStream(titleTrack);
			sceneIndex = songList;
		}
		CameraEaseExtreme(&camera, {1280/2+320, 480}, GetFrameTime(), 1280, 720);
		UpdateMusicStream(gameOverBGM);
		BeginTextureMode(target);
		BeginMode2D(camera);
		ClearBackground(gameOverFade);
		DrawTextureRec(gameOver_boyfriend, gameOverRec, {1280/2+142, 300}, WHITE);
		//DrawTextEx(fnfFont, "PRESS ENTER", {1280/2-142, 720/2}, 48, 1.0f, WHITE);
		EndMode2D();
		DrawRectangle(0,0,1280,720,gameOverFade);
		EndTextureMode();
		BeginDrawing();
		ClearBackground(BLACK);
						DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)1280*scale))*0.5f, (GetScreenHeight() - ((float)720*scale))*0.5f,
                           (float)1280*scale, (float)720*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
		EndDrawing();
		break;
	case creditsList:
		if(IsKeyPressed(KEY_BACKSPACE)){
			sceneIndex = titleScreen;
			PlaySound(cancelMenu);
		}


		UpdateMusicStream(titleTrack);
		BeginTextureMode(target);
		ClearBackground(BLACK);
		DrawTexture(menuBG, 0, 0, GRAY);
		DrawTextEx(scoreFont, l1, {260, 720/2 - 128}, 24, 0.0f, WHITE);
		DrawTextEx(scoreFont, l2, {256, 720/2 - 64}, 48, 0, WHITE);
		DrawRectangle(1280/2-128, 720-(256+48), 256, 256, RAYWHITE);
		DrawRectangleLinesEx({1280/2-128, 720-(256+48), 256, 256}, 16, BLACK);
		DrawText("raylib", 1280/2 - 44,  720-(128), 50, BLACK);
		EndTextureMode();
		BeginDrawing();
		ClearBackground(BLACK);
						DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)1280*scale))*0.5f, (GetScreenHeight() - ((float)720*scale))*0.5f,
                           (float)1280*scale, (float)720*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
		EndDrawing();
		break;
	case songList:
		if(IsKeyPressed(KEY_BACKSPACE)){
			sceneIndex = titleScreen;
			PlaySound(cancelMenu);
		}
		if(IsKeyPressed(KEY_DOWN)){
			songListColors[listIterator].r = 255;
			if(listIterator + 1 < totalSongCount){
				listIterator++;
			}
			songListColors[listIterator].r = 0;
			PlaySound(scrollMenu);
		}
		if(IsKeyPressed(KEY_UP)){
			songListColors[listIterator].r = 255;
			if(listIterator - 1 >= 0){
				listIterator--;
			}
			songListColors[listIterator].r = 0;
			PlaySound(scrollMenu);
		}
		if(IsKeyPressed(KEY_RIGHT)){
			if(difficultySelect+1 < 3){
				difficultySelect++;
			}else if(difficultySelect == 2){
				difficultySelect = 0;
			}
			PlaySound(scrollMenu);
		}
		if(IsKeyPressed(KEY_LEFT)){
			if(difficultySelect-1 >= 0){
				difficultySelect--;
			}else if(difficultySelect == 0){
				difficultySelect = 2;
			}
			PlaySound(scrollMenu);
		}
		if(IsKeyPressed(KEY_ENTER)){
			currentFrame = 0;
			// TODO: maybe make a new function for this in songSelect.hpp?
			switch (listIterator)
			{
			case 0:
				StopMusicStream(titleTrack);
				loadStart = GetTime();
				TestSong(&playerArrows, &computerArrows, &instrumental, &player, &playerRec, &enemyRec, &camera, difficultySelect);
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
				Stress(&playerArrows, &computerArrows, &instrumental, &player, &playerRec, &enemyRec, &camera, difficultySelect);
				loadDuration = GetTime() - loadStart;
				SeekMusicStream(instrumental, loadDuration);
				SeekMusicStream(player, loadDuration);
				PlayMusicStream(instrumental);
				PlayMusicStream(player);
				songName = "Stress";
				sceneIndex = songChosen;
				break;
			case 2:
				StopMusicStream(titleTrack);
				loadStart = GetTime();
				worship(&playerArrows, &computerArrows, &instrumental, &player, &playerRec, &enemyRec, &camera, difficultySelect);
				loadDuration = GetTime() - loadStart;
				SeekMusicStream(instrumental, loadDuration);
				SeekMusicStream(player, loadDuration);
				PlayMusicStream(instrumental);
				PlayMusicStream(player);
				songName = "Worship";
				sceneIndex = songChosen;
				break;
			default:
				break;
			}
		}
		UpdateMusicStream(titleTrack);
		BeginTextureMode(target);
		ClearBackground(BLACK);
		DrawTexture(menuBG, 0, 0, PURPLE);
		songChoices(fnfFont, songListColors);
		DrawRectangle(950, 0, 350, 96, {0,0,0,50});
		if(difficultySelect == 0){
			DrawTextEx(scoreFont, "Difficulty: Easy", {1000, 24}, 24, -2, WHITE);
		}else if(difficultySelect == 1){
			DrawTextEx(scoreFont, "Difficulty: Normal", {1000, 24}, 24, -2, WHITE);
		}else if(difficultySelect == 2){
			DrawTextEx(scoreFont, "Difficulty: Hard", {1000, 24}, 24, -2, WHITE);
		}
		//DrawText(std::to_string(difficultySelect).c_str(), 1280/2, 720/2, 48 , WHITE);
		EndTextureMode();
		BeginDrawing();
		ClearBackground(BLACK);
				DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)1280*scale))*0.5f, (GetScreenHeight() - ((float)720*scale))*0.5f,
                           (float)1280*scale, (float)720*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
		EndDrawing();
		break;
	case introText:
		UpdateMusicStream(titleTrack);
		if(IsKeyPressed(KEY_ENTER) || IsGamepadButtonPressed(0, 15)){
			sceneIndex = promptMenu;
		}
		// title
		BeginTextureMode(target);
		if(GetMusicTimePlayed(titleTrack) >= 1.5 && GetMusicTimePlayed(titleTrack) < 4.5){
			DrawTextEx(fnfFont, "ITS ALL IN", {1280/2 - 100, 720/2 - 30}, 48, 1.0f, WHITE);
		}

		if(GetMusicTimePlayed(titleTrack) >= 2.5 && GetMusicTimePlayed(titleTrack) < 4.5){
			DrawTextEx(fnfFont, "RAYLIB", {1280/2 - 100, 720/2 + 18}, 48, 1.0f, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 4.5 && GetMusicTimePlayed(titleTrack) < 6.5){
			ClearBackground(BLACK);
		}/*
		if(GetMusicTimePlayed(titleTrack) >= 5 && GetMusicTimePlayed(titleTrack) < 6){
			DrawText("HERE", 1280/2 - 100, 720/2 - 30, 48, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 6 && GetMusicTimePlayed(titleTrack) < 7){
			ClearBackground(BLACK);
			DrawText("IT", 1280/2 - 100, 720/2 - 30, 48, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 7 && GetMusicTimePlayed(titleTrack) < 8){
			ClearBackground(BLACK);
			DrawText("COMES", 1280/2 - 100, 720/2 - 30, 48, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 6.5 && GetMusicTimePlayed(titleTrack) < 8.5){
			ClearBackground(BLACK);
		}*/
		if(GetMusicTimePlayed(titleTrack) >= 7){
			DrawTextEx(fnfFont, "FRIDAY", {1280/2 - 100, 720/2 - 30}, 48, 1.0f, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 7.5){
			DrawTextEx(fnfFont, "NIGHT", {1280/2 - 100, 720/2 + 18}, 48, 1.0f, WHITE);
		}
		if(GetMusicTimePlayed(titleTrack) >= 8.5){
			DrawTextEx(fnfFont, "FUNKIN?", {1280/2 - 100, 720/2 + 66}, 48, 1.0f, WHITE);
		}
		/*if(GetMusicTimePlayed(titleTrack) >= 10.6){
			ClearBackground(WHITE);
			DrawTexture(metalPipe, 0, 0, WHITE);
		}*/
		if(GetMusicTimePlayed(titleTrack) >= 9.5){
			sceneIndex = promptMenu;
		}
		EndTextureMode();
		BeginDrawing();
		ClearBackground(BLACK);
		DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)1280*scale))*0.5f, (GetScreenHeight() - ((float)720*scale))*0.5f,
                           (float)1280*scale, (float)720*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
		EndDrawing();
		break;
	case promptMenu:
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
		UpdateMusicStream(titleTrack);
		if(IsKeyPressed(KEY_ENTER) || IsGamepadButtonPressed(0, 15)){
			passedPrompt = true;
			if(!IsSoundPlaying(confirmMenu)){
				PlaySound(confirmMenu);
			}
			//UnloadTexture(gfSpeakerTemp);
		}
		BeginTextureMode(target);
		ClearBackground(BLACK);
		//DrawTexture(gfSpeakerTemp, 550, 50, WHITE);
		DrawTextureRec(gfSpeakerTemp, gfSpeakerRec, {550, 50}, WHITE);
		DrawTextureRec(logoAtlas, logoRec, {-100, -100}, WHITE);
		//DrawText("PRESS ENTER TO PLAY", 48, 720/2 + 232, 96, WHITE);
		DrawTextureRec(titleText, titleTextRec, {128, 720/2 + 232}, WHITE);
		EndTextureMode();
		BeginDrawing();
		ClearBackground(BLACK);
		DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)1280*scale))*0.5f, (GetScreenHeight() - ((float)720*scale))*0.5f,
                           (float)1280*scale, (float)720*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
		EndDrawing();		
	   break;
	case titleScreen:
		
		// freePlay.height = chosen
		// freePlay.height/2 = not selected
		UpdateMusicStream(titleTrack);
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
		if(IsKeyPressed(KEY_BACKSPACE)){
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
		if((IsKeyPressed(KEY_ENTER)|| IsGamepadButtonPressed(0, 15)) && freePlayRec.y == freePlay.height){
			/*StopMusicStream(titleTrack);
			TestSong(&arrows, 1000, &instrumental, &player);
			songName = "TestSong";
			sceneIndex = songChosen;*/
			goToSongList = true;
			if(!IsSoundPlaying(confirmMenu)){
				PlaySound(confirmMenu);
			}
		}else if((IsKeyPressed(KEY_ENTER)|| IsGamepadButtonPressed(0, 15)) && creditsRec.y == credits.height){
			goToCredits = true;
			if(!IsSoundPlaying(confirmMenu)){
				PlaySound(confirmMenu);
			}
		}
		if(!goToCredits && !goToSongList && (IsKeyPressed(KEY_UP) || IsGamepadButtonPressed(0, 1)) && freePlayRec.y == freePlay.height/2){
			creditsRec.y = credits.height/2;
			freePlayRec.y = freePlay.height;
			PlaySound(scrollMenu);
		}else if(!goToCredits && !goToSongList && (IsKeyPressed(KEY_DOWN) || IsGamepadButtonPressed(0, 3))  && freePlayRec.y == freePlay.height){
			freePlayRec.y = freePlay.height/2;
			creditsRec.y = credits.height;
			PlaySound(scrollMenu);
		}
		BeginTextureMode(target);
		ClearBackground({3, 20, 40}); // dark blue #032040
		DrawTexture(menuBG, 0, 0, menuBGTint);
		DrawTextureRec(freePlay, freePlayRec, {1280/2 - 300, 720/2}, {255,255,255,freePlayTrans});
		DrawTextureRec(credits, creditsRec, {1280/2 - 300, 720/2 + 200}, {255,255,255,creditsTrans});
		EndTextureMode();
		BeginDrawing();
		ClearBackground({3, 20, 40}); // dark blue #032040
				DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)1280*scale))*0.5f, (GetScreenHeight() - ((float)720*scale))*0.5f,
                           (float)1280*scale, (float)720*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
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
		if(!playerArrows.empty() && IsKeyPressed(KEY_LEFT) || IsGamepadButtonPressed(0, 4) || IsGamepadButtonPressed(0, 8)){
			CheckCollision(850, leftPlayer, leftPlayerMissed);
		}
		if(!playerArrows.empty() && IsKeyDown(KEY_LEFT) || IsGamepadButtonDown(0, 4) || IsGamepadButtonDown(0, 8)){
			CheckCollisionTrail(850, leftPlayer);
			leftColor = PURPLE;
		}
		if(!playerArrows.empty() && IsKeyPressed(KEY_DOWN) || IsGamepadButtonPressed(0, 3) || IsGamepadButtonPressed(0, 7)){
			CheckCollision(950, downPlayer, downPlayerMissed);
		}
		if(!playerArrows.empty() && IsKeyDown(KEY_DOWN) || IsGamepadButtonDown(0, 3) || IsGamepadButtonDown(0, 7)){
			CheckCollisionTrail(950, downPlayer);
			downColor = BLUE;
		}
		if(!playerArrows.empty() && IsKeyPressed(KEY_UP) || IsGamepadButtonPressed(0, 1) || IsGamepadButtonPressed(0, 5)){
			CheckCollision(1050, upPlayer, upPlayerMissed);
		}
		if(!playerArrows.empty() && IsKeyDown(KEY_UP) || IsGamepadButtonDown(0, 1) || IsGamepadButtonDown(0, 5)){
			CheckCollisionTrail(1050, upPlayer);
			upColor = GREEN;
		}
		if(!playerArrows.empty() && IsKeyPressed(KEY_RIGHT) || IsGamepadButtonPressed(0, 2) || IsGamepadButtonPressed(0, 6)){
			CheckCollision(1150, rightPlayer, rightPlayerMissed);
		}
		if(!playerArrows.empty() && IsKeyDown(KEY_RIGHT) || IsGamepadButtonDown(0, 2) || IsGamepadButtonDown(0, 6)){
			CheckCollisionTrail(1150, rightPlayer);
			rightColor = RED;
		}
		if(!computerArrows.empty() && computerArrows.back().pos.y <= 80 && computerArrows.back().side == computerSide){
			enemyRec.y = 0;
			switch((int)computerArrows.back().pos.x){
				case 800:
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
				case 900:
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
				case 1000:
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
				case 1100:
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
		UpdateMusicStream(instrumental);
		UpdateMusicStream(player);
		// drawing
		BeginTextureMode(target);
		songDraw(songName, &camera, &playerRec, &enemyRec);
		DrawTextureEx(leftArrow, {800, 30}, 0.0f, 0.7f, leftColor);
		DrawTextureEx(downArrow, {900, 30}, 0.0f, 0.7f, downColor);
		DrawTextureEx(upArrow, {1000, 30}, 0.0f, 0.7f, upColor);
		DrawTextureEx(rightArrow, {1100, 30}, 0.0f, 0.7f, rightColor);
		DrawTextureEx(leftArrow, {70, 30}, 0.0f, 0.7f, leftColorCPU);
		DrawTextureEx(downArrow, {170, 30}, 0.0f, 0.7f, downColorCPU);
		DrawTextureEx(upArrow, {270, 30}, 0.0f, 0.7f, upColorCPU);
		DrawTextureEx(rightArrow, {370, 30}, 0.0f, 0.7f, rightColorCPU);
		DrawRectangle(150, 680, 960, 12, GREEN);
		DrawRectangle(150, 680, 38*misses, 12, RED);
		DrawRectangleLinesEx({150, 680, 964, 16}, 4, BLACK);	
		DrawTextEx(scoreFont, (std::string("Score: ") + std::to_string(score)).c_str(), {900, 700}, 18, 0, WHITE); // score	
		for (int i = playerArrows.size() - 1; i >= 0; i--)
		{
			// if an arrow is off screen, consider not drawing it for performance (done)
			if(playerArrows.at(i).pos.y < 760){
				playerArrows.at(i).Draw();
			}
			playerArrows.at(i).Update();
		}
		for (int i = computerArrows.size() - 1; i >= 0; i--)
		{
			// if an arrow is off screen, consider not drawing it for performance (done)
			if(computerArrows.at(i).pos.y < 760){
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
		EndTextureMode();
		BeginDrawing();
				DrawTexturePro(target.texture, (Rectangle){ 0.0f, 0.0f, (float)target.texture.width, (float)-target.texture.height },
                           (Rectangle){ (GetScreenWidth() - ((float)1280*scale))*0.5f, (GetScreenHeight() - ((float)720*scale))*0.5f,
                           (float)1280*scale, (float)720*scale }, (Vector2){ 0, 0 }, 0.0f, WHITE);
		EndDrawing();
		if(!playerArrows.empty() && playerArrows.back().pos.y < -32){
			if(playerArrows.back().side == playerSide){
				score -= 10;
				SetMusicVolume(player, 0.0);
				isPaused = true;
				misses++;
				PlaySound(wrong);
				playerRec.y = 450*2;
				switch((int)playerArrows.back().pos.x){
					case 800:
						playerRec.x = leftPlayerMissed;
						break;
					case 900:
						playerRec.x = downPlayerMissed;
						break;
					case 1000:
						playerRec.x = upPlayerMissed;
						break;
					case 1100:
						playerRec.x = rightPlayerMissed;
						break;
				}
			}
			playerArrows.pop_back();
		}
		// stops one second early
		// TODO: unload instrumental & player
		if(GetMusicTimePlayed(instrumental) + 1.0f > GetMusicTimeLength(instrumental)){
			misses = 13;
			playerArrows.clear();
			computerArrows.clear();
			songCleanup(songName);
			// MAKE SURE TO STORE THIS IN VMU ON DC
			songSave(songName, score);
			score = 0;
			PlayMusicStream(titleTrack);
			sceneIndex = songList;
		}
		if(IsKeyPressed(KEY_BACKSPACE)){
			score = 0;
			misses = 13;
			playerArrows.clear();
			computerArrows.clear();
			songCleanup(songName);
			PlayMusicStream(titleTrack);
			sceneIndex = songList;
		}
		if(misses <= -1){
			misses = 0;
		}
		if(misses >= 26){
			StopSound(wrong);
			PlayMusicStream(gameOverBGM);
			currentFrame = 5;
			currentFrame2 = 0;
			sceneIndex = gameOver;
		}
		if(framesCounter >= 60 / framesSpeed){
			framesCounter = 0;
			currentFrame++;
			if(currentFrame < 4){
				enemyRec.y = (float)513;
				enemyRec.x = (float)currentFrame*513;
			}
			if(currentFrame > 20){
				currentFrame = 0;
			}
		}
		if(playerFramesCounter >= 60 / framesSpeed){
			playerFramesCounter = 0;
			if(currentFrame < 4){
				playerRec.x = (float)currentFrame*450;
				playerRec.y = (float)450;
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
