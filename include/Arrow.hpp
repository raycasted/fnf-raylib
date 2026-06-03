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
            int radius = 64;
            int trailSize = 0;
            ArrowSide side = playerSide;
            void Update(){
                pos.y -= speed * GetFrameTime();
            }
            void Draw(){
                if(trailSize != 0){
                    if(side == playerSide){
                        //DrawRectangle(pos.x + 24, pos.y + 24, 64, trailSize, {color.r, color.g, color.b, 200});
                        DrawTextureRec(holdAssets, {trailRec.x, trailRec.y, trailRec.width, (float)trailSize}, {pos.x + 28, pos.y + 24}, WHITE);
                    }else{
                        DrawTextureRec(holdAssets, {trailRec.x, trailRec.y, trailRec.width, (float)trailSize}, {pos.x - 730 + 28, pos.y + 24}, WHITE);
                    }
                }
                if(side == playerSide){
                    DrawTextureRec(notes, arrowRec, pos, WHITE);
                    // +50, +48 is where the colliders are
                    //DrawCircleLines(pos.x+50, pos.y+48, radius, color);
                }else{
                    DrawTextureRec(notes, arrowRec, {pos.x - 730, pos.y}, WHITE);
                }
            }
            Arrow(ArrowType arrowType){
                switch (arrowType){
                    case left:
                        // left
                        pos.x = 800;
                        arrowRec = {155*0.7,0,(float)notes.width/2, (float)notes.height/2};
                        trailRec = {0, 0, 51, 87};
                        color = PURPLE;
                        break;
                    case down:
                        // down
                        pos.x = 900;
                        arrowRec = {0,0,(float)notes.width/2, (float)notes.height/2};
                        trailRec = {104, 0, 51, 87};
                        color = BLUE;
                        break;
                    case up:
                        // up
                        pos.x = 1000;
                        arrowRec = {155*0.7,155*0.7,(float)notes.width/2, (float)notes.height/2};
                        trailRec = {208, 0, 51, 87};
                        color = GREEN;
                        break;
                    case right:
                        // right
                        pos.x = 1100;
                        arrowRec = {0,155*0.7,(float)notes.width/2, (float)notes.height/2};
                        trailRec = {312, 0, 51, 87};
                        color = RED;
                        break;
                };
            }
	};