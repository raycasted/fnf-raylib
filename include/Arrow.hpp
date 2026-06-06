#pragma once
#include "raylib.h"
enum ArrowType{
    left = 0,
    down = 1,
    up = 2,
    right = 3
};
enum ArrowSide{
    playerSide = 0,
    computerSide = 1
};
Texture2D notes;
Texture2D leftArrow;
Texture2D upArrow;
Texture2D rightArrow;
Texture2D downArrow;
Texture2D holdAssets;
class Arrow
	{
        private:
            Color color = PURPLE; // purple, blue, green, red
            
        public:
            Vector2 pos = {800, 800}; // 800, 900, 1000, 1100
            float speed;
            Rectangle arrowRec;
            Rectangle trailRec;
            int radius = 64/2;
            int trailSize = 0;
            ArrowSide side = playerSide;
            void Update(){
                pos.y -= (speed * GetFrameTime())/1.7;
            }
            void Draw(){
                if(trailSize != 0){
                    if(side == playerSide){
                        //DrawRectangle(pos.x + 24, pos.y + 24, 64, trailSize, {color.r, color.g, color.b, 200});
                        DrawTextureRec(holdAssets, {trailRec.x, trailRec.y, trailRec.width, (float)trailSize}, {pos.x + 12, pos.y + 12}, WHITE);
                        // DISGUSTING hack so the game doesn't shit on the dreamcast's RAM limits
                        // using trailEnd is apparently too heavy for the dreamcast?
                        switch((int)pos.x){
                            case 800/2:
                                DrawTextureRec(holdAssets, {32, 0, 32, 24}, {pos.x + 12, pos.y + trailSize}, WHITE);
                                break;
                            case 900/2:
                                DrawTextureRec(holdAssets, {64+32, 0, 32, 24}, {pos.x + 12, pos.y + trailSize}, WHITE);
                                break;
                            case 1000/2:
                                DrawTextureRec(holdAssets, {128+32, 0, 32, 24}, {pos.x + 12, pos.y + trailSize}, WHITE);
                                break;
                            case 1100/2:
                                DrawTextureRec(holdAssets, {192+32, 0, 32, 24}, {pos.x + 12, pos.y + trailSize}, WHITE);
                                break;
                        }
                    }else{
                        DrawTextureRec(holdAssets, {trailRec.x, trailRec.y, trailRec.width, (float)trailSize}, {pos.x - 730/2 + 12, pos.y + 12}, WHITE);
                        switch((int)pos.x){
                            case 800/2:
                                DrawTextureRec(holdAssets, {32, 0, 32, 24}, {pos.x - 730/2 + 12, pos.y + trailSize}, WHITE);
                                break;
                            case 900/2:
                                DrawTextureRec(holdAssets, {64+32, 0, 32, 24}, {pos.x - 730/2 + 12, pos.y + trailSize}, WHITE);
                                break;
                            case 1000/2:
                                DrawTextureRec(holdAssets, {128+32, 0, 32, 24}, {pos.x - 730/2 + 12, pos.y + trailSize}, WHITE);
                                break;
                            case 1100/2:
                                DrawTextureRec(holdAssets, {192+32, 0, 32, 24}, {pos.x - 730/2 + 12, pos.y + trailSize}, WHITE);
                                break;
                        }
                       
                    }
                }
                if(side == playerSide){
                    DrawTextureRec(notes, arrowRec, pos, WHITE);
                    // +50, +48 is where the colliders are
                    //DrawCircleLines(pos.x+50, pos.y+48, radius, color);
                }else{
                    DrawTextureRec(notes, arrowRec, {pos.x - 730/2, pos.y}, WHITE);
                }
            }
            Arrow(ArrowType arrowType){
                switch (arrowType){
                    case left:
                        // left
                        pos.x = 800/2;
                        arrowRec = {(155*0.7)/2,0,77*0.7, 77*0.7};
                        trailRec = {0, 0, 32, 32};
                        color = PURPLE;
                        break;
                    case down:
                        // down
                        pos.x = 900/2;
                        arrowRec = {0,0,77*0.7, 77*0.7};
                        trailRec = {64, 0, 32, 32};
                        color = BLUE;
                        break;
                    case up:
                        // up
                        pos.x = 1000/2;
                        arrowRec = {(155*0.7)/2,(155*0.7)/2,77*0.7, 77*0.7};
                        trailRec = {128, 0, 32, 32};
                        color = GREEN;
                        break;
                    case right:
                        // right
                        pos.x = 1100/2;
                        arrowRec = {0,(155*0.7)/2,77*0.7, 77*0.7};
                        trailRec = {192, 0, 32, 32};
                        color = RED;
                        break;
                };
            }
	};