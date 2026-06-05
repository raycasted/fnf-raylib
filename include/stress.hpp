#pragma once
#include "Arrow.hpp"
#include "CameraEase.hpp"
#include "raylib.h"
#include <vector>

// note: maybe move implementations into a cpp file?
Texture2D behindTrain_stress;
Texture2D city_stress;
Texture2D sky_stress;
Texture2D street_stress;
Texture2D train_stress;
Texture2D win_stress;
Texture2D gfSpeaker_stress;
Texture2D pico_stress;
Texture2D boyfriend_stress;
Rectangle gfSpeakerRec_stress;

// make sure main.cpp isnt dependant on song.hpp
int frameCounter_stress = 0;
int currentFrame_stress = 0;
int currentFrame2_stress = 0;
int trainSpeed_stress = -1280;
// framerate of all animations
int framesSpeed_stress = 15;
int Stress_tempo = 1000; // pretty sure this is 1 second per 1 second of song?
// if this is release, change it to 410
int Stress_offset = 240; // offset for when the notes spawn
// NOTE: if there is no chart provided, game will immediately segfault
// NOTE: instrumental and player voices have to be EXACT same length, otherwise desync will occur
// TODO: chart editor PLEASE MAKE IT
// this is the actual chart, this is called during song selection
void Stress_Hard(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList){
    // AUTO-GENERATED CHART

Arrow arrow0(down);
arrow0.speed = Stress_tempo;
arrow0.pos.y = 0.0 + Stress_offset;
arrow0.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow0);

Arrow arrow1(right);
arrow1.speed = Stress_tempo;
arrow1.pos.y = 99.0 + Stress_offset;
arrow1.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow1);

Arrow arrow2(left);
arrow2.speed = Stress_tempo;
arrow2.pos.y = 198.0 + Stress_offset;
arrow2.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow2);

Arrow arrow3(left);
arrow3.speed = Stress_tempo;
arrow3.pos.y = 297.0 + Stress_offset;
arrow3.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow3);

Arrow arrow4(up);
arrow4.speed = Stress_tempo;
arrow4.pos.y = 396.0 + Stress_offset;
arrow4.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow4);

Arrow arrow5(right);
arrow5.speed = Stress_tempo;
arrow5.pos.y = 495.0 + Stress_offset;
arrow5.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow5);

Arrow arrow6(down);
arrow6.speed = Stress_tempo;
arrow6.pos.y = 594.0 + Stress_offset;
arrow6.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow6);

Arrow arrow7(right);
arrow7.speed = Stress_tempo;
arrow7.pos.y = 693.0 + Stress_offset;
arrow7.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow7);

Arrow arrow8(left);
arrow8.speed = Stress_tempo;
arrow8.pos.y = 792.0 + Stress_offset;
arrow8.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow8);

Arrow arrow9(right);
arrow9.speed = Stress_tempo;
arrow9.pos.y = 891.0 + Stress_offset;
arrow9.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow9);

Arrow arrow10(up);
arrow10.speed = Stress_tempo;
arrow10.pos.y = 991.0 + Stress_offset;
arrow10.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow10);

Arrow arrow11(right);
arrow11.speed = Stress_tempo;
arrow11.pos.y = 1090.0 + Stress_offset;
arrow11.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow11);

Arrow arrow12(down);
arrow12.speed = Stress_tempo;
arrow12.pos.y = 1189.0 + Stress_offset;
arrow12.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow12);

Arrow arrow13(right);
arrow13.speed = Stress_tempo;
arrow13.pos.y = 1288.0 + Stress_offset;
arrow13.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow13);

Arrow arrow14(left);
arrow14.speed = Stress_tempo;
arrow14.pos.y = 1387.0 + Stress_offset;
arrow14.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow14);

Arrow arrow15(right);
arrow15.speed = Stress_tempo;
arrow15.pos.y = 1487.0 + Stress_offset;
arrow15.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow15);

Arrow arrow16(down);
arrow16.speed = Stress_tempo;
arrow16.pos.y = 1585.0 + Stress_offset;
arrow16.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow16);

Arrow arrow17(up);
arrow17.speed = Stress_tempo;
arrow17.pos.y = 1685.0 + Stress_offset;
arrow17.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow17);

Arrow arrow18(left);
arrow18.speed = Stress_tempo;
arrow18.pos.y = 1784.0 + Stress_offset;
arrow18.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow18);

Arrow arrow19(left);
arrow19.speed = Stress_tempo;
arrow19.pos.y = 1883.0 + Stress_offset;
arrow19.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow19);

Arrow arrow20(up);
arrow20.speed = Stress_tempo;
arrow20.pos.y = 1982.0 + Stress_offset;
arrow20.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow20);

Arrow arrow21(right);
arrow21.speed = Stress_tempo;
arrow21.pos.y = 2081.0 + Stress_offset;
arrow21.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow21);

Arrow arrow22(down);
arrow22.speed = Stress_tempo;
arrow22.pos.y = 2180.0 + Stress_offset;
arrow22.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow22);

Arrow arrow23(right);
arrow23.speed = Stress_tempo;
arrow23.pos.y = 2280.0 + Stress_offset;
arrow23.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow23);

Arrow arrow24(left);
arrow24.speed = Stress_tempo;
arrow24.pos.y = 2378.0 + Stress_offset;
arrow24.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow24);

Arrow arrow25(right);
arrow25.speed = Stress_tempo;
arrow25.pos.y = 2478.0 + Stress_offset;
arrow25.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow25);

Arrow arrow26(up);
arrow26.speed = Stress_tempo;
arrow26.pos.y = 2577.0 + Stress_offset;
arrow26.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow26);

Arrow arrow27(right);
arrow27.speed = Stress_tempo;
arrow27.pos.y = 2676.0 + Stress_offset;
arrow27.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow27);

Arrow arrow28(down);
arrow28.speed = Stress_tempo;
arrow28.pos.y = 2775.0 + Stress_offset;
arrow28.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow28);

Arrow arrow29(right);
arrow29.speed = Stress_tempo;
arrow29.pos.y = 2874.0 + Stress_offset;
arrow29.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow29);

Arrow arrow30(left);
arrow30.speed = Stress_tempo;
arrow30.pos.y = 2974.0 + Stress_offset;
arrow30.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow30);

Arrow arrow31(right);
arrow31.speed = Stress_tempo;
arrow31.pos.y = 3072.0 + Stress_offset;
arrow31.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow31);

Arrow arrow32(down);
arrow32.speed = Stress_tempo;
arrow32.pos.y = 3172.0 + Stress_offset;
arrow32.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow32);

Arrow arrow33(right);
arrow33.speed = Stress_tempo;
arrow33.pos.y = 3271.0 + Stress_offset;
arrow33.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow33);

Arrow arrow34(left);
arrow34.speed = Stress_tempo;
arrow34.pos.y = 3370.0 + Stress_offset;
arrow34.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow34);

Arrow arrow35(left);
arrow35.speed = Stress_tempo;
arrow35.pos.y = 3469.0 + Stress_offset;
arrow35.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow35);

Arrow arrow36(up);
arrow36.speed = Stress_tempo;
arrow36.pos.y = 3568.0 + Stress_offset;
arrow36.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow36);

Arrow arrow37(right);
arrow37.speed = Stress_tempo;
arrow37.pos.y = 3667.0 + Stress_offset;
arrow37.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow37);

Arrow arrow38(down);
arrow38.speed = Stress_tempo;
arrow38.pos.y = 3767.0 + Stress_offset;
arrow38.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow38);

Arrow arrow39(right);
arrow39.speed = Stress_tempo;
arrow39.pos.y = 3866.0 + Stress_offset;
arrow39.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow39);

Arrow arrow40(left);
arrow40.speed = Stress_tempo;
arrow40.pos.y = 3965.0 + Stress_offset;
arrow40.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow40);

Arrow arrow41(right);
arrow41.speed = Stress_tempo;
arrow41.pos.y = 4064.0 + Stress_offset;
arrow41.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow41);

Arrow arrow42(up);
arrow42.speed = Stress_tempo;
arrow42.pos.y = 4163.0 + Stress_offset;
arrow42.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow42);

Arrow arrow43(right);
arrow43.speed = Stress_tempo;
arrow43.pos.y = 4262.0 + Stress_offset;
arrow43.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow43);

Arrow arrow44(down);
arrow44.speed = Stress_tempo;
arrow44.pos.y = 4361.0 + Stress_offset;
arrow44.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow44);

Arrow arrow45(right);
arrow45.speed = Stress_tempo;
arrow45.pos.y = 4461.0 + Stress_offset;
arrow45.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow45);

Arrow arrow46(left);
arrow46.speed = Stress_tempo;
arrow46.pos.y = 4560.0 + Stress_offset;
arrow46.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow46);

Arrow arrow47(right);
arrow47.speed = Stress_tempo;
arrow47.pos.y = 4659.0 + Stress_offset;
arrow47.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow47);

Arrow arrow48(down);
arrow48.speed = Stress_tempo;
arrow48.pos.y = 4758.0 + Stress_offset;
arrow48.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow48);

Arrow arrow49(up);
arrow49.speed = Stress_tempo;
arrow49.pos.y = 4857.0 + Stress_offset;
arrow49.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow49);

Arrow arrow50(left);
arrow50.speed = Stress_tempo;
arrow50.pos.y = 4956.0 + Stress_offset;
arrow50.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow50);

Arrow arrow51(left);
arrow51.speed = Stress_tempo;
arrow51.pos.y = 5055.0 + Stress_offset;
arrow51.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow51);

Arrow arrow52(up);
arrow52.speed = Stress_tempo;
arrow52.pos.y = 5155.0 + Stress_offset;
arrow52.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow52);

Arrow arrow53(right);
arrow53.speed = Stress_tempo;
arrow53.pos.y = 5254.0 + Stress_offset;
arrow53.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow53);

Arrow arrow54(down);
arrow54.speed = Stress_tempo;
arrow54.pos.y = 5353.0 + Stress_offset;
arrow54.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow54);

Arrow arrow55(right);
arrow55.speed = Stress_tempo;
arrow55.pos.y = 5452.0 + Stress_offset;
arrow55.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow55);

Arrow arrow56(left);
arrow56.speed = Stress_tempo;
arrow56.pos.y = 5551.0 + Stress_offset;
arrow56.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow56);

Arrow arrow57(right);
arrow57.speed = Stress_tempo;
arrow57.pos.y = 5650.0 + Stress_offset;
arrow57.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow57);

Arrow arrow58(up);
arrow58.speed = Stress_tempo;
arrow58.pos.y = 5750.0 + Stress_offset;
arrow58.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow58);

Arrow arrow59(right);
arrow59.speed = Stress_tempo;
arrow59.pos.y = 5848.0 + Stress_offset;
arrow59.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow59);

Arrow arrow60(down);
arrow60.speed = Stress_tempo;
arrow60.pos.y = 5948.0 + Stress_offset;
arrow60.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow60);

Arrow arrow61(right);
arrow61.speed = Stress_tempo;
arrow61.pos.y = 6047.0 + Stress_offset;
arrow61.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow61);

Arrow arrow62(left);
arrow62.speed = Stress_tempo;
arrow62.pos.y = 6146.0 + Stress_offset;
arrow62.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow62);

Arrow arrow63(right);
arrow63.speed = Stress_tempo;
arrow63.pos.y = 6245.0 + Stress_offset;
arrow63.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow63);

Arrow arrow64(left);
arrow64.speed = Stress_tempo;
arrow64.pos.y = 6542.0 + Stress_offset;
arrow64.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow64);

Arrow arrow65(down);
arrow65.speed = Stress_tempo;
arrow65.pos.y = 6642.0 + Stress_offset;
arrow65.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow65);

Arrow arrow66(right);
arrow66.speed = Stress_tempo;
arrow66.pos.y = 6741.0 + Stress_offset;
arrow66.side = computerSide;
arrow66.trailSize = 296;
computerArrowList->insert(computerArrowList->begin(), arrow66);

Arrow arrow67(down);
arrow67.speed = Stress_tempo;
arrow67.pos.y = 6939.0 + Stress_offset;
arrow67.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow67);

Arrow arrow68(left);
arrow68.speed = Stress_tempo;
arrow68.pos.y = 7137.0 + Stress_offset;
arrow68.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow68);

Arrow arrow69(left);
arrow69.speed = Stress_tempo;
arrow69.pos.y = 7335.0 + Stress_offset;
arrow69.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow69);

Arrow arrow70(left);
arrow70.speed = Stress_tempo;
arrow70.pos.y = 7534.0 + Stress_offset;
arrow70.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow70);

Arrow arrow71(left);
arrow71.speed = Stress_tempo;
arrow71.pos.y = 7633.0 + Stress_offset;
arrow71.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow71);

Arrow arrow72(up);
arrow72.speed = Stress_tempo;
arrow72.pos.y = 7732.0 + Stress_offset;
arrow72.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow72);

Arrow arrow73(right);
arrow73.speed = Stress_tempo;
arrow73.pos.y = 7782.0 + Stress_offset;
arrow73.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow73);

Arrow arrow74(up);
arrow74.speed = Stress_tempo;
arrow74.pos.y = 7831.0 + Stress_offset;
arrow74.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow74);

Arrow arrow75(down);
arrow75.speed = Stress_tempo;
arrow75.pos.y = 7931.0 + Stress_offset;
arrow75.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow75);

Arrow arrow76(right);
arrow76.speed = Stress_tempo;
arrow76.pos.y = 8030.0 + Stress_offset;
arrow76.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow76);

Arrow arrow77(up);
arrow77.speed = Stress_tempo;
arrow77.pos.y = 8129.0 + Stress_offset;
arrow77.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow77);

Arrow arrow78(down);
arrow78.speed = Stress_tempo;
arrow78.pos.y = 8228.0 + Stress_offset;
arrow78.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow78);

Arrow arrow79(right);
arrow79.speed = Stress_tempo;
arrow79.pos.y = 8327.0 + Stress_offset;
arrow79.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow79);

Arrow arrow80(up);
arrow80.speed = Stress_tempo;
arrow80.pos.y = 8426.0 + Stress_offset;
arrow80.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow80);

Arrow arrow81(down);
arrow81.speed = Stress_tempo;
arrow81.pos.y = 8525.0 + Stress_offset;
arrow81.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow81);

Arrow arrow82(right);
arrow82.speed = Stress_tempo;
arrow82.pos.y = 8575.0 + Stress_offset;
arrow82.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow82);

Arrow arrow83(up);
arrow83.speed = Stress_tempo;
arrow83.pos.y = 8624.0 + Stress_offset;
arrow83.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow83);

Arrow arrow84(down);
arrow84.speed = Stress_tempo;
arrow84.pos.y = 8724.0 + Stress_offset;
arrow84.side = playerSide;
arrow84.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow84);

Arrow arrow85(left);
arrow85.speed = Stress_tempo;
arrow85.pos.y = 8724.0 + Stress_offset;
arrow85.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow85);

Arrow arrow86(right);
arrow86.speed = Stress_tempo;
arrow86.pos.y = 8823.0 + Stress_offset;
arrow86.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow86);

Arrow arrow87(up);
arrow87.speed = Stress_tempo;
arrow87.pos.y = 8922.0 + Stress_offset;
arrow87.side = playerSide;
arrow87.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow87);

Arrow arrow88(up);
arrow88.speed = Stress_tempo;
arrow88.pos.y = 8922.0 + Stress_offset;
arrow88.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow88);

Arrow arrow89(right);
arrow89.speed = Stress_tempo;
arrow89.pos.y = 9021.0 + Stress_offset;
arrow89.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow89);

Arrow arrow90(right);
arrow90.speed = Stress_tempo;
arrow90.pos.y = 9120.0 + Stress_offset;
arrow90.side = playerSide;
arrow90.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow90);

Arrow arrow91(down);
arrow91.speed = Stress_tempo;
arrow91.pos.y = 9120.0 + Stress_offset;
arrow91.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow91);

Arrow arrow92(right);
arrow92.speed = Stress_tempo;
arrow92.pos.y = 9220.0 + Stress_offset;
arrow92.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow92);

Arrow arrow93(left);
arrow93.speed = Stress_tempo;
arrow93.pos.y = 9318.0 + Stress_offset;
arrow93.side = playerSide;
arrow93.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow93);

Arrow arrow94(left);
arrow94.speed = Stress_tempo;
arrow94.pos.y = 9318.0 + Stress_offset;
arrow94.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow94);

Arrow arrow95(right);
arrow95.speed = Stress_tempo;
arrow95.pos.y = 9418.0 + Stress_offset;
arrow95.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow95);

Arrow arrow96(down);
arrow96.speed = Stress_tempo;
arrow96.pos.y = 9517.0 + Stress_offset;
arrow96.side = playerSide;
arrow96.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow96);

Arrow arrow97(left);
arrow97.speed = Stress_tempo;
arrow97.pos.y = 9715.0 + Stress_offset;
arrow97.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow97);

Arrow arrow98(down);
arrow98.speed = Stress_tempo;
arrow98.pos.y = 9814.0 + Stress_offset;
arrow98.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow98);

Arrow arrow99(right);
arrow99.speed = Stress_tempo;
arrow99.pos.y = 9914.0 + Stress_offset;
arrow99.side = playerSide;
arrow99.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow99);

Arrow arrow100(down);
arrow100.speed = Stress_tempo;
arrow100.pos.y = 10112.0 + Stress_offset;
arrow100.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow100);

Arrow arrow101(left);
arrow101.speed = Stress_tempo;
arrow101.pos.y = 10310.0 + Stress_offset;
arrow101.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow101);

Arrow arrow102(left);
arrow102.speed = Stress_tempo;
arrow102.pos.y = 10508.0 + Stress_offset;
arrow102.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow102);

Arrow arrow103(left);
arrow103.speed = Stress_tempo;
arrow103.pos.y = 10707.0 + Stress_offset;
arrow103.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow103);

Arrow arrow104(left);
arrow104.speed = Stress_tempo;
arrow104.pos.y = 10805.0 + Stress_offset;
arrow104.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow104);

Arrow arrow105(up);
arrow105.speed = Stress_tempo;
arrow105.pos.y = 10905.0 + Stress_offset;
arrow105.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow105);

Arrow arrow106(right);
arrow106.speed = Stress_tempo;
arrow106.pos.y = 10954.0 + Stress_offset;
arrow106.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow106);

Arrow arrow107(up);
arrow107.speed = Stress_tempo;
arrow107.pos.y = 11004.0 + Stress_offset;
arrow107.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow107);

Arrow arrow108(down);
arrow108.speed = Stress_tempo;
arrow108.pos.y = 11103.0 + Stress_offset;
arrow108.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow108);

Arrow arrow109(right);
arrow109.speed = Stress_tempo;
arrow109.pos.y = 11202.0 + Stress_offset;
arrow109.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow109);

Arrow arrow110(up);
arrow110.speed = Stress_tempo;
arrow110.pos.y = 11301.0 + Stress_offset;
arrow110.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow110);

Arrow arrow111(down);
arrow111.speed = Stress_tempo;
arrow111.pos.y = 11401.0 + Stress_offset;
arrow111.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow111);

Arrow arrow112(right);
arrow112.speed = Stress_tempo;
arrow112.pos.y = 11500.0 + Stress_offset;
arrow112.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow112);

Arrow arrow113(up);
arrow113.speed = Stress_tempo;
arrow113.pos.y = 11599.0 + Stress_offset;
arrow113.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow113);

Arrow arrow114(down);
arrow114.speed = Stress_tempo;
arrow114.pos.y = 11698.0 + Stress_offset;
arrow114.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow114);

Arrow arrow115(right);
arrow115.speed = Stress_tempo;
arrow115.pos.y = 11747.0 + Stress_offset;
arrow115.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow115);

Arrow arrow116(up);
arrow116.speed = Stress_tempo;
arrow116.pos.y = 11797.0 + Stress_offset;
arrow116.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow116);

Arrow arrow117(left);
arrow117.speed = Stress_tempo;
arrow117.pos.y = 11896.0 + Stress_offset;
arrow117.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow117);

Arrow arrow118(right);
arrow118.speed = Stress_tempo;
arrow118.pos.y = 11995.0 + Stress_offset;
arrow118.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow118);

Arrow arrow119(up);
arrow119.speed = Stress_tempo;
arrow119.pos.y = 12094.0 + Stress_offset;
arrow119.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow119);

Arrow arrow120(right);
arrow120.speed = Stress_tempo;
arrow120.pos.y = 12194.0 + Stress_offset;
arrow120.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow120);

Arrow arrow121(down);
arrow121.speed = Stress_tempo;
arrow121.pos.y = 12292.0 + Stress_offset;
arrow121.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow121);

Arrow arrow122(right);
arrow122.speed = Stress_tempo;
arrow122.pos.y = 12392.0 + Stress_offset;
arrow122.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow122);

Arrow arrow123(left);
arrow123.speed = Stress_tempo;
arrow123.pos.y = 12491.0 + Stress_offset;
arrow123.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow123);

Arrow arrow124(right);
arrow124.speed = Stress_tempo;
arrow124.pos.y = 12590.0 + Stress_offset;
arrow124.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow124);

Arrow arrow125(down);
arrow125.speed = Stress_tempo;
arrow125.pos.y = 12690.0 + Stress_offset;
arrow125.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow125);

Arrow arrow126(right);
arrow126.speed = Stress_tempo;
arrow126.pos.y = 12690.0 + Stress_offset;
arrow126.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow126);

Arrow arrow127(up);
arrow127.speed = Stress_tempo;
arrow127.pos.y = 12788.0 + Stress_offset;
arrow127.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow127);

Arrow arrow128(left);
arrow128.speed = Stress_tempo;
arrow128.pos.y = 12888.0 + Stress_offset;
arrow128.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow128);

Arrow arrow129(down);
arrow129.speed = Stress_tempo;
arrow129.pos.y = 12888.0 + Stress_offset;
arrow129.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow129);

Arrow arrow130(up);
arrow130.speed = Stress_tempo;
arrow130.pos.y = 12987.0 + Stress_offset;
arrow130.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow130);

Arrow arrow131(down);
arrow131.speed = Stress_tempo;
arrow131.pos.y = 13086.0 + Stress_offset;
arrow131.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow131);

Arrow arrow132(right);
arrow132.speed = Stress_tempo;
arrow132.pos.y = 13086.0 + Stress_offset;
arrow132.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow132);

Arrow arrow133(up);
arrow133.speed = Stress_tempo;
arrow133.pos.y = 13185.0 + Stress_offset;
arrow133.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow133);

Arrow arrow134(left);
arrow134.speed = Stress_tempo;
arrow134.pos.y = 13284.0 + Stress_offset;
arrow134.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow134);

Arrow arrow135(down);
arrow135.speed = Stress_tempo;
arrow135.pos.y = 13284.0 + Stress_offset;
arrow135.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow135);

Arrow arrow136(up);
arrow136.speed = Stress_tempo;
arrow136.pos.y = 13383.0 + Stress_offset;
arrow136.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow136);

Arrow arrow137(right);
arrow137.speed = Stress_tempo;
arrow137.pos.y = 13482.0 + Stress_offset;
arrow137.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow137);

Arrow arrow138(up);
arrow138.speed = Stress_tempo;
arrow138.pos.y = 13482.0 + Stress_offset;
arrow138.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow138);

Arrow arrow139(up);
arrow139.speed = Stress_tempo;
arrow139.pos.y = 13532.0 + Stress_offset;
arrow139.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow139);

Arrow arrow140(right);
arrow140.speed = Stress_tempo;
arrow140.pos.y = 13581.0 + Stress_offset;
arrow140.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow140);

Arrow arrow141(up);
arrow141.speed = Stress_tempo;
arrow141.pos.y = 13681.0 + Stress_offset;
arrow141.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow141);

Arrow arrow142(right);
arrow142.speed = Stress_tempo;
arrow142.pos.y = 13681.0 + Stress_offset;
arrow142.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow142);

Arrow arrow143(up);
arrow143.speed = Stress_tempo;
arrow143.pos.y = 13780.0 + Stress_offset;
arrow143.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow143);

Arrow arrow144(right);
arrow144.speed = Stress_tempo;
arrow144.pos.y = 13879.0 + Stress_offset;
arrow144.side = playerSide;
arrow144.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow144);

Arrow arrow145(right);
arrow145.speed = Stress_tempo;
arrow145.pos.y = 13879.0 + Stress_offset;
arrow145.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow145);

Arrow arrow146(left);
arrow146.speed = Stress_tempo;
arrow146.pos.y = 13978.0 + Stress_offset;
arrow146.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow146);

Arrow arrow147(left);
arrow147.speed = Stress_tempo;
arrow147.pos.y = 14077.0 + Stress_offset;
arrow147.side = playerSide;
arrow147.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow147);

Arrow arrow148(down);
arrow148.speed = Stress_tempo;
arrow148.pos.y = 14077.0 + Stress_offset;
arrow148.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow148);

Arrow arrow149(left);
arrow149.speed = Stress_tempo;
arrow149.pos.y = 14177.0 + Stress_offset;
arrow149.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow149);

Arrow arrow150(right);
arrow150.speed = Stress_tempo;
arrow150.pos.y = 14275.0 + Stress_offset;
arrow150.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow150);

Arrow arrow151(up);
arrow151.speed = Stress_tempo;
arrow151.pos.y = 14275.0 + Stress_offset;
arrow151.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow151);

Arrow arrow152(up);
arrow152.speed = Stress_tempo;
arrow152.pos.y = 14375.0 + Stress_offset;
arrow152.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow152);

Arrow arrow153(left);
arrow153.speed = Stress_tempo;
arrow153.pos.y = 14474.0 + Stress_offset;
arrow153.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow153);

Arrow arrow154(up);
arrow154.speed = Stress_tempo;
arrow154.pos.y = 14573.0 + Stress_offset;
arrow154.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow154);

Arrow arrow155(right);
arrow155.speed = Stress_tempo;
arrow155.pos.y = 14672.0 + Stress_offset;
arrow155.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow155);

Arrow arrow156(up);
arrow156.speed = Stress_tempo;
arrow156.pos.y = 14771.0 + Stress_offset;
arrow156.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow156);

Arrow arrow157(left);
arrow157.speed = Stress_tempo;
arrow157.pos.y = 14870.0 + Stress_offset;
arrow157.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow157);

Arrow arrow158(up);
arrow158.speed = Stress_tempo;
arrow158.pos.y = 14970.0 + Stress_offset;
arrow158.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow158);

Arrow arrow159(right);
arrow159.speed = Stress_tempo;
arrow159.pos.y = 15068.0 + Stress_offset;
arrow159.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow159);

Arrow arrow160(up);
arrow160.speed = Stress_tempo;
arrow160.pos.y = 15118.0 + Stress_offset;
arrow160.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow160);

Arrow arrow161(right);
arrow161.speed = Stress_tempo;
arrow161.pos.y = 15168.0 + Stress_offset;
arrow161.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow161);

Arrow arrow162(left);
arrow162.speed = Stress_tempo;
arrow162.pos.y = 15267.0 + Stress_offset;
arrow162.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow162);

Arrow arrow163(up);
arrow163.speed = Stress_tempo;
arrow163.pos.y = 15366.0 + Stress_offset;
arrow163.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow163);

Arrow arrow164(right);
arrow164.speed = Stress_tempo;
arrow164.pos.y = 15465.0 + Stress_offset;
arrow164.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow164);

Arrow arrow165(left);
arrow165.speed = Stress_tempo;
arrow165.pos.y = 15564.0 + Stress_offset;
arrow165.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow165);

Arrow arrow166(down);
arrow166.speed = Stress_tempo;
arrow166.pos.y = 15664.0 + Stress_offset;
arrow166.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow166);

Arrow arrow167(left);
arrow167.speed = Stress_tempo;
arrow167.pos.y = 15762.0 + Stress_offset;
arrow167.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow167);

Arrow arrow168(up);
arrow168.speed = Stress_tempo;
arrow168.pos.y = 15862.0 + Stress_offset;
arrow168.side = playerSide;
arrow168.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow168);

Arrow arrow169(right);
arrow169.speed = Stress_tempo;
arrow169.pos.y = 15862.0 + Stress_offset;
arrow169.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow169);

Arrow arrow170(up);
arrow170.speed = Stress_tempo;
arrow170.pos.y = 15961.0 + Stress_offset;
arrow170.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow170);

Arrow arrow171(right);
arrow171.speed = Stress_tempo;
arrow171.pos.y = 16060.0 + Stress_offset;
arrow171.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow171);

Arrow arrow172(left);
arrow172.speed = Stress_tempo;
arrow172.pos.y = 16159.0 + Stress_offset;
arrow172.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow172);

Arrow arrow173(right);
arrow173.speed = Stress_tempo;
arrow173.pos.y = 16258.0 + Stress_offset;
arrow173.side = playerSide;
arrow173.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow173);

Arrow arrow174(right);
arrow174.speed = Stress_tempo;
arrow174.pos.y = 16258.0 + Stress_offset;
arrow174.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow174);

Arrow arrow175(up);
arrow175.speed = Stress_tempo;
arrow175.pos.y = 16357.0 + Stress_offset;
arrow175.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow175);

Arrow arrow176(right);
arrow176.speed = Stress_tempo;
arrow176.pos.y = 16457.0 + Stress_offset;
arrow176.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow176);

Arrow arrow177(left);
arrow177.speed = Stress_tempo;
arrow177.pos.y = 16556.0 + Stress_offset;
arrow177.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow177);

Arrow arrow178(down);
arrow178.speed = Stress_tempo;
arrow178.pos.y = 16655.0 + Stress_offset;
arrow178.side = playerSide;
arrow178.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow178);

Arrow arrow179(right);
arrow179.speed = Stress_tempo;
arrow179.pos.y = 16655.0 + Stress_offset;
arrow179.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow179);

Arrow arrow180(up);
arrow180.speed = Stress_tempo;
arrow180.pos.y = 16704.0 + Stress_offset;
arrow180.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow180);

Arrow arrow181(right);
arrow181.speed = Stress_tempo;
arrow181.pos.y = 16754.0 + Stress_offset;
arrow181.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow181);

Arrow arrow182(left);
arrow182.speed = Stress_tempo;
arrow182.pos.y = 16853.0 + Stress_offset;
arrow182.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow182);

Arrow arrow183(right);
arrow183.speed = Stress_tempo;
arrow183.pos.y = 16952.0 + Stress_offset;
arrow183.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow183);

Arrow arrow184(up);
arrow184.speed = Stress_tempo;
arrow184.pos.y = 17051.0 + Stress_offset;
arrow184.side = playerSide;
arrow184.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow184);

Arrow arrow185(up);
arrow185.speed = Stress_tempo;
arrow185.pos.y = 17051.0 + Stress_offset;
arrow185.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow185);

Arrow arrow186(left);
arrow186.speed = Stress_tempo;
arrow186.pos.y = 17151.0 + Stress_offset;
arrow186.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow186);

Arrow arrow187(right);
arrow187.speed = Stress_tempo;
arrow187.pos.y = 17250.0 + Stress_offset;
arrow187.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow187);

Arrow arrow188(down);
arrow188.speed = Stress_tempo;
arrow188.pos.y = 17349.0 + Stress_offset;
arrow188.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow188);

Arrow arrow189(right);
arrow189.speed = Stress_tempo;
arrow189.pos.y = 17448.0 + Stress_offset;
arrow189.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow189);

Arrow arrow190(left);
arrow190.speed = Stress_tempo;
arrow190.pos.y = 17448.0 + Stress_offset;
arrow190.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow190);

Arrow arrow191(up);
arrow191.speed = Stress_tempo;
arrow191.pos.y = 17547.0 + Stress_offset;
arrow191.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow191);

Arrow arrow192(left);
arrow192.speed = Stress_tempo;
arrow192.pos.y = 17647.0 + Stress_offset;
arrow192.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow192);

Arrow arrow193(right);
arrow193.speed = Stress_tempo;
arrow193.pos.y = 17647.0 + Stress_offset;
arrow193.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow193);

Arrow arrow194(left);
arrow194.speed = Stress_tempo;
arrow194.pos.y = 17745.0 + Stress_offset;
arrow194.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow194);

Arrow arrow195(left);
arrow195.speed = Stress_tempo;
arrow195.pos.y = 17845.0 + Stress_offset;
arrow195.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow195);

Arrow arrow196(right);
arrow196.speed = Stress_tempo;
arrow196.pos.y = 17845.0 + Stress_offset;
arrow196.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow196);

Arrow arrow197(up);
arrow197.speed = Stress_tempo;
arrow197.pos.y = 17944.0 + Stress_offset;
arrow197.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow197);

Arrow arrow198(left);
arrow198.speed = Stress_tempo;
arrow198.pos.y = 18043.0 + Stress_offset;
arrow198.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow198);

Arrow arrow199(right);
arrow199.speed = Stress_tempo;
arrow199.pos.y = 18043.0 + Stress_offset;
arrow199.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow199);

Arrow arrow200(left);
arrow200.speed = Stress_tempo;
arrow200.pos.y = 18142.0 + Stress_offset;
arrow200.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow200);

Arrow arrow201(left);
arrow201.speed = Stress_tempo;
arrow201.pos.y = 18241.0 + Stress_offset;
arrow201.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow201);

Arrow arrow202(right);
arrow202.speed = Stress_tempo;
arrow202.pos.y = 18241.0 + Stress_offset;
arrow202.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow202);

Arrow arrow203(up);
arrow203.speed = Stress_tempo;
arrow203.pos.y = 18291.0 + Stress_offset;
arrow203.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow203);

Arrow arrow204(right);
arrow204.speed = Stress_tempo;
arrow204.pos.y = 18340.0 + Stress_offset;
arrow204.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow204);

Arrow arrow205(left);
arrow205.speed = Stress_tempo;
arrow205.pos.y = 18440.0 + Stress_offset;
arrow205.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow205);

Arrow arrow206(left);
arrow206.speed = Stress_tempo;
arrow206.pos.y = 18440.0 + Stress_offset;
arrow206.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow206);

Arrow arrow207(right);
arrow207.speed = Stress_tempo;
arrow207.pos.y = 18538.0 + Stress_offset;
arrow207.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow207);

Arrow arrow208(left);
arrow208.speed = Stress_tempo;
arrow208.pos.y = 18638.0 + Stress_offset;
arrow208.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow208);

Arrow arrow209(up);
arrow209.speed = Stress_tempo;
arrow209.pos.y = 18638.0 + Stress_offset;
arrow209.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow209);

Arrow arrow210(left);
arrow210.speed = Stress_tempo;
arrow210.pos.y = 18737.0 + Stress_offset;
arrow210.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow210);

Arrow arrow211(left);
arrow211.speed = Stress_tempo;
arrow211.pos.y = 18737.0 + Stress_offset;
arrow211.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow211);

Arrow arrow212(left);
arrow212.speed = Stress_tempo;
arrow212.pos.y = 18836.0 + Stress_offset;
arrow212.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow212);

Arrow arrow213(right);
arrow213.speed = Stress_tempo;
arrow213.pos.y = 18836.0 + Stress_offset;
arrow213.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow213);

Arrow arrow214(left);
arrow214.speed = Stress_tempo;
arrow214.pos.y = 18935.0 + Stress_offset;
arrow214.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow214);

Arrow arrow215(down);
arrow215.speed = Stress_tempo;
arrow215.pos.y = 18935.0 + Stress_offset;
arrow215.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow215);

Arrow arrow216(down);
arrow216.speed = Stress_tempo;
arrow216.pos.y = 19034.0 + Stress_offset;
arrow216.side = playerSide;
arrow216.trailSize = 675;
playerArrowList->insert(playerArrowList->begin(), arrow216);

Arrow arrow217(up);
arrow217.speed = Stress_tempo;
arrow217.pos.y = 19034.0 + Stress_offset;
arrow217.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow217);

Arrow arrow218(right);
arrow218.speed = Stress_tempo;
arrow218.pos.y = 19134.0 + Stress_offset;
arrow218.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow218);

Arrow arrow219(down);
arrow219.speed = Stress_tempo;
arrow219.pos.y = 19232.0 + Stress_offset;
arrow219.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow219);

Arrow arrow220(right);
arrow220.speed = Stress_tempo;
arrow220.pos.y = 19332.0 + Stress_offset;
arrow220.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow220);

Arrow arrow221(left);
arrow221.speed = Stress_tempo;
arrow221.pos.y = 19431.0 + Stress_offset;
arrow221.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow221);

Arrow arrow222(right);
arrow222.speed = Stress_tempo;
arrow222.pos.y = 19530.0 + Stress_offset;
arrow222.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow222);

Arrow arrow223(down);
arrow223.speed = Stress_tempo;
arrow223.pos.y = 19629.0 + Stress_offset;
arrow223.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow223);

Arrow arrow224(left);
arrow224.speed = Stress_tempo;
arrow224.pos.y = 19728.0 + Stress_offset;
arrow224.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow224);

Arrow arrow225(up);
arrow225.speed = Stress_tempo;
arrow225.pos.y = 19778.0 + Stress_offset;
arrow225.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow225);

Arrow arrow226(down);
arrow226.speed = Stress_tempo;
arrow226.pos.y = 19828.0 + Stress_offset;
arrow226.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow226);

Arrow arrow227(right);
arrow227.speed = Stress_tempo;
arrow227.pos.y = 19927.0 + Stress_offset;
arrow227.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow227);

Arrow arrow228(down);
arrow228.speed = Stress_tempo;
arrow228.pos.y = 20025.0 + Stress_offset;
arrow228.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow228);

Arrow arrow229(up);
arrow229.speed = Stress_tempo;
arrow229.pos.y = 20125.0 + Stress_offset;
arrow229.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow229);

Arrow arrow230(left);
arrow230.speed = Stress_tempo;
arrow230.pos.y = 20224.0 + Stress_offset;
arrow230.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow230);

Arrow arrow231(up);
arrow231.speed = Stress_tempo;
arrow231.pos.y = 20323.0 + Stress_offset;
arrow231.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow231);

Arrow arrow232(left);
arrow232.speed = Stress_tempo;
arrow232.pos.y = 20422.0 + Stress_offset;
arrow232.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow232);

Arrow arrow233(right);
arrow233.speed = Stress_tempo;
arrow233.pos.y = 20522.0 + Stress_offset;
arrow233.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow233);

Arrow arrow234(down);
arrow234.speed = Stress_tempo;
arrow234.pos.y = 20571.0 + Stress_offset;
arrow234.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow234);

Arrow arrow235(up);
arrow235.speed = Stress_tempo;
arrow235.pos.y = 20621.0 + Stress_offset;
arrow235.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow235);

Arrow arrow236(right);
arrow236.speed = Stress_tempo;
arrow236.pos.y = 20720.0 + Stress_offset;
arrow236.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow236);

Arrow arrow237(up);
arrow237.speed = Stress_tempo;
arrow237.pos.y = 20819.0 + Stress_offset;
arrow237.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow237);

Arrow arrow238(right);
arrow238.speed = Stress_tempo;
arrow238.pos.y = 20918.0 + Stress_offset;
arrow238.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow238);

Arrow arrow239(left);
arrow239.speed = Stress_tempo;
arrow239.pos.y = 21017.0 + Stress_offset;
arrow239.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow239);

Arrow arrow240(down);
arrow240.speed = Stress_tempo;
arrow240.pos.y = 21116.0 + Stress_offset;
arrow240.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow240);

Arrow arrow241(left);
arrow241.speed = Stress_tempo;
arrow241.pos.y = 21215.0 + Stress_offset;
arrow241.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow241);

Arrow arrow242(up);
arrow242.speed = Stress_tempo;
arrow242.pos.y = 21265.0 + Stress_offset;
arrow242.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow242);

Arrow arrow243(left);
arrow243.speed = Stress_tempo;
arrow243.pos.y = 21314.0 + Stress_offset;
arrow243.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow243);

Arrow arrow244(right);
arrow244.speed = Stress_tempo;
arrow244.pos.y = 21414.0 + Stress_offset;
arrow244.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow244);

Arrow arrow245(down);
arrow245.speed = Stress_tempo;
arrow245.pos.y = 21513.0 + Stress_offset;
arrow245.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow245);

Arrow arrow246(left);
arrow246.speed = Stress_tempo;
arrow246.pos.y = 21612.0 + Stress_offset;
arrow246.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow246);

Arrow arrow247(down);
arrow247.speed = Stress_tempo;
arrow247.pos.y = 21711.0 + Stress_offset;
arrow247.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow247);

Arrow arrow248(left);
arrow248.speed = Stress_tempo;
arrow248.pos.y = 21810.0 + Stress_offset;
arrow248.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow248);

Arrow arrow249(down);
arrow249.speed = Stress_tempo;
arrow249.pos.y = 21910.0 + Stress_offset;
arrow249.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow249);

Arrow arrow250(down);
arrow250.speed = Stress_tempo;
arrow250.pos.y = 22008.0 + Stress_offset;
arrow250.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow250);

Arrow arrow251(right);
arrow251.speed = Stress_tempo;
arrow251.pos.y = 22108.0 + Stress_offset;
arrow251.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow251);

Arrow arrow252(left);
arrow252.speed = Stress_tempo;
arrow252.pos.y = 22158.0 + Stress_offset;
arrow252.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow252);

Arrow arrow253(up);
arrow253.speed = Stress_tempo;
arrow253.pos.y = 22207.0 + Stress_offset;
arrow253.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow253);

Arrow arrow254(right);
arrow254.speed = Stress_tempo;
arrow254.pos.y = 22306.0 + Stress_offset;
arrow254.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow254);

Arrow arrow255(down);
arrow255.speed = Stress_tempo;
arrow255.pos.y = 22405.0 + Stress_offset;
arrow255.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow255);

Arrow arrow256(right);
arrow256.speed = Stress_tempo;
arrow256.pos.y = 22504.0 + Stress_offset;
arrow256.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow256);

Arrow arrow257(left);
arrow257.speed = Stress_tempo;
arrow257.pos.y = 22603.0 + Stress_offset;
arrow257.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow257);

Arrow arrow258(right);
arrow258.speed = Stress_tempo;
arrow258.pos.y = 22702.0 + Stress_offset;
arrow258.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow258);

Arrow arrow259(down);
arrow259.speed = Stress_tempo;
arrow259.pos.y = 22802.0 + Stress_offset;
arrow259.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow259);

Arrow arrow260(left);
arrow260.speed = Stress_tempo;
arrow260.pos.y = 22901.0 + Stress_offset;
arrow260.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow260);

Arrow arrow261(up);
arrow261.speed = Stress_tempo;
arrow261.pos.y = 22951.0 + Stress_offset;
arrow261.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow261);

Arrow arrow262(down);
arrow262.speed = Stress_tempo;
arrow262.pos.y = 23000.0 + Stress_offset;
arrow262.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow262);

Arrow arrow263(right);
arrow263.speed = Stress_tempo;
arrow263.pos.y = 23099.0 + Stress_offset;
arrow263.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow263);

Arrow arrow264(down);
arrow264.speed = Stress_tempo;
arrow264.pos.y = 23198.0 + Stress_offset;
arrow264.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow264);

Arrow arrow265(up);
arrow265.speed = Stress_tempo;
arrow265.pos.y = 23297.0 + Stress_offset;
arrow265.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow265);

Arrow arrow266(left);
arrow266.speed = Stress_tempo;
arrow266.pos.y = 23397.0 + Stress_offset;
arrow266.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow266);

Arrow arrow267(up);
arrow267.speed = Stress_tempo;
arrow267.pos.y = 23495.0 + Stress_offset;
arrow267.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow267);

Arrow arrow268(left);
arrow268.speed = Stress_tempo;
arrow268.pos.y = 23595.0 + Stress_offset;
arrow268.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow268);

Arrow arrow269(right);
arrow269.speed = Stress_tempo;
arrow269.pos.y = 23694.0 + Stress_offset;
arrow269.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow269);

Arrow arrow270(down);
arrow270.speed = Stress_tempo;
arrow270.pos.y = 23744.0 + Stress_offset;
arrow270.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow270);

Arrow arrow271(up);
arrow271.speed = Stress_tempo;
arrow271.pos.y = 23793.0 + Stress_offset;
arrow271.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow271);

Arrow arrow272(right);
arrow272.speed = Stress_tempo;
arrow272.pos.y = 23892.0 + Stress_offset;
arrow272.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow272);

Arrow arrow273(up);
arrow273.speed = Stress_tempo;
arrow273.pos.y = 23991.0 + Stress_offset;
arrow273.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow273);

Arrow arrow274(right);
arrow274.speed = Stress_tempo;
arrow274.pos.y = 24091.0 + Stress_offset;
arrow274.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow274);

Arrow arrow275(left);
arrow275.speed = Stress_tempo;
arrow275.pos.y = 24190.0 + Stress_offset;
arrow275.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow275);

Arrow arrow276(down);
arrow276.speed = Stress_tempo;
arrow276.pos.y = 24289.0 + Stress_offset;
arrow276.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow276);

Arrow arrow277(left);
arrow277.speed = Stress_tempo;
arrow277.pos.y = 24388.0 + Stress_offset;
arrow277.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow277);

Arrow arrow278(up);
arrow278.speed = Stress_tempo;
arrow278.pos.y = 24437.0 + Stress_offset;
arrow278.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow278);

Arrow arrow279(left);
arrow279.speed = Stress_tempo;
arrow279.pos.y = 24487.0 + Stress_offset;
arrow279.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow279);

Arrow arrow280(right);
arrow280.speed = Stress_tempo;
arrow280.pos.y = 24586.0 + Stress_offset;
arrow280.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow280);

Arrow arrow281(down);
arrow281.speed = Stress_tempo;
arrow281.pos.y = 24685.0 + Stress_offset;
arrow281.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow281);

Arrow arrow282(left);
arrow282.speed = Stress_tempo;
arrow282.pos.y = 24784.0 + Stress_offset;
arrow282.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow282);

Arrow arrow283(down);
arrow283.speed = Stress_tempo;
arrow283.pos.y = 24884.0 + Stress_offset;
arrow283.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow283);

Arrow arrow284(left);
arrow284.speed = Stress_tempo;
arrow284.pos.y = 24982.0 + Stress_offset;
arrow284.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow284);

Arrow arrow285(down);
arrow285.speed = Stress_tempo;
arrow285.pos.y = 25082.0 + Stress_offset;
arrow285.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow285);

Arrow arrow286(down);
arrow286.speed = Stress_tempo;
arrow286.pos.y = 25181.0 + Stress_offset;
arrow286.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow286);

Arrow arrow287(right);
arrow287.speed = Stress_tempo;
arrow287.pos.y = 25280.0 + Stress_offset;
arrow287.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow287);

Arrow arrow288(left);
arrow288.speed = Stress_tempo;
arrow288.pos.y = 25330.0 + Stress_offset;
arrow288.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow288);

Arrow arrow289(right);
arrow289.speed = Stress_tempo;
arrow289.pos.y = 25380.0 + Stress_offset;
arrow289.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow289);

Arrow arrow290(down);
arrow290.speed = Stress_tempo;
arrow290.pos.y = 25429.0 + Stress_offset;
arrow290.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow290);

Arrow arrow291(right);
arrow291.speed = Stress_tempo;
arrow291.pos.y = 25478.0 + Stress_offset;
arrow291.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow291);

Arrow arrow292(left);
arrow292.speed = Stress_tempo;
arrow292.pos.y = 25578.0 + Stress_offset;
arrow292.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow292);

Arrow arrow293(right);
arrow293.speed = Stress_tempo;
arrow293.pos.y = 25677.0 + Stress_offset;
arrow293.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow293);

Arrow arrow294(down);
arrow294.speed = Stress_tempo;
arrow294.pos.y = 25726.0 + Stress_offset;
arrow294.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow294);

Arrow arrow295(up);
arrow295.speed = Stress_tempo;
arrow295.pos.y = 25776.0 + Stress_offset;
arrow295.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow295);

Arrow arrow296(left);
arrow296.speed = Stress_tempo;
arrow296.pos.y = 25875.0 + Stress_offset;
arrow296.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow296);

Arrow arrow297(down);
arrow297.speed = Stress_tempo;
arrow297.pos.y = 25974.0 + Stress_offset;
arrow297.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow297);

Arrow arrow298(right);
arrow298.speed = Stress_tempo;
arrow298.pos.y = 26073.0 + Stress_offset;
arrow298.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow298);

Arrow arrow299(up);
arrow299.speed = Stress_tempo;
arrow299.pos.y = 26123.0 + Stress_offset;
arrow299.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow299);

Arrow arrow300(left);
arrow300.speed = Stress_tempo;
arrow300.pos.y = 26172.0 + Stress_offset;
arrow300.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow300);

Arrow arrow301(right);
arrow301.speed = Stress_tempo;
arrow301.pos.y = 26271.0 + Stress_offset;
arrow301.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow301);

Arrow arrow302(left);
arrow302.speed = Stress_tempo;
arrow302.pos.y = 26321.0 + Stress_offset;
arrow302.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow302);

Arrow arrow303(down);
arrow303.speed = Stress_tempo;
arrow303.pos.y = 26371.0 + Stress_offset;
arrow303.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow303);

Arrow arrow304(left);
arrow304.speed = Stress_tempo;
arrow304.pos.y = 26470.0 + Stress_offset;
arrow304.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow304);

Arrow arrow305(up);
arrow305.speed = Stress_tempo;
arrow305.pos.y = 26569.0 + Stress_offset;
arrow305.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow305);

Arrow arrow306(right);
arrow306.speed = Stress_tempo;
arrow306.pos.y = 26668.0 + Stress_offset;
arrow306.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow306);

Arrow arrow307(down);
arrow307.speed = Stress_tempo;
arrow307.pos.y = 26767.0 + Stress_offset;
arrow307.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow307);

Arrow arrow308(right);
arrow308.speed = Stress_tempo;
arrow308.pos.y = 26867.0 + Stress_offset;
arrow308.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow308);

Arrow arrow309(up);
arrow309.speed = Stress_tempo;
arrow309.pos.y = 26916.0 + Stress_offset;
arrow309.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow309);

Arrow arrow310(left);
arrow310.speed = Stress_tempo;
arrow310.pos.y = 26965.0 + Stress_offset;
arrow310.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow310);

Arrow arrow311(right);
arrow311.speed = Stress_tempo;
arrow311.pos.y = 27065.0 + Stress_offset;
arrow311.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow311);

Arrow arrow312(down);
arrow312.speed = Stress_tempo;
arrow312.pos.y = 27164.0 + Stress_offset;
arrow312.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow312);

Arrow arrow313(right);
arrow313.speed = Stress_tempo;
arrow313.pos.y = 27263.0 + Stress_offset;
arrow313.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow313);

Arrow arrow314(left);
arrow314.speed = Stress_tempo;
arrow314.pos.y = 27362.0 + Stress_offset;
arrow314.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow314);

Arrow arrow315(down);
arrow315.speed = Stress_tempo;
arrow315.pos.y = 27461.0 + Stress_offset;
arrow315.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow315);

Arrow arrow316(right);
arrow316.speed = Stress_tempo;
arrow316.pos.y = 27560.0 + Stress_offset;
arrow316.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow316);

Arrow arrow317(up);
arrow317.speed = Stress_tempo;
arrow317.pos.y = 27610.0 + Stress_offset;
arrow317.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow317);

Arrow arrow318(right);
arrow318.speed = Stress_tempo;
arrow318.pos.y = 27660.0 + Stress_offset;
arrow318.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow318);

Arrow arrow319(down);
arrow319.speed = Stress_tempo;
arrow319.pos.y = 27759.0 + Stress_offset;
arrow319.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow319);

Arrow arrow320(right);
arrow320.speed = Stress_tempo;
arrow320.pos.y = 27858.0 + Stress_offset;
arrow320.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow320);

Arrow arrow321(left);
arrow321.speed = Stress_tempo;
arrow321.pos.y = 27957.0 + Stress_offset;
arrow321.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow321);

Arrow arrow322(right);
arrow322.speed = Stress_tempo;
arrow322.pos.y = 28056.0 + Stress_offset;
arrow322.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow322);

Arrow arrow323(down);
arrow323.speed = Stress_tempo;
arrow323.pos.y = 28155.0 + Stress_offset;
arrow323.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow323);

Arrow arrow324(right);
arrow324.speed = Stress_tempo;
arrow324.pos.y = 28254.0 + Stress_offset;
arrow324.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow324);

Arrow arrow325(up);
arrow325.speed = Stress_tempo;
arrow325.pos.y = 28354.0 + Stress_offset;
arrow325.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow325);

Arrow arrow326(up);
arrow326.speed = Stress_tempo;
arrow326.pos.y = 28452.0 + Stress_offset;
arrow326.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow326);

Arrow arrow327(right);
arrow327.speed = Stress_tempo;
arrow327.pos.y = 28552.0 + Stress_offset;
arrow327.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow327);

Arrow arrow328(down);
arrow328.speed = Stress_tempo;
arrow328.pos.y = 28602.0 + Stress_offset;
arrow328.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow328);

Arrow arrow329(right);
arrow329.speed = Stress_tempo;
arrow329.pos.y = 28651.0 + Stress_offset;
arrow329.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow329);

Arrow arrow330(down);
arrow330.speed = Stress_tempo;
arrow330.pos.y = 28750.0 + Stress_offset;
arrow330.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow330);

Arrow arrow331(right);
arrow331.speed = Stress_tempo;
arrow331.pos.y = 28849.0 + Stress_offset;
arrow331.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow331);

Arrow arrow332(down);
arrow332.speed = Stress_tempo;
arrow332.pos.y = 28899.0 + Stress_offset;
arrow332.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow332);

Arrow arrow333(up);
arrow333.speed = Stress_tempo;
arrow333.pos.y = 28948.0 + Stress_offset;
arrow333.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow333);

Arrow arrow334(left);
arrow334.speed = Stress_tempo;
arrow334.pos.y = 29048.0 + Stress_offset;
arrow334.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow334);

Arrow arrow335(down);
arrow335.speed = Stress_tempo;
arrow335.pos.y = 29147.0 + Stress_offset;
arrow335.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow335);

Arrow arrow336(right);
arrow336.speed = Stress_tempo;
arrow336.pos.y = 29246.0 + Stress_offset;
arrow336.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow336);

Arrow arrow337(up);
arrow337.speed = Stress_tempo;
arrow337.pos.y = 29295.0 + Stress_offset;
arrow337.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow337);

Arrow arrow338(left);
arrow338.speed = Stress_tempo;
arrow338.pos.y = 29345.0 + Stress_offset;
arrow338.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow338);

Arrow arrow339(right);
arrow339.speed = Stress_tempo;
arrow339.pos.y = 29444.0 + Stress_offset;
arrow339.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow339);

Arrow arrow340(left);
arrow340.speed = Stress_tempo;
arrow340.pos.y = 29494.0 + Stress_offset;
arrow340.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow340);

Arrow arrow341(down);
arrow341.speed = Stress_tempo;
arrow341.pos.y = 29544.0 + Stress_offset;
arrow341.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow341);

Arrow arrow342(left);
arrow342.speed = Stress_tempo;
arrow342.pos.y = 29642.0 + Stress_offset;
arrow342.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow342);

Arrow arrow343(up);
arrow343.speed = Stress_tempo;
arrow343.pos.y = 29741.0 + Stress_offset;
arrow343.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow343);

Arrow arrow344(right);
arrow344.speed = Stress_tempo;
arrow344.pos.y = 29841.0 + Stress_offset;
arrow344.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow344);

Arrow arrow345(down);
arrow345.speed = Stress_tempo;
arrow345.pos.y = 29940.0 + Stress_offset;
arrow345.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow345);

Arrow arrow346(right);
arrow346.speed = Stress_tempo;
arrow346.pos.y = 30039.0 + Stress_offset;
arrow346.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow346);

Arrow arrow347(up);
arrow347.speed = Stress_tempo;
arrow347.pos.y = 30088.0 + Stress_offset;
arrow347.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow347);

Arrow arrow348(left);
arrow348.speed = Stress_tempo;
arrow348.pos.y = 30138.0 + Stress_offset;
arrow348.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow348);

Arrow arrow349(right);
arrow349.speed = Stress_tempo;
arrow349.pos.y = 30237.0 + Stress_offset;
arrow349.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow349);

Arrow arrow350(down);
arrow350.speed = Stress_tempo;
arrow350.pos.y = 30337.0 + Stress_offset;
arrow350.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow350);

Arrow arrow351(right);
arrow351.speed = Stress_tempo;
arrow351.pos.y = 30435.0 + Stress_offset;
arrow351.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow351);

Arrow arrow352(left);
arrow352.speed = Stress_tempo;
arrow352.pos.y = 30535.0 + Stress_offset;
arrow352.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow352);

Arrow arrow353(down);
arrow353.speed = Stress_tempo;
arrow353.pos.y = 30634.0 + Stress_offset;
arrow353.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow353);

Arrow arrow354(right);
arrow354.speed = Stress_tempo;
arrow354.pos.y = 30733.0 + Stress_offset;
arrow354.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow354);

Arrow arrow355(up);
arrow355.speed = Stress_tempo;
arrow355.pos.y = 30782.0 + Stress_offset;
arrow355.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow355);

Arrow arrow356(right);
arrow356.speed = Stress_tempo;
arrow356.pos.y = 30832.0 + Stress_offset;
arrow356.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow356);

Arrow arrow357(down);
arrow357.speed = Stress_tempo;
arrow357.pos.y = 30931.0 + Stress_offset;
arrow357.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow357);

Arrow arrow358(right);
arrow358.speed = Stress_tempo;
arrow358.pos.y = 31030.0 + Stress_offset;
arrow358.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow358);

Arrow arrow359(left);
arrow359.speed = Stress_tempo;
arrow359.pos.y = 31130.0 + Stress_offset;
arrow359.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow359);

Arrow arrow360(right);
arrow360.speed = Stress_tempo;
arrow360.pos.y = 31228.0 + Stress_offset;
arrow360.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow360);

Arrow arrow361(down);
arrow361.speed = Stress_tempo;
arrow361.pos.y = 31328.0 + Stress_offset;
arrow361.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow361);

Arrow arrow362(right);
arrow362.speed = Stress_tempo;
arrow362.pos.y = 31427.0 + Stress_offset;
arrow362.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow362);

Arrow arrow363(up);
arrow363.speed = Stress_tempo;
arrow363.pos.y = 31526.0 + Stress_offset;
arrow363.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow363);

Arrow arrow364(up);
arrow364.speed = Stress_tempo;
arrow364.pos.y = 31625.0 + Stress_offset;
arrow364.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow364);

Arrow arrow365(down);
arrow365.speed = Stress_tempo;
arrow365.pos.y = 31724.0 + Stress_offset;
arrow365.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow365);

Arrow arrow366(down);
arrow366.speed = Stress_tempo;
arrow366.pos.y = 31724.0 + Stress_offset;
arrow366.side = playerSide;
arrow366.trailSize = 843;
playerArrowList->insert(playerArrowList->begin(), arrow366);

Arrow arrow367(up);
arrow367.speed = Stress_tempo;
arrow367.pos.y = 31824.0 + Stress_offset;
arrow367.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow367);

Arrow arrow368(left);
arrow368.speed = Stress_tempo;
arrow368.pos.y = 31922.0 + Stress_offset;
arrow368.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow368);

Arrow arrow369(left);
arrow369.speed = Stress_tempo;
arrow369.pos.y = 32022.0 + Stress_offset;
arrow369.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow369);

Arrow arrow370(up);
arrow370.speed = Stress_tempo;
arrow370.pos.y = 32121.0 + Stress_offset;
arrow370.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow370);

Arrow arrow371(right);
arrow371.speed = Stress_tempo;
arrow371.pos.y = 32220.0 + Stress_offset;
arrow371.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow371);

Arrow arrow372(down);
arrow372.speed = Stress_tempo;
arrow372.pos.y = 32319.0 + Stress_offset;
arrow372.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow372);

Arrow arrow373(right);
arrow373.speed = Stress_tempo;
arrow373.pos.y = 32418.0 + Stress_offset;
arrow373.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow373);

Arrow arrow374(left);
arrow374.speed = Stress_tempo;
arrow374.pos.y = 32517.0 + Stress_offset;
arrow374.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow374);

Arrow arrow375(down);
arrow375.speed = Stress_tempo;
arrow375.pos.y = 32617.0 + Stress_offset;
arrow375.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow375);

Arrow arrow376(up);
arrow376.speed = Stress_tempo;
arrow376.pos.y = 32715.0 + Stress_offset;
arrow376.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow376);

Arrow arrow377(right);
arrow377.speed = Stress_tempo;
arrow377.pos.y = 32815.0 + Stress_offset;
arrow377.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow377);

Arrow arrow378(down);
arrow378.speed = Stress_tempo;
arrow378.pos.y = 32914.0 + Stress_offset;
arrow378.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow378);

Arrow arrow379(up);
arrow379.speed = Stress_tempo;
arrow379.pos.y = 32914.0 + Stress_offset;
arrow379.side = playerSide;
arrow379.trailSize = 506;
playerArrowList->insert(playerArrowList->begin(), arrow379);

Arrow arrow380(right);
arrow380.speed = Stress_tempo;
arrow380.pos.y = 33013.0 + Stress_offset;
arrow380.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow380);

Arrow arrow381(left);
arrow381.speed = Stress_tempo;
arrow381.pos.y = 33112.0 + Stress_offset;
arrow381.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow381);

Arrow arrow382(right);
arrow382.speed = Stress_tempo;
arrow382.pos.y = 33211.0 + Stress_offset;
arrow382.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow382);

Arrow arrow383(down);
arrow383.speed = Stress_tempo;
arrow383.pos.y = 33311.0 + Stress_offset;
arrow383.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow383);

Arrow arrow384(down);
arrow384.speed = Stress_tempo;
arrow384.pos.y = 33311.0 + Stress_offset;
arrow384.side = playerSide;
arrow384.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow384);

Arrow arrow385(up);
arrow385.speed = Stress_tempo;
arrow385.pos.y = 33410.0 + Stress_offset;
arrow385.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow385);

Arrow arrow386(left);
arrow386.speed = Stress_tempo;
arrow386.pos.y = 33509.0 + Stress_offset;
arrow386.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow386);

Arrow arrow387(left);
arrow387.speed = Stress_tempo;
arrow387.pos.y = 33608.0 + Stress_offset;
arrow387.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow387);

Arrow arrow388(up);
arrow388.speed = Stress_tempo;
arrow388.pos.y = 33707.0 + Stress_offset;
arrow388.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow388);

Arrow arrow389(right);
arrow389.speed = Stress_tempo;
arrow389.pos.y = 33806.0 + Stress_offset;
arrow389.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow389);

Arrow arrow390(down);
arrow390.speed = Stress_tempo;
arrow390.pos.y = 33905.0 + Stress_offset;
arrow390.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow390);

Arrow arrow391(right);
arrow391.speed = Stress_tempo;
arrow391.pos.y = 34004.0 + Stress_offset;
arrow391.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow391);

Arrow arrow392(left);
arrow392.speed = Stress_tempo;
arrow392.pos.y = 34104.0 + Stress_offset;
arrow392.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow392);

Arrow arrow393(up);
arrow393.speed = Stress_tempo;
arrow393.pos.y = 34203.0 + Stress_offset;
arrow393.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow393);

Arrow arrow394(right);
arrow394.speed = Stress_tempo;
arrow394.pos.y = 34252.0 + Stress_offset;
arrow394.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow394);

Arrow arrow395(down);
arrow395.speed = Stress_tempo;
arrow395.pos.y = 34302.0 + Stress_offset;
arrow395.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow395);

Arrow arrow396(right);
arrow396.speed = Stress_tempo;
arrow396.pos.y = 34401.0 + Stress_offset;
arrow396.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow396);

Arrow arrow397(down);
arrow397.speed = Stress_tempo;
arrow397.pos.y = 34500.0 + Stress_offset;
arrow397.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow397);

Arrow arrow398(left);
arrow398.speed = Stress_tempo;
arrow398.pos.y = 34500.0 + Stress_offset;
arrow398.side = playerSide;
arrow398.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow398);

Arrow arrow399(right);
arrow399.speed = Stress_tempo;
arrow399.pos.y = 34600.0 + Stress_offset;
arrow399.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow399);

Arrow arrow400(up);
arrow400.speed = Stress_tempo;
arrow400.pos.y = 34698.0 + Stress_offset;
arrow400.side = playerSide;
arrow400.trailSize = 127;
playerArrowList->insert(playerArrowList->begin(), arrow400);

Arrow arrow401(left);
arrow401.speed = Stress_tempo;
arrow401.pos.y = 34698.0 + Stress_offset;
arrow401.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow401);

Arrow arrow402(down);
arrow402.speed = Stress_tempo;
arrow402.pos.y = 34798.0 + Stress_offset;
arrow402.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow402);

Arrow arrow403(right);
arrow403.speed = Stress_tempo;
arrow403.pos.y = 34798.0 + Stress_offset;
arrow403.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow403);

Arrow arrow404(left);
arrow404.speed = Stress_tempo;
arrow404.pos.y = 34897.0 + Stress_offset;
arrow404.side = computerSide;
arrow404.trailSize = 169;
computerArrowList->insert(computerArrowList->begin(), arrow404);

Arrow arrow405(down);
arrow405.speed = Stress_tempo;
arrow405.pos.y = 34897.0 + Stress_offset;
arrow405.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow405);

Arrow arrow406(up);
arrow406.speed = Stress_tempo;
arrow406.pos.y = 34996.0 + Stress_offset;
arrow406.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow406);

Arrow arrow407(left);
arrow407.speed = Stress_tempo;
arrow407.pos.y = 35095.0 + Stress_offset;
arrow407.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow407);

Arrow arrow408(left);
arrow408.speed = Stress_tempo;
arrow408.pos.y = 35194.0 + Stress_offset;
arrow408.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow408);

Arrow arrow409(left);
arrow409.speed = Stress_tempo;
arrow409.pos.y = 35294.0 + Stress_offset;
arrow409.side = computerSide;
arrow409.trailSize = 169;
computerArrowList->insert(computerArrowList->begin(), arrow409);

Arrow arrow410(up);
arrow410.speed = Stress_tempo;
arrow410.pos.y = 35294.0 + Stress_offset;
arrow410.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow410);

Arrow arrow411(right);
arrow411.speed = Stress_tempo;
arrow411.pos.y = 35392.0 + Stress_offset;
arrow411.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow411);

Arrow arrow412(down);
arrow412.speed = Stress_tempo;
arrow412.pos.y = 35492.0 + Stress_offset;
arrow412.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow412);

Arrow arrow413(right);
arrow413.speed = Stress_tempo;
arrow413.pos.y = 35591.0 + Stress_offset;
arrow413.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow413);

Arrow arrow414(left);
arrow414.speed = Stress_tempo;
arrow414.pos.y = 35690.0 + Stress_offset;
arrow414.side = computerSide;
arrow414.trailSize = 169;
computerArrowList->insert(computerArrowList->begin(), arrow414);

Arrow arrow415(left);
arrow415.speed = Stress_tempo;
arrow415.pos.y = 35690.0 + Stress_offset;
arrow415.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow415);

Arrow arrow416(down);
arrow416.speed = Stress_tempo;
arrow416.pos.y = 35789.0 + Stress_offset;
arrow416.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow416);

Arrow arrow417(up);
arrow417.speed = Stress_tempo;
arrow417.pos.y = 35888.0 + Stress_offset;
arrow417.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow417);

Arrow arrow418(right);
arrow418.speed = Stress_tempo;
arrow418.pos.y = 35987.0 + Stress_offset;
arrow418.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow418);

Arrow arrow419(left);
arrow419.speed = Stress_tempo;
arrow419.pos.y = 36087.0 + Stress_offset;
arrow419.side = computerSide;
arrow419.trailSize = 169;
computerArrowList->insert(computerArrowList->begin(), arrow419);

Arrow arrow420(down);
arrow420.speed = Stress_tempo;
arrow420.pos.y = 36087.0 + Stress_offset;
arrow420.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow420);

Arrow arrow421(right);
arrow421.speed = Stress_tempo;
arrow421.pos.y = 36185.0 + Stress_offset;
arrow421.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow421);

Arrow arrow422(left);
arrow422.speed = Stress_tempo;
arrow422.pos.y = 36285.0 + Stress_offset;
arrow422.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow422);

Arrow arrow423(right);
arrow423.speed = Stress_tempo;
arrow423.pos.y = 36384.0 + Stress_offset;
arrow423.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow423);

Arrow arrow424(down);
arrow424.speed = Stress_tempo;
arrow424.pos.y = 36483.0 + Stress_offset;
arrow424.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow424);

Arrow arrow425(down);
arrow425.speed = Stress_tempo;
arrow425.pos.y = 36483.0 + Stress_offset;
arrow425.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow425);

Arrow arrow426(up);
arrow426.speed = Stress_tempo;
arrow426.pos.y = 36582.0 + Stress_offset;
arrow426.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow426);

Arrow arrow427(left);
arrow427.speed = Stress_tempo;
arrow427.pos.y = 36681.0 + Stress_offset;
arrow427.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow427);

Arrow arrow428(left);
arrow428.speed = Stress_tempo;
arrow428.pos.y = 36781.0 + Stress_offset;
arrow428.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow428);

Arrow arrow429(up);
arrow429.speed = Stress_tempo;
arrow429.pos.y = 36880.0 + Stress_offset;
arrow429.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow429);

Arrow arrow430(right);
arrow430.speed = Stress_tempo;
arrow430.pos.y = 36979.0 + Stress_offset;
arrow430.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow430);

Arrow arrow431(down);
arrow431.speed = Stress_tempo;
arrow431.pos.y = 37078.0 + Stress_offset;
arrow431.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow431);

Arrow arrow432(right);
arrow432.speed = Stress_tempo;
arrow432.pos.y = 37177.0 + Stress_offset;
arrow432.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow432);

Arrow arrow433(left);
arrow433.speed = Stress_tempo;
arrow433.pos.y = 37276.0 + Stress_offset;
arrow433.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow433);

Arrow arrow434(up);
arrow434.speed = Stress_tempo;
arrow434.pos.y = 37375.0 + Stress_offset;
arrow434.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow434);

Arrow arrow435(right);
arrow435.speed = Stress_tempo;
arrow435.pos.y = 37425.0 + Stress_offset;
arrow435.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow435);

Arrow arrow436(down);
arrow436.speed = Stress_tempo;
arrow436.pos.y = 37474.0 + Stress_offset;
arrow436.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow436);

Arrow arrow437(right);
arrow437.speed = Stress_tempo;
arrow437.pos.y = 37574.0 + Stress_offset;
arrow437.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow437);

Arrow arrow438(down);
arrow438.speed = Stress_tempo;
arrow438.pos.y = 37672.0 + Stress_offset;
arrow438.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow438);

Arrow arrow439(right);
arrow439.speed = Stress_tempo;
arrow439.pos.y = 37772.0 + Stress_offset;
arrow439.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow439);

Arrow arrow440(left);
arrow440.speed = Stress_tempo;
arrow440.pos.y = 37871.0 + Stress_offset;
arrow440.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow440);

Arrow arrow441(right);
arrow441.speed = Stress_tempo;
arrow441.pos.y = 37970.0 + Stress_offset;
arrow441.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow441);

Arrow arrow442(down);
arrow442.speed = Stress_tempo;
arrow442.pos.y = 38070.0 + Stress_offset;
arrow442.side = computerSide;
arrow442.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow442);

Arrow arrow443(down);
arrow443.speed = Stress_tempo;
arrow443.pos.y = 38070.0 + Stress_offset;
arrow443.side = playerSide;
arrow443.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow443);

Arrow arrow444(left);
arrow444.speed = Stress_tempo;
arrow444.pos.y = 38268.0 + Stress_offset;
arrow444.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow444);

Arrow arrow445(left);
arrow445.speed = Stress_tempo;
arrow445.pos.y = 38268.0 + Stress_offset;
arrow445.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow445);

Arrow arrow446(down);
arrow446.speed = Stress_tempo;
arrow446.pos.y = 38367.0 + Stress_offset;
arrow446.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow446);

Arrow arrow447(down);
arrow447.speed = Stress_tempo;
arrow447.pos.y = 38367.0 + Stress_offset;
arrow447.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow447);

Arrow arrow448(right);
arrow448.speed = Stress_tempo;
arrow448.pos.y = 38466.0 + Stress_offset;
arrow448.side = computerSide;
arrow448.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow448);

Arrow arrow449(right);
arrow449.speed = Stress_tempo;
arrow449.pos.y = 38466.0 + Stress_offset;
arrow449.side = playerSide;
arrow449.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow449);

Arrow arrow450(down);
arrow450.speed = Stress_tempo;
arrow450.pos.y = 38664.0 + Stress_offset;
arrow450.side = playerSide;
arrow450.trailSize = 253;
playerArrowList->insert(playerArrowList->begin(), arrow450);

Arrow arrow451(down);
arrow451.speed = Stress_tempo;
arrow451.pos.y = 38664.0 + Stress_offset;
arrow451.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow451);

Arrow arrow452(right);
arrow452.speed = Stress_tempo;
arrow452.pos.y = 38862.0 + Stress_offset;
arrow452.side = playerSide;
arrow452.trailSize = 464;
playerArrowList->insert(playerArrowList->begin(), arrow452);

Arrow arrow453(left);
arrow453.speed = Stress_tempo;
arrow453.pos.y = 38862.0 + Stress_offset;
arrow453.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow453);

Arrow arrow454(left);
arrow454.speed = Stress_tempo;
arrow454.pos.y = 39061.0 + Stress_offset;
arrow454.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow454);

Arrow arrow455(left);
arrow455.speed = Stress_tempo;
arrow455.pos.y = 39160.0 + Stress_offset;
arrow455.side = playerSide;
arrow455.trailSize = 126;
playerArrowList->insert(playerArrowList->begin(), arrow455);

Arrow arrow456(left);
arrow456.speed = Stress_tempo;
arrow456.pos.y = 39259.0 + Stress_offset;
arrow456.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow456);

Arrow arrow457(down);
arrow457.speed = Stress_tempo;
arrow457.pos.y = 39259.0 + Stress_offset;
arrow457.side = playerSide;
arrow457.trailSize = 464;
playerArrowList->insert(playerArrowList->begin(), arrow457);

Arrow arrow458(left);
arrow458.speed = Stress_tempo;
arrow458.pos.y = 39358.0 + Stress_offset;
arrow458.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow458);

Arrow arrow459(up);
arrow459.speed = Stress_tempo;
arrow459.pos.y = 39457.0 + Stress_offset;
arrow459.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow459);

Arrow arrow460(right);
arrow460.speed = Stress_tempo;
arrow460.pos.y = 39507.0 + Stress_offset;
arrow460.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow460);

Arrow arrow461(up);
arrow461.speed = Stress_tempo;
arrow461.pos.y = 39557.0 + Stress_offset;
arrow461.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow461);

Arrow arrow462(left);
arrow462.speed = Stress_tempo;
arrow462.pos.y = 39557.0 + Stress_offset;
arrow462.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow462);

Arrow arrow463(down);
arrow463.speed = Stress_tempo;
arrow463.pos.y = 39655.0 + Stress_offset;
arrow463.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow463);

Arrow arrow464(up);
arrow464.speed = Stress_tempo;
arrow464.pos.y = 39655.0 + Stress_offset;
arrow464.side = playerSide;
arrow464.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow464);

Arrow arrow465(right);
arrow465.speed = Stress_tempo;
arrow465.pos.y = 39755.0 + Stress_offset;
arrow465.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow465);

Arrow arrow466(up);
arrow466.speed = Stress_tempo;
arrow466.pos.y = 39854.0 + Stress_offset;
arrow466.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow466);

Arrow arrow467(down);
arrow467.speed = Stress_tempo;
arrow467.pos.y = 39953.0 + Stress_offset;
arrow467.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow467);

Arrow arrow468(right);
arrow468.speed = Stress_tempo;
arrow468.pos.y = 40052.0 + Stress_offset;
arrow468.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow468);

Arrow arrow469(down);
arrow469.speed = Stress_tempo;
arrow469.pos.y = 40052.0 + Stress_offset;
arrow469.side = playerSide;
arrow469.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow469);

Arrow arrow470(up);
arrow470.speed = Stress_tempo;
arrow470.pos.y = 40151.0 + Stress_offset;
arrow470.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow470);

Arrow arrow471(down);
arrow471.speed = Stress_tempo;
arrow471.pos.y = 40250.0 + Stress_offset;
arrow471.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow471);

Arrow arrow472(up);
arrow472.speed = Stress_tempo;
arrow472.pos.y = 40250.0 + Stress_offset;
arrow472.side = playerSide;
arrow472.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow472);

Arrow arrow473(right);
arrow473.speed = Stress_tempo;
arrow473.pos.y = 40300.0 + Stress_offset;
arrow473.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow473);

Arrow arrow474(up);
arrow474.speed = Stress_tempo;
arrow474.pos.y = 40350.0 + Stress_offset;
arrow474.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow474);

Arrow arrow475(left);
arrow475.speed = Stress_tempo;
arrow475.pos.y = 40449.0 + Stress_offset;
arrow475.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow475);

Arrow arrow476(right);
arrow476.speed = Stress_tempo;
arrow476.pos.y = 40449.0 + Stress_offset;
arrow476.side = playerSide;
arrow476.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow476);

Arrow arrow477(right);
arrow477.speed = Stress_tempo;
arrow477.pos.y = 40548.0 + Stress_offset;
arrow477.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow477);

Arrow arrow478(up);
arrow478.speed = Stress_tempo;
arrow478.pos.y = 40647.0 + Stress_offset;
arrow478.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow478);

Arrow arrow479(right);
arrow479.speed = Stress_tempo;
arrow479.pos.y = 40746.0 + Stress_offset;
arrow479.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow479);

Arrow arrow480(down);
arrow480.speed = Stress_tempo;
arrow480.pos.y = 40845.0 + Stress_offset;
arrow480.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow480);

Arrow arrow481(left);
arrow481.speed = Stress_tempo;
arrow481.pos.y = 40845.0 + Stress_offset;
arrow481.side = playerSide;
arrow481.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow481);

Arrow arrow482(right);
arrow482.speed = Stress_tempo;
arrow482.pos.y = 40944.0 + Stress_offset;
arrow482.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow482);

Arrow arrow483(left);
arrow483.speed = Stress_tempo;
arrow483.pos.y = 41044.0 + Stress_offset;
arrow483.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow483);

Arrow arrow484(right);
arrow484.speed = Stress_tempo;
arrow484.pos.y = 41142.0 + Stress_offset;
arrow484.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow484);

Arrow arrow485(down);
arrow485.speed = Stress_tempo;
arrow485.pos.y = 41242.0 + Stress_offset;
arrow485.side = playerSide;
arrow485.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow485);

Arrow arrow486(left);
arrow486.speed = Stress_tempo;
arrow486.pos.y = 41440.0 + Stress_offset;
arrow486.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow486);

Arrow arrow487(down);
arrow487.speed = Stress_tempo;
arrow487.pos.y = 41539.0 + Stress_offset;
arrow487.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow487);

Arrow arrow488(right);
arrow488.speed = Stress_tempo;
arrow488.pos.y = 41638.0 + Stress_offset;
arrow488.side = playerSide;
arrow488.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow488);

Arrow arrow489(down);
arrow489.speed = Stress_tempo;
arrow489.pos.y = 41837.0 + Stress_offset;
arrow489.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow489);

Arrow arrow490(left);
arrow490.speed = Stress_tempo;
arrow490.pos.y = 42035.0 + Stress_offset;
arrow490.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow490);

Arrow arrow491(left);
arrow491.speed = Stress_tempo;
arrow491.pos.y = 42233.0 + Stress_offset;
arrow491.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow491);

Arrow arrow492(left);
arrow492.speed = Stress_tempo;
arrow492.pos.y = 42431.0 + Stress_offset;
arrow492.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow492);

Arrow arrow493(left);
arrow493.speed = Stress_tempo;
arrow493.pos.y = 42531.0 + Stress_offset;
arrow493.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow493);

Arrow arrow494(up);
arrow494.speed = Stress_tempo;
arrow494.pos.y = 42630.0 + Stress_offset;
arrow494.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow494);

Arrow arrow495(right);
arrow495.speed = Stress_tempo;
arrow495.pos.y = 42680.0 + Stress_offset;
arrow495.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow495);

Arrow arrow496(up);
arrow496.speed = Stress_tempo;
arrow496.pos.y = 42729.0 + Stress_offset;
arrow496.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow496);

Arrow arrow497(down);
arrow497.speed = Stress_tempo;
arrow497.pos.y = 42828.0 + Stress_offset;
arrow497.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow497);

Arrow arrow498(right);
arrow498.speed = Stress_tempo;
arrow498.pos.y = 42927.0 + Stress_offset;
arrow498.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow498);

Arrow arrow499(up);
arrow499.speed = Stress_tempo;
arrow499.pos.y = 43027.0 + Stress_offset;
arrow499.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow499);

Arrow arrow500(down);
arrow500.speed = Stress_tempo;
arrow500.pos.y = 43125.0 + Stress_offset;
arrow500.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow500);

Arrow arrow501(right);
arrow501.speed = Stress_tempo;
arrow501.pos.y = 43225.0 + Stress_offset;
arrow501.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow501);

Arrow arrow502(up);
arrow502.speed = Stress_tempo;
arrow502.pos.y = 43324.0 + Stress_offset;
arrow502.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow502);

Arrow arrow503(down);
arrow503.speed = Stress_tempo;
arrow503.pos.y = 43423.0 + Stress_offset;
arrow503.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow503);

Arrow arrow504(right);
arrow504.speed = Stress_tempo;
arrow504.pos.y = 43472.0 + Stress_offset;
arrow504.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow504);

Arrow arrow505(up);
arrow505.speed = Stress_tempo;
arrow505.pos.y = 43522.0 + Stress_offset;
arrow505.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow505);

Arrow arrow506(left);
arrow506.speed = Stress_tempo;
arrow506.pos.y = 43621.0 + Stress_offset;
arrow506.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow506);

Arrow arrow507(right);
arrow507.speed = Stress_tempo;
arrow507.pos.y = 43720.0 + Stress_offset;
arrow507.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow507);

Arrow arrow508(up);
arrow508.speed = Stress_tempo;
arrow508.pos.y = 43820.0 + Stress_offset;
arrow508.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow508);

Arrow arrow509(right);
arrow509.speed = Stress_tempo;
arrow509.pos.y = 43918.0 + Stress_offset;
arrow509.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow509);

Arrow arrow510(down);
arrow510.speed = Stress_tempo;
arrow510.pos.y = 44018.0 + Stress_offset;
arrow510.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow510);

Arrow arrow511(right);
arrow511.speed = Stress_tempo;
arrow511.pos.y = 44117.0 + Stress_offset;
arrow511.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow511);

Arrow arrow512(left);
arrow512.speed = Stress_tempo;
arrow512.pos.y = 44216.0 + Stress_offset;
arrow512.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow512);

Arrow arrow513(right);
arrow513.speed = Stress_tempo;
arrow513.pos.y = 44315.0 + Stress_offset;
arrow513.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow513);

Arrow arrow514(down);
arrow514.speed = Stress_tempo;
arrow514.pos.y = 44414.0 + Stress_offset;
arrow514.side = playerSide;
arrow514.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow514);

Arrow arrow515(left);
arrow515.speed = Stress_tempo;
arrow515.pos.y = 44414.0 + Stress_offset;
arrow515.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow515);

Arrow arrow516(left);
arrow516.speed = Stress_tempo;
arrow516.pos.y = 44514.0 + Stress_offset;
arrow516.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow516);

Arrow arrow517(down);
arrow517.speed = Stress_tempo;
arrow517.pos.y = 44612.0 + Stress_offset;
arrow517.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow517);

Arrow arrow518(left);
arrow518.speed = Stress_tempo;
arrow518.pos.y = 44712.0 + Stress_offset;
arrow518.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow518);

Arrow arrow519(up);
arrow519.speed = Stress_tempo;
arrow519.pos.y = 44761.0 + Stress_offset;
arrow519.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow519);

Arrow arrow520(left);
arrow520.speed = Stress_tempo;
arrow520.pos.y = 44811.0 + Stress_offset;
arrow520.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow520);

Arrow arrow521(down);
arrow521.speed = Stress_tempo;
arrow521.pos.y = 44811.0 + Stress_offset;
arrow521.side = playerSide;
arrow521.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow521);

Arrow arrow522(down);
arrow522.speed = Stress_tempo;
arrow522.pos.y = 44910.0 + Stress_offset;
arrow522.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow522);

Arrow arrow523(right);
arrow523.speed = Stress_tempo;
arrow523.pos.y = 45009.0 + Stress_offset;
arrow523.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow523);

Arrow arrow524(left);
arrow524.speed = Stress_tempo;
arrow524.pos.y = 45108.0 + Stress_offset;
arrow524.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow524);

Arrow arrow525(left);
arrow525.speed = Stress_tempo;
arrow525.pos.y = 45207.0 + Stress_offset;
arrow525.side = playerSide;
arrow525.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow525);

Arrow arrow526(down);
arrow526.speed = Stress_tempo;
arrow526.pos.y = 45207.0 + Stress_offset;
arrow526.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow526);

Arrow arrow527(right);
arrow527.speed = Stress_tempo;
arrow527.pos.y = 45257.0 + Stress_offset;
arrow527.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow527);

Arrow arrow528(down);
arrow528.speed = Stress_tempo;
arrow528.pos.y = 45307.0 + Stress_offset;
arrow528.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow528);

Arrow arrow529(left);
arrow529.speed = Stress_tempo;
arrow529.pos.y = 45406.0 + Stress_offset;
arrow529.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow529);

Arrow arrow530(down);
arrow530.speed = Stress_tempo;
arrow530.pos.y = 45505.0 + Stress_offset;
arrow530.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow530);

Arrow arrow531(up);
arrow531.speed = Stress_tempo;
arrow531.pos.y = 45604.0 + Stress_offset;
arrow531.side = computerSide;
arrow531.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow531);

Arrow arrow532(left);
arrow532.speed = Stress_tempo;
arrow532.pos.y = 45604.0 + Stress_offset;
arrow532.side = playerSide;
arrow532.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow532);

Arrow arrow533(left);
arrow533.speed = Stress_tempo;
arrow533.pos.y = 45802.0 + Stress_offset;
arrow533.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow533);

Arrow arrow534(left);
arrow534.speed = Stress_tempo;
arrow534.pos.y = 45901.0 + Stress_offset;
arrow534.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow534);

Arrow arrow535(right);
arrow535.speed = Stress_tempo;
arrow535.pos.y = 46001.0 + Stress_offset;
arrow535.side = playerSide;
arrow535.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow535);

Arrow arrow536(down);
arrow536.speed = Stress_tempo;
arrow536.pos.y = 46001.0 + Stress_offset;
arrow536.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow536);

Arrow arrow537(left);
arrow537.speed = Stress_tempo;
arrow537.pos.y = 46100.0 + Stress_offset;
arrow537.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow537);

Arrow arrow538(right);
arrow538.speed = Stress_tempo;
arrow538.pos.y = 46150.0 + Stress_offset;
arrow538.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow538);

Arrow arrow539(left);
arrow539.speed = Stress_tempo;
arrow539.pos.y = 46199.0 + Stress_offset;
arrow539.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow539);

Arrow arrow540(right);
arrow540.speed = Stress_tempo;
arrow540.pos.y = 46298.0 + Stress_offset;
arrow540.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow540);

Arrow arrow541(left);
arrow541.speed = Stress_tempo;
arrow541.pos.y = 46348.0 + Stress_offset;
arrow541.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow541);

Arrow arrow542(down);
arrow542.speed = Stress_tempo;
arrow542.pos.y = 46397.0 + Stress_offset;
arrow542.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow542);

Arrow arrow543(right);
arrow543.speed = Stress_tempo;
arrow543.pos.y = 46397.0 + Stress_offset;
arrow543.side = playerSide;
arrow543.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow543);

Arrow arrow544(down);
arrow544.speed = Stress_tempo;
arrow544.pos.y = 46496.0 + Stress_offset;
arrow544.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow544);

Arrow arrow545(right);
arrow545.speed = Stress_tempo;
arrow545.pos.y = 46546.0 + Stress_offset;
arrow545.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow545);

Arrow arrow546(up);
arrow546.speed = Stress_tempo;
arrow546.pos.y = 46595.0 + Stress_offset;
arrow546.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow546);

Arrow arrow547(left);
arrow547.speed = Stress_tempo;
arrow547.pos.y = 46695.0 + Stress_offset;
arrow547.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow547);

Arrow arrow548(down);
arrow548.speed = Stress_tempo;
arrow548.pos.y = 46744.0 + Stress_offset;
arrow548.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow548);

Arrow arrow549(up);
arrow549.speed = Stress_tempo;
arrow549.pos.y = 46794.0 + Stress_offset;
arrow549.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow549);

Arrow arrow550(left);
arrow550.speed = Stress_tempo;
arrow550.pos.y = 46794.0 + Stress_offset;
arrow550.side = playerSide;
arrow550.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow550);

Arrow arrow551(right);
arrow551.speed = Stress_tempo;
arrow551.pos.y = 46843.0 + Stress_offset;
arrow551.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow551);

Arrow arrow552(up);
arrow552.speed = Stress_tempo;
arrow552.pos.y = 46893.0 + Stress_offset;
arrow552.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow552);

Arrow arrow553(left);
arrow553.speed = Stress_tempo;
arrow553.pos.y = 46942.0 + Stress_offset;
arrow553.side = computerSide;
arrow553.trailSize = 127;
computerArrowList->insert(computerArrowList->begin(), arrow553);

Arrow arrow554(right);
arrow554.speed = Stress_tempo;
arrow554.pos.y = 47041.0 + Stress_offset;
arrow554.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow554);

Arrow arrow555(up);
arrow555.speed = Stress_tempo;
arrow555.pos.y = 47091.0 + Stress_offset;
arrow555.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow555);

Arrow arrow556(left);
arrow556.speed = Stress_tempo;
arrow556.pos.y = 47190.0 + Stress_offset;
arrow556.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow556);

Arrow arrow557(left);
arrow557.speed = Stress_tempo;
arrow557.pos.y = 47191.0 + Stress_offset;
arrow557.side = playerSide;
arrow557.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow557);

Arrow arrow558(right);
arrow558.speed = Stress_tempo;
arrow558.pos.y = 47290.0 + Stress_offset;
arrow558.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow558);

Arrow arrow559(left);
arrow559.speed = Stress_tempo;
arrow559.pos.y = 47388.0 + Stress_offset;
arrow559.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow559);

Arrow arrow560(up);
arrow560.speed = Stress_tempo;
arrow560.pos.y = 47488.0 + Stress_offset;
arrow560.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow560);

Arrow arrow561(left);
arrow561.speed = Stress_tempo;
arrow561.pos.y = 47587.0 + Stress_offset;
arrow561.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow561);

Arrow arrow562(left);
arrow562.speed = Stress_tempo;
arrow562.pos.y = 47686.0 + Stress_offset;
arrow562.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow562);

Arrow arrow563(down);
arrow563.speed = Stress_tempo;
arrow563.pos.y = 47785.0 + Stress_offset;
arrow563.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow563);

Arrow arrow564(left);
arrow564.speed = Stress_tempo;
arrow564.pos.y = 47884.0 + Stress_offset;
arrow564.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow564);

Arrow arrow565(up);
arrow565.speed = Stress_tempo;
arrow565.pos.y = 47934.0 + Stress_offset;
arrow565.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow565);

Arrow arrow566(left);
arrow566.speed = Stress_tempo;
arrow566.pos.y = 47984.0 + Stress_offset;
arrow566.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow566);

Arrow arrow567(down);
arrow567.speed = Stress_tempo;
arrow567.pos.y = 48082.0 + Stress_offset;
arrow567.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow567);

Arrow arrow568(right);
arrow568.speed = Stress_tempo;
arrow568.pos.y = 48182.0 + Stress_offset;
arrow568.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow568);

Arrow arrow569(left);
arrow569.speed = Stress_tempo;
arrow569.pos.y = 48281.0 + Stress_offset;
arrow569.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow569);

Arrow arrow570(down);
arrow570.speed = Stress_tempo;
arrow570.pos.y = 48380.0 + Stress_offset;
arrow570.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow570);

Arrow arrow571(right);
arrow571.speed = Stress_tempo;
arrow571.pos.y = 48430.0 + Stress_offset;
arrow571.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow571);

Arrow arrow572(down);
arrow572.speed = Stress_tempo;
arrow572.pos.y = 48479.0 + Stress_offset;
arrow572.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow572);

Arrow arrow573(left);
arrow573.speed = Stress_tempo;
arrow573.pos.y = 48578.0 + Stress_offset;
arrow573.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow573);

Arrow arrow574(down);
arrow574.speed = Stress_tempo;
arrow574.pos.y = 48677.0 + Stress_offset;
arrow574.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow574);

Arrow arrow575(up);
arrow575.speed = Stress_tempo;
arrow575.pos.y = 48777.0 + Stress_offset;
arrow575.side = playerSide;
arrow575.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow575);

Arrow arrow576(left);
arrow576.speed = Stress_tempo;
arrow576.pos.y = 48975.0 + Stress_offset;
arrow576.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow576);

Arrow arrow577(left);
arrow577.speed = Stress_tempo;
arrow577.pos.y = 49074.0 + Stress_offset;
arrow577.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow577);

Arrow arrow578(down);
arrow578.speed = Stress_tempo;
arrow578.pos.y = 49173.0 + Stress_offset;
arrow578.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow578);

Arrow arrow579(left);
arrow579.speed = Stress_tempo;
arrow579.pos.y = 49272.0 + Stress_offset;
arrow579.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow579);

Arrow arrow580(right);
arrow580.speed = Stress_tempo;
arrow580.pos.y = 49322.0 + Stress_offset;
arrow580.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow580);

Arrow arrow581(left);
arrow581.speed = Stress_tempo;
arrow581.pos.y = 49372.0 + Stress_offset;
arrow581.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow581);

Arrow arrow582(right);
arrow582.speed = Stress_tempo;
arrow582.pos.y = 49471.0 + Stress_offset;
arrow582.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow582);

Arrow arrow583(left);
arrow583.speed = Stress_tempo;
arrow583.pos.y = 49520.0 + Stress_offset;
arrow583.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow583);

Arrow arrow584(down);
arrow584.speed = Stress_tempo;
arrow584.pos.y = 49570.0 + Stress_offset;
arrow584.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow584);

Arrow arrow585(left);
arrow585.speed = Stress_tempo;
arrow585.pos.y = 49669.0 + Stress_offset;
arrow585.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow585);

Arrow arrow586(right);
arrow586.speed = Stress_tempo;
arrow586.pos.y = 49718.0 + Stress_offset;
arrow586.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow586);

Arrow arrow587(up);
arrow587.speed = Stress_tempo;
arrow587.pos.y = 49768.0 + Stress_offset;
arrow587.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow587);

Arrow arrow588(left);
arrow588.speed = Stress_tempo;
arrow588.pos.y = 49867.0 + Stress_offset;
arrow588.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow588);

Arrow arrow589(down);
arrow589.speed = Stress_tempo;
arrow589.pos.y = 49917.0 + Stress_offset;
arrow589.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow589);

Arrow arrow590(up);
arrow590.speed = Stress_tempo;
arrow590.pos.y = 49966.0 + Stress_offset;
arrow590.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow590);

Arrow arrow591(right);
arrow591.speed = Stress_tempo;
arrow591.pos.y = 50016.0 + Stress_offset;
arrow591.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow591);

Arrow arrow592(up);
arrow592.speed = Stress_tempo;
arrow592.pos.y = 50065.0 + Stress_offset;
arrow592.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow592);

Arrow arrow593(left);
arrow593.speed = Stress_tempo;
arrow593.pos.y = 50115.0 + Stress_offset;
arrow593.side = playerSide;
arrow593.trailSize = 127;
playerArrowList->insert(playerArrowList->begin(), arrow593);

Arrow arrow594(right);
arrow594.speed = Stress_tempo;
arrow594.pos.y = 50214.0 + Stress_offset;
arrow594.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow594);

Arrow arrow595(up);
arrow595.speed = Stress_tempo;
arrow595.pos.y = 50264.0 + Stress_offset;
arrow595.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow595);

Arrow arrow596(down);
arrow596.speed = Stress_tempo;
arrow596.pos.y = 50363.0 + Stress_offset;
arrow596.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow596);

Arrow arrow597(right);
arrow597.speed = Stress_tempo;
arrow597.pos.y = 50462.0 + Stress_offset;
arrow597.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow597);

Arrow arrow598(left);
arrow598.speed = Stress_tempo;
arrow598.pos.y = 50561.0 + Stress_offset;
arrow598.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow598);

Arrow arrow599(up);
arrow599.speed = Stress_tempo;
arrow599.pos.y = 50660.0 + Stress_offset;
arrow599.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow599);

Arrow arrow600(down);
arrow600.speed = Stress_tempo;
arrow600.pos.y = 50760.0 + Stress_offset;
arrow600.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow600);

Arrow arrow601(left);
arrow601.speed = Stress_tempo;
arrow601.pos.y = 50809.0 + Stress_offset;
arrow601.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow601);

Arrow arrow602(right);
arrow602.speed = Stress_tempo;
arrow602.pos.y = 50858.0 + Stress_offset;
arrow602.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow602);

Arrow arrow603(up);
arrow603.speed = Stress_tempo;
arrow603.pos.y = 50958.0 + Stress_offset;
arrow603.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow603);

Arrow arrow604(down);
arrow604.speed = Stress_tempo;
arrow604.pos.y = 51007.0 + Stress_offset;
arrow604.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow604);

Arrow arrow605(right);
arrow605.speed = Stress_tempo;
arrow605.pos.y = 51057.0 + Stress_offset;
arrow605.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow605);

Arrow arrow606(up);
arrow606.speed = Stress_tempo;
arrow606.pos.y = 51156.0 + Stress_offset;
arrow606.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow606);

Arrow arrow607(right);
arrow607.speed = Stress_tempo;
arrow607.pos.y = 51255.0 + Stress_offset;
arrow607.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow607);

Arrow arrow608(up);
arrow608.speed = Stress_tempo;
arrow608.pos.y = 51354.0 + Stress_offset;
arrow608.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow608);

Arrow arrow609(left);
arrow609.speed = Stress_tempo;
arrow609.pos.y = 51453.0 + Stress_offset;
arrow609.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow609);

Arrow arrow610(down);
arrow610.speed = Stress_tempo;
arrow610.pos.y = 51552.0 + Stress_offset;
arrow610.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow610);

Arrow arrow611(left);
arrow611.speed = Stress_tempo;
arrow611.pos.y = 51602.0 + Stress_offset;
arrow611.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow611);

Arrow arrow612(right);
arrow612.speed = Stress_tempo;
arrow612.pos.y = 51651.0 + Stress_offset;
arrow612.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow612);

Arrow arrow613(up);
arrow613.speed = Stress_tempo;
arrow613.pos.y = 51751.0 + Stress_offset;
arrow613.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow613);

Arrow arrow614(down);
arrow614.speed = Stress_tempo;
arrow614.pos.y = 51800.0 + Stress_offset;
arrow614.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow614);

Arrow arrow615(left);
arrow615.speed = Stress_tempo;
arrow615.pos.y = 51850.0 + Stress_offset;
arrow615.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow615);

Arrow arrow616(up);
arrow616.speed = Stress_tempo;
arrow616.pos.y = 51949.0 + Stress_offset;
arrow616.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow616);

Arrow arrow617(right);
arrow617.speed = Stress_tempo;
arrow617.pos.y = 52048.0 + Stress_offset;
arrow617.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow617);

Arrow arrow618(down);
arrow618.speed = Stress_tempo;
arrow618.pos.y = 52147.0 + Stress_offset;
arrow618.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow618);

Arrow arrow619(right);
arrow619.speed = Stress_tempo;
arrow619.pos.y = 52247.0 + Stress_offset;
arrow619.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow619);

Arrow arrow620(up);
arrow620.speed = Stress_tempo;
arrow620.pos.y = 52345.0 + Stress_offset;
arrow620.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow620);

Arrow arrow621(right);
arrow621.speed = Stress_tempo;
arrow621.pos.y = 52395.0 + Stress_offset;
arrow621.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow621);

Arrow arrow622(up);
arrow622.speed = Stress_tempo;
arrow622.pos.y = 52445.0 + Stress_offset;
arrow622.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow622);

Arrow arrow623(down);
arrow623.speed = Stress_tempo;
arrow623.pos.y = 52544.0 + Stress_offset;
arrow623.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow623);

Arrow arrow624(left);
arrow624.speed = Stress_tempo;
arrow624.pos.y = 52594.0 + Stress_offset;
arrow624.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow624);

Arrow arrow625(down);
arrow625.speed = Stress_tempo;
arrow625.pos.y = 52643.0 + Stress_offset;
arrow625.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow625);

Arrow arrow626(right);
arrow626.speed = Stress_tempo;
arrow626.pos.y = 52742.0 + Stress_offset;
arrow626.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow626);

Arrow arrow627(right);
arrow627.speed = Stress_tempo;
arrow627.pos.y = 52841.0 + Stress_offset;
arrow627.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow627);

Arrow arrow628(down);
arrow628.speed = Stress_tempo;
arrow628.pos.y = 52891.0 + Stress_offset;
arrow628.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow628);

Arrow arrow629(right);
arrow629.speed = Stress_tempo;
arrow629.pos.y = 52941.0 + Stress_offset;
arrow629.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow629);

Arrow arrow630(down);
arrow630.speed = Stress_tempo;
arrow630.pos.y = 53040.0 + Stress_offset;
arrow630.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow630);

Arrow arrow631(left);
arrow631.speed = Stress_tempo;
arrow631.pos.y = 53139.0 + Stress_offset;
arrow631.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow631);

Arrow arrow632(right);
arrow632.speed = Stress_tempo;
arrow632.pos.y = 53188.0 + Stress_offset;
arrow632.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow632);

Arrow arrow633(down);
arrow633.speed = Stress_tempo;
arrow633.pos.y = 53238.0 + Stress_offset;
arrow633.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow633);

Arrow arrow634(left);
arrow634.speed = Stress_tempo;
arrow634.pos.y = 53287.0 + Stress_offset;
arrow634.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow634);

Arrow arrow635(down);
arrow635.speed = Stress_tempo;
arrow635.pos.y = 53337.0 + Stress_offset;
arrow635.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow635);

Arrow arrow636(right);
arrow636.speed = Stress_tempo;
arrow636.pos.y = 53436.0 + Stress_offset;
arrow636.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow636);

Arrow arrow637(left);
arrow637.speed = Stress_tempo;
arrow637.pos.y = 53535.0 + Stress_offset;
arrow637.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow637);

Arrow arrow638(right);
arrow638.speed = Stress_tempo;
arrow638.pos.y = 53585.0 + Stress_offset;
arrow638.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow638);

Arrow arrow639(down);
arrow639.speed = Stress_tempo;
arrow639.pos.y = 53634.0 + Stress_offset;
arrow639.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow639);

Arrow arrow640(left);
arrow640.speed = Stress_tempo;
arrow640.pos.y = 53684.0 + Stress_offset;
arrow640.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow640);

Arrow arrow641(down);
arrow641.speed = Stress_tempo;
arrow641.pos.y = 53734.0 + Stress_offset;
arrow641.side = computerSide;
arrow641.trailSize = 169;
computerArrowList->insert(computerArrowList->begin(), arrow641);

Arrow arrow642(down);
arrow642.speed = Stress_tempo;
arrow642.pos.y = 53932.0 + Stress_offset;
arrow642.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow642);

Arrow arrow643(left);
arrow643.speed = Stress_tempo;
arrow643.pos.y = 53981.0 + Stress_offset;
arrow643.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow643);

Arrow arrow644(right);
arrow644.speed = Stress_tempo;
arrow644.pos.y = 54031.0 + Stress_offset;
arrow644.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow644);

Arrow arrow645(up);
arrow645.speed = Stress_tempo;
arrow645.pos.y = 54130.0 + Stress_offset;
arrow645.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow645);

Arrow arrow646(down);
arrow646.speed = Stress_tempo;
arrow646.pos.y = 54180.0 + Stress_offset;
arrow646.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow646);

Arrow arrow647(right);
arrow647.speed = Stress_tempo;
arrow647.pos.y = 54230.0 + Stress_offset;
arrow647.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow647);

Arrow arrow648(up);
arrow648.speed = Stress_tempo;
arrow648.pos.y = 54328.0 + Stress_offset;
arrow648.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow648);

Arrow arrow649(right);
arrow649.speed = Stress_tempo;
arrow649.pos.y = 54428.0 + Stress_offset;
arrow649.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow649);

Arrow arrow650(up);
arrow650.speed = Stress_tempo;
arrow650.pos.y = 54527.0 + Stress_offset;
arrow650.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow650);

Arrow arrow651(left);
arrow651.speed = Stress_tempo;
arrow651.pos.y = 54626.0 + Stress_offset;
arrow651.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow651);

Arrow arrow652(down);
arrow652.speed = Stress_tempo;
arrow652.pos.y = 54725.0 + Stress_offset;
arrow652.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow652);

Arrow arrow653(left);
arrow653.speed = Stress_tempo;
arrow653.pos.y = 54774.0 + Stress_offset;
arrow653.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow653);

Arrow arrow654(right);
arrow654.speed = Stress_tempo;
arrow654.pos.y = 54824.0 + Stress_offset;
arrow654.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow654);

Arrow arrow655(up);
arrow655.speed = Stress_tempo;
arrow655.pos.y = 54924.0 + Stress_offset;
arrow655.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow655);

Arrow arrow656(down);
arrow656.speed = Stress_tempo;
arrow656.pos.y = 54973.0 + Stress_offset;
arrow656.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow656);

Arrow arrow657(left);
arrow657.speed = Stress_tempo;
arrow657.pos.y = 55022.0 + Stress_offset;
arrow657.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow657);

Arrow arrow658(up);
arrow658.speed = Stress_tempo;
arrow658.pos.y = 55121.0 + Stress_offset;
arrow658.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow658);

Arrow arrow659(right);
arrow659.speed = Stress_tempo;
arrow659.pos.y = 55221.0 + Stress_offset;
arrow659.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow659);

Arrow arrow660(down);
arrow660.speed = Stress_tempo;
arrow660.pos.y = 55320.0 + Stress_offset;
arrow660.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow660);

Arrow arrow661(right);
arrow661.speed = Stress_tempo;
arrow661.pos.y = 55419.0 + Stress_offset;
arrow661.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow661);

Arrow arrow662(up);
arrow662.speed = Stress_tempo;
arrow662.pos.y = 55518.0 + Stress_offset;
arrow662.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow662);

Arrow arrow663(right);
arrow663.speed = Stress_tempo;
arrow663.pos.y = 55568.0 + Stress_offset;
arrow663.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow663);

Arrow arrow664(up);
arrow664.speed = Stress_tempo;
arrow664.pos.y = 55617.0 + Stress_offset;
arrow664.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow664);

Arrow arrow665(down);
arrow665.speed = Stress_tempo;
arrow665.pos.y = 55717.0 + Stress_offset;
arrow665.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow665);

Arrow arrow666(left);
arrow666.speed = Stress_tempo;
arrow666.pos.y = 55766.0 + Stress_offset;
arrow666.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow666);

Arrow arrow667(down);
arrow667.speed = Stress_tempo;
arrow667.pos.y = 55815.0 + Stress_offset;
arrow667.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow667);

Arrow arrow668(left);
arrow668.speed = Stress_tempo;
arrow668.pos.y = 55915.0 + Stress_offset;
arrow668.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow668);

Arrow arrow669(right);
arrow669.speed = Stress_tempo;
arrow669.pos.y = 56014.0 + Stress_offset;
arrow669.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow669);

Arrow arrow670(down);
arrow670.speed = Stress_tempo;
arrow670.pos.y = 56063.0 + Stress_offset;
arrow670.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow670);

Arrow arrow671(right);
arrow671.speed = Stress_tempo;
arrow671.pos.y = 56113.0 + Stress_offset;
arrow671.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow671);

Arrow arrow672(down);
arrow672.speed = Stress_tempo;
arrow672.pos.y = 56212.0 + Stress_offset;
arrow672.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow672);

Arrow arrow673(left);
arrow673.speed = Stress_tempo;
arrow673.pos.y = 56311.0 + Stress_offset;
arrow673.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow673);

Arrow arrow674(right);
arrow674.speed = Stress_tempo;
arrow674.pos.y = 56361.0 + Stress_offset;
arrow674.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow674);

Arrow arrow675(down);
arrow675.speed = Stress_tempo;
arrow675.pos.y = 56410.0 + Stress_offset;
arrow675.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow675);

Arrow arrow676(left);
arrow676.speed = Stress_tempo;
arrow676.pos.y = 56460.0 + Stress_offset;
arrow676.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow676);

Arrow arrow677(down);
arrow677.speed = Stress_tempo;
arrow677.pos.y = 56510.0 + Stress_offset;
arrow677.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow677);

Arrow arrow678(right);
arrow678.speed = Stress_tempo;
arrow678.pos.y = 56608.0 + Stress_offset;
arrow678.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow678);

Arrow arrow679(left);
arrow679.speed = Stress_tempo;
arrow679.pos.y = 56708.0 + Stress_offset;
arrow679.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow679);

Arrow arrow680(right);
arrow680.speed = Stress_tempo;
arrow680.pos.y = 56757.0 + Stress_offset;
arrow680.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow680);

Arrow arrow681(down);
arrow681.speed = Stress_tempo;
arrow681.pos.y = 56807.0 + Stress_offset;
arrow681.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow681);

Arrow arrow682(left);
arrow682.speed = Stress_tempo;
arrow682.pos.y = 56857.0 + Stress_offset;
arrow682.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow682);

Arrow arrow683(down);
arrow683.speed = Stress_tempo;
arrow683.pos.y = 56906.0 + Stress_offset;
arrow683.side = playerSide;
arrow683.trailSize = 338;
playerArrowList->insert(playerArrowList->begin(), arrow683);

Arrow arrow684(left);
arrow684.speed = Stress_tempo;
arrow684.pos.y = 57104.0 + Stress_offset;
arrow684.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow684);

Arrow arrow685(right);
arrow685.speed = Stress_tempo;
arrow685.pos.y = 57154.0 + Stress_offset;
arrow685.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow685);

Arrow arrow686(up);
arrow686.speed = Stress_tempo;
arrow686.pos.y = 57204.0 + Stress_offset;
arrow686.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow686);

Arrow arrow687(right);
arrow687.speed = Stress_tempo;
arrow687.pos.y = 57302.0 + Stress_offset;
arrow687.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow687);

Arrow arrow688(left);
arrow688.speed = Stress_tempo;
arrow688.pos.y = 57402.0 + Stress_offset;
arrow688.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow688);

Arrow arrow689(right);
arrow689.speed = Stress_tempo;
arrow689.pos.y = 57451.0 + Stress_offset;
arrow689.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow689);

Arrow arrow690(up);
arrow690.speed = Stress_tempo;
arrow690.pos.y = 57501.0 + Stress_offset;
arrow690.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow690);

Arrow arrow691(right);
arrow691.speed = Stress_tempo;
arrow691.pos.y = 57600.0 + Stress_offset;
arrow691.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow691);

Arrow arrow692(left);
arrow692.speed = Stress_tempo;
arrow692.pos.y = 57699.0 + Stress_offset;
arrow692.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow692);

Arrow arrow693(right);
arrow693.speed = Stress_tempo;
arrow693.pos.y = 57749.0 + Stress_offset;
arrow693.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow693);

Arrow arrow694(up);
arrow694.speed = Stress_tempo;
arrow694.pos.y = 57798.0 + Stress_offset;
arrow694.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow694);

Arrow arrow695(left);
arrow695.speed = Stress_tempo;
arrow695.pos.y = 57897.0 + Stress_offset;
arrow695.side = playerSide;
arrow695.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow695);

Arrow arrow696(right);
arrow696.speed = Stress_tempo;
arrow696.pos.y = 57897.0 + Stress_offset;
arrow696.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow696);

Arrow arrow697(left);
arrow697.speed = Stress_tempo;
arrow697.pos.y = 57997.0 + Stress_offset;
arrow697.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow697);

Arrow arrow698(right);
arrow698.speed = Stress_tempo;
arrow698.pos.y = 58046.0 + Stress_offset;
arrow698.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow698);

Arrow arrow699(up);
arrow699.speed = Stress_tempo;
arrow699.pos.y = 58096.0 + Stress_offset;
arrow699.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow699);

Arrow arrow700(right);
arrow700.speed = Stress_tempo;
arrow700.pos.y = 58195.0 + Stress_offset;
arrow700.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow700);

Arrow arrow701(up);
arrow701.speed = Stress_tempo;
arrow701.pos.y = 58294.0 + Stress_offset;
arrow701.side = playerSide;
arrow701.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow701);

Arrow arrow702(up);
arrow702.speed = Stress_tempo;
arrow702.pos.y = 58294.0 + Stress_offset;
arrow702.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow702);

Arrow arrow703(down);
arrow703.speed = Stress_tempo;
arrow703.pos.y = 58393.0 + Stress_offset;
arrow703.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow703);

Arrow arrow704(left);
arrow704.speed = Stress_tempo;
arrow704.pos.y = 58492.0 + Stress_offset;
arrow704.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow704);

Arrow arrow705(right);
arrow705.speed = Stress_tempo;
arrow705.pos.y = 58591.0 + Stress_offset;
arrow705.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow705);

Arrow arrow706(left);
arrow706.speed = Stress_tempo;
arrow706.pos.y = 58691.0 + Stress_offset;
arrow706.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow706);

Arrow arrow707(right);
arrow707.speed = Stress_tempo;
arrow707.pos.y = 58740.0 + Stress_offset;
arrow707.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow707);

Arrow arrow708(up);
arrow708.speed = Stress_tempo;
arrow708.pos.y = 58790.0 + Stress_offset;
arrow708.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow708);

Arrow arrow709(right);
arrow709.speed = Stress_tempo;
arrow709.pos.y = 58889.0 + Stress_offset;
arrow709.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow709);

Arrow arrow710(left);
arrow710.speed = Stress_tempo;
arrow710.pos.y = 58988.0 + Stress_offset;
arrow710.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow710);

Arrow arrow711(right);
arrow711.speed = Stress_tempo;
arrow711.pos.y = 59038.0 + Stress_offset;
arrow711.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow711);

Arrow arrow712(up);
arrow712.speed = Stress_tempo;
arrow712.pos.y = 59087.0 + Stress_offset;
arrow712.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow712);

Arrow arrow713(right);
arrow713.speed = Stress_tempo;
arrow713.pos.y = 59186.0 + Stress_offset;
arrow713.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow713);

Arrow arrow714(left);
arrow714.speed = Stress_tempo;
arrow714.pos.y = 59285.0 + Stress_offset;
arrow714.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow714);

Arrow arrow715(right);
arrow715.speed = Stress_tempo;
arrow715.pos.y = 59335.0 + Stress_offset;
arrow715.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow715);

Arrow arrow716(up);
arrow716.speed = Stress_tempo;
arrow716.pos.y = 59385.0 + Stress_offset;
arrow716.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow716);

Arrow arrow717(left);
arrow717.speed = Stress_tempo;
arrow717.pos.y = 59484.0 + Stress_offset;
arrow717.side = playerSide;
arrow717.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow717);

Arrow arrow718(right);
arrow718.speed = Stress_tempo;
arrow718.pos.y = 59484.0 + Stress_offset;
arrow718.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow718);

Arrow arrow719(left);
arrow719.speed = Stress_tempo;
arrow719.pos.y = 59583.0 + Stress_offset;
arrow719.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow719);

Arrow arrow720(right);
arrow720.speed = Stress_tempo;
arrow720.pos.y = 59632.0 + Stress_offset;
arrow720.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow720);

Arrow arrow721(up);
arrow721.speed = Stress_tempo;
arrow721.pos.y = 59682.0 + Stress_offset;
arrow721.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow721);

Arrow arrow722(right);
arrow722.speed = Stress_tempo;
arrow722.pos.y = 59781.0 + Stress_offset;
arrow722.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow722);

Arrow arrow723(up);
arrow723.speed = Stress_tempo;
arrow723.pos.y = 59880.0 + Stress_offset;
arrow723.side = playerSide;
arrow723.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow723);

Arrow arrow724(up);
arrow724.speed = Stress_tempo;
arrow724.pos.y = 59880.0 + Stress_offset;
arrow724.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow724);

Arrow arrow725(down);
arrow725.speed = Stress_tempo;
arrow725.pos.y = 59980.0 + Stress_offset;
arrow725.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow725);

Arrow arrow726(left);
arrow726.speed = Stress_tempo;
arrow726.pos.y = 60078.0 + Stress_offset;
arrow726.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow726);

Arrow arrow727(right);
arrow727.speed = Stress_tempo;
arrow727.pos.y = 60178.0 + Stress_offset;
arrow727.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow727);

Arrow arrow728(left);
arrow728.speed = Stress_tempo;
arrow728.pos.y = 60277.0 + Stress_offset;
arrow728.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow728);

Arrow arrow729(right);
arrow729.speed = Stress_tempo;
arrow729.pos.y = 60277.0 + Stress_offset;
arrow729.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow729);

Arrow arrow730(right);
arrow730.speed = Stress_tempo;
arrow730.pos.y = 60327.0 + Stress_offset;
arrow730.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow730);

Arrow arrow731(left);
arrow731.speed = Stress_tempo;
arrow731.pos.y = 60327.0 + Stress_offset;
arrow731.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow731);

Arrow arrow732(up);
arrow732.speed = Stress_tempo;
arrow732.pos.y = 60376.0 + Stress_offset;
arrow732.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow732);

Arrow arrow733(up);
arrow733.speed = Stress_tempo;
arrow733.pos.y = 60376.0 + Stress_offset;
arrow733.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow733);

Arrow arrow734(left);
arrow734.speed = Stress_tempo;
arrow734.pos.y = 60475.0 + Stress_offset;
arrow734.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow734);

Arrow arrow735(right);
arrow735.speed = Stress_tempo;
arrow735.pos.y = 60475.0 + Stress_offset;
arrow735.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow735);

Arrow arrow736(left);
arrow736.speed = Stress_tempo;
arrow736.pos.y = 60574.0 + Stress_offset;
arrow736.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow736);

Arrow arrow737(right);
arrow737.speed = Stress_tempo;
arrow737.pos.y = 60574.0 + Stress_offset;
arrow737.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow737);

Arrow arrow738(right);
arrow738.speed = Stress_tempo;
arrow738.pos.y = 60624.0 + Stress_offset;
arrow738.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow738);

Arrow arrow739(left);
arrow739.speed = Stress_tempo;
arrow739.pos.y = 60624.0 + Stress_offset;
arrow739.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow739);

Arrow arrow740(up);
arrow740.speed = Stress_tempo;
arrow740.pos.y = 60674.0 + Stress_offset;
arrow740.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow740);

Arrow arrow741(up);
arrow741.speed = Stress_tempo;
arrow741.pos.y = 60674.0 + Stress_offset;
arrow741.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow741);

Arrow arrow742(left);
arrow742.speed = Stress_tempo;
arrow742.pos.y = 60772.0 + Stress_offset;
arrow742.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow742);

Arrow arrow743(right);
arrow743.speed = Stress_tempo;
arrow743.pos.y = 60772.0 + Stress_offset;
arrow743.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow743);

Arrow arrow744(left);
arrow744.speed = Stress_tempo;
arrow744.pos.y = 60872.0 + Stress_offset;
arrow744.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow744);

Arrow arrow745(right);
arrow745.speed = Stress_tempo;
arrow745.pos.y = 60872.0 + Stress_offset;
arrow745.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow745);

Arrow arrow746(right);
arrow746.speed = Stress_tempo;
arrow746.pos.y = 60921.0 + Stress_offset;
arrow746.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow746);

Arrow arrow747(left);
arrow747.speed = Stress_tempo;
arrow747.pos.y = 60921.0 + Stress_offset;
arrow747.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow747);

Arrow arrow748(up);
arrow748.speed = Stress_tempo;
arrow748.pos.y = 60971.0 + Stress_offset;
arrow748.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow748);

Arrow arrow749(up);
arrow749.speed = Stress_tempo;
arrow749.pos.y = 60971.0 + Stress_offset;
arrow749.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow749);

Arrow arrow750(left);
arrow750.speed = Stress_tempo;
arrow750.pos.y = 61070.0 + Stress_offset;
arrow750.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow750);

Arrow arrow751(right);
arrow751.speed = Stress_tempo;
arrow751.pos.y = 61070.0 + Stress_offset;
arrow751.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow751);

Arrow arrow752(left);
arrow752.speed = Stress_tempo;
arrow752.pos.y = 61169.0 + Stress_offset;
arrow752.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow752);

Arrow arrow753(right);
arrow753.speed = Stress_tempo;
arrow753.pos.y = 61169.0 + Stress_offset;
arrow753.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow753);

Arrow arrow754(right);
arrow754.speed = Stress_tempo;
arrow754.pos.y = 61219.0 + Stress_offset;
arrow754.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow754);

Arrow arrow755(left);
arrow755.speed = Stress_tempo;
arrow755.pos.y = 61219.0 + Stress_offset;
arrow755.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow755);

Arrow arrow756(up);
arrow756.speed = Stress_tempo;
arrow756.pos.y = 61268.0 + Stress_offset;
arrow756.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow756);

Arrow arrow757(up);
arrow757.speed = Stress_tempo;
arrow757.pos.y = 61268.0 + Stress_offset;
arrow757.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow757);

Arrow arrow758(left);
arrow758.speed = Stress_tempo;
arrow758.pos.y = 61367.0 + Stress_offset;
arrow758.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow758);

Arrow arrow759(right);
arrow759.speed = Stress_tempo;
arrow759.pos.y = 61367.0 + Stress_offset;
arrow759.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow759);

Arrow arrow760(up);
arrow760.speed = Stress_tempo;
arrow760.pos.y = 61467.0 + Stress_offset;
arrow760.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow760);

Arrow arrow761(up);
arrow761.speed = Stress_tempo;
arrow761.pos.y = 61467.0 + Stress_offset;
arrow761.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow761);

Arrow arrow762(down);
arrow762.speed = Stress_tempo;
arrow762.pos.y = 61565.0 + Stress_offset;
arrow762.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow762);

Arrow arrow763(down);
arrow763.speed = Stress_tempo;
arrow763.pos.y = 61565.0 + Stress_offset;
arrow763.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow763);

Arrow arrow764(right);
arrow764.speed = Stress_tempo;
arrow764.pos.y = 61665.0 + Stress_offset;
arrow764.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow764);

Arrow arrow765(left);
arrow765.speed = Stress_tempo;
arrow765.pos.y = 61665.0 + Stress_offset;
arrow765.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow765);

Arrow arrow766(left);
arrow766.speed = Stress_tempo;
arrow766.pos.y = 61764.0 + Stress_offset;
arrow766.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow766);

Arrow arrow767(right);
arrow767.speed = Stress_tempo;
arrow767.pos.y = 61764.0 + Stress_offset;
arrow767.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow767);

Arrow arrow768(left);
arrow768.speed = Stress_tempo;
arrow768.pos.y = 61863.0 + Stress_offset;
arrow768.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow768);

Arrow arrow769(right);
arrow769.speed = Stress_tempo;
arrow769.pos.y = 61863.0 + Stress_offset;
arrow769.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow769);

Arrow arrow770(right);
arrow770.speed = Stress_tempo;
arrow770.pos.y = 61912.0 + Stress_offset;
arrow770.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow770);

Arrow arrow771(left);
arrow771.speed = Stress_tempo;
arrow771.pos.y = 61912.0 + Stress_offset;
arrow771.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow771);

Arrow arrow772(up);
arrow772.speed = Stress_tempo;
arrow772.pos.y = 61962.0 + Stress_offset;
arrow772.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow772);

Arrow arrow773(up);
arrow773.speed = Stress_tempo;
arrow773.pos.y = 61962.0 + Stress_offset;
arrow773.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow773);

Arrow arrow774(left);
arrow774.speed = Stress_tempo;
arrow774.pos.y = 62061.0 + Stress_offset;
arrow774.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow774);

Arrow arrow775(right);
arrow775.speed = Stress_tempo;
arrow775.pos.y = 62061.0 + Stress_offset;
arrow775.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow775);

Arrow arrow776(left);
arrow776.speed = Stress_tempo;
arrow776.pos.y = 62161.0 + Stress_offset;
arrow776.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow776);

Arrow arrow777(right);
arrow777.speed = Stress_tempo;
arrow777.pos.y = 62161.0 + Stress_offset;
arrow777.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow777);

Arrow arrow778(right);
arrow778.speed = Stress_tempo;
arrow778.pos.y = 62210.0 + Stress_offset;
arrow778.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow778);

Arrow arrow779(left);
arrow779.speed = Stress_tempo;
arrow779.pos.y = 62210.0 + Stress_offset;
arrow779.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow779);

Arrow arrow780(up);
arrow780.speed = Stress_tempo;
arrow780.pos.y = 62260.0 + Stress_offset;
arrow780.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow780);

Arrow arrow781(up);
arrow781.speed = Stress_tempo;
arrow781.pos.y = 62260.0 + Stress_offset;
arrow781.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow781);

Arrow arrow782(left);
arrow782.speed = Stress_tempo;
arrow782.pos.y = 62359.0 + Stress_offset;
arrow782.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow782);

Arrow arrow783(right);
arrow783.speed = Stress_tempo;
arrow783.pos.y = 62359.0 + Stress_offset;
arrow783.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow783);

Arrow arrow784(left);
arrow784.speed = Stress_tempo;
arrow784.pos.y = 62458.0 + Stress_offset;
arrow784.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow784);

Arrow arrow785(right);
arrow785.speed = Stress_tempo;
arrow785.pos.y = 62458.0 + Stress_offset;
arrow785.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow785);

Arrow arrow786(right);
arrow786.speed = Stress_tempo;
arrow786.pos.y = 62508.0 + Stress_offset;
arrow786.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow786);

Arrow arrow787(left);
arrow787.speed = Stress_tempo;
arrow787.pos.y = 62508.0 + Stress_offset;
arrow787.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow787);

Arrow arrow788(up);
arrow788.speed = Stress_tempo;
arrow788.pos.y = 62557.0 + Stress_offset;
arrow788.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow788);

Arrow arrow789(up);
arrow789.speed = Stress_tempo;
arrow789.pos.y = 62557.0 + Stress_offset;
arrow789.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow789);

Arrow arrow790(left);
arrow790.speed = Stress_tempo;
arrow790.pos.y = 62656.0 + Stress_offset;
arrow790.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow790);

Arrow arrow791(right);
arrow791.speed = Stress_tempo;
arrow791.pos.y = 62656.0 + Stress_offset;
arrow791.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow791);

Arrow arrow792(left);
arrow792.speed = Stress_tempo;
arrow792.pos.y = 62755.0 + Stress_offset;
arrow792.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow792);

Arrow arrow793(right);
arrow793.speed = Stress_tempo;
arrow793.pos.y = 62755.0 + Stress_offset;
arrow793.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow793);

Arrow arrow794(right);
arrow794.speed = Stress_tempo;
arrow794.pos.y = 62805.0 + Stress_offset;
arrow794.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow794);

Arrow arrow795(left);
arrow795.speed = Stress_tempo;
arrow795.pos.y = 62805.0 + Stress_offset;
arrow795.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow795);

Arrow arrow796(up);
arrow796.speed = Stress_tempo;
arrow796.pos.y = 62854.0 + Stress_offset;
arrow796.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow796);

Arrow arrow797(up);
arrow797.speed = Stress_tempo;
arrow797.pos.y = 62854.0 + Stress_offset;
arrow797.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow797);

Arrow arrow798(left);
arrow798.speed = Stress_tempo;
arrow798.pos.y = 62954.0 + Stress_offset;
arrow798.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow798);

Arrow arrow799(right);
arrow799.speed = Stress_tempo;
arrow799.pos.y = 62954.0 + Stress_offset;
arrow799.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow799);

Arrow arrow800(up);
arrow800.speed = Stress_tempo;
arrow800.pos.y = 63053.0 + Stress_offset;
arrow800.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow800);

Arrow arrow801(up);
arrow801.speed = Stress_tempo;
arrow801.pos.y = 63053.0 + Stress_offset;
arrow801.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow801);

Arrow arrow802(down);
arrow802.speed = Stress_tempo;
arrow802.pos.y = 63152.0 + Stress_offset;
arrow802.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow802);

Arrow arrow803(down);
arrow803.speed = Stress_tempo;
arrow803.pos.y = 63152.0 + Stress_offset;
arrow803.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow803);

Arrow arrow804(right);
arrow804.speed = Stress_tempo;
arrow804.pos.y = 63251.0 + Stress_offset;
arrow804.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow804);

Arrow arrow805(left);
arrow805.speed = Stress_tempo;
arrow805.pos.y = 63251.0 + Stress_offset;
arrow805.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow805);

Arrow arrow806(left);
arrow806.speed = Stress_tempo;
arrow806.pos.y = 63350.0 + Stress_offset;
arrow806.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow806);

Arrow arrow807(right);
arrow807.speed = Stress_tempo;
arrow807.pos.y = 63350.0 + Stress_offset;
arrow807.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow807);

Arrow arrow808(right);
arrow808.speed = Stress_tempo;
arrow808.pos.y = 63450.0 + Stress_offset;
arrow808.side = playerSide;
arrow808.trailSize = 589;
playerArrowList->insert(playerArrowList->begin(), arrow808);

Arrow arrow809(right);
arrow809.speed = Stress_tempo;
arrow809.pos.y = 63450.0 + Stress_offset;
arrow809.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow809);

Arrow arrow810(up);
arrow810.speed = Stress_tempo;
arrow810.pos.y = 63499.0 + Stress_offset;
arrow810.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow810);

Arrow arrow811(right);
arrow811.speed = Stress_tempo;
arrow811.pos.y = 63548.0 + Stress_offset;
arrow811.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow811);

Arrow arrow812(up);
arrow812.speed = Stress_tempo;
arrow812.pos.y = 63598.0 + Stress_offset;
arrow812.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow812);

Arrow arrow813(left);
arrow813.speed = Stress_tempo;
arrow813.pos.y = 63648.0 + Stress_offset;
arrow813.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow813);

Arrow arrow814(down);
arrow814.speed = Stress_tempo;
arrow814.pos.y = 63747.0 + Stress_offset;
arrow814.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow814);

Arrow arrow815(down);
arrow815.speed = Stress_tempo;
arrow815.pos.y = 63846.0 + Stress_offset;
arrow815.side = playerSide;
arrow815.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow815);

Arrow arrow816(right);
arrow816.speed = Stress_tempo;
arrow816.pos.y = 63846.0 + Stress_offset;
arrow816.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow816);

Arrow arrow817(up);
arrow817.speed = Stress_tempo;
arrow817.pos.y = 63895.0 + Stress_offset;
arrow817.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow817);

Arrow arrow818(right);
arrow818.speed = Stress_tempo;
arrow818.pos.y = 63945.0 + Stress_offset;
arrow818.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow818);

Arrow arrow819(up);
arrow819.speed = Stress_tempo;
arrow819.pos.y = 63995.0 + Stress_offset;
arrow819.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow819);

Arrow arrow820(left);
arrow820.speed = Stress_tempo;
arrow820.pos.y = 64044.0 + Stress_offset;
arrow820.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow820);

Arrow arrow821(down);
arrow821.speed = Stress_tempo;
arrow821.pos.y = 64143.0 + Stress_offset;
arrow821.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow821);

Arrow arrow822(up);
arrow822.speed = Stress_tempo;
arrow822.pos.y = 64242.0 + Stress_offset;
arrow822.side = playerSide;
arrow822.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow822);

Arrow arrow823(right);
arrow823.speed = Stress_tempo;
arrow823.pos.y = 64242.0 + Stress_offset;
arrow823.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow823);

Arrow arrow824(left);
arrow824.speed = Stress_tempo;
arrow824.pos.y = 64292.0 + Stress_offset;
arrow824.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow824);

Arrow arrow825(up);
arrow825.speed = Stress_tempo;
arrow825.pos.y = 64342.0 + Stress_offset;
arrow825.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow825);

Arrow arrow826(right);
arrow826.speed = Stress_tempo;
arrow826.pos.y = 64391.0 + Stress_offset;
arrow826.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow826);

Arrow arrow827(left);
arrow827.speed = Stress_tempo;
arrow827.pos.y = 64441.0 + Stress_offset;
arrow827.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow827);

Arrow arrow828(down);
arrow828.speed = Stress_tempo;
arrow828.pos.y = 64540.0 + Stress_offset;
arrow828.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow828);

Arrow arrow829(down);
arrow829.speed = Stress_tempo;
arrow829.pos.y = 64639.0 + Stress_offset;
arrow829.side = playerSide;
arrow829.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow829);

Arrow arrow830(right);
arrow830.speed = Stress_tempo;
arrow830.pos.y = 64639.0 + Stress_offset;
arrow830.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow830);

Arrow arrow831(up);
arrow831.speed = Stress_tempo;
arrow831.pos.y = 64688.0 + Stress_offset;
arrow831.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow831);

Arrow arrow832(right);
arrow832.speed = Stress_tempo;
arrow832.pos.y = 64738.0 + Stress_offset;
arrow832.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow832);

Arrow arrow833(up);
arrow833.speed = Stress_tempo;
arrow833.pos.y = 64788.0 + Stress_offset;
arrow833.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow833);

Arrow arrow834(left);
arrow834.speed = Stress_tempo;
arrow834.pos.y = 64837.0 + Stress_offset;
arrow834.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow834);

Arrow arrow835(down);
arrow835.speed = Stress_tempo;
arrow835.pos.y = 64937.0 + Stress_offset;
arrow835.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow835);

Arrow arrow836(right);
arrow836.speed = Stress_tempo;
arrow836.pos.y = 65035.0 + Stress_offset;
arrow836.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow836);

Arrow arrow837(up);
arrow837.speed = Stress_tempo;
arrow837.pos.y = 65085.0 + Stress_offset;
arrow837.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow837);

Arrow arrow838(right);
arrow838.speed = Stress_tempo;
arrow838.pos.y = 65135.0 + Stress_offset;
arrow838.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow838);

Arrow arrow839(up);
arrow839.speed = Stress_tempo;
arrow839.pos.y = 65184.0 + Stress_offset;
arrow839.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow839);

Arrow arrow840(left);
arrow840.speed = Stress_tempo;
arrow840.pos.y = 65234.0 + Stress_offset;
arrow840.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow840);

Arrow arrow841(down);
arrow841.speed = Stress_tempo;
arrow841.pos.y = 65333.0 + Stress_offset;
arrow841.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow841);

Arrow arrow842(right);
arrow842.speed = Stress_tempo;
arrow842.pos.y = 65432.0 + Stress_offset;
arrow842.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow842);

Arrow arrow843(up);
arrow843.speed = Stress_tempo;
arrow843.pos.y = 65482.0 + Stress_offset;
arrow843.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow843);

Arrow arrow844(right);
arrow844.speed = Stress_tempo;
arrow844.pos.y = 65531.0 + Stress_offset;
arrow844.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow844);

Arrow arrow845(up);
arrow845.speed = Stress_tempo;
arrow845.pos.y = 65581.0 + Stress_offset;
arrow845.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow845);

Arrow arrow846(left);
arrow846.speed = Stress_tempo;
arrow846.pos.y = 65631.0 + Stress_offset;
arrow846.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow846);

Arrow arrow847(down);
arrow847.speed = Stress_tempo;
arrow847.pos.y = 65730.0 + Stress_offset;
arrow847.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow847);

Arrow arrow848(right);
arrow848.speed = Stress_tempo;
arrow848.pos.y = 65829.0 + Stress_offset;
arrow848.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow848);

Arrow arrow849(left);
arrow849.speed = Stress_tempo;
arrow849.pos.y = 65878.0 + Stress_offset;
arrow849.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow849);

Arrow arrow850(up);
arrow850.speed = Stress_tempo;
arrow850.pos.y = 65928.0 + Stress_offset;
arrow850.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow850);

Arrow arrow851(right);
arrow851.speed = Stress_tempo;
arrow851.pos.y = 65977.0 + Stress_offset;
arrow851.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow851);

Arrow arrow852(left);
arrow852.speed = Stress_tempo;
arrow852.pos.y = 66027.0 + Stress_offset;
arrow852.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow852);

Arrow arrow853(down);
arrow853.speed = Stress_tempo;
arrow853.pos.y = 66126.0 + Stress_offset;
arrow853.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow853);

Arrow arrow854(right);
arrow854.speed = Stress_tempo;
arrow854.pos.y = 66225.0 + Stress_offset;
arrow854.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow854);

Arrow arrow855(up);
arrow855.speed = Stress_tempo;
arrow855.pos.y = 66275.0 + Stress_offset;
arrow855.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow855);

Arrow arrow856(right);
arrow856.speed = Stress_tempo;
arrow856.pos.y = 66324.0 + Stress_offset;
arrow856.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow856);

Arrow arrow857(up);
arrow857.speed = Stress_tempo;
arrow857.pos.y = 66374.0 + Stress_offset;
arrow857.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow857);

Arrow arrow858(left);
arrow858.speed = Stress_tempo;
arrow858.pos.y = 66424.0 + Stress_offset;
arrow858.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow858);

Arrow arrow859(down);
arrow859.speed = Stress_tempo;
arrow859.pos.y = 66522.0 + Stress_offset;
arrow859.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow859);

Arrow arrow860(right);
arrow860.speed = Stress_tempo;
arrow860.pos.y = 66622.0 + Stress_offset;
arrow860.side = playerSide;
arrow860.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow860);

Arrow arrow861(up);
arrow861.speed = Stress_tempo;
arrow861.pos.y = 66622.0 + Stress_offset;
arrow861.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow861);

Arrow arrow862(right);
arrow862.speed = Stress_tempo;
arrow862.pos.y = 66721.0 + Stress_offset;
arrow862.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow862);

Arrow arrow863(down);
arrow863.speed = Stress_tempo;
arrow863.pos.y = 66820.0 + Stress_offset;
arrow863.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow863);

Arrow arrow864(right);
arrow864.speed = Stress_tempo;
arrow864.pos.y = 66920.0 + Stress_offset;
arrow864.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow864);

Arrow arrow865(down);
arrow865.speed = Stress_tempo;
arrow865.pos.y = 67018.0 + Stress_offset;
arrow865.side = playerSide;
arrow865.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow865);

Arrow arrow866(left);
arrow866.speed = Stress_tempo;
arrow866.pos.y = 67018.0 + Stress_offset;
arrow866.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow866);

Arrow arrow867(down);
arrow867.speed = Stress_tempo;
arrow867.pos.y = 67118.0 + Stress_offset;
arrow867.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow867);

Arrow arrow868(left);
arrow868.speed = Stress_tempo;
arrow868.pos.y = 67217.0 + Stress_offset;
arrow868.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow868);

Arrow arrow869(right);
arrow869.speed = Stress_tempo;
arrow869.pos.y = 67266.0 + Stress_offset;
arrow869.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow869);

Arrow arrow870(down);
arrow870.speed = Stress_tempo;
arrow870.pos.y = 67316.0 + Stress_offset;
arrow870.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow870);

Arrow arrow871(left);
arrow871.speed = Stress_tempo;
arrow871.pos.y = 67365.0 + Stress_offset;
arrow871.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow871);

Arrow arrow872(up);
arrow872.speed = Stress_tempo;
arrow872.pos.y = 67415.0 + Stress_offset;
arrow872.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow872);

Arrow arrow873(left);
arrow873.speed = Stress_tempo;
arrow873.pos.y = 67415.0 + Stress_offset;
arrow873.side = playerSide;
arrow873.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow873);

Arrow arrow874(right);
arrow874.speed = Stress_tempo;
arrow874.pos.y = 67514.0 + Stress_offset;
arrow874.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow874);

Arrow arrow875(down);
arrow875.speed = Stress_tempo;
arrow875.pos.y = 67613.0 + Stress_offset;
arrow875.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow875);

Arrow arrow876(right);
arrow876.speed = Stress_tempo;
arrow876.pos.y = 67712.0 + Stress_offset;
arrow876.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow876);

Arrow arrow877(down);
arrow877.speed = Stress_tempo;
arrow877.pos.y = 67811.0 + Stress_offset;
arrow877.side = playerSide;
arrow877.trailSize = 591;
playerArrowList->insert(playerArrowList->begin(), arrow877);

Arrow arrow878(left);
arrow878.speed = Stress_tempo;
arrow878.pos.y = 67811.0 + Stress_offset;
arrow878.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow878);

Arrow arrow879(right);
arrow879.speed = Stress_tempo;
arrow879.pos.y = 67861.0 + Stress_offset;
arrow879.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow879);

Arrow arrow880(down);
arrow880.speed = Stress_tempo;
arrow880.pos.y = 67911.0 + Stress_offset;
arrow880.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow880);

Arrow arrow881(left);
arrow881.speed = Stress_tempo;
arrow881.pos.y = 67960.0 + Stress_offset;
arrow881.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow881);

Arrow arrow882(up);
arrow882.speed = Stress_tempo;
arrow882.pos.y = 68010.0 + Stress_offset;
arrow882.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow882);

Arrow arrow883(down);
arrow883.speed = Stress_tempo;
arrow883.pos.y = 68109.0 + Stress_offset;
arrow883.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow883);

Arrow arrow884(up);
arrow884.speed = Stress_tempo;
arrow884.pos.y = 68208.0 + Stress_offset;
arrow884.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow884);

Arrow arrow885(up);
arrow885.speed = Stress_tempo;
arrow885.pos.y = 68208.0 + Stress_offset;
arrow885.side = computerSide;
arrow885.trailSize = 506;
computerArrowList->insert(computerArrowList->begin(), arrow885);

Arrow arrow886(right);
arrow886.speed = Stress_tempo;
arrow886.pos.y = 68307.0 + Stress_offset;
arrow886.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow886);

Arrow arrow887(down);
arrow887.speed = Stress_tempo;
arrow887.pos.y = 68407.0 + Stress_offset;
arrow887.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow887);

Arrow arrow888(right);
arrow888.speed = Stress_tempo;
arrow888.pos.y = 68505.0 + Stress_offset;
arrow888.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow888);

Arrow arrow889(left);
arrow889.speed = Stress_tempo;
arrow889.pos.y = 68605.0 + Stress_offset;
arrow889.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow889);

Arrow arrow890(down);
arrow890.speed = Stress_tempo;
arrow890.pos.y = 68704.0 + Stress_offset;
arrow890.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow890);

Arrow arrow891(left);
arrow891.speed = Stress_tempo;
arrow891.pos.y = 68803.0 + Stress_offset;
arrow891.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow891);

Arrow arrow892(right);
arrow892.speed = Stress_tempo;
arrow892.pos.y = 68852.0 + Stress_offset;
arrow892.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow892);

Arrow arrow893(down);
arrow893.speed = Stress_tempo;
arrow893.pos.y = 68902.0 + Stress_offset;
arrow893.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow893);

Arrow arrow894(left);
arrow894.speed = Stress_tempo;
arrow894.pos.y = 68952.0 + Stress_offset;
arrow894.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow894);

Arrow arrow895(up);
arrow895.speed = Stress_tempo;
arrow895.pos.y = 69001.0 + Stress_offset;
arrow895.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow895);

Arrow arrow896(right);
arrow896.speed = Stress_tempo;
arrow896.pos.y = 69100.0 + Stress_offset;
arrow896.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow896);

Arrow arrow897(down);
arrow897.speed = Stress_tempo;
arrow897.pos.y = 69200.0 + Stress_offset;
arrow897.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow897);

Arrow arrow898(right);
arrow898.speed = Stress_tempo;
arrow898.pos.y = 69298.0 + Stress_offset;
arrow898.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow898);

Arrow arrow899(left);
arrow899.speed = Stress_tempo;
arrow899.pos.y = 69398.0 + Stress_offset;
arrow899.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow899);

Arrow arrow900(right);
arrow900.speed = Stress_tempo;
arrow900.pos.y = 69447.0 + Stress_offset;
arrow900.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow900);

Arrow arrow901(down);
arrow901.speed = Stress_tempo;
arrow901.pos.y = 69497.0 + Stress_offset;
arrow901.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow901);

Arrow arrow902(left);
arrow902.speed = Stress_tempo;
arrow902.pos.y = 69547.0 + Stress_offset;
arrow902.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow902);

Arrow arrow903(up);
arrow903.speed = Stress_tempo;
arrow903.pos.y = 69597.0 + Stress_offset;
arrow903.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow903);

Arrow arrow904(down);
arrow904.speed = Stress_tempo;
arrow904.pos.y = 69695.0 + Stress_offset;
arrow904.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow904);

}
void Stress_Normal(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList){
    // AUTO-GENERATED CHART

Arrow arrow0(down);
arrow0.speed = Stress_tempo;
arrow0.pos.y = 0.0 + Stress_offset;
arrow0.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow0);

Arrow arrow1(right);
arrow1.speed = Stress_tempo;
arrow1.pos.y = 99.0 + Stress_offset;
arrow1.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow1);

Arrow arrow2(left);
arrow2.speed = Stress_tempo;
arrow2.pos.y = 198.0 + Stress_offset;
arrow2.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow2);

Arrow arrow3(left);
arrow3.speed = Stress_tempo;
arrow3.pos.y = 297.0 + Stress_offset;
arrow3.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow3);

Arrow arrow4(up);
arrow4.speed = Stress_tempo;
arrow4.pos.y = 396.0 + Stress_offset;
arrow4.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow4);

Arrow arrow5(right);
arrow5.speed = Stress_tempo;
arrow5.pos.y = 495.0 + Stress_offset;
arrow5.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow5);

Arrow arrow6(down);
arrow6.speed = Stress_tempo;
arrow6.pos.y = 594.0 + Stress_offset;
arrow6.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow6);

Arrow arrow7(right);
arrow7.speed = Stress_tempo;
arrow7.pos.y = 693.0 + Stress_offset;
arrow7.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow7);

Arrow arrow8(left);
arrow8.speed = Stress_tempo;
arrow8.pos.y = 792.0 + Stress_offset;
arrow8.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow8);

Arrow arrow9(right);
arrow9.speed = Stress_tempo;
arrow9.pos.y = 891.0 + Stress_offset;
arrow9.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow9);

Arrow arrow10(up);
arrow10.speed = Stress_tempo;
arrow10.pos.y = 991.0 + Stress_offset;
arrow10.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow10);

Arrow arrow11(right);
arrow11.speed = Stress_tempo;
arrow11.pos.y = 1090.0 + Stress_offset;
arrow11.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow11);

Arrow arrow12(down);
arrow12.speed = Stress_tempo;
arrow12.pos.y = 1189.0 + Stress_offset;
arrow12.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow12);

Arrow arrow13(right);
arrow13.speed = Stress_tempo;
arrow13.pos.y = 1288.0 + Stress_offset;
arrow13.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow13);

Arrow arrow14(left);
arrow14.speed = Stress_tempo;
arrow14.pos.y = 1387.0 + Stress_offset;
arrow14.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow14);

Arrow arrow15(right);
arrow15.speed = Stress_tempo;
arrow15.pos.y = 1487.0 + Stress_offset;
arrow15.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow15);

Arrow arrow16(down);
arrow16.speed = Stress_tempo;
arrow16.pos.y = 1585.0 + Stress_offset;
arrow16.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow16);

Arrow arrow17(up);
arrow17.speed = Stress_tempo;
arrow17.pos.y = 1685.0 + Stress_offset;
arrow17.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow17);

Arrow arrow18(left);
arrow18.speed = Stress_tempo;
arrow18.pos.y = 1784.0 + Stress_offset;
arrow18.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow18);

Arrow arrow19(left);
arrow19.speed = Stress_tempo;
arrow19.pos.y = 1883.0 + Stress_offset;
arrow19.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow19);

Arrow arrow20(up);
arrow20.speed = Stress_tempo;
arrow20.pos.y = 1982.0 + Stress_offset;
arrow20.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow20);

Arrow arrow21(right);
arrow21.speed = Stress_tempo;
arrow21.pos.y = 2081.0 + Stress_offset;
arrow21.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow21);

Arrow arrow22(down);
arrow22.speed = Stress_tempo;
arrow22.pos.y = 2180.0 + Stress_offset;
arrow22.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow22);

Arrow arrow23(right);
arrow23.speed = Stress_tempo;
arrow23.pos.y = 2280.0 + Stress_offset;
arrow23.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow23);

Arrow arrow24(left);
arrow24.speed = Stress_tempo;
arrow24.pos.y = 2378.0 + Stress_offset;
arrow24.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow24);

Arrow arrow25(right);
arrow25.speed = Stress_tempo;
arrow25.pos.y = 2478.0 + Stress_offset;
arrow25.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow25);

Arrow arrow26(up);
arrow26.speed = Stress_tempo;
arrow26.pos.y = 2577.0 + Stress_offset;
arrow26.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow26);

Arrow arrow27(right);
arrow27.speed = Stress_tempo;
arrow27.pos.y = 2676.0 + Stress_offset;
arrow27.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow27);

Arrow arrow28(down);
arrow28.speed = Stress_tempo;
arrow28.pos.y = 2775.0 + Stress_offset;
arrow28.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow28);

Arrow arrow29(right);
arrow29.speed = Stress_tempo;
arrow29.pos.y = 2874.0 + Stress_offset;
arrow29.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow29);

Arrow arrow30(left);
arrow30.speed = Stress_tempo;
arrow30.pos.y = 2974.0 + Stress_offset;
arrow30.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow30);

Arrow arrow31(right);
arrow31.speed = Stress_tempo;
arrow31.pos.y = 3072.0 + Stress_offset;
arrow31.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow31);

Arrow arrow32(down);
arrow32.speed = Stress_tempo;
arrow32.pos.y = 3172.0 + Stress_offset;
arrow32.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow32);

Arrow arrow33(right);
arrow33.speed = Stress_tempo;
arrow33.pos.y = 3271.0 + Stress_offset;
arrow33.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow33);

Arrow arrow34(left);
arrow34.speed = Stress_tempo;
arrow34.pos.y = 3370.0 + Stress_offset;
arrow34.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow34);

Arrow arrow35(left);
arrow35.speed = Stress_tempo;
arrow35.pos.y = 3470.0 + Stress_offset;
arrow35.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow35);

Arrow arrow36(up);
arrow36.speed = Stress_tempo;
arrow36.pos.y = 3568.0 + Stress_offset;
arrow36.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow36);

Arrow arrow37(down);
arrow37.speed = Stress_tempo;
arrow37.pos.y = 3767.0 + Stress_offset;
arrow37.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow37);

Arrow arrow38(left);
arrow38.speed = Stress_tempo;
arrow38.pos.y = 3965.0 + Stress_offset;
arrow38.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow38);

Arrow arrow39(right);
arrow39.speed = Stress_tempo;
arrow39.pos.y = 4064.0 + Stress_offset;
arrow39.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow39);

Arrow arrow40(up);
arrow40.speed = Stress_tempo;
arrow40.pos.y = 4164.0 + Stress_offset;
arrow40.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow40);

Arrow arrow41(right);
arrow41.speed = Stress_tempo;
arrow41.pos.y = 4262.0 + Stress_offset;
arrow41.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow41);

Arrow arrow42(down);
arrow42.speed = Stress_tempo;
arrow42.pos.y = 4362.0 + Stress_offset;
arrow42.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow42);

Arrow arrow43(right);
arrow43.speed = Stress_tempo;
arrow43.pos.y = 4461.0 + Stress_offset;
arrow43.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow43);

Arrow arrow44(down);
arrow44.speed = Stress_tempo;
arrow44.pos.y = 4560.0 + Stress_offset;
arrow44.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow44);

Arrow arrow45(left);
arrow45.speed = Stress_tempo;
arrow45.pos.y = 4659.0 + Stress_offset;
arrow45.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow45);

Arrow arrow46(down);
arrow46.speed = Stress_tempo;
arrow46.pos.y = 4758.0 + Stress_offset;
arrow46.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow46);

Arrow arrow47(right);
arrow47.speed = Stress_tempo;
arrow47.pos.y = 4857.0 + Stress_offset;
arrow47.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow47);

Arrow arrow48(left);
arrow48.speed = Stress_tempo;
arrow48.pos.y = 4957.0 + Stress_offset;
arrow48.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow48);

Arrow arrow49(left);
arrow49.speed = Stress_tempo;
arrow49.pos.y = 5056.0 + Stress_offset;
arrow49.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow49);

Arrow arrow50(up);
arrow50.speed = Stress_tempo;
arrow50.pos.y = 5155.0 + Stress_offset;
arrow50.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow50);

Arrow arrow51(down);
arrow51.speed = Stress_tempo;
arrow51.pos.y = 5353.0 + Stress_offset;
arrow51.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow51);

Arrow arrow52(left);
arrow52.speed = Stress_tempo;
arrow52.pos.y = 5551.0 + Stress_offset;
arrow52.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow52);

Arrow arrow53(right);
arrow53.speed = Stress_tempo;
arrow53.pos.y = 5651.0 + Stress_offset;
arrow53.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow53);

Arrow arrow54(up);
arrow54.speed = Stress_tempo;
arrow54.pos.y = 5750.0 + Stress_offset;
arrow54.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow54);

Arrow arrow55(right);
arrow55.speed = Stress_tempo;
arrow55.pos.y = 5849.0 + Stress_offset;
arrow55.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow55);

Arrow arrow56(down);
arrow56.speed = Stress_tempo;
arrow56.pos.y = 5948.0 + Stress_offset;
arrow56.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow56);

Arrow arrow57(right);
arrow57.speed = Stress_tempo;
arrow57.pos.y = 6047.0 + Stress_offset;
arrow57.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow57);

Arrow arrow58(left);
arrow58.speed = Stress_tempo;
arrow58.pos.y = 6146.0 + Stress_offset;
arrow58.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow58);

Arrow arrow59(right);
arrow59.speed = Stress_tempo;
arrow59.pos.y = 6245.0 + Stress_offset;
arrow59.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow59);

Arrow arrow60(left);
arrow60.speed = Stress_tempo;
arrow60.pos.y = 6542.0 + Stress_offset;
arrow60.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow60);

Arrow arrow61(down);
arrow61.speed = Stress_tempo;
arrow61.pos.y = 6642.0 + Stress_offset;
arrow61.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow61);

Arrow arrow62(right);
arrow62.speed = Stress_tempo;
arrow62.pos.y = 6741.0 + Stress_offset;
arrow62.side = computerSide;
arrow62.trailSize = 296;
computerArrowList->insert(computerArrowList->begin(), arrow62);

Arrow arrow63(down);
arrow63.speed = Stress_tempo;
arrow63.pos.y = 6939.0 + Stress_offset;
arrow63.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow63);

Arrow arrow64(left);
arrow64.speed = Stress_tempo;
arrow64.pos.y = 7137.0 + Stress_offset;
arrow64.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow64);

Arrow arrow65(left);
arrow65.speed = Stress_tempo;
arrow65.pos.y = 7335.0 + Stress_offset;
arrow65.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow65);

Arrow arrow66(left);
arrow66.speed = Stress_tempo;
arrow66.pos.y = 7534.0 + Stress_offset;
arrow66.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow66);

Arrow arrow67(left);
arrow67.speed = Stress_tempo;
arrow67.pos.y = 7633.0 + Stress_offset;
arrow67.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow67);

Arrow arrow68(up);
arrow68.speed = Stress_tempo;
arrow68.pos.y = 7732.0 + Stress_offset;
arrow68.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow68);

Arrow arrow69(right);
arrow69.speed = Stress_tempo;
arrow69.pos.y = 7782.0 + Stress_offset;
arrow69.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow69);

Arrow arrow70(up);
arrow70.speed = Stress_tempo;
arrow70.pos.y = 7831.0 + Stress_offset;
arrow70.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow70);

Arrow arrow71(down);
arrow71.speed = Stress_tempo;
arrow71.pos.y = 7931.0 + Stress_offset;
arrow71.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow71);

Arrow arrow72(right);
arrow72.speed = Stress_tempo;
arrow72.pos.y = 8030.0 + Stress_offset;
arrow72.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow72);

Arrow arrow73(up);
arrow73.speed = Stress_tempo;
arrow73.pos.y = 8129.0 + Stress_offset;
arrow73.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow73);

Arrow arrow74(down);
arrow74.speed = Stress_tempo;
arrow74.pos.y = 8228.0 + Stress_offset;
arrow74.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow74);

Arrow arrow75(right);
arrow75.speed = Stress_tempo;
arrow75.pos.y = 8327.0 + Stress_offset;
arrow75.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow75);

Arrow arrow76(up);
arrow76.speed = Stress_tempo;
arrow76.pos.y = 8426.0 + Stress_offset;
arrow76.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow76);

Arrow arrow77(down);
arrow77.speed = Stress_tempo;
arrow77.pos.y = 8525.0 + Stress_offset;
arrow77.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow77);

Arrow arrow78(right);
arrow78.speed = Stress_tempo;
arrow78.pos.y = 8575.0 + Stress_offset;
arrow78.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow78);

Arrow arrow79(up);
arrow79.speed = Stress_tempo;
arrow79.pos.y = 8624.0 + Stress_offset;
arrow79.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow79);

Arrow arrow80(left);
arrow80.speed = Stress_tempo;
arrow80.pos.y = 8724.0 + Stress_offset;
arrow80.side = playerSide;
arrow80.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow80);

Arrow arrow81(left);
arrow81.speed = Stress_tempo;
arrow81.pos.y = 8724.0 + Stress_offset;
arrow81.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow81);

Arrow arrow82(right);
arrow82.speed = Stress_tempo;
arrow82.pos.y = 8823.0 + Stress_offset;
arrow82.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow82);

Arrow arrow83(down);
arrow83.speed = Stress_tempo;
arrow83.pos.y = 8922.0 + Stress_offset;
arrow83.side = playerSide;
arrow83.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow83);

Arrow arrow84(up);
arrow84.speed = Stress_tempo;
arrow84.pos.y = 8922.0 + Stress_offset;
arrow84.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow84);

Arrow arrow85(right);
arrow85.speed = Stress_tempo;
arrow85.pos.y = 9021.0 + Stress_offset;
arrow85.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow85);

Arrow arrow86(right);
arrow86.speed = Stress_tempo;
arrow86.pos.y = 9120.0 + Stress_offset;
arrow86.side = playerSide;
arrow86.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow86);

Arrow arrow87(down);
arrow87.speed = Stress_tempo;
arrow87.pos.y = 9120.0 + Stress_offset;
arrow87.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow87);

Arrow arrow88(right);
arrow88.speed = Stress_tempo;
arrow88.pos.y = 9220.0 + Stress_offset;
arrow88.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow88);

Arrow arrow89(down);
arrow89.speed = Stress_tempo;
arrow89.pos.y = 9318.0 + Stress_offset;
arrow89.side = playerSide;
arrow89.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow89);

Arrow arrow90(left);
arrow90.speed = Stress_tempo;
arrow90.pos.y = 9318.0 + Stress_offset;
arrow90.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow90);

Arrow arrow91(right);
arrow91.speed = Stress_tempo;
arrow91.pos.y = 9418.0 + Stress_offset;
arrow91.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow91);

Arrow arrow92(right);
arrow92.speed = Stress_tempo;
arrow92.pos.y = 9517.0 + Stress_offset;
arrow92.side = playerSide;
arrow92.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow92);

Arrow arrow93(left);
arrow93.speed = Stress_tempo;
arrow93.pos.y = 9715.0 + Stress_offset;
arrow93.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow93);

Arrow arrow94(down);
arrow94.speed = Stress_tempo;
arrow94.pos.y = 9814.0 + Stress_offset;
arrow94.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow94);

Arrow arrow95(right);
arrow95.speed = Stress_tempo;
arrow95.pos.y = 9913.0 + Stress_offset;
arrow95.side = playerSide;
arrow95.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow95);

Arrow arrow96(down);
arrow96.speed = Stress_tempo;
arrow96.pos.y = 10112.0 + Stress_offset;
arrow96.side = playerSide;
arrow96.trailSize = 253;
playerArrowList->insert(playerArrowList->begin(), arrow96);

Arrow arrow97(left);
arrow97.speed = Stress_tempo;
arrow97.pos.y = 10310.0 + Stress_offset;
arrow97.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow97);

Arrow arrow98(left);
arrow98.speed = Stress_tempo;
arrow98.pos.y = 10508.0 + Stress_offset;
arrow98.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow98);

Arrow arrow99(left);
arrow99.speed = Stress_tempo;
arrow99.pos.y = 10707.0 + Stress_offset;
arrow99.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow99);

Arrow arrow100(left);
arrow100.speed = Stress_tempo;
arrow100.pos.y = 10805.0 + Stress_offset;
arrow100.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow100);

Arrow arrow101(right);
arrow101.speed = Stress_tempo;
arrow101.pos.y = 10905.0 + Stress_offset;
arrow101.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow101);

Arrow arrow102(right);
arrow102.speed = Stress_tempo;
arrow102.pos.y = 11004.0 + Stress_offset;
arrow102.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow102);

Arrow arrow103(down);
arrow103.speed = Stress_tempo;
arrow103.pos.y = 11103.0 + Stress_offset;
arrow103.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow103);

Arrow arrow104(left);
arrow104.speed = Stress_tempo;
arrow104.pos.y = 11202.0 + Stress_offset;
arrow104.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow104);

Arrow arrow105(right);
arrow105.speed = Stress_tempo;
arrow105.pos.y = 11301.0 + Stress_offset;
arrow105.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow105);

Arrow arrow106(down);
arrow106.speed = Stress_tempo;
arrow106.pos.y = 11401.0 + Stress_offset;
arrow106.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow106);

Arrow arrow107(left);
arrow107.speed = Stress_tempo;
arrow107.pos.y = 11500.0 + Stress_offset;
arrow107.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow107);

Arrow arrow108(up);
arrow108.speed = Stress_tempo;
arrow108.pos.y = 11599.0 + Stress_offset;
arrow108.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow108);

Arrow arrow109(right);
arrow109.speed = Stress_tempo;
arrow109.pos.y = 11698.0 + Stress_offset;
arrow109.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow109);

Arrow arrow110(down);
arrow110.speed = Stress_tempo;
arrow110.pos.y = 11896.0 + Stress_offset;
arrow110.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow110);

Arrow arrow111(left);
arrow111.speed = Stress_tempo;
arrow111.pos.y = 11995.0 + Stress_offset;
arrow111.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow111);

Arrow arrow112(right);
arrow112.speed = Stress_tempo;
arrow112.pos.y = 12094.0 + Stress_offset;
arrow112.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow112);

Arrow arrow113(down);
arrow113.speed = Stress_tempo;
arrow113.pos.y = 12194.0 + Stress_offset;
arrow113.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow113);

Arrow arrow114(left);
arrow114.speed = Stress_tempo;
arrow114.pos.y = 12292.0 + Stress_offset;
arrow114.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow114);

Arrow arrow115(right);
arrow115.speed = Stress_tempo;
arrow115.pos.y = 12392.0 + Stress_offset;
arrow115.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow115);

Arrow arrow116(left);
arrow116.speed = Stress_tempo;
arrow116.pos.y = 12491.0 + Stress_offset;
arrow116.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow116);

Arrow arrow117(right);
arrow117.speed = Stress_tempo;
arrow117.pos.y = 12590.0 + Stress_offset;
arrow117.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow117);

Arrow arrow118(right);
arrow118.speed = Stress_tempo;
arrow118.pos.y = 12690.0 + Stress_offset;
arrow118.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow118);

Arrow arrow119(right);
arrow119.speed = Stress_tempo;
arrow119.pos.y = 12690.0 + Stress_offset;
arrow119.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow119);

Arrow arrow120(up);
arrow120.speed = Stress_tempo;
arrow120.pos.y = 12788.0 + Stress_offset;
arrow120.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow120);

Arrow arrow121(right);
arrow121.speed = Stress_tempo;
arrow121.pos.y = 12888.0 + Stress_offset;
arrow121.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow121);

Arrow arrow122(left);
arrow122.speed = Stress_tempo;
arrow122.pos.y = 12888.0 + Stress_offset;
arrow122.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow122);

Arrow arrow123(up);
arrow123.speed = Stress_tempo;
arrow123.pos.y = 12987.0 + Stress_offset;
arrow123.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow123);

Arrow arrow124(right);
arrow124.speed = Stress_tempo;
arrow124.pos.y = 13086.0 + Stress_offset;
arrow124.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow124);

Arrow arrow125(right);
arrow125.speed = Stress_tempo;
arrow125.pos.y = 13086.0 + Stress_offset;
arrow125.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow125);

Arrow arrow126(up);
arrow126.speed = Stress_tempo;
arrow126.pos.y = 13185.0 + Stress_offset;
arrow126.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow126);

Arrow arrow127(right);
arrow127.speed = Stress_tempo;
arrow127.pos.y = 13284.0 + Stress_offset;
arrow127.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow127);

Arrow arrow128(left);
arrow128.speed = Stress_tempo;
arrow128.pos.y = 13284.0 + Stress_offset;
arrow128.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow128);

Arrow arrow129(up);
arrow129.speed = Stress_tempo;
arrow129.pos.y = 13383.0 + Stress_offset;
arrow129.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow129);

Arrow arrow130(down);
arrow130.speed = Stress_tempo;
arrow130.pos.y = 13482.0 + Stress_offset;
arrow130.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow130);

Arrow arrow131(right);
arrow131.speed = Stress_tempo;
arrow131.pos.y = 13482.0 + Stress_offset;
arrow131.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow131);

Arrow arrow132(up);
arrow132.speed = Stress_tempo;
arrow132.pos.y = 13532.0 + Stress_offset;
arrow132.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow132);

Arrow arrow133(right);
arrow133.speed = Stress_tempo;
arrow133.pos.y = 13581.0 + Stress_offset;
arrow133.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow133);

Arrow arrow134(down);
arrow134.speed = Stress_tempo;
arrow134.pos.y = 13681.0 + Stress_offset;
arrow134.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow134);

Arrow arrow135(right);
arrow135.speed = Stress_tempo;
arrow135.pos.y = 13681.0 + Stress_offset;
arrow135.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow135);

Arrow arrow136(up);
arrow136.speed = Stress_tempo;
arrow136.pos.y = 13780.0 + Stress_offset;
arrow136.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow136);

Arrow arrow137(right);
arrow137.speed = Stress_tempo;
arrow137.pos.y = 13879.0 + Stress_offset;
arrow137.side = playerSide;
arrow137.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow137);

Arrow arrow138(right);
arrow138.speed = Stress_tempo;
arrow138.pos.y = 13879.0 + Stress_offset;
arrow138.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow138);

Arrow arrow139(left);
arrow139.speed = Stress_tempo;
arrow139.pos.y = 13978.0 + Stress_offset;
arrow139.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow139);

Arrow arrow140(left);
arrow140.speed = Stress_tempo;
arrow140.pos.y = 14077.0 + Stress_offset;
arrow140.side = playerSide;
arrow140.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow140);

Arrow arrow141(down);
arrow141.speed = Stress_tempo;
arrow141.pos.y = 14077.0 + Stress_offset;
arrow141.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow141);

Arrow arrow142(left);
arrow142.speed = Stress_tempo;
arrow142.pos.y = 14177.0 + Stress_offset;
arrow142.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow142);

Arrow arrow143(right);
arrow143.speed = Stress_tempo;
arrow143.pos.y = 14275.0 + Stress_offset;
arrow143.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow143);

Arrow arrow144(up);
arrow144.speed = Stress_tempo;
arrow144.pos.y = 14275.0 + Stress_offset;
arrow144.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow144);

Arrow arrow145(up);
arrow145.speed = Stress_tempo;
arrow145.pos.y = 14375.0 + Stress_offset;
arrow145.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow145);

Arrow arrow146(left);
arrow146.speed = Stress_tempo;
arrow146.pos.y = 14474.0 + Stress_offset;
arrow146.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow146);

Arrow arrow147(right);
arrow147.speed = Stress_tempo;
arrow147.pos.y = 14672.0 + Stress_offset;
arrow147.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow147);

Arrow arrow148(up);
arrow148.speed = Stress_tempo;
arrow148.pos.y = 14771.0 + Stress_offset;
arrow148.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow148);

Arrow arrow149(left);
arrow149.speed = Stress_tempo;
arrow149.pos.y = 14870.0 + Stress_offset;
arrow149.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow149);

Arrow arrow150(right);
arrow150.speed = Stress_tempo;
arrow150.pos.y = 15068.0 + Stress_offset;
arrow150.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow150);

Arrow arrow151(up);
arrow151.speed = Stress_tempo;
arrow151.pos.y = 15267.0 + Stress_offset;
arrow151.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow151);

Arrow arrow152(right);
arrow152.speed = Stress_tempo;
arrow152.pos.y = 15367.0 + Stress_offset;
arrow152.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow152);

Arrow arrow153(right);
arrow153.speed = Stress_tempo;
arrow153.pos.y = 15465.0 + Stress_offset;
arrow153.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow153);

Arrow arrow154(left);
arrow154.speed = Stress_tempo;
arrow154.pos.y = 15564.0 + Stress_offset;
arrow154.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow154);

Arrow arrow155(down);
arrow155.speed = Stress_tempo;
arrow155.pos.y = 15664.0 + Stress_offset;
arrow155.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow155);

Arrow arrow156(left);
arrow156.speed = Stress_tempo;
arrow156.pos.y = 15762.0 + Stress_offset;
arrow156.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow156);

Arrow arrow157(up);
arrow157.speed = Stress_tempo;
arrow157.pos.y = 15862.0 + Stress_offset;
arrow157.side = playerSide;
arrow157.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow157);

Arrow arrow158(right);
arrow158.speed = Stress_tempo;
arrow158.pos.y = 15862.0 + Stress_offset;
arrow158.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow158);

Arrow arrow159(up);
arrow159.speed = Stress_tempo;
arrow159.pos.y = 15961.0 + Stress_offset;
arrow159.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow159);

Arrow arrow160(right);
arrow160.speed = Stress_tempo;
arrow160.pos.y = 16060.0 + Stress_offset;
arrow160.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow160);

Arrow arrow161(left);
arrow161.speed = Stress_tempo;
arrow161.pos.y = 16159.0 + Stress_offset;
arrow161.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow161);

Arrow arrow162(right);
arrow162.speed = Stress_tempo;
arrow162.pos.y = 16258.0 + Stress_offset;
arrow162.side = playerSide;
arrow162.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow162);

Arrow arrow163(right);
arrow163.speed = Stress_tempo;
arrow163.pos.y = 16258.0 + Stress_offset;
arrow163.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow163);

Arrow arrow164(up);
arrow164.speed = Stress_tempo;
arrow164.pos.y = 16357.0 + Stress_offset;
arrow164.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow164);

Arrow arrow165(right);
arrow165.speed = Stress_tempo;
arrow165.pos.y = 16457.0 + Stress_offset;
arrow165.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow165);

Arrow arrow166(left);
arrow166.speed = Stress_tempo;
arrow166.pos.y = 16556.0 + Stress_offset;
arrow166.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow166);

Arrow arrow167(down);
arrow167.speed = Stress_tempo;
arrow167.pos.y = 16655.0 + Stress_offset;
arrow167.side = playerSide;
arrow167.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow167);

Arrow arrow168(right);
arrow168.speed = Stress_tempo;
arrow168.pos.y = 16655.0 + Stress_offset;
arrow168.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow168);

Arrow arrow169(up);
arrow169.speed = Stress_tempo;
arrow169.pos.y = 16704.0 + Stress_offset;
arrow169.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow169);

Arrow arrow170(right);
arrow170.speed = Stress_tempo;
arrow170.pos.y = 16754.0 + Stress_offset;
arrow170.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow170);

Arrow arrow171(left);
arrow171.speed = Stress_tempo;
arrow171.pos.y = 16853.0 + Stress_offset;
arrow171.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow171);

Arrow arrow172(right);
arrow172.speed = Stress_tempo;
arrow172.pos.y = 16952.0 + Stress_offset;
arrow172.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow172);

Arrow arrow173(left);
arrow173.speed = Stress_tempo;
arrow173.pos.y = 17051.0 + Stress_offset;
arrow173.side = playerSide;
arrow173.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow173);

Arrow arrow174(up);
arrow174.speed = Stress_tempo;
arrow174.pos.y = 17051.0 + Stress_offset;
arrow174.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow174);

Arrow arrow175(left);
arrow175.speed = Stress_tempo;
arrow175.pos.y = 17151.0 + Stress_offset;
arrow175.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow175);

Arrow arrow176(right);
arrow176.speed = Stress_tempo;
arrow176.pos.y = 17250.0 + Stress_offset;
arrow176.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow176);

Arrow arrow177(down);
arrow177.speed = Stress_tempo;
arrow177.pos.y = 17349.0 + Stress_offset;
arrow177.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow177);

Arrow arrow178(right);
arrow178.speed = Stress_tempo;
arrow178.pos.y = 17448.0 + Stress_offset;
arrow178.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow178);

Arrow arrow179(left);
arrow179.speed = Stress_tempo;
arrow179.pos.y = 17448.0 + Stress_offset;
arrow179.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow179);

Arrow arrow180(up);
arrow180.speed = Stress_tempo;
arrow180.pos.y = 17547.0 + Stress_offset;
arrow180.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow180);

Arrow arrow181(left);
arrow181.speed = Stress_tempo;
arrow181.pos.y = 17647.0 + Stress_offset;
arrow181.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow181);

Arrow arrow182(left);
arrow182.speed = Stress_tempo;
arrow182.pos.y = 17647.0 + Stress_offset;
arrow182.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow182);

Arrow arrow183(right);
arrow183.speed = Stress_tempo;
arrow183.pos.y = 17845.0 + Stress_offset;
arrow183.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow183);

Arrow arrow184(left);
arrow184.speed = Stress_tempo;
arrow184.pos.y = 17845.0 + Stress_offset;
arrow184.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow184);

Arrow arrow185(up);
arrow185.speed = Stress_tempo;
arrow185.pos.y = 17944.0 + Stress_offset;
arrow185.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow185);

Arrow arrow186(left);
arrow186.speed = Stress_tempo;
arrow186.pos.y = 18043.0 + Stress_offset;
arrow186.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow186);

Arrow arrow187(left);
arrow187.speed = Stress_tempo;
arrow187.pos.y = 18043.0 + Stress_offset;
arrow187.side = playerSide;
arrow187.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow187);

Arrow arrow188(right);
arrow188.speed = Stress_tempo;
arrow188.pos.y = 18241.0 + Stress_offset;
arrow188.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow188);

Arrow arrow189(left);
arrow189.speed = Stress_tempo;
arrow189.pos.y = 18241.0 + Stress_offset;
arrow189.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow189);

Arrow arrow190(up);
arrow190.speed = Stress_tempo;
arrow190.pos.y = 18291.0 + Stress_offset;
arrow190.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow190);

Arrow arrow191(right);
arrow191.speed = Stress_tempo;
arrow191.pos.y = 18341.0 + Stress_offset;
arrow191.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow191);

Arrow arrow192(left);
arrow192.speed = Stress_tempo;
arrow192.pos.y = 18440.0 + Stress_offset;
arrow192.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow192);

Arrow arrow193(left);
arrow193.speed = Stress_tempo;
arrow193.pos.y = 18440.0 + Stress_offset;
arrow193.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow193);

Arrow arrow194(right);
arrow194.speed = Stress_tempo;
arrow194.pos.y = 18539.0 + Stress_offset;
arrow194.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow194);

Arrow arrow195(left);
arrow195.speed = Stress_tempo;
arrow195.pos.y = 18638.0 + Stress_offset;
arrow195.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow195);

Arrow arrow196(up);
arrow196.speed = Stress_tempo;
arrow196.pos.y = 18638.0 + Stress_offset;
arrow196.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow196);

Arrow arrow197(left);
arrow197.speed = Stress_tempo;
arrow197.pos.y = 18737.0 + Stress_offset;
arrow197.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow197);

Arrow arrow198(left);
arrow198.speed = Stress_tempo;
arrow198.pos.y = 18737.0 + Stress_offset;
arrow198.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow198);

Arrow arrow199(left);
arrow199.speed = Stress_tempo;
arrow199.pos.y = 18836.0 + Stress_offset;
arrow199.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow199);

Arrow arrow200(right);
arrow200.speed = Stress_tempo;
arrow200.pos.y = 18836.0 + Stress_offset;
arrow200.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow200);

Arrow arrow201(left);
arrow201.speed = Stress_tempo;
arrow201.pos.y = 18935.0 + Stress_offset;
arrow201.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow201);

Arrow arrow202(down);
arrow202.speed = Stress_tempo;
arrow202.pos.y = 18935.0 + Stress_offset;
arrow202.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow202);

Arrow arrow203(down);
arrow203.speed = Stress_tempo;
arrow203.pos.y = 19034.0 + Stress_offset;
arrow203.side = playerSide;
arrow203.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow203);

Arrow arrow204(up);
arrow204.speed = Stress_tempo;
arrow204.pos.y = 19034.0 + Stress_offset;
arrow204.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow204);

Arrow arrow205(right);
arrow205.speed = Stress_tempo;
arrow205.pos.y = 19134.0 + Stress_offset;
arrow205.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow205);

Arrow arrow206(down);
arrow206.speed = Stress_tempo;
arrow206.pos.y = 19232.0 + Stress_offset;
arrow206.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow206);

Arrow arrow207(right);
arrow207.speed = Stress_tempo;
arrow207.pos.y = 19332.0 + Stress_offset;
arrow207.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow207);

Arrow arrow208(left);
arrow208.speed = Stress_tempo;
arrow208.pos.y = 19431.0 + Stress_offset;
arrow208.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow208);

Arrow arrow209(right);
arrow209.speed = Stress_tempo;
arrow209.pos.y = 19530.0 + Stress_offset;
arrow209.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow209);

Arrow arrow210(down);
arrow210.speed = Stress_tempo;
arrow210.pos.y = 19629.0 + Stress_offset;
arrow210.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow210);

Arrow arrow211(right);
arrow211.speed = Stress_tempo;
arrow211.pos.y = 19728.0 + Stress_offset;
arrow211.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow211);

Arrow arrow212(down);
arrow212.speed = Stress_tempo;
arrow212.pos.y = 19778.0 + Stress_offset;
arrow212.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow212);

Arrow arrow213(left);
arrow213.speed = Stress_tempo;
arrow213.pos.y = 19828.0 + Stress_offset;
arrow213.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow213);

Arrow arrow214(right);
arrow214.speed = Stress_tempo;
arrow214.pos.y = 19927.0 + Stress_offset;
arrow214.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow214);

Arrow arrow215(down);
arrow215.speed = Stress_tempo;
arrow215.pos.y = 20025.0 + Stress_offset;
arrow215.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow215);

Arrow arrow216(up);
arrow216.speed = Stress_tempo;
arrow216.pos.y = 20125.0 + Stress_offset;
arrow216.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow216);

Arrow arrow217(left);
arrow217.speed = Stress_tempo;
arrow217.pos.y = 20224.0 + Stress_offset;
arrow217.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow217);

Arrow arrow218(up);
arrow218.speed = Stress_tempo;
arrow218.pos.y = 20323.0 + Stress_offset;
arrow218.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow218);

Arrow arrow219(left);
arrow219.speed = Stress_tempo;
arrow219.pos.y = 20422.0 + Stress_offset;
arrow219.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow219);

Arrow arrow220(left);
arrow220.speed = Stress_tempo;
arrow220.pos.y = 20522.0 + Stress_offset;
arrow220.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow220);

Arrow arrow221(up);
arrow221.speed = Stress_tempo;
arrow221.pos.y = 20571.0 + Stress_offset;
arrow221.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow221);

Arrow arrow222(right);
arrow222.speed = Stress_tempo;
arrow222.pos.y = 20621.0 + Stress_offset;
arrow222.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow222);

Arrow arrow223(right);
arrow223.speed = Stress_tempo;
arrow223.pos.y = 20720.0 + Stress_offset;
arrow223.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow223);

Arrow arrow224(up);
arrow224.speed = Stress_tempo;
arrow224.pos.y = 20819.0 + Stress_offset;
arrow224.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow224);

Arrow arrow225(right);
arrow225.speed = Stress_tempo;
arrow225.pos.y = 20918.0 + Stress_offset;
arrow225.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow225);

Arrow arrow226(left);
arrow226.speed = Stress_tempo;
arrow226.pos.y = 21017.0 + Stress_offset;
arrow226.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow226);

Arrow arrow227(down);
arrow227.speed = Stress_tempo;
arrow227.pos.y = 21116.0 + Stress_offset;
arrow227.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow227);

Arrow arrow228(left);
arrow228.speed = Stress_tempo;
arrow228.pos.y = 21215.0 + Stress_offset;
arrow228.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow228);

Arrow arrow229(up);
arrow229.speed = Stress_tempo;
arrow229.pos.y = 21265.0 + Stress_offset;
arrow229.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow229);

Arrow arrow230(left);
arrow230.speed = Stress_tempo;
arrow230.pos.y = 21314.0 + Stress_offset;
arrow230.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow230);

Arrow arrow231(right);
arrow231.speed = Stress_tempo;
arrow231.pos.y = 21414.0 + Stress_offset;
arrow231.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow231);

Arrow arrow232(down);
arrow232.speed = Stress_tempo;
arrow232.pos.y = 21513.0 + Stress_offset;
arrow232.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow232);

Arrow arrow233(left);
arrow233.speed = Stress_tempo;
arrow233.pos.y = 21612.0 + Stress_offset;
arrow233.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow233);

Arrow arrow234(down);
arrow234.speed = Stress_tempo;
arrow234.pos.y = 21711.0 + Stress_offset;
arrow234.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow234);

Arrow arrow235(left);
arrow235.speed = Stress_tempo;
arrow235.pos.y = 21810.0 + Stress_offset;
arrow235.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow235);

Arrow arrow236(down);
arrow236.speed = Stress_tempo;
arrow236.pos.y = 21910.0 + Stress_offset;
arrow236.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow236);

Arrow arrow237(down);
arrow237.speed = Stress_tempo;
arrow237.pos.y = 22008.0 + Stress_offset;
arrow237.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow237);

Arrow arrow238(right);
arrow238.speed = Stress_tempo;
arrow238.pos.y = 22108.0 + Stress_offset;
arrow238.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow238);

Arrow arrow239(left);
arrow239.speed = Stress_tempo;
arrow239.pos.y = 22158.0 + Stress_offset;
arrow239.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow239);

Arrow arrow240(up);
arrow240.speed = Stress_tempo;
arrow240.pos.y = 22207.0 + Stress_offset;
arrow240.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow240);

Arrow arrow241(right);
arrow241.speed = Stress_tempo;
arrow241.pos.y = 22306.0 + Stress_offset;
arrow241.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow241);

Arrow arrow242(down);
arrow242.speed = Stress_tempo;
arrow242.pos.y = 22405.0 + Stress_offset;
arrow242.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow242);

Arrow arrow243(right);
arrow243.speed = Stress_tempo;
arrow243.pos.y = 22504.0 + Stress_offset;
arrow243.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow243);

Arrow arrow244(left);
arrow244.speed = Stress_tempo;
arrow244.pos.y = 22603.0 + Stress_offset;
arrow244.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow244);

Arrow arrow245(right);
arrow245.speed = Stress_tempo;
arrow245.pos.y = 22703.0 + Stress_offset;
arrow245.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow245);

Arrow arrow246(down);
arrow246.speed = Stress_tempo;
arrow246.pos.y = 22802.0 + Stress_offset;
arrow246.side = playerSide;
arrow246.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow246);

Arrow arrow247(left);
arrow247.speed = Stress_tempo;
arrow247.pos.y = 23000.0 + Stress_offset;
arrow247.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow247);

Arrow arrow248(right);
arrow248.speed = Stress_tempo;
arrow248.pos.y = 23099.0 + Stress_offset;
arrow248.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow248);

Arrow arrow249(down);
arrow249.speed = Stress_tempo;
arrow249.pos.y = 23198.0 + Stress_offset;
arrow249.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow249);

Arrow arrow250(up);
arrow250.speed = Stress_tempo;
arrow250.pos.y = 23298.0 + Stress_offset;
arrow250.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow250);

Arrow arrow251(left);
arrow251.speed = Stress_tempo;
arrow251.pos.y = 23397.0 + Stress_offset;
arrow251.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow251);

Arrow arrow252(up);
arrow252.speed = Stress_tempo;
arrow252.pos.y = 23496.0 + Stress_offset;
arrow252.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow252);

Arrow arrow253(left);
arrow253.speed = Stress_tempo;
arrow253.pos.y = 23595.0 + Stress_offset;
arrow253.side = playerSide;
arrow253.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow253);

Arrow arrow254(right);
arrow254.speed = Stress_tempo;
arrow254.pos.y = 23793.0 + Stress_offset;
arrow254.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow254);

Arrow arrow255(right);
arrow255.speed = Stress_tempo;
arrow255.pos.y = 23892.0 + Stress_offset;
arrow255.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow255);

Arrow arrow256(up);
arrow256.speed = Stress_tempo;
arrow256.pos.y = 23991.0 + Stress_offset;
arrow256.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow256);

Arrow arrow257(right);
arrow257.speed = Stress_tempo;
arrow257.pos.y = 24091.0 + Stress_offset;
arrow257.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow257);

Arrow arrow258(left);
arrow258.speed = Stress_tempo;
arrow258.pos.y = 24190.0 + Stress_offset;
arrow258.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow258);

Arrow arrow259(down);
arrow259.speed = Stress_tempo;
arrow259.pos.y = 24289.0 + Stress_offset;
arrow259.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow259);

Arrow arrow260(left);
arrow260.speed = Stress_tempo;
arrow260.pos.y = 24388.0 + Stress_offset;
arrow260.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow260);

Arrow arrow261(up);
arrow261.speed = Stress_tempo;
arrow261.pos.y = 24438.0 + Stress_offset;
arrow261.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow261);

Arrow arrow262(left);
arrow262.speed = Stress_tempo;
arrow262.pos.y = 24487.0 + Stress_offset;
arrow262.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow262);

Arrow arrow263(right);
arrow263.speed = Stress_tempo;
arrow263.pos.y = 24586.0 + Stress_offset;
arrow263.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow263);

Arrow arrow264(down);
arrow264.speed = Stress_tempo;
arrow264.pos.y = 24685.0 + Stress_offset;
arrow264.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow264);

Arrow arrow265(left);
arrow265.speed = Stress_tempo;
arrow265.pos.y = 24784.0 + Stress_offset;
arrow265.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow265);

Arrow arrow266(down);
arrow266.speed = Stress_tempo;
arrow266.pos.y = 24884.0 + Stress_offset;
arrow266.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow266);

Arrow arrow267(left);
arrow267.speed = Stress_tempo;
arrow267.pos.y = 24982.0 + Stress_offset;
arrow267.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow267);

Arrow arrow268(down);
arrow268.speed = Stress_tempo;
arrow268.pos.y = 25082.0 + Stress_offset;
arrow268.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow268);

Arrow arrow269(down);
arrow269.speed = Stress_tempo;
arrow269.pos.y = 25181.0 + Stress_offset;
arrow269.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow269);

Arrow arrow270(right);
arrow270.speed = Stress_tempo;
arrow270.pos.y = 25281.0 + Stress_offset;
arrow270.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow270);

Arrow arrow271(right);
arrow271.speed = Stress_tempo;
arrow271.pos.y = 25380.0 + Stress_offset;
arrow271.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow271);

Arrow arrow272(down);
arrow272.speed = Stress_tempo;
arrow272.pos.y = 25429.0 + Stress_offset;
arrow272.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow272);

Arrow arrow273(right);
arrow273.speed = Stress_tempo;
arrow273.pos.y = 25478.0 + Stress_offset;
arrow273.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow273);

Arrow arrow274(left);
arrow274.speed = Stress_tempo;
arrow274.pos.y = 25578.0 + Stress_offset;
arrow274.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow274);

Arrow arrow275(right);
arrow275.speed = Stress_tempo;
arrow275.pos.y = 25677.0 + Stress_offset;
arrow275.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow275);

Arrow arrow276(down);
arrow276.speed = Stress_tempo;
arrow276.pos.y = 25726.0 + Stress_offset;
arrow276.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow276);

Arrow arrow277(up);
arrow277.speed = Stress_tempo;
arrow277.pos.y = 25776.0 + Stress_offset;
arrow277.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow277);

Arrow arrow278(left);
arrow278.speed = Stress_tempo;
arrow278.pos.y = 25875.0 + Stress_offset;
arrow278.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow278);

Arrow arrow279(down);
arrow279.speed = Stress_tempo;
arrow279.pos.y = 25974.0 + Stress_offset;
arrow279.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow279);

Arrow arrow280(right);
arrow280.speed = Stress_tempo;
arrow280.pos.y = 26073.0 + Stress_offset;
arrow280.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow280);

Arrow arrow281(up);
arrow281.speed = Stress_tempo;
arrow281.pos.y = 26123.0 + Stress_offset;
arrow281.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow281);

Arrow arrow282(left);
arrow282.speed = Stress_tempo;
arrow282.pos.y = 26172.0 + Stress_offset;
arrow282.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow282);

Arrow arrow283(right);
arrow283.speed = Stress_tempo;
arrow283.pos.y = 26271.0 + Stress_offset;
arrow283.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow283);

Arrow arrow284(left);
arrow284.speed = Stress_tempo;
arrow284.pos.y = 26321.0 + Stress_offset;
arrow284.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow284);

Arrow arrow285(down);
arrow285.speed = Stress_tempo;
arrow285.pos.y = 26371.0 + Stress_offset;
arrow285.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow285);

Arrow arrow286(left);
arrow286.speed = Stress_tempo;
arrow286.pos.y = 26470.0 + Stress_offset;
arrow286.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow286);

Arrow arrow287(up);
arrow287.speed = Stress_tempo;
arrow287.pos.y = 26569.0 + Stress_offset;
arrow287.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow287);

Arrow arrow288(right);
arrow288.speed = Stress_tempo;
arrow288.pos.y = 26668.0 + Stress_offset;
arrow288.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow288);

Arrow arrow289(down);
arrow289.speed = Stress_tempo;
arrow289.pos.y = 26767.0 + Stress_offset;
arrow289.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow289);

Arrow arrow290(right);
arrow290.speed = Stress_tempo;
arrow290.pos.y = 26867.0 + Stress_offset;
arrow290.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow290);

Arrow arrow291(up);
arrow291.speed = Stress_tempo;
arrow291.pos.y = 26916.0 + Stress_offset;
arrow291.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow291);

Arrow arrow292(left);
arrow292.speed = Stress_tempo;
arrow292.pos.y = 26965.0 + Stress_offset;
arrow292.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow292);

Arrow arrow293(right);
arrow293.speed = Stress_tempo;
arrow293.pos.y = 27065.0 + Stress_offset;
arrow293.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow293);

Arrow arrow294(down);
arrow294.speed = Stress_tempo;
arrow294.pos.y = 27164.0 + Stress_offset;
arrow294.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow294);

Arrow arrow295(right);
arrow295.speed = Stress_tempo;
arrow295.pos.y = 27263.0 + Stress_offset;
arrow295.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow295);

Arrow arrow296(left);
arrow296.speed = Stress_tempo;
arrow296.pos.y = 27362.0 + Stress_offset;
arrow296.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow296);

Arrow arrow297(down);
arrow297.speed = Stress_tempo;
arrow297.pos.y = 27461.0 + Stress_offset;
arrow297.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow297);

Arrow arrow298(right);
arrow298.speed = Stress_tempo;
arrow298.pos.y = 27560.0 + Stress_offset;
arrow298.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow298);

Arrow arrow299(up);
arrow299.speed = Stress_tempo;
arrow299.pos.y = 27610.0 + Stress_offset;
arrow299.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow299);

Arrow arrow300(right);
arrow300.speed = Stress_tempo;
arrow300.pos.y = 27660.0 + Stress_offset;
arrow300.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow300);

Arrow arrow301(down);
arrow301.speed = Stress_tempo;
arrow301.pos.y = 27759.0 + Stress_offset;
arrow301.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow301);

Arrow arrow302(right);
arrow302.speed = Stress_tempo;
arrow302.pos.y = 27858.0 + Stress_offset;
arrow302.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow302);

Arrow arrow303(left);
arrow303.speed = Stress_tempo;
arrow303.pos.y = 27957.0 + Stress_offset;
arrow303.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow303);

Arrow arrow304(right);
arrow304.speed = Stress_tempo;
arrow304.pos.y = 28056.0 + Stress_offset;
arrow304.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow304);

Arrow arrow305(down);
arrow305.speed = Stress_tempo;
arrow305.pos.y = 28155.0 + Stress_offset;
arrow305.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow305);

Arrow arrow306(right);
arrow306.speed = Stress_tempo;
arrow306.pos.y = 28254.0 + Stress_offset;
arrow306.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow306);

Arrow arrow307(up);
arrow307.speed = Stress_tempo;
arrow307.pos.y = 28354.0 + Stress_offset;
arrow307.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow307);

Arrow arrow308(up);
arrow308.speed = Stress_tempo;
arrow308.pos.y = 28452.0 + Stress_offset;
arrow308.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow308);

Arrow arrow309(right);
arrow309.speed = Stress_tempo;
arrow309.pos.y = 28552.0 + Stress_offset;
arrow309.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow309);

Arrow arrow310(down);
arrow310.speed = Stress_tempo;
arrow310.pos.y = 28651.0 + Stress_offset;
arrow310.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow310);

Arrow arrow311(left);
arrow311.speed = Stress_tempo;
arrow311.pos.y = 28750.0 + Stress_offset;
arrow311.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow311);

Arrow arrow312(right);
arrow312.speed = Stress_tempo;
arrow312.pos.y = 28849.0 + Stress_offset;
arrow312.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow312);

Arrow arrow313(up);
arrow313.speed = Stress_tempo;
arrow313.pos.y = 28948.0 + Stress_offset;
arrow313.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow313);

Arrow arrow314(left);
arrow314.speed = Stress_tempo;
arrow314.pos.y = 29048.0 + Stress_offset;
arrow314.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow314);

Arrow arrow315(down);
arrow315.speed = Stress_tempo;
arrow315.pos.y = 29147.0 + Stress_offset;
arrow315.side = playerSide;
arrow315.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow315);

Arrow arrow316(up);
arrow316.speed = Stress_tempo;
arrow316.pos.y = 29345.0 + Stress_offset;
arrow316.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow316);

Arrow arrow317(right);
arrow317.speed = Stress_tempo;
arrow317.pos.y = 29444.0 + Stress_offset;
arrow317.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow317);

Arrow arrow318(left);
arrow318.speed = Stress_tempo;
arrow318.pos.y = 29543.0 + Stress_offset;
arrow318.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow318);

Arrow arrow319(up);
arrow319.speed = Stress_tempo;
arrow319.pos.y = 29642.0 + Stress_offset;
arrow319.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow319);

Arrow arrow320(right);
arrow320.speed = Stress_tempo;
arrow320.pos.y = 29741.0 + Stress_offset;
arrow320.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow320);

Arrow arrow321(left);
arrow321.speed = Stress_tempo;
arrow321.pos.y = 29841.0 + Stress_offset;
arrow321.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow321);

Arrow arrow322(right);
arrow322.speed = Stress_tempo;
arrow322.pos.y = 29940.0 + Stress_offset;
arrow322.side = playerSide;
arrow322.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow322);

Arrow arrow323(left);
arrow323.speed = Stress_tempo;
arrow323.pos.y = 30138.0 + Stress_offset;
arrow323.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow323);

Arrow arrow324(right);
arrow324.speed = Stress_tempo;
arrow324.pos.y = 30237.0 + Stress_offset;
arrow324.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow324);

Arrow arrow325(down);
arrow325.speed = Stress_tempo;
arrow325.pos.y = 30337.0 + Stress_offset;
arrow325.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow325);

Arrow arrow326(right);
arrow326.speed = Stress_tempo;
arrow326.pos.y = 30435.0 + Stress_offset;
arrow326.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow326);

Arrow arrow327(left);
arrow327.speed = Stress_tempo;
arrow327.pos.y = 30535.0 + Stress_offset;
arrow327.side = playerSide;
arrow327.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow327);

Arrow arrow328(down);
arrow328.speed = Stress_tempo;
arrow328.pos.y = 30733.0 + Stress_offset;
arrow328.side = playerSide;
arrow328.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow328);

Arrow arrow329(left);
arrow329.speed = Stress_tempo;
arrow329.pos.y = 30931.0 + Stress_offset;
arrow329.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow329);

Arrow arrow330(right);
arrow330.speed = Stress_tempo;
arrow330.pos.y = 31031.0 + Stress_offset;
arrow330.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow330);

Arrow arrow331(left);
arrow331.speed = Stress_tempo;
arrow331.pos.y = 31130.0 + Stress_offset;
arrow331.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow331);

Arrow arrow332(right);
arrow332.speed = Stress_tempo;
arrow332.pos.y = 31229.0 + Stress_offset;
arrow332.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow332);

Arrow arrow333(down);
arrow333.speed = Stress_tempo;
arrow333.pos.y = 31328.0 + Stress_offset;
arrow333.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow333);

Arrow arrow334(right);
arrow334.speed = Stress_tempo;
arrow334.pos.y = 31427.0 + Stress_offset;
arrow334.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow334);

Arrow arrow335(up);
arrow335.speed = Stress_tempo;
arrow335.pos.y = 31527.0 + Stress_offset;
arrow335.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow335);

Arrow arrow336(up);
arrow336.speed = Stress_tempo;
arrow336.pos.y = 31625.0 + Stress_offset;
arrow336.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow336);

Arrow arrow337(down);
arrow337.speed = Stress_tempo;
arrow337.pos.y = 31724.0 + Stress_offset;
arrow337.side = playerSide;
arrow337.trailSize = 843;
playerArrowList->insert(playerArrowList->begin(), arrow337);

Arrow arrow338(down);
arrow338.speed = Stress_tempo;
arrow338.pos.y = 31724.0 + Stress_offset;
arrow338.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow338);

Arrow arrow339(up);
arrow339.speed = Stress_tempo;
arrow339.pos.y = 31824.0 + Stress_offset;
arrow339.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow339);

Arrow arrow340(left);
arrow340.speed = Stress_tempo;
arrow340.pos.y = 31922.0 + Stress_offset;
arrow340.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow340);

Arrow arrow341(left);
arrow341.speed = Stress_tempo;
arrow341.pos.y = 32022.0 + Stress_offset;
arrow341.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow341);

Arrow arrow342(up);
arrow342.speed = Stress_tempo;
arrow342.pos.y = 32121.0 + Stress_offset;
arrow342.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow342);

Arrow arrow343(right);
arrow343.speed = Stress_tempo;
arrow343.pos.y = 32220.0 + Stress_offset;
arrow343.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow343);

Arrow arrow344(down);
arrow344.speed = Stress_tempo;
arrow344.pos.y = 32319.0 + Stress_offset;
arrow344.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow344);

Arrow arrow345(right);
arrow345.speed = Stress_tempo;
arrow345.pos.y = 32418.0 + Stress_offset;
arrow345.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow345);

Arrow arrow346(left);
arrow346.speed = Stress_tempo;
arrow346.pos.y = 32517.0 + Stress_offset;
arrow346.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow346);

Arrow arrow347(down);
arrow347.speed = Stress_tempo;
arrow347.pos.y = 32617.0 + Stress_offset;
arrow347.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow347);

Arrow arrow348(up);
arrow348.speed = Stress_tempo;
arrow348.pos.y = 32715.0 + Stress_offset;
arrow348.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow348);

Arrow arrow349(right);
arrow349.speed = Stress_tempo;
arrow349.pos.y = 32815.0 + Stress_offset;
arrow349.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow349);

Arrow arrow350(up);
arrow350.speed = Stress_tempo;
arrow350.pos.y = 32914.0 + Stress_offset;
arrow350.side = playerSide;
arrow350.trailSize = 506;
playerArrowList->insert(playerArrowList->begin(), arrow350);

Arrow arrow351(down);
arrow351.speed = Stress_tempo;
arrow351.pos.y = 32914.0 + Stress_offset;
arrow351.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow351);

Arrow arrow352(right);
arrow352.speed = Stress_tempo;
arrow352.pos.y = 33013.0 + Stress_offset;
arrow352.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow352);

Arrow arrow353(left);
arrow353.speed = Stress_tempo;
arrow353.pos.y = 33112.0 + Stress_offset;
arrow353.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow353);

Arrow arrow354(right);
arrow354.speed = Stress_tempo;
arrow354.pos.y = 33211.0 + Stress_offset;
arrow354.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow354);

Arrow arrow355(down);
arrow355.speed = Stress_tempo;
arrow355.pos.y = 33311.0 + Stress_offset;
arrow355.side = playerSide;
arrow355.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow355);

Arrow arrow356(down);
arrow356.speed = Stress_tempo;
arrow356.pos.y = 33311.0 + Stress_offset;
arrow356.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow356);

Arrow arrow357(up);
arrow357.speed = Stress_tempo;
arrow357.pos.y = 33410.0 + Stress_offset;
arrow357.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow357);

Arrow arrow358(left);
arrow358.speed = Stress_tempo;
arrow358.pos.y = 33509.0 + Stress_offset;
arrow358.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow358);

Arrow arrow359(left);
arrow359.speed = Stress_tempo;
arrow359.pos.y = 33608.0 + Stress_offset;
arrow359.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow359);

Arrow arrow360(up);
arrow360.speed = Stress_tempo;
arrow360.pos.y = 33707.0 + Stress_offset;
arrow360.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow360);

Arrow arrow361(right);
arrow361.speed = Stress_tempo;
arrow361.pos.y = 33806.0 + Stress_offset;
arrow361.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow361);

Arrow arrow362(down);
arrow362.speed = Stress_tempo;
arrow362.pos.y = 33905.0 + Stress_offset;
arrow362.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow362);

Arrow arrow363(right);
arrow363.speed = Stress_tempo;
arrow363.pos.y = 34004.0 + Stress_offset;
arrow363.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow363);

Arrow arrow364(left);
arrow364.speed = Stress_tempo;
arrow364.pos.y = 34104.0 + Stress_offset;
arrow364.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow364);

Arrow arrow365(up);
arrow365.speed = Stress_tempo;
arrow365.pos.y = 34203.0 + Stress_offset;
arrow365.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow365);

Arrow arrow366(right);
arrow366.speed = Stress_tempo;
arrow366.pos.y = 34252.0 + Stress_offset;
arrow366.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow366);

Arrow arrow367(down);
arrow367.speed = Stress_tempo;
arrow367.pos.y = 34302.0 + Stress_offset;
arrow367.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow367);

Arrow arrow368(right);
arrow368.speed = Stress_tempo;
arrow368.pos.y = 34401.0 + Stress_offset;
arrow368.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow368);

Arrow arrow369(left);
arrow369.speed = Stress_tempo;
arrow369.pos.y = 34500.0 + Stress_offset;
arrow369.side = playerSide;
arrow369.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow369);

Arrow arrow370(down);
arrow370.speed = Stress_tempo;
arrow370.pos.y = 34500.0 + Stress_offset;
arrow370.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow370);

Arrow arrow371(right);
arrow371.speed = Stress_tempo;
arrow371.pos.y = 34600.0 + Stress_offset;
arrow371.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow371);

Arrow arrow372(up);
arrow372.speed = Stress_tempo;
arrow372.pos.y = 34698.0 + Stress_offset;
arrow372.side = playerSide;
arrow372.trailSize = 127;
playerArrowList->insert(playerArrowList->begin(), arrow372);

Arrow arrow373(left);
arrow373.speed = Stress_tempo;
arrow373.pos.y = 34698.0 + Stress_offset;
arrow373.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow373);

Arrow arrow374(left);
arrow374.speed = Stress_tempo;
arrow374.pos.y = 34798.0 + Stress_offset;
arrow374.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow374);

Arrow arrow375(right);
arrow375.speed = Stress_tempo;
arrow375.pos.y = 34798.0 + Stress_offset;
arrow375.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow375);

Arrow arrow376(up);
arrow376.speed = Stress_tempo;
arrow376.pos.y = 34897.0 + Stress_offset;
arrow376.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow376);

Arrow arrow377(left);
arrow377.speed = Stress_tempo;
arrow377.pos.y = 34897.0 + Stress_offset;
arrow377.side = computerSide;
arrow377.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow377);

Arrow arrow378(right);
arrow378.speed = Stress_tempo;
arrow378.pos.y = 34996.0 + Stress_offset;
arrow378.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow378);

Arrow arrow379(left);
arrow379.speed = Stress_tempo;
arrow379.pos.y = 35095.0 + Stress_offset;
arrow379.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow379);

Arrow arrow380(left);
arrow380.speed = Stress_tempo;
arrow380.pos.y = 35194.0 + Stress_offset;
arrow380.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow380);

Arrow arrow381(left);
arrow381.speed = Stress_tempo;
arrow381.pos.y = 35294.0 + Stress_offset;
arrow381.side = computerSide;
arrow381.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow381);

Arrow arrow382(up);
arrow382.speed = Stress_tempo;
arrow382.pos.y = 35294.0 + Stress_offset;
arrow382.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow382);

Arrow arrow383(right);
arrow383.speed = Stress_tempo;
arrow383.pos.y = 35392.0 + Stress_offset;
arrow383.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow383);

Arrow arrow384(down);
arrow384.speed = Stress_tempo;
arrow384.pos.y = 35492.0 + Stress_offset;
arrow384.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow384);

Arrow arrow385(right);
arrow385.speed = Stress_tempo;
arrow385.pos.y = 35591.0 + Stress_offset;
arrow385.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow385);

Arrow arrow386(down);
arrow386.speed = Stress_tempo;
arrow386.pos.y = 35690.0 + Stress_offset;
arrow386.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow386);

Arrow arrow387(left);
arrow387.speed = Stress_tempo;
arrow387.pos.y = 35690.0 + Stress_offset;
arrow387.side = computerSide;
arrow387.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow387);

Arrow arrow388(left);
arrow388.speed = Stress_tempo;
arrow388.pos.y = 35789.0 + Stress_offset;
arrow388.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow388);

Arrow arrow389(right);
arrow389.speed = Stress_tempo;
arrow389.pos.y = 35888.0 + Stress_offset;
arrow389.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow389);

Arrow arrow390(up);
arrow390.speed = Stress_tempo;
arrow390.pos.y = 35987.0 + Stress_offset;
arrow390.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow390);

Arrow arrow391(left);
arrow391.speed = Stress_tempo;
arrow391.pos.y = 36087.0 + Stress_offset;
arrow391.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow391);

Arrow arrow392(left);
arrow392.speed = Stress_tempo;
arrow392.pos.y = 36087.0 + Stress_offset;
arrow392.side = computerSide;
arrow392.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow392);

Arrow arrow393(right);
arrow393.speed = Stress_tempo;
arrow393.pos.y = 36185.0 + Stress_offset;
arrow393.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow393);

Arrow arrow394(down);
arrow394.speed = Stress_tempo;
arrow394.pos.y = 36285.0 + Stress_offset;
arrow394.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow394);

Arrow arrow395(left);
arrow395.speed = Stress_tempo;
arrow395.pos.y = 36384.0 + Stress_offset;
arrow395.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow395);

Arrow arrow396(up);
arrow396.speed = Stress_tempo;
arrow396.pos.y = 36483.0 + Stress_offset;
arrow396.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow396);

Arrow arrow397(down);
arrow397.speed = Stress_tempo;
arrow397.pos.y = 36483.0 + Stress_offset;
arrow397.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow397);

Arrow arrow398(right);
arrow398.speed = Stress_tempo;
arrow398.pos.y = 36582.0 + Stress_offset;
arrow398.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow398);

Arrow arrow399(left);
arrow399.speed = Stress_tempo;
arrow399.pos.y = 36681.0 + Stress_offset;
arrow399.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow399);

Arrow arrow400(left);
arrow400.speed = Stress_tempo;
arrow400.pos.y = 36781.0 + Stress_offset;
arrow400.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow400);

Arrow arrow401(up);
arrow401.speed = Stress_tempo;
arrow401.pos.y = 36880.0 + Stress_offset;
arrow401.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow401);

Arrow arrow402(right);
arrow402.speed = Stress_tempo;
arrow402.pos.y = 36979.0 + Stress_offset;
arrow402.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow402);

Arrow arrow403(down);
arrow403.speed = Stress_tempo;
arrow403.pos.y = 37078.0 + Stress_offset;
arrow403.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow403);

Arrow arrow404(right);
arrow404.speed = Stress_tempo;
arrow404.pos.y = 37177.0 + Stress_offset;
arrow404.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow404);

Arrow arrow405(left);
arrow405.speed = Stress_tempo;
arrow405.pos.y = 37277.0 + Stress_offset;
arrow405.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow405);

Arrow arrow406(up);
arrow406.speed = Stress_tempo;
arrow406.pos.y = 37375.0 + Stress_offset;
arrow406.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow406);

Arrow arrow407(right);
arrow407.speed = Stress_tempo;
arrow407.pos.y = 37425.0 + Stress_offset;
arrow407.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow407);

Arrow arrow408(down);
arrow408.speed = Stress_tempo;
arrow408.pos.y = 37475.0 + Stress_offset;
arrow408.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow408);

Arrow arrow409(up);
arrow409.speed = Stress_tempo;
arrow409.pos.y = 37574.0 + Stress_offset;
arrow409.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow409);

Arrow arrow410(left);
arrow410.speed = Stress_tempo;
arrow410.pos.y = 37672.0 + Stress_offset;
arrow410.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow410);

Arrow arrow411(right);
arrow411.speed = Stress_tempo;
arrow411.pos.y = 37772.0 + Stress_offset;
arrow411.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow411);

Arrow arrow412(down);
arrow412.speed = Stress_tempo;
arrow412.pos.y = 37871.0 + Stress_offset;
arrow412.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow412);

Arrow arrow413(left);
arrow413.speed = Stress_tempo;
arrow413.pos.y = 37970.0 + Stress_offset;
arrow413.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow413);

Arrow arrow414(down);
arrow414.speed = Stress_tempo;
arrow414.pos.y = 38070.0 + Stress_offset;
arrow414.side = playerSide;
arrow414.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow414);

Arrow arrow415(down);
arrow415.speed = Stress_tempo;
arrow415.pos.y = 38070.0 + Stress_offset;
arrow415.side = computerSide;
arrow415.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow415);

Arrow arrow416(left);
arrow416.speed = Stress_tempo;
arrow416.pos.y = 38268.0 + Stress_offset;
arrow416.side = playerSide;
arrow416.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow416);

Arrow arrow417(left);
arrow417.speed = Stress_tempo;
arrow417.pos.y = 38268.0 + Stress_offset;
arrow417.side = computerSide;
arrow417.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow417);

Arrow arrow418(right);
arrow418.speed = Stress_tempo;
arrow418.pos.y = 38466.0 + Stress_offset;
arrow418.side = playerSide;
arrow418.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow418);

Arrow arrow419(right);
arrow419.speed = Stress_tempo;
arrow419.pos.y = 38466.0 + Stress_offset;
arrow419.side = computerSide;
arrow419.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow419);

Arrow arrow420(down);
arrow420.speed = Stress_tempo;
arrow420.pos.y = 38664.0 + Stress_offset;
arrow420.side = playerSide;
arrow420.trailSize = 253;
playerArrowList->insert(playerArrowList->begin(), arrow420);

Arrow arrow421(down);
arrow421.speed = Stress_tempo;
arrow421.pos.y = 38664.0 + Stress_offset;
arrow421.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow421);

Arrow arrow422(right);
arrow422.speed = Stress_tempo;
arrow422.pos.y = 38862.0 + Stress_offset;
arrow422.side = playerSide;
arrow422.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow422);

Arrow arrow423(left);
arrow423.speed = Stress_tempo;
arrow423.pos.y = 38862.0 + Stress_offset;
arrow423.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow423);

Arrow arrow424(left);
arrow424.speed = Stress_tempo;
arrow424.pos.y = 39061.0 + Stress_offset;
arrow424.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow424);

Arrow arrow425(down);
arrow425.speed = Stress_tempo;
arrow425.pos.y = 39259.0 + Stress_offset;
arrow425.side = playerSide;
arrow425.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow425);

Arrow arrow426(left);
arrow426.speed = Stress_tempo;
arrow426.pos.y = 39259.0 + Stress_offset;
arrow426.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow426);

Arrow arrow427(left);
arrow427.speed = Stress_tempo;
arrow427.pos.y = 39358.0 + Stress_offset;
arrow427.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow427);

Arrow arrow428(up);
arrow428.speed = Stress_tempo;
arrow428.pos.y = 39457.0 + Stress_offset;
arrow428.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow428);

Arrow arrow429(right);
arrow429.speed = Stress_tempo;
arrow429.pos.y = 39507.0 + Stress_offset;
arrow429.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow429);

Arrow arrow430(up);
arrow430.speed = Stress_tempo;
arrow430.pos.y = 39557.0 + Stress_offset;
arrow430.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow430);

Arrow arrow431(left);
arrow431.speed = Stress_tempo;
arrow431.pos.y = 39655.0 + Stress_offset;
arrow431.side = playerSide;
arrow431.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow431);

Arrow arrow432(down);
arrow432.speed = Stress_tempo;
arrow432.pos.y = 39655.0 + Stress_offset;
arrow432.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow432);

Arrow arrow433(right);
arrow433.speed = Stress_tempo;
arrow433.pos.y = 39755.0 + Stress_offset;
arrow433.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow433);

Arrow arrow434(up);
arrow434.speed = Stress_tempo;
arrow434.pos.y = 39854.0 + Stress_offset;
arrow434.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow434);

Arrow arrow435(down);
arrow435.speed = Stress_tempo;
arrow435.pos.y = 39953.0 + Stress_offset;
arrow435.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow435);

Arrow arrow436(down);
arrow436.speed = Stress_tempo;
arrow436.pos.y = 40052.0 + Stress_offset;
arrow436.side = playerSide;
arrow436.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow436);

Arrow arrow437(right);
arrow437.speed = Stress_tempo;
arrow437.pos.y = 40052.0 + Stress_offset;
arrow437.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow437);

Arrow arrow438(up);
arrow438.speed = Stress_tempo;
arrow438.pos.y = 40151.0 + Stress_offset;
arrow438.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow438);

Arrow arrow439(left);
arrow439.speed = Stress_tempo;
arrow439.pos.y = 40250.0 + Stress_offset;
arrow439.side = playerSide;
arrow439.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow439);

Arrow arrow440(down);
arrow440.speed = Stress_tempo;
arrow440.pos.y = 40250.0 + Stress_offset;
arrow440.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow440);

Arrow arrow441(right);
arrow441.speed = Stress_tempo;
arrow441.pos.y = 40300.0 + Stress_offset;
arrow441.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow441);

Arrow arrow442(up);
arrow442.speed = Stress_tempo;
arrow442.pos.y = 40350.0 + Stress_offset;
arrow442.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow442);

Arrow arrow443(right);
arrow443.speed = Stress_tempo;
arrow443.pos.y = 40449.0 + Stress_offset;
arrow443.side = playerSide;
arrow443.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow443);

Arrow arrow444(left);
arrow444.speed = Stress_tempo;
arrow444.pos.y = 40449.0 + Stress_offset;
arrow444.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow444);

Arrow arrow445(right);
arrow445.speed = Stress_tempo;
arrow445.pos.y = 40548.0 + Stress_offset;
arrow445.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow445);

Arrow arrow446(up);
arrow446.speed = Stress_tempo;
arrow446.pos.y = 40647.0 + Stress_offset;
arrow446.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow446);

Arrow arrow447(right);
arrow447.speed = Stress_tempo;
arrow447.pos.y = 40746.0 + Stress_offset;
arrow447.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow447);

Arrow arrow448(left);
arrow448.speed = Stress_tempo;
arrow448.pos.y = 40845.0 + Stress_offset;
arrow448.side = playerSide;
arrow448.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow448);

Arrow arrow449(down);
arrow449.speed = Stress_tempo;
arrow449.pos.y = 40845.0 + Stress_offset;
arrow449.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow449);

Arrow arrow450(right);
arrow450.speed = Stress_tempo;
arrow450.pos.y = 40944.0 + Stress_offset;
arrow450.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow450);

Arrow arrow451(left);
arrow451.speed = Stress_tempo;
arrow451.pos.y = 41044.0 + Stress_offset;
arrow451.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow451);

Arrow arrow452(right);
arrow452.speed = Stress_tempo;
arrow452.pos.y = 41142.0 + Stress_offset;
arrow452.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow452);

Arrow arrow453(down);
arrow453.speed = Stress_tempo;
arrow453.pos.y = 41242.0 + Stress_offset;
arrow453.side = playerSide;
arrow453.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow453);

Arrow arrow454(left);
arrow454.speed = Stress_tempo;
arrow454.pos.y = 41440.0 + Stress_offset;
arrow454.side = playerSide;
arrow454.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow454);

Arrow arrow455(right);
arrow455.speed = Stress_tempo;
arrow455.pos.y = 41638.0 + Stress_offset;
arrow455.side = playerSide;
arrow455.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow455);

Arrow arrow456(down);
arrow456.speed = Stress_tempo;
arrow456.pos.y = 41837.0 + Stress_offset;
arrow456.side = playerSide;
arrow456.trailSize = 252;
playerArrowList->insert(playerArrowList->begin(), arrow456);

Arrow arrow457(left);
arrow457.speed = Stress_tempo;
arrow457.pos.y = 42035.0 + Stress_offset;
arrow457.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow457);

Arrow arrow458(left);
arrow458.speed = Stress_tempo;
arrow458.pos.y = 42233.0 + Stress_offset;
arrow458.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow458);

Arrow arrow459(left);
arrow459.speed = Stress_tempo;
arrow459.pos.y = 42431.0 + Stress_offset;
arrow459.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow459);

Arrow arrow460(left);
arrow460.speed = Stress_tempo;
arrow460.pos.y = 42531.0 + Stress_offset;
arrow460.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow460);

Arrow arrow461(up);
arrow461.speed = Stress_tempo;
arrow461.pos.y = 42630.0 + Stress_offset;
arrow461.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow461);

Arrow arrow462(up);
arrow462.speed = Stress_tempo;
arrow462.pos.y = 42729.0 + Stress_offset;
arrow462.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow462);

Arrow arrow463(down);
arrow463.speed = Stress_tempo;
arrow463.pos.y = 42828.0 + Stress_offset;
arrow463.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow463);

Arrow arrow464(left);
arrow464.speed = Stress_tempo;
arrow464.pos.y = 42927.0 + Stress_offset;
arrow464.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow464);

Arrow arrow465(right);
arrow465.speed = Stress_tempo;
arrow465.pos.y = 43027.0 + Stress_offset;
arrow465.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow465);

Arrow arrow466(down);
arrow466.speed = Stress_tempo;
arrow466.pos.y = 43125.0 + Stress_offset;
arrow466.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow466);

Arrow arrow467(down);
arrow467.speed = Stress_tempo;
arrow467.pos.y = 43225.0 + Stress_offset;
arrow467.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow467);

Arrow arrow468(up);
arrow468.speed = Stress_tempo;
arrow468.pos.y = 43423.0 + Stress_offset;
arrow468.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow468);

Arrow arrow469(down);
arrow469.speed = Stress_tempo;
arrow469.pos.y = 43621.0 + Stress_offset;
arrow469.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow469);

Arrow arrow470(left);
arrow470.speed = Stress_tempo;
arrow470.pos.y = 43720.0 + Stress_offset;
arrow470.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow470);

Arrow arrow471(right);
arrow471.speed = Stress_tempo;
arrow471.pos.y = 43820.0 + Stress_offset;
arrow471.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow471);

Arrow arrow472(up);
arrow472.speed = Stress_tempo;
arrow472.pos.y = 43918.0 + Stress_offset;
arrow472.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow472);

Arrow arrow473(left);
arrow473.speed = Stress_tempo;
arrow473.pos.y = 44018.0 + Stress_offset;
arrow473.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow473);

Arrow arrow474(right);
arrow474.speed = Stress_tempo;
arrow474.pos.y = 44117.0 + Stress_offset;
arrow474.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow474);

Arrow arrow475(down);
arrow475.speed = Stress_tempo;
arrow475.pos.y = 44216.0 + Stress_offset;
arrow475.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow475);

Arrow arrow476(left);
arrow476.speed = Stress_tempo;
arrow476.pos.y = 44315.0 + Stress_offset;
arrow476.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow476);

Arrow arrow477(down);
arrow477.speed = Stress_tempo;
arrow477.pos.y = 44414.0 + Stress_offset;
arrow477.side = playerSide;
arrow477.trailSize = 1307;
playerArrowList->insert(playerArrowList->begin(), arrow477);

Arrow arrow478(left);
arrow478.speed = Stress_tempo;
arrow478.pos.y = 44414.0 + Stress_offset;
arrow478.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow478);

Arrow arrow479(left);
arrow479.speed = Stress_tempo;
arrow479.pos.y = 44514.0 + Stress_offset;
arrow479.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow479);

Arrow arrow480(down);
arrow480.speed = Stress_tempo;
arrow480.pos.y = 44612.0 + Stress_offset;
arrow480.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow480);

Arrow arrow481(left);
arrow481.speed = Stress_tempo;
arrow481.pos.y = 44712.0 + Stress_offset;
arrow481.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow481);

Arrow arrow482(up);
arrow482.speed = Stress_tempo;
arrow482.pos.y = 44761.0 + Stress_offset;
arrow482.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow482);

Arrow arrow483(left);
arrow483.speed = Stress_tempo;
arrow483.pos.y = 44811.0 + Stress_offset;
arrow483.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow483);

Arrow arrow484(down);
arrow484.speed = Stress_tempo;
arrow484.pos.y = 44910.0 + Stress_offset;
arrow484.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow484);

Arrow arrow485(right);
arrow485.speed = Stress_tempo;
arrow485.pos.y = 45009.0 + Stress_offset;
arrow485.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow485);

Arrow arrow486(left);
arrow486.speed = Stress_tempo;
arrow486.pos.y = 45108.0 + Stress_offset;
arrow486.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow486);

Arrow arrow487(left);
arrow487.speed = Stress_tempo;
arrow487.pos.y = 45207.0 + Stress_offset;
arrow487.side = playerSide;
arrow487.trailSize = 1307;
playerArrowList->insert(playerArrowList->begin(), arrow487);

Arrow arrow488(down);
arrow488.speed = Stress_tempo;
arrow488.pos.y = 45207.0 + Stress_offset;
arrow488.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow488);

Arrow arrow489(right);
arrow489.speed = Stress_tempo;
arrow489.pos.y = 45257.0 + Stress_offset;
arrow489.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow489);

Arrow arrow490(down);
arrow490.speed = Stress_tempo;
arrow490.pos.y = 45307.0 + Stress_offset;
arrow490.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow490);

Arrow arrow491(left);
arrow491.speed = Stress_tempo;
arrow491.pos.y = 45406.0 + Stress_offset;
arrow491.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow491);

Arrow arrow492(down);
arrow492.speed = Stress_tempo;
arrow492.pos.y = 45505.0 + Stress_offset;
arrow492.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow492);

Arrow arrow493(up);
arrow493.speed = Stress_tempo;
arrow493.pos.y = 45604.0 + Stress_offset;
arrow493.side = computerSide;
arrow493.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow493);

Arrow arrow494(left);
arrow494.speed = Stress_tempo;
arrow494.pos.y = 45802.0 + Stress_offset;
arrow494.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow494);

Arrow arrow495(left);
arrow495.speed = Stress_tempo;
arrow495.pos.y = 45901.0 + Stress_offset;
arrow495.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow495);

Arrow arrow496(right);
arrow496.speed = Stress_tempo;
arrow496.pos.y = 46001.0 + Stress_offset;
arrow496.side = playerSide;
arrow496.trailSize = 1306;
playerArrowList->insert(playerArrowList->begin(), arrow496);

Arrow arrow497(down);
arrow497.speed = Stress_tempo;
arrow497.pos.y = 46001.0 + Stress_offset;
arrow497.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow497);

Arrow arrow498(left);
arrow498.speed = Stress_tempo;
arrow498.pos.y = 46100.0 + Stress_offset;
arrow498.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow498);

Arrow arrow499(right);
arrow499.speed = Stress_tempo;
arrow499.pos.y = 46150.0 + Stress_offset;
arrow499.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow499);

Arrow arrow500(left);
arrow500.speed = Stress_tempo;
arrow500.pos.y = 46199.0 + Stress_offset;
arrow500.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow500);

Arrow arrow501(right);
arrow501.speed = Stress_tempo;
arrow501.pos.y = 46298.0 + Stress_offset;
arrow501.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow501);

Arrow arrow502(left);
arrow502.speed = Stress_tempo;
arrow502.pos.y = 46348.0 + Stress_offset;
arrow502.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow502);

Arrow arrow503(down);
arrow503.speed = Stress_tempo;
arrow503.pos.y = 46397.0 + Stress_offset;
arrow503.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow503);

Arrow arrow504(down);
arrow504.speed = Stress_tempo;
arrow504.pos.y = 46496.0 + Stress_offset;
arrow504.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow504);

Arrow arrow505(right);
arrow505.speed = Stress_tempo;
arrow505.pos.y = 46546.0 + Stress_offset;
arrow505.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow505);

Arrow arrow506(up);
arrow506.speed = Stress_tempo;
arrow506.pos.y = 46595.0 + Stress_offset;
arrow506.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow506);

Arrow arrow507(left);
arrow507.speed = Stress_tempo;
arrow507.pos.y = 46695.0 + Stress_offset;
arrow507.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow507);

Arrow arrow508(down);
arrow508.speed = Stress_tempo;
arrow508.pos.y = 46744.0 + Stress_offset;
arrow508.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow508);

Arrow arrow509(left);
arrow509.speed = Stress_tempo;
arrow509.pos.y = 46794.0 + Stress_offset;
arrow509.side = playerSide;
arrow509.trailSize = 1307;
playerArrowList->insert(playerArrowList->begin(), arrow509);

Arrow arrow510(up);
arrow510.speed = Stress_tempo;
arrow510.pos.y = 46794.0 + Stress_offset;
arrow510.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow510);

Arrow arrow511(right);
arrow511.speed = Stress_tempo;
arrow511.pos.y = 46843.0 + Stress_offset;
arrow511.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow511);

Arrow arrow512(up);
arrow512.speed = Stress_tempo;
arrow512.pos.y = 46893.0 + Stress_offset;
arrow512.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow512);

Arrow arrow513(left);
arrow513.speed = Stress_tempo;
arrow513.pos.y = 46942.0 + Stress_offset;
arrow513.side = computerSide;
arrow513.trailSize = 127;
computerArrowList->insert(computerArrowList->begin(), arrow513);

Arrow arrow514(right);
arrow514.speed = Stress_tempo;
arrow514.pos.y = 47041.0 + Stress_offset;
arrow514.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow514);

Arrow arrow515(up);
arrow515.speed = Stress_tempo;
arrow515.pos.y = 47091.0 + Stress_offset;
arrow515.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow515);

Arrow arrow516(left);
arrow516.speed = Stress_tempo;
arrow516.pos.y = 47190.0 + Stress_offset;
arrow516.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow516);

Arrow arrow517(right);
arrow517.speed = Stress_tempo;
arrow517.pos.y = 47290.0 + Stress_offset;
arrow517.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow517);

Arrow arrow518(left);
arrow518.speed = Stress_tempo;
arrow518.pos.y = 47388.0 + Stress_offset;
arrow518.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow518);

Arrow arrow519(up);
arrow519.speed = Stress_tempo;
arrow519.pos.y = 47488.0 + Stress_offset;
arrow519.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow519);

Arrow arrow520(left);
arrow520.speed = Stress_tempo;
arrow520.pos.y = 47587.0 + Stress_offset;
arrow520.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow520);

Arrow arrow521(left);
arrow521.speed = Stress_tempo;
arrow521.pos.y = 47686.0 + Stress_offset;
arrow521.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow521);

Arrow arrow522(left);
arrow522.speed = Stress_tempo;
arrow522.pos.y = 47785.0 + Stress_offset;
arrow522.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow522);

Arrow arrow523(up);
arrow523.speed = Stress_tempo;
arrow523.pos.y = 47884.0 + Stress_offset;
arrow523.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow523);

Arrow arrow524(right);
arrow524.speed = Stress_tempo;
arrow524.pos.y = 47984.0 + Stress_offset;
arrow524.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow524);

Arrow arrow525(down);
arrow525.speed = Stress_tempo;
arrow525.pos.y = 48083.0 + Stress_offset;
arrow525.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow525);

Arrow arrow526(right);
arrow526.speed = Stress_tempo;
arrow526.pos.y = 48182.0 + Stress_offset;
arrow526.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow526);

Arrow arrow527(left);
arrow527.speed = Stress_tempo;
arrow527.pos.y = 48281.0 + Stress_offset;
arrow527.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow527);

Arrow arrow528(right);
arrow528.speed = Stress_tempo;
arrow528.pos.y = 48380.0 + Stress_offset;
arrow528.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow528);

Arrow arrow529(left);
arrow529.speed = Stress_tempo;
arrow529.pos.y = 48479.0 + Stress_offset;
arrow529.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow529);

Arrow arrow530(right);
arrow530.speed = Stress_tempo;
arrow530.pos.y = 48578.0 + Stress_offset;
arrow530.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow530);

Arrow arrow531(left);
arrow531.speed = Stress_tempo;
arrow531.pos.y = 48677.0 + Stress_offset;
arrow531.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow531);

Arrow arrow532(down);
arrow532.speed = Stress_tempo;
arrow532.pos.y = 48777.0 + Stress_offset;
arrow532.side = playerSide;
arrow532.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow532);

Arrow arrow533(left);
arrow533.speed = Stress_tempo;
arrow533.pos.y = 48975.0 + Stress_offset;
arrow533.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow533);

Arrow arrow534(left);
arrow534.speed = Stress_tempo;
arrow534.pos.y = 49074.0 + Stress_offset;
arrow534.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow534);

Arrow arrow535(down);
arrow535.speed = Stress_tempo;
arrow535.pos.y = 49173.0 + Stress_offset;
arrow535.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow535);

Arrow arrow536(left);
arrow536.speed = Stress_tempo;
arrow536.pos.y = 49272.0 + Stress_offset;
arrow536.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow536);

Arrow arrow537(right);
arrow537.speed = Stress_tempo;
arrow537.pos.y = 49371.0 + Stress_offset;
arrow537.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow537);

Arrow arrow538(left);
arrow538.speed = Stress_tempo;
arrow538.pos.y = 49471.0 + Stress_offset;
arrow538.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow538);

Arrow arrow539(down);
arrow539.speed = Stress_tempo;
arrow539.pos.y = 49570.0 + Stress_offset;
arrow539.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow539);

Arrow arrow540(left);
arrow540.speed = Stress_tempo;
arrow540.pos.y = 49669.0 + Stress_offset;
arrow540.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow540);

Arrow arrow541(up);
arrow541.speed = Stress_tempo;
arrow541.pos.y = 49768.0 + Stress_offset;
arrow541.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow541);

Arrow arrow542(left);
arrow542.speed = Stress_tempo;
arrow542.pos.y = 49867.0 + Stress_offset;
arrow542.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow542);

Arrow arrow543(up);
arrow543.speed = Stress_tempo;
arrow543.pos.y = 49967.0 + Stress_offset;
arrow543.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow543);

Arrow arrow544(up);
arrow544.speed = Stress_tempo;
arrow544.pos.y = 50065.0 + Stress_offset;
arrow544.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow544);

Arrow arrow545(left);
arrow545.speed = Stress_tempo;
arrow545.pos.y = 50165.0 + Stress_offset;
arrow545.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow545);

Arrow arrow546(left);
arrow546.speed = Stress_tempo;
arrow546.pos.y = 50264.0 + Stress_offset;
arrow546.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow546);

Arrow arrow547(down);
arrow547.speed = Stress_tempo;
arrow547.pos.y = 50363.0 + Stress_offset;
arrow547.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow547);

Arrow arrow548(right);
arrow548.speed = Stress_tempo;
arrow548.pos.y = 50462.0 + Stress_offset;
arrow548.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow548);

Arrow arrow549(left);
arrow549.speed = Stress_tempo;
arrow549.pos.y = 50561.0 + Stress_offset;
arrow549.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow549);

Arrow arrow550(up);
arrow550.speed = Stress_tempo;
arrow550.pos.y = 50660.0 + Stress_offset;
arrow550.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow550);

Arrow arrow551(down);
arrow551.speed = Stress_tempo;
arrow551.pos.y = 50760.0 + Stress_offset;
arrow551.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow551);

Arrow arrow552(left);
arrow552.speed = Stress_tempo;
arrow552.pos.y = 50809.0 + Stress_offset;
arrow552.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow552);

Arrow arrow553(right);
arrow553.speed = Stress_tempo;
arrow553.pos.y = 50858.0 + Stress_offset;
arrow553.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow553);

Arrow arrow554(up);
arrow554.speed = Stress_tempo;
arrow554.pos.y = 50958.0 + Stress_offset;
arrow554.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow554);

Arrow arrow555(down);
arrow555.speed = Stress_tempo;
arrow555.pos.y = 51007.0 + Stress_offset;
arrow555.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow555);

Arrow arrow556(right);
arrow556.speed = Stress_tempo;
arrow556.pos.y = 51057.0 + Stress_offset;
arrow556.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow556);

Arrow arrow557(up);
arrow557.speed = Stress_tempo;
arrow557.pos.y = 51156.0 + Stress_offset;
arrow557.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow557);

Arrow arrow558(right);
arrow558.speed = Stress_tempo;
arrow558.pos.y = 51255.0 + Stress_offset;
arrow558.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow558);

Arrow arrow559(up);
arrow559.speed = Stress_tempo;
arrow559.pos.y = 51354.0 + Stress_offset;
arrow559.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow559);

Arrow arrow560(left);
arrow560.speed = Stress_tempo;
arrow560.pos.y = 51453.0 + Stress_offset;
arrow560.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow560);

Arrow arrow561(down);
arrow561.speed = Stress_tempo;
arrow561.pos.y = 51552.0 + Stress_offset;
arrow561.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow561);

Arrow arrow562(left);
arrow562.speed = Stress_tempo;
arrow562.pos.y = 51602.0 + Stress_offset;
arrow562.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow562);

Arrow arrow563(right);
arrow563.speed = Stress_tempo;
arrow563.pos.y = 51651.0 + Stress_offset;
arrow563.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow563);

Arrow arrow564(up);
arrow564.speed = Stress_tempo;
arrow564.pos.y = 51751.0 + Stress_offset;
arrow564.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow564);

Arrow arrow565(down);
arrow565.speed = Stress_tempo;
arrow565.pos.y = 51800.0 + Stress_offset;
arrow565.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow565);

Arrow arrow566(left);
arrow566.speed = Stress_tempo;
arrow566.pos.y = 51850.0 + Stress_offset;
arrow566.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow566);

Arrow arrow567(up);
arrow567.speed = Stress_tempo;
arrow567.pos.y = 51949.0 + Stress_offset;
arrow567.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow567);

Arrow arrow568(right);
arrow568.speed = Stress_tempo;
arrow568.pos.y = 52048.0 + Stress_offset;
arrow568.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow568);

Arrow arrow569(down);
arrow569.speed = Stress_tempo;
arrow569.pos.y = 52147.0 + Stress_offset;
arrow569.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow569);

Arrow arrow570(right);
arrow570.speed = Stress_tempo;
arrow570.pos.y = 52247.0 + Stress_offset;
arrow570.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow570);

Arrow arrow571(up);
arrow571.speed = Stress_tempo;
arrow571.pos.y = 52345.0 + Stress_offset;
arrow571.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow571);

Arrow arrow572(right);
arrow572.speed = Stress_tempo;
arrow572.pos.y = 52395.0 + Stress_offset;
arrow572.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow572);

Arrow arrow573(up);
arrow573.speed = Stress_tempo;
arrow573.pos.y = 52445.0 + Stress_offset;
arrow573.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow573);

Arrow arrow574(down);
arrow574.speed = Stress_tempo;
arrow574.pos.y = 52544.0 + Stress_offset;
arrow574.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow574);

Arrow arrow575(left);
arrow575.speed = Stress_tempo;
arrow575.pos.y = 52594.0 + Stress_offset;
arrow575.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow575);

Arrow arrow576(down);
arrow576.speed = Stress_tempo;
arrow576.pos.y = 52643.0 + Stress_offset;
arrow576.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow576);

Arrow arrow577(right);
arrow577.speed = Stress_tempo;
arrow577.pos.y = 52742.0 + Stress_offset;
arrow577.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow577);

Arrow arrow578(right);
arrow578.speed = Stress_tempo;
arrow578.pos.y = 52841.0 + Stress_offset;
arrow578.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow578);

Arrow arrow579(down);
arrow579.speed = Stress_tempo;
arrow579.pos.y = 52891.0 + Stress_offset;
arrow579.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow579);

Arrow arrow580(right);
arrow580.speed = Stress_tempo;
arrow580.pos.y = 52941.0 + Stress_offset;
arrow580.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow580);

Arrow arrow581(down);
arrow581.speed = Stress_tempo;
arrow581.pos.y = 53040.0 + Stress_offset;
arrow581.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow581);

Arrow arrow582(left);
arrow582.speed = Stress_tempo;
arrow582.pos.y = 53139.0 + Stress_offset;
arrow582.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow582);

Arrow arrow583(right);
arrow583.speed = Stress_tempo;
arrow583.pos.y = 53188.0 + Stress_offset;
arrow583.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow583);

Arrow arrow584(down);
arrow584.speed = Stress_tempo;
arrow584.pos.y = 53238.0 + Stress_offset;
arrow584.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow584);

Arrow arrow585(left);
arrow585.speed = Stress_tempo;
arrow585.pos.y = 53287.0 + Stress_offset;
arrow585.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow585);

Arrow arrow586(down);
arrow586.speed = Stress_tempo;
arrow586.pos.y = 53337.0 + Stress_offset;
arrow586.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow586);

Arrow arrow587(right);
arrow587.speed = Stress_tempo;
arrow587.pos.y = 53436.0 + Stress_offset;
arrow587.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow587);

Arrow arrow588(left);
arrow588.speed = Stress_tempo;
arrow588.pos.y = 53535.0 + Stress_offset;
arrow588.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow588);

Arrow arrow589(right);
arrow589.speed = Stress_tempo;
arrow589.pos.y = 53585.0 + Stress_offset;
arrow589.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow589);

Arrow arrow590(down);
arrow590.speed = Stress_tempo;
arrow590.pos.y = 53634.0 + Stress_offset;
arrow590.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow590);

Arrow arrow591(left);
arrow591.speed = Stress_tempo;
arrow591.pos.y = 53684.0 + Stress_offset;
arrow591.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow591);

Arrow arrow592(down);
arrow592.speed = Stress_tempo;
arrow592.pos.y = 53734.0 + Stress_offset;
arrow592.side = computerSide;
arrow592.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow592);

Arrow arrow593(left);
arrow593.speed = Stress_tempo;
arrow593.pos.y = 53932.0 + Stress_offset;
arrow593.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow593);

Arrow arrow594(left);
arrow594.speed = Stress_tempo;
arrow594.pos.y = 54031.0 + Stress_offset;
arrow594.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow594);

Arrow arrow595(up);
arrow595.speed = Stress_tempo;
arrow595.pos.y = 54130.0 + Stress_offset;
arrow595.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow595);

Arrow arrow596(down);
arrow596.speed = Stress_tempo;
arrow596.pos.y = 54230.0 + Stress_offset;
arrow596.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow596);

Arrow arrow597(right);
arrow597.speed = Stress_tempo;
arrow597.pos.y = 54328.0 + Stress_offset;
arrow597.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow597);

Arrow arrow598(right);
arrow598.speed = Stress_tempo;
arrow598.pos.y = 54428.0 + Stress_offset;
arrow598.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow598);

Arrow arrow599(left);
arrow599.speed = Stress_tempo;
arrow599.pos.y = 54527.0 + Stress_offset;
arrow599.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow599);

Arrow arrow600(down);
arrow600.speed = Stress_tempo;
arrow600.pos.y = 54626.0 + Stress_offset;
arrow600.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow600);

Arrow arrow601(left);
arrow601.speed = Stress_tempo;
arrow601.pos.y = 54725.0 + Stress_offset;
arrow601.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow601);

Arrow arrow602(left);
arrow602.speed = Stress_tempo;
arrow602.pos.y = 54824.0 + Stress_offset;
arrow602.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow602);

Arrow arrow603(up);
arrow603.speed = Stress_tempo;
arrow603.pos.y = 54924.0 + Stress_offset;
arrow603.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow603);

Arrow arrow604(down);
arrow604.speed = Stress_tempo;
arrow604.pos.y = 55022.0 + Stress_offset;
arrow604.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow604);

Arrow arrow605(right);
arrow605.speed = Stress_tempo;
arrow605.pos.y = 55121.0 + Stress_offset;
arrow605.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow605);

Arrow arrow606(right);
arrow606.speed = Stress_tempo;
arrow606.pos.y = 55221.0 + Stress_offset;
arrow606.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow606);

Arrow arrow607(left);
arrow607.speed = Stress_tempo;
arrow607.pos.y = 55320.0 + Stress_offset;
arrow607.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow607);

Arrow arrow608(right);
arrow608.speed = Stress_tempo;
arrow608.pos.y = 55419.0 + Stress_offset;
arrow608.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow608);

Arrow arrow609(up);
arrow609.speed = Stress_tempo;
arrow609.pos.y = 55518.0 + Stress_offset;
arrow609.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow609);

Arrow arrow610(up);
arrow610.speed = Stress_tempo;
arrow610.pos.y = 55618.0 + Stress_offset;
arrow610.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow610);

Arrow arrow611(left);
arrow611.speed = Stress_tempo;
arrow611.pos.y = 55717.0 + Stress_offset;
arrow611.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow611);

Arrow arrow612(down);
arrow612.speed = Stress_tempo;
arrow612.pos.y = 55816.0 + Stress_offset;
arrow612.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow612);

Arrow arrow613(left);
arrow613.speed = Stress_tempo;
arrow613.pos.y = 55915.0 + Stress_offset;
arrow613.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow613);

Arrow arrow614(right);
arrow614.speed = Stress_tempo;
arrow614.pos.y = 56014.0 + Stress_offset;
arrow614.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow614);

Arrow arrow615(down);
arrow615.speed = Stress_tempo;
arrow615.pos.y = 56064.0 + Stress_offset;
arrow615.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow615);

Arrow arrow616(right);
arrow616.speed = Stress_tempo;
arrow616.pos.y = 56113.0 + Stress_offset;
arrow616.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow616);

Arrow arrow617(down);
arrow617.speed = Stress_tempo;
arrow617.pos.y = 56212.0 + Stress_offset;
arrow617.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow617);

Arrow arrow618(left);
arrow618.speed = Stress_tempo;
arrow618.pos.y = 56311.0 + Stress_offset;
arrow618.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow618);

Arrow arrow619(down);
arrow619.speed = Stress_tempo;
arrow619.pos.y = 56410.0 + Stress_offset;
arrow619.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow619);

Arrow arrow620(right);
arrow620.speed = Stress_tempo;
arrow620.pos.y = 56510.0 + Stress_offset;
arrow620.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow620);

Arrow arrow621(down);
arrow621.speed = Stress_tempo;
arrow621.pos.y = 56608.0 + Stress_offset;
arrow621.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow621);

Arrow arrow622(left);
arrow622.speed = Stress_tempo;
arrow622.pos.y = 56708.0 + Stress_offset;
arrow622.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow622);

Arrow arrow623(down);
arrow623.speed = Stress_tempo;
arrow623.pos.y = 56807.0 + Stress_offset;
arrow623.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow623);

Arrow arrow624(right);
arrow624.speed = Stress_tempo;
arrow624.pos.y = 56906.0 + Stress_offset;
arrow624.side = playerSide;
arrow624.trailSize = 337;
playerArrowList->insert(playerArrowList->begin(), arrow624);

Arrow arrow625(left);
arrow625.speed = Stress_tempo;
arrow625.pos.y = 57104.0 + Stress_offset;
arrow625.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow625);

Arrow arrow626(right);
arrow626.speed = Stress_tempo;
arrow626.pos.y = 57154.0 + Stress_offset;
arrow626.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow626);

Arrow arrow627(up);
arrow627.speed = Stress_tempo;
arrow627.pos.y = 57204.0 + Stress_offset;
arrow627.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow627);

Arrow arrow628(right);
arrow628.speed = Stress_tempo;
arrow628.pos.y = 57302.0 + Stress_offset;
arrow628.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow628);

Arrow arrow629(left);
arrow629.speed = Stress_tempo;
arrow629.pos.y = 57402.0 + Stress_offset;
arrow629.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow629);

Arrow arrow630(right);
arrow630.speed = Stress_tempo;
arrow630.pos.y = 57451.0 + Stress_offset;
arrow630.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow630);

Arrow arrow631(up);
arrow631.speed = Stress_tempo;
arrow631.pos.y = 57501.0 + Stress_offset;
arrow631.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow631);

Arrow arrow632(right);
arrow632.speed = Stress_tempo;
arrow632.pos.y = 57600.0 + Stress_offset;
arrow632.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow632);

Arrow arrow633(left);
arrow633.speed = Stress_tempo;
arrow633.pos.y = 57699.0 + Stress_offset;
arrow633.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow633);

Arrow arrow634(right);
arrow634.speed = Stress_tempo;
arrow634.pos.y = 57749.0 + Stress_offset;
arrow634.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow634);

Arrow arrow635(up);
arrow635.speed = Stress_tempo;
arrow635.pos.y = 57798.0 + Stress_offset;
arrow635.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow635);

Arrow arrow636(left);
arrow636.speed = Stress_tempo;
arrow636.pos.y = 57897.0 + Stress_offset;
arrow636.side = playerSide;
arrow636.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow636);

Arrow arrow637(right);
arrow637.speed = Stress_tempo;
arrow637.pos.y = 57897.0 + Stress_offset;
arrow637.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow637);

Arrow arrow638(left);
arrow638.speed = Stress_tempo;
arrow638.pos.y = 57997.0 + Stress_offset;
arrow638.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow638);

Arrow arrow639(right);
arrow639.speed = Stress_tempo;
arrow639.pos.y = 58046.0 + Stress_offset;
arrow639.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow639);

Arrow arrow640(up);
arrow640.speed = Stress_tempo;
arrow640.pos.y = 58096.0 + Stress_offset;
arrow640.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow640);

Arrow arrow641(right);
arrow641.speed = Stress_tempo;
arrow641.pos.y = 58195.0 + Stress_offset;
arrow641.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow641);

Arrow arrow642(up);
arrow642.speed = Stress_tempo;
arrow642.pos.y = 58294.0 + Stress_offset;
arrow642.side = playerSide;
arrow642.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow642);

Arrow arrow643(up);
arrow643.speed = Stress_tempo;
arrow643.pos.y = 58294.0 + Stress_offset;
arrow643.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow643);

Arrow arrow644(down);
arrow644.speed = Stress_tempo;
arrow644.pos.y = 58393.0 + Stress_offset;
arrow644.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow644);

Arrow arrow645(left);
arrow645.speed = Stress_tempo;
arrow645.pos.y = 58492.0 + Stress_offset;
arrow645.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow645);

Arrow arrow646(right);
arrow646.speed = Stress_tempo;
arrow646.pos.y = 58591.0 + Stress_offset;
arrow646.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow646);

Arrow arrow647(left);
arrow647.speed = Stress_tempo;
arrow647.pos.y = 58691.0 + Stress_offset;
arrow647.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow647);

Arrow arrow648(right);
arrow648.speed = Stress_tempo;
arrow648.pos.y = 58740.0 + Stress_offset;
arrow648.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow648);

Arrow arrow649(up);
arrow649.speed = Stress_tempo;
arrow649.pos.y = 58790.0 + Stress_offset;
arrow649.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow649);

Arrow arrow650(right);
arrow650.speed = Stress_tempo;
arrow650.pos.y = 58889.0 + Stress_offset;
arrow650.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow650);

Arrow arrow651(left);
arrow651.speed = Stress_tempo;
arrow651.pos.y = 58988.0 + Stress_offset;
arrow651.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow651);

Arrow arrow652(right);
arrow652.speed = Stress_tempo;
arrow652.pos.y = 59038.0 + Stress_offset;
arrow652.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow652);

Arrow arrow653(up);
arrow653.speed = Stress_tempo;
arrow653.pos.y = 59087.0 + Stress_offset;
arrow653.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow653);

Arrow arrow654(right);
arrow654.speed = Stress_tempo;
arrow654.pos.y = 59186.0 + Stress_offset;
arrow654.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow654);

Arrow arrow655(left);
arrow655.speed = Stress_tempo;
arrow655.pos.y = 59285.0 + Stress_offset;
arrow655.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow655);

Arrow arrow656(right);
arrow656.speed = Stress_tempo;
arrow656.pos.y = 59335.0 + Stress_offset;
arrow656.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow656);

Arrow arrow657(up);
arrow657.speed = Stress_tempo;
arrow657.pos.y = 59385.0 + Stress_offset;
arrow657.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow657);

Arrow arrow658(left);
arrow658.speed = Stress_tempo;
arrow658.pos.y = 59484.0 + Stress_offset;
arrow658.side = playerSide;
arrow658.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow658);

Arrow arrow659(right);
arrow659.speed = Stress_tempo;
arrow659.pos.y = 59484.0 + Stress_offset;
arrow659.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow659);

Arrow arrow660(left);
arrow660.speed = Stress_tempo;
arrow660.pos.y = 59583.0 + Stress_offset;
arrow660.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow660);

Arrow arrow661(right);
arrow661.speed = Stress_tempo;
arrow661.pos.y = 59632.0 + Stress_offset;
arrow661.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow661);

Arrow arrow662(up);
arrow662.speed = Stress_tempo;
arrow662.pos.y = 59682.0 + Stress_offset;
arrow662.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow662);

Arrow arrow663(right);
arrow663.speed = Stress_tempo;
arrow663.pos.y = 59781.0 + Stress_offset;
arrow663.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow663);

Arrow arrow664(up);
arrow664.speed = Stress_tempo;
arrow664.pos.y = 59880.0 + Stress_offset;
arrow664.side = playerSide;
arrow664.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow664);

Arrow arrow665(up);
arrow665.speed = Stress_tempo;
arrow665.pos.y = 59880.0 + Stress_offset;
arrow665.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow665);

Arrow arrow666(down);
arrow666.speed = Stress_tempo;
arrow666.pos.y = 59980.0 + Stress_offset;
arrow666.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow666);

Arrow arrow667(left);
arrow667.speed = Stress_tempo;
arrow667.pos.y = 60078.0 + Stress_offset;
arrow667.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow667);

Arrow arrow668(right);
arrow668.speed = Stress_tempo;
arrow668.pos.y = 60178.0 + Stress_offset;
arrow668.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow668);

Arrow arrow669(up);
arrow669.speed = Stress_tempo;
arrow669.pos.y = 60277.0 + Stress_offset;
arrow669.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow669);

Arrow arrow670(left);
arrow670.speed = Stress_tempo;
arrow670.pos.y = 60277.0 + Stress_offset;
arrow670.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow670);

Arrow arrow671(right);
arrow671.speed = Stress_tempo;
arrow671.pos.y = 60327.0 + Stress_offset;
arrow671.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow671);

Arrow arrow672(right);
arrow672.speed = Stress_tempo;
arrow672.pos.y = 60376.0 + Stress_offset;
arrow672.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow672);

Arrow arrow673(up);
arrow673.speed = Stress_tempo;
arrow673.pos.y = 60376.0 + Stress_offset;
arrow673.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow673);

Arrow arrow674(left);
arrow674.speed = Stress_tempo;
arrow674.pos.y = 60475.0 + Stress_offset;
arrow674.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow674);

Arrow arrow675(right);
arrow675.speed = Stress_tempo;
arrow675.pos.y = 60475.0 + Stress_offset;
arrow675.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow675);

Arrow arrow676(up);
arrow676.speed = Stress_tempo;
arrow676.pos.y = 60574.0 + Stress_offset;
arrow676.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow676);

Arrow arrow677(left);
arrow677.speed = Stress_tempo;
arrow677.pos.y = 60574.0 + Stress_offset;
arrow677.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow677);

Arrow arrow678(right);
arrow678.speed = Stress_tempo;
arrow678.pos.y = 60624.0 + Stress_offset;
arrow678.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow678);

Arrow arrow679(right);
arrow679.speed = Stress_tempo;
arrow679.pos.y = 60674.0 + Stress_offset;
arrow679.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow679);

Arrow arrow680(up);
arrow680.speed = Stress_tempo;
arrow680.pos.y = 60674.0 + Stress_offset;
arrow680.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow680);

Arrow arrow681(left);
arrow681.speed = Stress_tempo;
arrow681.pos.y = 60772.0 + Stress_offset;
arrow681.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow681);

Arrow arrow682(right);
arrow682.speed = Stress_tempo;
arrow682.pos.y = 60772.0 + Stress_offset;
arrow682.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow682);

Arrow arrow683(up);
arrow683.speed = Stress_tempo;
arrow683.pos.y = 60872.0 + Stress_offset;
arrow683.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow683);

Arrow arrow684(left);
arrow684.speed = Stress_tempo;
arrow684.pos.y = 60872.0 + Stress_offset;
arrow684.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow684);

Arrow arrow685(right);
arrow685.speed = Stress_tempo;
arrow685.pos.y = 60921.0 + Stress_offset;
arrow685.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow685);

Arrow arrow686(right);
arrow686.speed = Stress_tempo;
arrow686.pos.y = 60971.0 + Stress_offset;
arrow686.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow686);

Arrow arrow687(up);
arrow687.speed = Stress_tempo;
arrow687.pos.y = 60971.0 + Stress_offset;
arrow687.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow687);

Arrow arrow688(left);
arrow688.speed = Stress_tempo;
arrow688.pos.y = 61070.0 + Stress_offset;
arrow688.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow688);

Arrow arrow689(right);
arrow689.speed = Stress_tempo;
arrow689.pos.y = 61070.0 + Stress_offset;
arrow689.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow689);

Arrow arrow690(up);
arrow690.speed = Stress_tempo;
arrow690.pos.y = 61169.0 + Stress_offset;
arrow690.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow690);

Arrow arrow691(left);
arrow691.speed = Stress_tempo;
arrow691.pos.y = 61169.0 + Stress_offset;
arrow691.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow691);

Arrow arrow692(right);
arrow692.speed = Stress_tempo;
arrow692.pos.y = 61219.0 + Stress_offset;
arrow692.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow692);

Arrow arrow693(right);
arrow693.speed = Stress_tempo;
arrow693.pos.y = 61268.0 + Stress_offset;
arrow693.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow693);

Arrow arrow694(up);
arrow694.speed = Stress_tempo;
arrow694.pos.y = 61268.0 + Stress_offset;
arrow694.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow694);

Arrow arrow695(left);
arrow695.speed = Stress_tempo;
arrow695.pos.y = 61367.0 + Stress_offset;
arrow695.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow695);

Arrow arrow696(right);
arrow696.speed = Stress_tempo;
arrow696.pos.y = 61367.0 + Stress_offset;
arrow696.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow696);

Arrow arrow697(down);
arrow697.speed = Stress_tempo;
arrow697.pos.y = 61467.0 + Stress_offset;
arrow697.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow697);

Arrow arrow698(up);
arrow698.speed = Stress_tempo;
arrow698.pos.y = 61467.0 + Stress_offset;
arrow698.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow698);

Arrow arrow699(left);
arrow699.speed = Stress_tempo;
arrow699.pos.y = 61565.0 + Stress_offset;
arrow699.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow699);

Arrow arrow700(down);
arrow700.speed = Stress_tempo;
arrow700.pos.y = 61565.0 + Stress_offset;
arrow700.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow700);

Arrow arrow701(right);
arrow701.speed = Stress_tempo;
arrow701.pos.y = 61665.0 + Stress_offset;
arrow701.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow701);

Arrow arrow702(left);
arrow702.speed = Stress_tempo;
arrow702.pos.y = 61665.0 + Stress_offset;
arrow702.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow702);

Arrow arrow703(right);
arrow703.speed = Stress_tempo;
arrow703.pos.y = 61764.0 + Stress_offset;
arrow703.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow703);

Arrow arrow704(left);
arrow704.speed = Stress_tempo;
arrow704.pos.y = 61764.0 + Stress_offset;
arrow704.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow704);

Arrow arrow705(up);
arrow705.speed = Stress_tempo;
arrow705.pos.y = 61863.0 + Stress_offset;
arrow705.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow705);

Arrow arrow706(left);
arrow706.speed = Stress_tempo;
arrow706.pos.y = 61863.0 + Stress_offset;
arrow706.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow706);

Arrow arrow707(right);
arrow707.speed = Stress_tempo;
arrow707.pos.y = 61912.0 + Stress_offset;
arrow707.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow707);

Arrow arrow708(right);
arrow708.speed = Stress_tempo;
arrow708.pos.y = 61962.0 + Stress_offset;
arrow708.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow708);

Arrow arrow709(up);
arrow709.speed = Stress_tempo;
arrow709.pos.y = 61962.0 + Stress_offset;
arrow709.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow709);

Arrow arrow710(left);
arrow710.speed = Stress_tempo;
arrow710.pos.y = 62061.0 + Stress_offset;
arrow710.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow710);

Arrow arrow711(right);
arrow711.speed = Stress_tempo;
arrow711.pos.y = 62061.0 + Stress_offset;
arrow711.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow711);

Arrow arrow712(up);
arrow712.speed = Stress_tempo;
arrow712.pos.y = 62161.0 + Stress_offset;
arrow712.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow712);

Arrow arrow713(left);
arrow713.speed = Stress_tempo;
arrow713.pos.y = 62161.0 + Stress_offset;
arrow713.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow713);

Arrow arrow714(right);
arrow714.speed = Stress_tempo;
arrow714.pos.y = 62210.0 + Stress_offset;
arrow714.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow714);

Arrow arrow715(right);
arrow715.speed = Stress_tempo;
arrow715.pos.y = 62260.0 + Stress_offset;
arrow715.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow715);

Arrow arrow716(up);
arrow716.speed = Stress_tempo;
arrow716.pos.y = 62260.0 + Stress_offset;
arrow716.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow716);

Arrow arrow717(left);
arrow717.speed = Stress_tempo;
arrow717.pos.y = 62359.0 + Stress_offset;
arrow717.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow717);

Arrow arrow718(right);
arrow718.speed = Stress_tempo;
arrow718.pos.y = 62359.0 + Stress_offset;
arrow718.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow718);

Arrow arrow719(up);
arrow719.speed = Stress_tempo;
arrow719.pos.y = 62458.0 + Stress_offset;
arrow719.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow719);

Arrow arrow720(left);
arrow720.speed = Stress_tempo;
arrow720.pos.y = 62458.0 + Stress_offset;
arrow720.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow720);

Arrow arrow721(right);
arrow721.speed = Stress_tempo;
arrow721.pos.y = 62508.0 + Stress_offset;
arrow721.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow721);

Arrow arrow722(right);
arrow722.speed = Stress_tempo;
arrow722.pos.y = 62557.0 + Stress_offset;
arrow722.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow722);

Arrow arrow723(up);
arrow723.speed = Stress_tempo;
arrow723.pos.y = 62557.0 + Stress_offset;
arrow723.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow723);

Arrow arrow724(left);
arrow724.speed = Stress_tempo;
arrow724.pos.y = 62656.0 + Stress_offset;
arrow724.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow724);

Arrow arrow725(right);
arrow725.speed = Stress_tempo;
arrow725.pos.y = 62656.0 + Stress_offset;
arrow725.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow725);

Arrow arrow726(up);
arrow726.speed = Stress_tempo;
arrow726.pos.y = 62755.0 + Stress_offset;
arrow726.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow726);

Arrow arrow727(left);
arrow727.speed = Stress_tempo;
arrow727.pos.y = 62755.0 + Stress_offset;
arrow727.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow727);

Arrow arrow728(right);
arrow728.speed = Stress_tempo;
arrow728.pos.y = 62805.0 + Stress_offset;
arrow728.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow728);

Arrow arrow729(right);
arrow729.speed = Stress_tempo;
arrow729.pos.y = 62854.0 + Stress_offset;
arrow729.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow729);

Arrow arrow730(up);
arrow730.speed = Stress_tempo;
arrow730.pos.y = 62854.0 + Stress_offset;
arrow730.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow730);

Arrow arrow731(left);
arrow731.speed = Stress_tempo;
arrow731.pos.y = 62954.0 + Stress_offset;
arrow731.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow731);

Arrow arrow732(right);
arrow732.speed = Stress_tempo;
arrow732.pos.y = 62954.0 + Stress_offset;
arrow732.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow732);

Arrow arrow733(down);
arrow733.speed = Stress_tempo;
arrow733.pos.y = 63053.0 + Stress_offset;
arrow733.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow733);

Arrow arrow734(up);
arrow734.speed = Stress_tempo;
arrow734.pos.y = 63053.0 + Stress_offset;
arrow734.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow734);

Arrow arrow735(left);
arrow735.speed = Stress_tempo;
arrow735.pos.y = 63152.0 + Stress_offset;
arrow735.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow735);

Arrow arrow736(down);
arrow736.speed = Stress_tempo;
arrow736.pos.y = 63152.0 + Stress_offset;
arrow736.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow736);

Arrow arrow737(right);
arrow737.speed = Stress_tempo;
arrow737.pos.y = 63251.0 + Stress_offset;
arrow737.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow737);

Arrow arrow738(left);
arrow738.speed = Stress_tempo;
arrow738.pos.y = 63251.0 + Stress_offset;
arrow738.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow738);

Arrow arrow739(right);
arrow739.speed = Stress_tempo;
arrow739.pos.y = 63350.0 + Stress_offset;
arrow739.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow739);

Arrow arrow740(left);
arrow740.speed = Stress_tempo;
arrow740.pos.y = 63351.0 + Stress_offset;
arrow740.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow740);

Arrow arrow741(right);
arrow741.speed = Stress_tempo;
arrow741.pos.y = 63450.0 + Stress_offset;
arrow741.side = playerSide;
arrow741.trailSize = 589;
playerArrowList->insert(playerArrowList->begin(), arrow741);

Arrow arrow742(right);
arrow742.speed = Stress_tempo;
arrow742.pos.y = 63450.0 + Stress_offset;
arrow742.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow742);

Arrow arrow743(up);
arrow743.speed = Stress_tempo;
arrow743.pos.y = 63499.0 + Stress_offset;
arrow743.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow743);

Arrow arrow744(right);
arrow744.speed = Stress_tempo;
arrow744.pos.y = 63548.0 + Stress_offset;
arrow744.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow744);

Arrow arrow745(up);
arrow745.speed = Stress_tempo;
arrow745.pos.y = 63598.0 + Stress_offset;
arrow745.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow745);

Arrow arrow746(left);
arrow746.speed = Stress_tempo;
arrow746.pos.y = 63648.0 + Stress_offset;
arrow746.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow746);

Arrow arrow747(down);
arrow747.speed = Stress_tempo;
arrow747.pos.y = 63747.0 + Stress_offset;
arrow747.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow747);

Arrow arrow748(down);
arrow748.speed = Stress_tempo;
arrow748.pos.y = 63846.0 + Stress_offset;
arrow748.side = playerSide;
arrow748.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow748);

Arrow arrow749(right);
arrow749.speed = Stress_tempo;
arrow749.pos.y = 63846.0 + Stress_offset;
arrow749.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow749);

Arrow arrow750(up);
arrow750.speed = Stress_tempo;
arrow750.pos.y = 63895.0 + Stress_offset;
arrow750.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow750);

Arrow arrow751(right);
arrow751.speed = Stress_tempo;
arrow751.pos.y = 63945.0 + Stress_offset;
arrow751.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow751);

Arrow arrow752(up);
arrow752.speed = Stress_tempo;
arrow752.pos.y = 63995.0 + Stress_offset;
arrow752.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow752);

Arrow arrow753(left);
arrow753.speed = Stress_tempo;
arrow753.pos.y = 64044.0 + Stress_offset;
arrow753.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow753);

Arrow arrow754(down);
arrow754.speed = Stress_tempo;
arrow754.pos.y = 64143.0 + Stress_offset;
arrow754.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow754);

Arrow arrow755(left);
arrow755.speed = Stress_tempo;
arrow755.pos.y = 64242.0 + Stress_offset;
arrow755.side = playerSide;
arrow755.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow755);

Arrow arrow756(right);
arrow756.speed = Stress_tempo;
arrow756.pos.y = 64242.0 + Stress_offset;
arrow756.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow756);

Arrow arrow757(left);
arrow757.speed = Stress_tempo;
arrow757.pos.y = 64292.0 + Stress_offset;
arrow757.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow757);

Arrow arrow758(up);
arrow758.speed = Stress_tempo;
arrow758.pos.y = 64342.0 + Stress_offset;
arrow758.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow758);

Arrow arrow759(right);
arrow759.speed = Stress_tempo;
arrow759.pos.y = 64391.0 + Stress_offset;
arrow759.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow759);

Arrow arrow760(left);
arrow760.speed = Stress_tempo;
arrow760.pos.y = 64441.0 + Stress_offset;
arrow760.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow760);

Arrow arrow761(down);
arrow761.speed = Stress_tempo;
arrow761.pos.y = 64540.0 + Stress_offset;
arrow761.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow761);

Arrow arrow762(down);
arrow762.speed = Stress_tempo;
arrow762.pos.y = 64639.0 + Stress_offset;
arrow762.side = playerSide;
arrow762.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow762);

Arrow arrow763(right);
arrow763.speed = Stress_tempo;
arrow763.pos.y = 64639.0 + Stress_offset;
arrow763.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow763);

Arrow arrow764(up);
arrow764.speed = Stress_tempo;
arrow764.pos.y = 64688.0 + Stress_offset;
arrow764.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow764);

Arrow arrow765(right);
arrow765.speed = Stress_tempo;
arrow765.pos.y = 64738.0 + Stress_offset;
arrow765.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow765);

Arrow arrow766(up);
arrow766.speed = Stress_tempo;
arrow766.pos.y = 64788.0 + Stress_offset;
arrow766.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow766);

Arrow arrow767(left);
arrow767.speed = Stress_tempo;
arrow767.pos.y = 64837.0 + Stress_offset;
arrow767.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow767);

Arrow arrow768(down);
arrow768.speed = Stress_tempo;
arrow768.pos.y = 64937.0 + Stress_offset;
arrow768.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow768);

Arrow arrow769(right);
arrow769.speed = Stress_tempo;
arrow769.pos.y = 65036.0 + Stress_offset;
arrow769.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow769);

Arrow arrow770(up);
arrow770.speed = Stress_tempo;
arrow770.pos.y = 65085.0 + Stress_offset;
arrow770.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow770);

Arrow arrow771(right);
arrow771.speed = Stress_tempo;
arrow771.pos.y = 65135.0 + Stress_offset;
arrow771.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow771);

Arrow arrow772(left);
arrow772.speed = Stress_tempo;
arrow772.pos.y = 65234.0 + Stress_offset;
arrow772.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow772);

Arrow arrow773(down);
arrow773.speed = Stress_tempo;
arrow773.pos.y = 65333.0 + Stress_offset;
arrow773.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow773);

Arrow arrow774(right);
arrow774.speed = Stress_tempo;
arrow774.pos.y = 65432.0 + Stress_offset;
arrow774.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow774);

Arrow arrow775(up);
arrow775.speed = Stress_tempo;
arrow775.pos.y = 65531.0 + Stress_offset;
arrow775.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow775);

Arrow arrow776(left);
arrow776.speed = Stress_tempo;
arrow776.pos.y = 65631.0 + Stress_offset;
arrow776.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow776);

Arrow arrow777(down);
arrow777.speed = Stress_tempo;
arrow777.pos.y = 65730.0 + Stress_offset;
arrow777.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow777);

Arrow arrow778(left);
arrow778.speed = Stress_tempo;
arrow778.pos.y = 65829.0 + Stress_offset;
arrow778.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow778);

Arrow arrow779(right);
arrow779.speed = Stress_tempo;
arrow779.pos.y = 65878.0 + Stress_offset;
arrow779.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow779);

Arrow arrow780(up);
arrow780.speed = Stress_tempo;
arrow780.pos.y = 65928.0 + Stress_offset;
arrow780.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow780);

Arrow arrow781(down);
arrow781.speed = Stress_tempo;
arrow781.pos.y = 66027.0 + Stress_offset;
arrow781.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow781);

Arrow arrow782(left);
arrow782.speed = Stress_tempo;
arrow782.pos.y = 66126.0 + Stress_offset;
arrow782.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow782);

Arrow arrow783(right);
arrow783.speed = Stress_tempo;
arrow783.pos.y = 66225.0 + Stress_offset;
arrow783.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow783);

Arrow arrow784(up);
arrow784.speed = Stress_tempo;
arrow784.pos.y = 66275.0 + Stress_offset;
arrow784.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow784);

Arrow arrow785(right);
arrow785.speed = Stress_tempo;
arrow785.pos.y = 66325.0 + Stress_offset;
arrow785.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow785);

Arrow arrow786(down);
arrow786.speed = Stress_tempo;
arrow786.pos.y = 66424.0 + Stress_offset;
arrow786.side = playerSide;
arrow786.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow786);

Arrow arrow787(right);
arrow787.speed = Stress_tempo;
arrow787.pos.y = 66622.0 + Stress_offset;
arrow787.side = playerSide;
arrow787.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow787);

Arrow arrow788(up);
arrow788.speed = Stress_tempo;
arrow788.pos.y = 66622.0 + Stress_offset;
arrow788.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow788);

Arrow arrow789(right);
arrow789.speed = Stress_tempo;
arrow789.pos.y = 66721.0 + Stress_offset;
arrow789.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow789);

Arrow arrow790(down);
arrow790.speed = Stress_tempo;
arrow790.pos.y = 66820.0 + Stress_offset;
arrow790.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow790);

Arrow arrow791(right);
arrow791.speed = Stress_tempo;
arrow791.pos.y = 66920.0 + Stress_offset;
arrow791.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow791);

Arrow arrow792(down);
arrow792.speed = Stress_tempo;
arrow792.pos.y = 67018.0 + Stress_offset;
arrow792.side = playerSide;
arrow792.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow792);

Arrow arrow793(left);
arrow793.speed = Stress_tempo;
arrow793.pos.y = 67018.0 + Stress_offset;
arrow793.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow793);

Arrow arrow794(down);
arrow794.speed = Stress_tempo;
arrow794.pos.y = 67118.0 + Stress_offset;
arrow794.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow794);

Arrow arrow795(left);
arrow795.speed = Stress_tempo;
arrow795.pos.y = 67217.0 + Stress_offset;
arrow795.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow795);

Arrow arrow796(right);
arrow796.speed = Stress_tempo;
arrow796.pos.y = 67266.0 + Stress_offset;
arrow796.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow796);

Arrow arrow797(down);
arrow797.speed = Stress_tempo;
arrow797.pos.y = 67316.0 + Stress_offset;
arrow797.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow797);

Arrow arrow798(left);
arrow798.speed = Stress_tempo;
arrow798.pos.y = 67365.0 + Stress_offset;
arrow798.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow798);

Arrow arrow799(left);
arrow799.speed = Stress_tempo;
arrow799.pos.y = 67415.0 + Stress_offset;
arrow799.side = playerSide;
arrow799.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow799);

Arrow arrow800(up);
arrow800.speed = Stress_tempo;
arrow800.pos.y = 67415.0 + Stress_offset;
arrow800.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow800);

Arrow arrow801(right);
arrow801.speed = Stress_tempo;
arrow801.pos.y = 67514.0 + Stress_offset;
arrow801.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow801);

Arrow arrow802(down);
arrow802.speed = Stress_tempo;
arrow802.pos.y = 67613.0 + Stress_offset;
arrow802.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow802);

Arrow arrow803(right);
arrow803.speed = Stress_tempo;
arrow803.pos.y = 67712.0 + Stress_offset;
arrow803.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow803);

Arrow arrow804(down);
arrow804.speed = Stress_tempo;
arrow804.pos.y = 67811.0 + Stress_offset;
arrow804.side = playerSide;
arrow804.trailSize = 591;
playerArrowList->insert(playerArrowList->begin(), arrow804);

Arrow arrow805(left);
arrow805.speed = Stress_tempo;
arrow805.pos.y = 67811.0 + Stress_offset;
arrow805.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow805);

Arrow arrow806(right);
arrow806.speed = Stress_tempo;
arrow806.pos.y = 67861.0 + Stress_offset;
arrow806.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow806);

Arrow arrow807(down);
arrow807.speed = Stress_tempo;
arrow807.pos.y = 67911.0 + Stress_offset;
arrow807.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow807);

Arrow arrow808(left);
arrow808.speed = Stress_tempo;
arrow808.pos.y = 67960.0 + Stress_offset;
arrow808.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow808);

Arrow arrow809(right);
arrow809.speed = Stress_tempo;
arrow809.pos.y = 68010.0 + Stress_offset;
arrow809.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow809);

Arrow arrow810(down);
arrow810.speed = Stress_tempo;
arrow810.pos.y = 68109.0 + Stress_offset;
arrow810.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow810);

Arrow arrow811(up);
arrow811.speed = Stress_tempo;
arrow811.pos.y = 68208.0 + Stress_offset;
arrow811.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow811);

Arrow arrow812(up);
arrow812.speed = Stress_tempo;
arrow812.pos.y = 68208.0 + Stress_offset;
arrow812.side = computerSide;
arrow812.trailSize = 506;
computerArrowList->insert(computerArrowList->begin(), arrow812);

Arrow arrow813(right);
arrow813.speed = Stress_tempo;
arrow813.pos.y = 68307.0 + Stress_offset;
arrow813.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow813);

Arrow arrow814(up);
arrow814.speed = Stress_tempo;
arrow814.pos.y = 68407.0 + Stress_offset;
arrow814.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow814);

Arrow arrow815(right);
arrow815.speed = Stress_tempo;
arrow815.pos.y = 68505.0 + Stress_offset;
arrow815.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow815);

Arrow arrow816(left);
arrow816.speed = Stress_tempo;
arrow816.pos.y = 68605.0 + Stress_offset;
arrow816.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow816);

Arrow arrow817(down);
arrow817.speed = Stress_tempo;
arrow817.pos.y = 68704.0 + Stress_offset;
arrow817.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow817);

Arrow arrow818(left);
arrow818.speed = Stress_tempo;
arrow818.pos.y = 68803.0 + Stress_offset;
arrow818.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow818);

Arrow arrow819(right);
arrow819.speed = Stress_tempo;
arrow819.pos.y = 68853.0 + Stress_offset;
arrow819.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow819);

Arrow arrow820(down);
arrow820.speed = Stress_tempo;
arrow820.pos.y = 68902.0 + Stress_offset;
arrow820.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow820);

Arrow arrow821(up);
arrow821.speed = Stress_tempo;
arrow821.pos.y = 69001.0 + Stress_offset;
arrow821.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow821);

Arrow arrow822(right);
arrow822.speed = Stress_tempo;
arrow822.pos.y = 69100.0 + Stress_offset;
arrow822.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow822);

Arrow arrow823(up);
arrow823.speed = Stress_tempo;
arrow823.pos.y = 69200.0 + Stress_offset;
arrow823.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow823);

Arrow arrow824(right);
arrow824.speed = Stress_tempo;
arrow824.pos.y = 69298.0 + Stress_offset;
arrow824.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow824);

Arrow arrow825(left);
arrow825.speed = Stress_tempo;
arrow825.pos.y = 69398.0 + Stress_offset;
arrow825.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow825);

Arrow arrow826(down);
arrow826.speed = Stress_tempo;
arrow826.pos.y = 69497.0 + Stress_offset;
arrow826.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow826);

Arrow arrow827(left);
arrow827.speed = Stress_tempo;
arrow827.pos.y = 69547.0 + Stress_offset;
arrow827.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow827);

Arrow arrow828(right);
arrow828.speed = Stress_tempo;
arrow828.pos.y = 69597.0 + Stress_offset;
arrow828.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow828);

Arrow arrow829(down);
arrow829.speed = Stress_tempo;
arrow829.pos.y = 69695.0 + Stress_offset;
arrow829.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow829);

}
void Stress_Easy(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList){
    // AUTO-GENERATED CHART

Arrow arrow0(down);
arrow0.speed = Stress_tempo;
arrow0.pos.y = 0.0 + Stress_offset;
arrow0.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow0);

Arrow arrow1(right);
arrow1.speed = Stress_tempo;
arrow1.pos.y = 99.0 + Stress_offset;
arrow1.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow1);

Arrow arrow2(left);
arrow2.speed = Stress_tempo;
arrow2.pos.y = 198.0 + Stress_offset;
arrow2.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow2);

Arrow arrow3(left);
arrow3.speed = Stress_tempo;
arrow3.pos.y = 297.0 + Stress_offset;
arrow3.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow3);

Arrow arrow4(up);
arrow4.speed = Stress_tempo;
arrow4.pos.y = 396.0 + Stress_offset;
arrow4.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow4);

Arrow arrow5(right);
arrow5.speed = Stress_tempo;
arrow5.pos.y = 495.0 + Stress_offset;
arrow5.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow5);

Arrow arrow6(down);
arrow6.speed = Stress_tempo;
arrow6.pos.y = 594.0 + Stress_offset;
arrow6.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow6);

Arrow arrow7(right);
arrow7.speed = Stress_tempo;
arrow7.pos.y = 693.0 + Stress_offset;
arrow7.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow7);

Arrow arrow8(left);
arrow8.speed = Stress_tempo;
arrow8.pos.y = 792.0 + Stress_offset;
arrow8.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow8);

Arrow arrow9(right);
arrow9.speed = Stress_tempo;
arrow9.pos.y = 891.0 + Stress_offset;
arrow9.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow9);

Arrow arrow10(up);
arrow10.speed = Stress_tempo;
arrow10.pos.y = 991.0 + Stress_offset;
arrow10.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow10);

Arrow arrow11(right);
arrow11.speed = Stress_tempo;
arrow11.pos.y = 1090.0 + Stress_offset;
arrow11.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow11);

Arrow arrow12(down);
arrow12.speed = Stress_tempo;
arrow12.pos.y = 1189.0 + Stress_offset;
arrow12.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow12);

Arrow arrow13(right);
arrow13.speed = Stress_tempo;
arrow13.pos.y = 1288.0 + Stress_offset;
arrow13.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow13);

Arrow arrow14(left);
arrow14.speed = Stress_tempo;
arrow14.pos.y = 1387.0 + Stress_offset;
arrow14.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow14);

Arrow arrow15(right);
arrow15.speed = Stress_tempo;
arrow15.pos.y = 1487.0 + Stress_offset;
arrow15.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow15);

Arrow arrow16(down);
arrow16.speed = Stress_tempo;
arrow16.pos.y = 1585.0 + Stress_offset;
arrow16.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow16);

Arrow arrow17(up);
arrow17.speed = Stress_tempo;
arrow17.pos.y = 1685.0 + Stress_offset;
arrow17.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow17);

Arrow arrow18(left);
arrow18.speed = Stress_tempo;
arrow18.pos.y = 1784.0 + Stress_offset;
arrow18.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow18);

Arrow arrow19(left);
arrow19.speed = Stress_tempo;
arrow19.pos.y = 1883.0 + Stress_offset;
arrow19.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow19);

Arrow arrow20(up);
arrow20.speed = Stress_tempo;
arrow20.pos.y = 1982.0 + Stress_offset;
arrow20.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow20);

Arrow arrow21(right);
arrow21.speed = Stress_tempo;
arrow21.pos.y = 2081.0 + Stress_offset;
arrow21.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow21);

Arrow arrow22(down);
arrow22.speed = Stress_tempo;
arrow22.pos.y = 2180.0 + Stress_offset;
arrow22.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow22);

Arrow arrow23(right);
arrow23.speed = Stress_tempo;
arrow23.pos.y = 2280.0 + Stress_offset;
arrow23.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow23);

Arrow arrow24(left);
arrow24.speed = Stress_tempo;
arrow24.pos.y = 2378.0 + Stress_offset;
arrow24.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow24);

Arrow arrow25(right);
arrow25.speed = Stress_tempo;
arrow25.pos.y = 2478.0 + Stress_offset;
arrow25.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow25);

Arrow arrow26(up);
arrow26.speed = Stress_tempo;
arrow26.pos.y = 2577.0 + Stress_offset;
arrow26.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow26);

Arrow arrow27(right);
arrow27.speed = Stress_tempo;
arrow27.pos.y = 2676.0 + Stress_offset;
arrow27.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow27);

Arrow arrow28(down);
arrow28.speed = Stress_tempo;
arrow28.pos.y = 2775.0 + Stress_offset;
arrow28.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow28);

Arrow arrow29(right);
arrow29.speed = Stress_tempo;
arrow29.pos.y = 2874.0 + Stress_offset;
arrow29.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow29);

Arrow arrow30(left);
arrow30.speed = Stress_tempo;
arrow30.pos.y = 2974.0 + Stress_offset;
arrow30.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow30);

Arrow arrow31(right);
arrow31.speed = Stress_tempo;
arrow31.pos.y = 3072.0 + Stress_offset;
arrow31.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow31);

Arrow arrow32(down);
arrow32.speed = Stress_tempo;
arrow32.pos.y = 3172.0 + Stress_offset;
arrow32.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow32);

Arrow arrow33(right);
arrow33.speed = Stress_tempo;
arrow33.pos.y = 3271.0 + Stress_offset;
arrow33.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow33);

Arrow arrow34(left);
arrow34.speed = Stress_tempo;
arrow34.pos.y = 3370.0 + Stress_offset;
arrow34.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow34);

Arrow arrow35(left);
arrow35.speed = Stress_tempo;
arrow35.pos.y = 3568.0 + Stress_offset;
arrow35.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow35);

Arrow arrow36(up);
arrow36.speed = Stress_tempo;
arrow36.pos.y = 3767.0 + Stress_offset;
arrow36.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow36);

Arrow arrow37(down);
arrow37.speed = Stress_tempo;
arrow37.pos.y = 3965.0 + Stress_offset;
arrow37.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow37);

Arrow arrow38(left);
arrow38.speed = Stress_tempo;
arrow38.pos.y = 4064.0 + Stress_offset;
arrow38.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow38);

Arrow arrow39(right);
arrow39.speed = Stress_tempo;
arrow39.pos.y = 4163.0 + Stress_offset;
arrow39.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow39);

Arrow arrow40(down);
arrow40.speed = Stress_tempo;
arrow40.pos.y = 4361.0 + Stress_offset;
arrow40.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow40);

Arrow arrow41(down);
arrow41.speed = Stress_tempo;
arrow41.pos.y = 4560.0 + Stress_offset;
arrow41.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow41);

Arrow arrow42(up);
arrow42.speed = Stress_tempo;
arrow42.pos.y = 4758.0 + Stress_offset;
arrow42.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow42);

Arrow arrow43(right);
arrow43.speed = Stress_tempo;
arrow43.pos.y = 4857.0 + Stress_offset;
arrow43.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow43);

Arrow arrow44(left);
arrow44.speed = Stress_tempo;
arrow44.pos.y = 4956.0 + Stress_offset;
arrow44.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow44);

Arrow arrow45(left);
arrow45.speed = Stress_tempo;
arrow45.pos.y = 5155.0 + Stress_offset;
arrow45.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow45);

Arrow arrow46(up);
arrow46.speed = Stress_tempo;
arrow46.pos.y = 5353.0 + Stress_offset;
arrow46.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow46);

Arrow arrow47(down);
arrow47.speed = Stress_tempo;
arrow47.pos.y = 5551.0 + Stress_offset;
arrow47.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow47);

Arrow arrow48(left);
arrow48.speed = Stress_tempo;
arrow48.pos.y = 5651.0 + Stress_offset;
arrow48.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow48);

Arrow arrow49(right);
arrow49.speed = Stress_tempo;
arrow49.pos.y = 5750.0 + Stress_offset;
arrow49.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow49);

Arrow arrow50(down);
arrow50.speed = Stress_tempo;
arrow50.pos.y = 5948.0 + Stress_offset;
arrow50.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow50);

Arrow arrow51(down);
arrow51.speed = Stress_tempo;
arrow51.pos.y = 6146.0 + Stress_offset;
arrow51.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow51);

Arrow arrow52(left);
arrow52.speed = Stress_tempo;
arrow52.pos.y = 6542.0 + Stress_offset;
arrow52.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow52);

Arrow arrow53(down);
arrow53.speed = Stress_tempo;
arrow53.pos.y = 6642.0 + Stress_offset;
arrow53.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow53);

Arrow arrow54(right);
arrow54.speed = Stress_tempo;
arrow54.pos.y = 6741.0 + Stress_offset;
arrow54.side = computerSide;
arrow54.trailSize = 296;
computerArrowList->insert(computerArrowList->begin(), arrow54);

Arrow arrow55(down);
arrow55.speed = Stress_tempo;
arrow55.pos.y = 6939.0 + Stress_offset;
arrow55.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow55);

Arrow arrow56(left);
arrow56.speed = Stress_tempo;
arrow56.pos.y = 7137.0 + Stress_offset;
arrow56.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow56);

Arrow arrow57(left);
arrow57.speed = Stress_tempo;
arrow57.pos.y = 7335.0 + Stress_offset;
arrow57.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow57);

Arrow arrow58(left);
arrow58.speed = Stress_tempo;
arrow58.pos.y = 7534.0 + Stress_offset;
arrow58.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow58);

Arrow arrow59(left);
arrow59.speed = Stress_tempo;
arrow59.pos.y = 7633.0 + Stress_offset;
arrow59.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow59);

Arrow arrow60(up);
arrow60.speed = Stress_tempo;
arrow60.pos.y = 7732.0 + Stress_offset;
arrow60.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow60);

Arrow arrow61(right);
arrow61.speed = Stress_tempo;
arrow61.pos.y = 7782.0 + Stress_offset;
arrow61.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow61);

Arrow arrow62(up);
arrow62.speed = Stress_tempo;
arrow62.pos.y = 7831.0 + Stress_offset;
arrow62.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow62);

Arrow arrow63(down);
arrow63.speed = Stress_tempo;
arrow63.pos.y = 7931.0 + Stress_offset;
arrow63.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow63);

Arrow arrow64(right);
arrow64.speed = Stress_tempo;
arrow64.pos.y = 8030.0 + Stress_offset;
arrow64.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow64);

Arrow arrow65(up);
arrow65.speed = Stress_tempo;
arrow65.pos.y = 8129.0 + Stress_offset;
arrow65.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow65);

Arrow arrow66(down);
arrow66.speed = Stress_tempo;
arrow66.pos.y = 8228.0 + Stress_offset;
arrow66.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow66);

Arrow arrow67(right);
arrow67.speed = Stress_tempo;
arrow67.pos.y = 8327.0 + Stress_offset;
arrow67.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow67);

Arrow arrow68(up);
arrow68.speed = Stress_tempo;
arrow68.pos.y = 8426.0 + Stress_offset;
arrow68.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow68);

Arrow arrow69(down);
arrow69.speed = Stress_tempo;
arrow69.pos.y = 8525.0 + Stress_offset;
arrow69.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow69);

Arrow arrow70(right);
arrow70.speed = Stress_tempo;
arrow70.pos.y = 8575.0 + Stress_offset;
arrow70.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow70);

Arrow arrow71(up);
arrow71.speed = Stress_tempo;
arrow71.pos.y = 8624.0 + Stress_offset;
arrow71.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow71);

Arrow arrow72(left);
arrow72.speed = Stress_tempo;
arrow72.pos.y = 8724.0 + Stress_offset;
arrow72.side = playerSide;
arrow72.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow72);

Arrow arrow73(left);
arrow73.speed = Stress_tempo;
arrow73.pos.y = 8724.0 + Stress_offset;
arrow73.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow73);

Arrow arrow74(right);
arrow74.speed = Stress_tempo;
arrow74.pos.y = 8823.0 + Stress_offset;
arrow74.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow74);

Arrow arrow75(down);
arrow75.speed = Stress_tempo;
arrow75.pos.y = 8922.0 + Stress_offset;
arrow75.side = playerSide;
arrow75.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow75);

Arrow arrow76(up);
arrow76.speed = Stress_tempo;
arrow76.pos.y = 8922.0 + Stress_offset;
arrow76.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow76);

Arrow arrow77(right);
arrow77.speed = Stress_tempo;
arrow77.pos.y = 9021.0 + Stress_offset;
arrow77.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow77);

Arrow arrow78(down);
arrow78.speed = Stress_tempo;
arrow78.pos.y = 9120.0 + Stress_offset;
arrow78.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow78);

Arrow arrow79(right);
arrow79.speed = Stress_tempo;
arrow79.pos.y = 9121.0 + Stress_offset;
arrow79.side = playerSide;
arrow79.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow79);

Arrow arrow80(right);
arrow80.speed = Stress_tempo;
arrow80.pos.y = 9220.0 + Stress_offset;
arrow80.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow80);

Arrow arrow81(down);
arrow81.speed = Stress_tempo;
arrow81.pos.y = 9318.0 + Stress_offset;
arrow81.side = playerSide;
arrow81.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow81);

Arrow arrow82(left);
arrow82.speed = Stress_tempo;
arrow82.pos.y = 9318.0 + Stress_offset;
arrow82.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow82);

Arrow arrow83(right);
arrow83.speed = Stress_tempo;
arrow83.pos.y = 9418.0 + Stress_offset;
arrow83.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow83);

Arrow arrow84(right);
arrow84.speed = Stress_tempo;
arrow84.pos.y = 9517.0 + Stress_offset;
arrow84.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow84);

Arrow arrow85(left);
arrow85.speed = Stress_tempo;
arrow85.pos.y = 9715.0 + Stress_offset;
arrow85.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow85);

Arrow arrow86(down);
arrow86.speed = Stress_tempo;
arrow86.pos.y = 9814.0 + Stress_offset;
arrow86.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow86);

Arrow arrow87(right);
arrow87.speed = Stress_tempo;
arrow87.pos.y = 9913.0 + Stress_offset;
arrow87.side = playerSide;
arrow87.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow87);

Arrow arrow88(down);
arrow88.speed = Stress_tempo;
arrow88.pos.y = 10112.0 + Stress_offset;
arrow88.side = playerSide;
arrow88.trailSize = 252;
playerArrowList->insert(playerArrowList->begin(), arrow88);

Arrow arrow89(left);
arrow89.speed = Stress_tempo;
arrow89.pos.y = 10310.0 + Stress_offset;
arrow89.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow89);

Arrow arrow90(left);
arrow90.speed = Stress_tempo;
arrow90.pos.y = 10508.0 + Stress_offset;
arrow90.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow90);

Arrow arrow91(left);
arrow91.speed = Stress_tempo;
arrow91.pos.y = 10707.0 + Stress_offset;
arrow91.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow91);

Arrow arrow92(right);
arrow92.speed = Stress_tempo;
arrow92.pos.y = 10905.0 + Stress_offset;
arrow92.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow92);

Arrow arrow93(down);
arrow93.speed = Stress_tempo;
arrow93.pos.y = 11103.0 + Stress_offset;
arrow93.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow93);

Arrow arrow94(left);
arrow94.speed = Stress_tempo;
arrow94.pos.y = 11202.0 + Stress_offset;
arrow94.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow94);

Arrow arrow95(right);
arrow95.speed = Stress_tempo;
arrow95.pos.y = 11301.0 + Stress_offset;
arrow95.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow95);

Arrow arrow96(left);
arrow96.speed = Stress_tempo;
arrow96.pos.y = 11500.0 + Stress_offset;
arrow96.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow96);

Arrow arrow97(right);
arrow97.speed = Stress_tempo;
arrow97.pos.y = 11698.0 + Stress_offset;
arrow97.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow97);

Arrow arrow98(down);
arrow98.speed = Stress_tempo;
arrow98.pos.y = 11896.0 + Stress_offset;
arrow98.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow98);

Arrow arrow99(left);
arrow99.speed = Stress_tempo;
arrow99.pos.y = 11995.0 + Stress_offset;
arrow99.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow99);

Arrow arrow100(right);
arrow100.speed = Stress_tempo;
arrow100.pos.y = 12094.0 + Stress_offset;
arrow100.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow100);

Arrow arrow101(left);
arrow101.speed = Stress_tempo;
arrow101.pos.y = 12293.0 + Stress_offset;
arrow101.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow101);

Arrow arrow102(down);
arrow102.speed = Stress_tempo;
arrow102.pos.y = 12491.0 + Stress_offset;
arrow102.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow102);

Arrow arrow103(right);
arrow103.speed = Stress_tempo;
arrow103.pos.y = 12690.0 + Stress_offset;
arrow103.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow103);

Arrow arrow104(right);
arrow104.speed = Stress_tempo;
arrow104.pos.y = 12690.0 + Stress_offset;
arrow104.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow104);

Arrow arrow105(up);
arrow105.speed = Stress_tempo;
arrow105.pos.y = 12788.0 + Stress_offset;
arrow105.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow105);

Arrow arrow106(right);
arrow106.speed = Stress_tempo;
arrow106.pos.y = 12888.0 + Stress_offset;
arrow106.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow106);

Arrow arrow107(left);
arrow107.speed = Stress_tempo;
arrow107.pos.y = 12888.0 + Stress_offset;
arrow107.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow107);

Arrow arrow108(up);
arrow108.speed = Stress_tempo;
arrow108.pos.y = 12987.0 + Stress_offset;
arrow108.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow108);

Arrow arrow109(right);
arrow109.speed = Stress_tempo;
arrow109.pos.y = 13086.0 + Stress_offset;
arrow109.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow109);

Arrow arrow110(right);
arrow110.speed = Stress_tempo;
arrow110.pos.y = 13086.0 + Stress_offset;
arrow110.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow110);

Arrow arrow111(up);
arrow111.speed = Stress_tempo;
arrow111.pos.y = 13185.0 + Stress_offset;
arrow111.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow111);

Arrow arrow112(right);
arrow112.speed = Stress_tempo;
arrow112.pos.y = 13284.0 + Stress_offset;
arrow112.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow112);

Arrow arrow113(left);
arrow113.speed = Stress_tempo;
arrow113.pos.y = 13284.0 + Stress_offset;
arrow113.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow113);

Arrow arrow114(up);
arrow114.speed = Stress_tempo;
arrow114.pos.y = 13383.0 + Stress_offset;
arrow114.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow114);

Arrow arrow115(down);
arrow115.speed = Stress_tempo;
arrow115.pos.y = 13482.0 + Stress_offset;
arrow115.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow115);

Arrow arrow116(right);
arrow116.speed = Stress_tempo;
arrow116.pos.y = 13482.0 + Stress_offset;
arrow116.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow116);

Arrow arrow117(up);
arrow117.speed = Stress_tempo;
arrow117.pos.y = 13532.0 + Stress_offset;
arrow117.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow117);

Arrow arrow118(right);
arrow118.speed = Stress_tempo;
arrow118.pos.y = 13581.0 + Stress_offset;
arrow118.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow118);

Arrow arrow119(down);
arrow119.speed = Stress_tempo;
arrow119.pos.y = 13681.0 + Stress_offset;
arrow119.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow119);

Arrow arrow120(right);
arrow120.speed = Stress_tempo;
arrow120.pos.y = 13681.0 + Stress_offset;
arrow120.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow120);

Arrow arrow121(up);
arrow121.speed = Stress_tempo;
arrow121.pos.y = 13780.0 + Stress_offset;
arrow121.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow121);

Arrow arrow122(right);
arrow122.speed = Stress_tempo;
arrow122.pos.y = 13879.0 + Stress_offset;
arrow122.side = playerSide;
arrow122.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow122);

Arrow arrow123(right);
arrow123.speed = Stress_tempo;
arrow123.pos.y = 13879.0 + Stress_offset;
arrow123.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow123);

Arrow arrow124(left);
arrow124.speed = Stress_tempo;
arrow124.pos.y = 13978.0 + Stress_offset;
arrow124.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow124);

Arrow arrow125(left);
arrow125.speed = Stress_tempo;
arrow125.pos.y = 14077.0 + Stress_offset;
arrow125.side = playerSide;
arrow125.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow125);

Arrow arrow126(down);
arrow126.speed = Stress_tempo;
arrow126.pos.y = 14077.0 + Stress_offset;
arrow126.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow126);

Arrow arrow127(left);
arrow127.speed = Stress_tempo;
arrow127.pos.y = 14177.0 + Stress_offset;
arrow127.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow127);

Arrow arrow128(right);
arrow128.speed = Stress_tempo;
arrow128.pos.y = 14275.0 + Stress_offset;
arrow128.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow128);

Arrow arrow129(up);
arrow129.speed = Stress_tempo;
arrow129.pos.y = 14275.0 + Stress_offset;
arrow129.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow129);

Arrow arrow130(left);
arrow130.speed = Stress_tempo;
arrow130.pos.y = 14474.0 + Stress_offset;
arrow130.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow130);

Arrow arrow131(up);
arrow131.speed = Stress_tempo;
arrow131.pos.y = 14672.0 + Stress_offset;
arrow131.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow131);

Arrow arrow132(left);
arrow132.speed = Stress_tempo;
arrow132.pos.y = 14870.0 + Stress_offset;
arrow132.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow132);

Arrow arrow133(right);
arrow133.speed = Stress_tempo;
arrow133.pos.y = 15068.0 + Stress_offset;
arrow133.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow133);

Arrow arrow134(left);
arrow134.speed = Stress_tempo;
arrow134.pos.y = 15168.0 + Stress_offset;
arrow134.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow134);

Arrow arrow135(up);
arrow135.speed = Stress_tempo;
arrow135.pos.y = 15267.0 + Stress_offset;
arrow135.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow135);

Arrow arrow136(right);
arrow136.speed = Stress_tempo;
arrow136.pos.y = 15465.0 + Stress_offset;
arrow136.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow136);

Arrow arrow137(down);
arrow137.speed = Stress_tempo;
arrow137.pos.y = 15664.0 + Stress_offset;
arrow137.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow137);

Arrow arrow138(up);
arrow138.speed = Stress_tempo;
arrow138.pos.y = 15862.0 + Stress_offset;
arrow138.side = playerSide;
arrow138.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow138);

Arrow arrow139(right);
arrow139.speed = Stress_tempo;
arrow139.pos.y = 15862.0 + Stress_offset;
arrow139.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow139);

Arrow arrow140(up);
arrow140.speed = Stress_tempo;
arrow140.pos.y = 15961.0 + Stress_offset;
arrow140.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow140);

Arrow arrow141(right);
arrow141.speed = Stress_tempo;
arrow141.pos.y = 16060.0 + Stress_offset;
arrow141.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow141);

Arrow arrow142(left);
arrow142.speed = Stress_tempo;
arrow142.pos.y = 16159.0 + Stress_offset;
arrow142.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow142);

Arrow arrow143(right);
arrow143.speed = Stress_tempo;
arrow143.pos.y = 16258.0 + Stress_offset;
arrow143.side = playerSide;
arrow143.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow143);

Arrow arrow144(right);
arrow144.speed = Stress_tempo;
arrow144.pos.y = 16258.0 + Stress_offset;
arrow144.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow144);

Arrow arrow145(up);
arrow145.speed = Stress_tempo;
arrow145.pos.y = 16357.0 + Stress_offset;
arrow145.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow145);

Arrow arrow146(right);
arrow146.speed = Stress_tempo;
arrow146.pos.y = 16457.0 + Stress_offset;
arrow146.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow146);

Arrow arrow147(left);
arrow147.speed = Stress_tempo;
arrow147.pos.y = 16556.0 + Stress_offset;
arrow147.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow147);

Arrow arrow148(down);
arrow148.speed = Stress_tempo;
arrow148.pos.y = 16655.0 + Stress_offset;
arrow148.side = playerSide;
arrow148.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow148);

Arrow arrow149(right);
arrow149.speed = Stress_tempo;
arrow149.pos.y = 16655.0 + Stress_offset;
arrow149.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow149);

Arrow arrow150(up);
arrow150.speed = Stress_tempo;
arrow150.pos.y = 16704.0 + Stress_offset;
arrow150.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow150);

Arrow arrow151(right);
arrow151.speed = Stress_tempo;
arrow151.pos.y = 16754.0 + Stress_offset;
arrow151.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow151);

Arrow arrow152(left);
arrow152.speed = Stress_tempo;
arrow152.pos.y = 16853.0 + Stress_offset;
arrow152.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow152);

Arrow arrow153(right);
arrow153.speed = Stress_tempo;
arrow153.pos.y = 16952.0 + Stress_offset;
arrow153.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow153);

Arrow arrow154(left);
arrow154.speed = Stress_tempo;
arrow154.pos.y = 17051.0 + Stress_offset;
arrow154.side = playerSide;
arrow154.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow154);

Arrow arrow155(up);
arrow155.speed = Stress_tempo;
arrow155.pos.y = 17051.0 + Stress_offset;
arrow155.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow155);

Arrow arrow156(left);
arrow156.speed = Stress_tempo;
arrow156.pos.y = 17151.0 + Stress_offset;
arrow156.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow156);

Arrow arrow157(right);
arrow157.speed = Stress_tempo;
arrow157.pos.y = 17250.0 + Stress_offset;
arrow157.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow157);

Arrow arrow158(down);
arrow158.speed = Stress_tempo;
arrow158.pos.y = 17349.0 + Stress_offset;
arrow158.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow158);

Arrow arrow159(right);
arrow159.speed = Stress_tempo;
arrow159.pos.y = 17448.0 + Stress_offset;
arrow159.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow159);

Arrow arrow160(left);
arrow160.speed = Stress_tempo;
arrow160.pos.y = 17448.0 + Stress_offset;
arrow160.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow160);

Arrow arrow161(left);
arrow161.speed = Stress_tempo;
arrow161.pos.y = 17647.0 + Stress_offset;
arrow161.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow161);

Arrow arrow162(left);
arrow162.speed = Stress_tempo;
arrow162.pos.y = 17647.0 + Stress_offset;
arrow162.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow162);

Arrow arrow163(left);
arrow163.speed = Stress_tempo;
arrow163.pos.y = 17845.0 + Stress_offset;
arrow163.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow163);

Arrow arrow164(up);
arrow164.speed = Stress_tempo;
arrow164.pos.y = 17845.0 + Stress_offset;
arrow164.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow164);

Arrow arrow165(left);
arrow165.speed = Stress_tempo;
arrow165.pos.y = 18043.0 + Stress_offset;
arrow165.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow165);

Arrow arrow166(left);
arrow166.speed = Stress_tempo;
arrow166.pos.y = 18043.0 + Stress_offset;
arrow166.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow166);

Arrow arrow167(right);
arrow167.speed = Stress_tempo;
arrow167.pos.y = 18241.0 + Stress_offset;
arrow167.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow167);

Arrow arrow168(left);
arrow168.speed = Stress_tempo;
arrow168.pos.y = 18241.0 + Stress_offset;
arrow168.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow168);

Arrow arrow169(left);
arrow169.speed = Stress_tempo;
arrow169.pos.y = 18341.0 + Stress_offset;
arrow169.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow169);

Arrow arrow170(up);
arrow170.speed = Stress_tempo;
arrow170.pos.y = 18440.0 + Stress_offset;
arrow170.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow170);

Arrow arrow171(left);
arrow171.speed = Stress_tempo;
arrow171.pos.y = 18440.0 + Stress_offset;
arrow171.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow171);

Arrow arrow172(right);
arrow172.speed = Stress_tempo;
arrow172.pos.y = 18638.0 + Stress_offset;
arrow172.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow172);

Arrow arrow173(left);
arrow173.speed = Stress_tempo;
arrow173.pos.y = 18638.0 + Stress_offset;
arrow173.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow173);

Arrow arrow174(left);
arrow174.speed = Stress_tempo;
arrow174.pos.y = 18737.0 + Stress_offset;
arrow174.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow174);

Arrow arrow175(down);
arrow175.speed = Stress_tempo;
arrow175.pos.y = 18836.0 + Stress_offset;
arrow175.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow175);

Arrow arrow176(left);
arrow176.speed = Stress_tempo;
arrow176.pos.y = 18836.0 + Stress_offset;
arrow176.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow176);

Arrow arrow177(left);
arrow177.speed = Stress_tempo;
arrow177.pos.y = 18935.0 + Stress_offset;
arrow177.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow177);

Arrow arrow178(down);
arrow178.speed = Stress_tempo;
arrow178.pos.y = 19034.0 + Stress_offset;
arrow178.side = playerSide;
arrow178.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow178);

Arrow arrow179(up);
arrow179.speed = Stress_tempo;
arrow179.pos.y = 19034.0 + Stress_offset;
arrow179.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow179);

Arrow arrow180(right);
arrow180.speed = Stress_tempo;
arrow180.pos.y = 19134.0 + Stress_offset;
arrow180.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow180);

Arrow arrow181(down);
arrow181.speed = Stress_tempo;
arrow181.pos.y = 19232.0 + Stress_offset;
arrow181.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow181);

Arrow arrow182(right);
arrow182.speed = Stress_tempo;
arrow182.pos.y = 19332.0 + Stress_offset;
arrow182.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow182);

Arrow arrow183(left);
arrow183.speed = Stress_tempo;
arrow183.pos.y = 19431.0 + Stress_offset;
arrow183.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow183);

Arrow arrow184(right);
arrow184.speed = Stress_tempo;
arrow184.pos.y = 19530.0 + Stress_offset;
arrow184.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow184);

Arrow arrow185(down);
arrow185.speed = Stress_tempo;
arrow185.pos.y = 19629.0 + Stress_offset;
arrow185.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow185);

Arrow arrow186(right);
arrow186.speed = Stress_tempo;
arrow186.pos.y = 19728.0 + Stress_offset;
arrow186.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow186);

Arrow arrow187(down);
arrow187.speed = Stress_tempo;
arrow187.pos.y = 19778.0 + Stress_offset;
arrow187.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow187);

Arrow arrow188(left);
arrow188.speed = Stress_tempo;
arrow188.pos.y = 19828.0 + Stress_offset;
arrow188.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow188);

Arrow arrow189(right);
arrow189.speed = Stress_tempo;
arrow189.pos.y = 19927.0 + Stress_offset;
arrow189.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow189);

Arrow arrow190(down);
arrow190.speed = Stress_tempo;
arrow190.pos.y = 20025.0 + Stress_offset;
arrow190.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow190);

Arrow arrow191(up);
arrow191.speed = Stress_tempo;
arrow191.pos.y = 20125.0 + Stress_offset;
arrow191.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow191);

Arrow arrow192(left);
arrow192.speed = Stress_tempo;
arrow192.pos.y = 20224.0 + Stress_offset;
arrow192.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow192);

Arrow arrow193(up);
arrow193.speed = Stress_tempo;
arrow193.pos.y = 20323.0 + Stress_offset;
arrow193.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow193);

Arrow arrow194(left);
arrow194.speed = Stress_tempo;
arrow194.pos.y = 20422.0 + Stress_offset;
arrow194.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow194);

Arrow arrow195(left);
arrow195.speed = Stress_tempo;
arrow195.pos.y = 20522.0 + Stress_offset;
arrow195.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow195);

Arrow arrow196(up);
arrow196.speed = Stress_tempo;
arrow196.pos.y = 20571.0 + Stress_offset;
arrow196.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow196);

Arrow arrow197(right);
arrow197.speed = Stress_tempo;
arrow197.pos.y = 20621.0 + Stress_offset;
arrow197.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow197);

Arrow arrow198(right);
arrow198.speed = Stress_tempo;
arrow198.pos.y = 20720.0 + Stress_offset;
arrow198.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow198);

Arrow arrow199(up);
arrow199.speed = Stress_tempo;
arrow199.pos.y = 20819.0 + Stress_offset;
arrow199.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow199);

Arrow arrow200(right);
arrow200.speed = Stress_tempo;
arrow200.pos.y = 20918.0 + Stress_offset;
arrow200.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow200);

Arrow arrow201(left);
arrow201.speed = Stress_tempo;
arrow201.pos.y = 21017.0 + Stress_offset;
arrow201.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow201);

Arrow arrow202(down);
arrow202.speed = Stress_tempo;
arrow202.pos.y = 21116.0 + Stress_offset;
arrow202.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow202);

Arrow arrow203(left);
arrow203.speed = Stress_tempo;
arrow203.pos.y = 21215.0 + Stress_offset;
arrow203.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow203);

Arrow arrow204(up);
arrow204.speed = Stress_tempo;
arrow204.pos.y = 21265.0 + Stress_offset;
arrow204.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow204);

Arrow arrow205(left);
arrow205.speed = Stress_tempo;
arrow205.pos.y = 21314.0 + Stress_offset;
arrow205.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow205);

Arrow arrow206(right);
arrow206.speed = Stress_tempo;
arrow206.pos.y = 21414.0 + Stress_offset;
arrow206.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow206);

Arrow arrow207(down);
arrow207.speed = Stress_tempo;
arrow207.pos.y = 21513.0 + Stress_offset;
arrow207.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow207);

Arrow arrow208(left);
arrow208.speed = Stress_tempo;
arrow208.pos.y = 21612.0 + Stress_offset;
arrow208.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow208);

Arrow arrow209(down);
arrow209.speed = Stress_tempo;
arrow209.pos.y = 21711.0 + Stress_offset;
arrow209.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow209);

Arrow arrow210(left);
arrow210.speed = Stress_tempo;
arrow210.pos.y = 21810.0 + Stress_offset;
arrow210.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow210);

Arrow arrow211(down);
arrow211.speed = Stress_tempo;
arrow211.pos.y = 21910.0 + Stress_offset;
arrow211.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow211);

Arrow arrow212(down);
arrow212.speed = Stress_tempo;
arrow212.pos.y = 22008.0 + Stress_offset;
arrow212.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow212);

Arrow arrow213(right);
arrow213.speed = Stress_tempo;
arrow213.pos.y = 22108.0 + Stress_offset;
arrow213.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow213);

Arrow arrow214(left);
arrow214.speed = Stress_tempo;
arrow214.pos.y = 22158.0 + Stress_offset;
arrow214.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow214);

Arrow arrow215(left);
arrow215.speed = Stress_tempo;
arrow215.pos.y = 22207.0 + Stress_offset;
arrow215.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow215);

Arrow arrow216(down);
arrow216.speed = Stress_tempo;
arrow216.pos.y = 22405.0 + Stress_offset;
arrow216.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow216);

Arrow arrow217(left);
arrow217.speed = Stress_tempo;
arrow217.pos.y = 22603.0 + Stress_offset;
arrow217.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow217);

Arrow arrow218(right);
arrow218.speed = Stress_tempo;
arrow218.pos.y = 22703.0 + Stress_offset;
arrow218.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow218);

Arrow arrow219(down);
arrow219.speed = Stress_tempo;
arrow219.pos.y = 22802.0 + Stress_offset;
arrow219.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow219);

Arrow arrow220(down);
arrow220.speed = Stress_tempo;
arrow220.pos.y = 23000.0 + Stress_offset;
arrow220.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow220);

Arrow arrow221(left);
arrow221.speed = Stress_tempo;
arrow221.pos.y = 23198.0 + Stress_offset;
arrow221.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow221);

Arrow arrow222(up);
arrow222.speed = Stress_tempo;
arrow222.pos.y = 23397.0 + Stress_offset;
arrow222.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow222);

Arrow arrow223(left);
arrow223.speed = Stress_tempo;
arrow223.pos.y = 23496.0 + Stress_offset;
arrow223.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow223);

Arrow arrow224(up);
arrow224.speed = Stress_tempo;
arrow224.pos.y = 23595.0 + Stress_offset;
arrow224.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow224);

Arrow arrow225(right);
arrow225.speed = Stress_tempo;
arrow225.pos.y = 23793.0 + Stress_offset;
arrow225.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow225);

Arrow arrow226(up);
arrow226.speed = Stress_tempo;
arrow226.pos.y = 23991.0 + Stress_offset;
arrow226.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow226);

Arrow arrow227(left);
arrow227.speed = Stress_tempo;
arrow227.pos.y = 24190.0 + Stress_offset;
arrow227.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow227);

Arrow arrow228(up);
arrow228.speed = Stress_tempo;
arrow228.pos.y = 24388.0 + Stress_offset;
arrow228.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow228);

Arrow arrow229(right);
arrow229.speed = Stress_tempo;
arrow229.pos.y = 24586.0 + Stress_offset;
arrow229.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow229);

Arrow arrow230(left);
arrow230.speed = Stress_tempo;
arrow230.pos.y = 24784.0 + Stress_offset;
arrow230.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow230);

Arrow arrow231(left);
arrow231.speed = Stress_tempo;
arrow231.pos.y = 24982.0 + Stress_offset;
arrow231.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow231);

Arrow arrow232(down);
arrow232.speed = Stress_tempo;
arrow232.pos.y = 25082.0 + Stress_offset;
arrow232.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow232);

Arrow arrow233(down);
arrow233.speed = Stress_tempo;
arrow233.pos.y = 25181.0 + Stress_offset;
arrow233.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow233);

Arrow arrow234(left);
arrow234.speed = Stress_tempo;
arrow234.pos.y = 25280.0 + Stress_offset;
arrow234.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow234);

Arrow arrow235(right);
arrow235.speed = Stress_tempo;
arrow235.pos.y = 25380.0 + Stress_offset;
arrow235.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow235);

Arrow arrow236(down);
arrow236.speed = Stress_tempo;
arrow236.pos.y = 25429.0 + Stress_offset;
arrow236.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow236);

Arrow arrow237(right);
arrow237.speed = Stress_tempo;
arrow237.pos.y = 25478.0 + Stress_offset;
arrow237.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow237);

Arrow arrow238(left);
arrow238.speed = Stress_tempo;
arrow238.pos.y = 25578.0 + Stress_offset;
arrow238.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow238);

Arrow arrow239(right);
arrow239.speed = Stress_tempo;
arrow239.pos.y = 25677.0 + Stress_offset;
arrow239.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow239);

Arrow arrow240(down);
arrow240.speed = Stress_tempo;
arrow240.pos.y = 25726.0 + Stress_offset;
arrow240.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow240);

Arrow arrow241(up);
arrow241.speed = Stress_tempo;
arrow241.pos.y = 25776.0 + Stress_offset;
arrow241.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow241);

Arrow arrow242(left);
arrow242.speed = Stress_tempo;
arrow242.pos.y = 25875.0 + Stress_offset;
arrow242.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow242);

Arrow arrow243(down);
arrow243.speed = Stress_tempo;
arrow243.pos.y = 25974.0 + Stress_offset;
arrow243.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow243);

Arrow arrow244(right);
arrow244.speed = Stress_tempo;
arrow244.pos.y = 26073.0 + Stress_offset;
arrow244.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow244);

Arrow arrow245(up);
arrow245.speed = Stress_tempo;
arrow245.pos.y = 26123.0 + Stress_offset;
arrow245.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow245);

Arrow arrow246(left);
arrow246.speed = Stress_tempo;
arrow246.pos.y = 26172.0 + Stress_offset;
arrow246.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow246);

Arrow arrow247(right);
arrow247.speed = Stress_tempo;
arrow247.pos.y = 26271.0 + Stress_offset;
arrow247.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow247);

Arrow arrow248(left);
arrow248.speed = Stress_tempo;
arrow248.pos.y = 26321.0 + Stress_offset;
arrow248.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow248);

Arrow arrow249(down);
arrow249.speed = Stress_tempo;
arrow249.pos.y = 26371.0 + Stress_offset;
arrow249.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow249);

Arrow arrow250(left);
arrow250.speed = Stress_tempo;
arrow250.pos.y = 26470.0 + Stress_offset;
arrow250.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow250);

Arrow arrow251(up);
arrow251.speed = Stress_tempo;
arrow251.pos.y = 26569.0 + Stress_offset;
arrow251.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow251);

Arrow arrow252(right);
arrow252.speed = Stress_tempo;
arrow252.pos.y = 26668.0 + Stress_offset;
arrow252.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow252);

Arrow arrow253(down);
arrow253.speed = Stress_tempo;
arrow253.pos.y = 26767.0 + Stress_offset;
arrow253.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow253);

Arrow arrow254(right);
arrow254.speed = Stress_tempo;
arrow254.pos.y = 26867.0 + Stress_offset;
arrow254.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow254);

Arrow arrow255(up);
arrow255.speed = Stress_tempo;
arrow255.pos.y = 26916.0 + Stress_offset;
arrow255.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow255);

Arrow arrow256(left);
arrow256.speed = Stress_tempo;
arrow256.pos.y = 26965.0 + Stress_offset;
arrow256.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow256);

Arrow arrow257(right);
arrow257.speed = Stress_tempo;
arrow257.pos.y = 27065.0 + Stress_offset;
arrow257.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow257);

Arrow arrow258(down);
arrow258.speed = Stress_tempo;
arrow258.pos.y = 27164.0 + Stress_offset;
arrow258.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow258);

Arrow arrow259(right);
arrow259.speed = Stress_tempo;
arrow259.pos.y = 27263.0 + Stress_offset;
arrow259.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow259);

Arrow arrow260(left);
arrow260.speed = Stress_tempo;
arrow260.pos.y = 27362.0 + Stress_offset;
arrow260.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow260);

Arrow arrow261(down);
arrow261.speed = Stress_tempo;
arrow261.pos.y = 27461.0 + Stress_offset;
arrow261.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow261);

Arrow arrow262(right);
arrow262.speed = Stress_tempo;
arrow262.pos.y = 27560.0 + Stress_offset;
arrow262.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow262);

Arrow arrow263(up);
arrow263.speed = Stress_tempo;
arrow263.pos.y = 27610.0 + Stress_offset;
arrow263.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow263);

Arrow arrow264(right);
arrow264.speed = Stress_tempo;
arrow264.pos.y = 27660.0 + Stress_offset;
arrow264.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow264);

Arrow arrow265(down);
arrow265.speed = Stress_tempo;
arrow265.pos.y = 27759.0 + Stress_offset;
arrow265.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow265);

Arrow arrow266(right);
arrow266.speed = Stress_tempo;
arrow266.pos.y = 27858.0 + Stress_offset;
arrow266.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow266);

Arrow arrow267(left);
arrow267.speed = Stress_tempo;
arrow267.pos.y = 27957.0 + Stress_offset;
arrow267.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow267);

Arrow arrow268(right);
arrow268.speed = Stress_tempo;
arrow268.pos.y = 28056.0 + Stress_offset;
arrow268.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow268);

Arrow arrow269(down);
arrow269.speed = Stress_tempo;
arrow269.pos.y = 28155.0 + Stress_offset;
arrow269.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow269);

Arrow arrow270(right);
arrow270.speed = Stress_tempo;
arrow270.pos.y = 28254.0 + Stress_offset;
arrow270.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow270);

Arrow arrow271(up);
arrow271.speed = Stress_tempo;
arrow271.pos.y = 28354.0 + Stress_offset;
arrow271.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow271);

Arrow arrow272(up);
arrow272.speed = Stress_tempo;
arrow272.pos.y = 28452.0 + Stress_offset;
arrow272.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow272);

Arrow arrow273(right);
arrow273.speed = Stress_tempo;
arrow273.pos.y = 28552.0 + Stress_offset;
arrow273.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow273);

Arrow arrow274(down);
arrow274.speed = Stress_tempo;
arrow274.pos.y = 28651.0 + Stress_offset;
arrow274.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow274);

Arrow arrow275(left);
arrow275.speed = Stress_tempo;
arrow275.pos.y = 28750.0 + Stress_offset;
arrow275.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow275);

Arrow arrow276(down);
arrow276.speed = Stress_tempo;
arrow276.pos.y = 28948.0 + Stress_offset;
arrow276.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow276);

Arrow arrow277(left);
arrow277.speed = Stress_tempo;
arrow277.pos.y = 29147.0 + Stress_offset;
arrow277.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow277);

Arrow arrow278(up);
arrow278.speed = Stress_tempo;
arrow278.pos.y = 29345.0 + Stress_offset;
arrow278.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow278);

Arrow arrow279(right);
arrow279.speed = Stress_tempo;
arrow279.pos.y = 29444.0 + Stress_offset;
arrow279.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow279);

Arrow arrow280(up);
arrow280.speed = Stress_tempo;
arrow280.pos.y = 29543.0 + Stress_offset;
arrow280.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow280);

Arrow arrow281(right);
arrow281.speed = Stress_tempo;
arrow281.pos.y = 29741.0 + Stress_offset;
arrow281.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow281);

Arrow arrow282(up);
arrow282.speed = Stress_tempo;
arrow282.pos.y = 29940.0 + Stress_offset;
arrow282.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow282);

Arrow arrow283(left);
arrow283.speed = Stress_tempo;
arrow283.pos.y = 30138.0 + Stress_offset;
arrow283.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow283);

Arrow arrow284(right);
arrow284.speed = Stress_tempo;
arrow284.pos.y = 30237.0 + Stress_offset;
arrow284.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow284);

Arrow arrow285(down);
arrow285.speed = Stress_tempo;
arrow285.pos.y = 30337.0 + Stress_offset;
arrow285.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow285);

Arrow arrow286(left);
arrow286.speed = Stress_tempo;
arrow286.pos.y = 30535.0 + Stress_offset;
arrow286.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow286);

Arrow arrow287(down);
arrow287.speed = Stress_tempo;
arrow287.pos.y = 30733.0 + Stress_offset;
arrow287.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow287);

Arrow arrow288(down);
arrow288.speed = Stress_tempo;
arrow288.pos.y = 30931.0 + Stress_offset;
arrow288.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow288);

Arrow arrow289(right);
arrow289.speed = Stress_tempo;
arrow289.pos.y = 31031.0 + Stress_offset;
arrow289.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow289);

Arrow arrow290(left);
arrow290.speed = Stress_tempo;
arrow290.pos.y = 31130.0 + Stress_offset;
arrow290.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow290);

Arrow arrow291(down);
arrow291.speed = Stress_tempo;
arrow291.pos.y = 31328.0 + Stress_offset;
arrow291.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow291);

Arrow arrow292(down);
arrow292.speed = Stress_tempo;
arrow292.pos.y = 31526.0 + Stress_offset;
arrow292.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow292);

Arrow arrow293(down);
arrow293.speed = Stress_tempo;
arrow293.pos.y = 31724.0 + Stress_offset;
arrow293.side = playerSide;
arrow293.trailSize = 843;
playerArrowList->insert(playerArrowList->begin(), arrow293);

Arrow arrow294(down);
arrow294.speed = Stress_tempo;
arrow294.pos.y = 31724.0 + Stress_offset;
arrow294.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow294);

Arrow arrow295(up);
arrow295.speed = Stress_tempo;
arrow295.pos.y = 31824.0 + Stress_offset;
arrow295.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow295);

Arrow arrow296(left);
arrow296.speed = Stress_tempo;
arrow296.pos.y = 31922.0 + Stress_offset;
arrow296.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow296);

Arrow arrow297(left);
arrow297.speed = Stress_tempo;
arrow297.pos.y = 32022.0 + Stress_offset;
arrow297.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow297);

Arrow arrow298(up);
arrow298.speed = Stress_tempo;
arrow298.pos.y = 32121.0 + Stress_offset;
arrow298.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow298);

Arrow arrow299(right);
arrow299.speed = Stress_tempo;
arrow299.pos.y = 32220.0 + Stress_offset;
arrow299.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow299);

Arrow arrow300(down);
arrow300.speed = Stress_tempo;
arrow300.pos.y = 32319.0 + Stress_offset;
arrow300.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow300);

Arrow arrow301(right);
arrow301.speed = Stress_tempo;
arrow301.pos.y = 32418.0 + Stress_offset;
arrow301.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow301);

Arrow arrow302(left);
arrow302.speed = Stress_tempo;
arrow302.pos.y = 32517.0 + Stress_offset;
arrow302.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow302);

Arrow arrow303(down);
arrow303.speed = Stress_tempo;
arrow303.pos.y = 32617.0 + Stress_offset;
arrow303.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow303);

Arrow arrow304(up);
arrow304.speed = Stress_tempo;
arrow304.pos.y = 32715.0 + Stress_offset;
arrow304.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow304);

Arrow arrow305(right);
arrow305.speed = Stress_tempo;
arrow305.pos.y = 32815.0 + Stress_offset;
arrow305.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow305);

Arrow arrow306(up);
arrow306.speed = Stress_tempo;
arrow306.pos.y = 32914.0 + Stress_offset;
arrow306.side = playerSide;
arrow306.trailSize = 505;
playerArrowList->insert(playerArrowList->begin(), arrow306);

Arrow arrow307(down);
arrow307.speed = Stress_tempo;
arrow307.pos.y = 32914.0 + Stress_offset;
arrow307.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow307);

Arrow arrow308(right);
arrow308.speed = Stress_tempo;
arrow308.pos.y = 33013.0 + Stress_offset;
arrow308.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow308);

Arrow arrow309(left);
arrow309.speed = Stress_tempo;
arrow309.pos.y = 33112.0 + Stress_offset;
arrow309.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow309);

Arrow arrow310(right);
arrow310.speed = Stress_tempo;
arrow310.pos.y = 33211.0 + Stress_offset;
arrow310.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow310);

Arrow arrow311(down);
arrow311.speed = Stress_tempo;
arrow311.pos.y = 33311.0 + Stress_offset;
arrow311.side = playerSide;
arrow311.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow311);

Arrow arrow312(down);
arrow312.speed = Stress_tempo;
arrow312.pos.y = 33311.0 + Stress_offset;
arrow312.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow312);

Arrow arrow313(up);
arrow313.speed = Stress_tempo;
arrow313.pos.y = 33410.0 + Stress_offset;
arrow313.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow313);

Arrow arrow314(left);
arrow314.speed = Stress_tempo;
arrow314.pos.y = 33509.0 + Stress_offset;
arrow314.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow314);

Arrow arrow315(left);
arrow315.speed = Stress_tempo;
arrow315.pos.y = 33608.0 + Stress_offset;
arrow315.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow315);

Arrow arrow316(up);
arrow316.speed = Stress_tempo;
arrow316.pos.y = 33707.0 + Stress_offset;
arrow316.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow316);

Arrow arrow317(right);
arrow317.speed = Stress_tempo;
arrow317.pos.y = 33806.0 + Stress_offset;
arrow317.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow317);

Arrow arrow318(down);
arrow318.speed = Stress_tempo;
arrow318.pos.y = 33905.0 + Stress_offset;
arrow318.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow318);

Arrow arrow319(right);
arrow319.speed = Stress_tempo;
arrow319.pos.y = 34004.0 + Stress_offset;
arrow319.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow319);

Arrow arrow320(left);
arrow320.speed = Stress_tempo;
arrow320.pos.y = 34104.0 + Stress_offset;
arrow320.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow320);

Arrow arrow321(up);
arrow321.speed = Stress_tempo;
arrow321.pos.y = 34203.0 + Stress_offset;
arrow321.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow321);

Arrow arrow322(right);
arrow322.speed = Stress_tempo;
arrow322.pos.y = 34252.0 + Stress_offset;
arrow322.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow322);

Arrow arrow323(down);
arrow323.speed = Stress_tempo;
arrow323.pos.y = 34302.0 + Stress_offset;
arrow323.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow323);

Arrow arrow324(right);
arrow324.speed = Stress_tempo;
arrow324.pos.y = 34401.0 + Stress_offset;
arrow324.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow324);

Arrow arrow325(left);
arrow325.speed = Stress_tempo;
arrow325.pos.y = 34500.0 + Stress_offset;
arrow325.side = playerSide;
arrow325.trailSize = 296;
playerArrowList->insert(playerArrowList->begin(), arrow325);

Arrow arrow326(down);
arrow326.speed = Stress_tempo;
arrow326.pos.y = 34500.0 + Stress_offset;
arrow326.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow326);

Arrow arrow327(right);
arrow327.speed = Stress_tempo;
arrow327.pos.y = 34600.0 + Stress_offset;
arrow327.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow327);

Arrow arrow328(up);
arrow328.speed = Stress_tempo;
arrow328.pos.y = 34698.0 + Stress_offset;
arrow328.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow328);

Arrow arrow329(left);
arrow329.speed = Stress_tempo;
arrow329.pos.y = 34698.0 + Stress_offset;
arrow329.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow329);

Arrow arrow330(right);
arrow330.speed = Stress_tempo;
arrow330.pos.y = 34798.0 + Stress_offset;
arrow330.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow330);

Arrow arrow331(up);
arrow331.speed = Stress_tempo;
arrow331.pos.y = 34897.0 + Stress_offset;
arrow331.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow331);

Arrow arrow332(left);
arrow332.speed = Stress_tempo;
arrow332.pos.y = 34897.0 + Stress_offset;
arrow332.side = computerSide;
arrow332.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow332);

Arrow arrow333(left);
arrow333.speed = Stress_tempo;
arrow333.pos.y = 35095.0 + Stress_offset;
arrow333.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow333);

Arrow arrow334(left);
arrow334.speed = Stress_tempo;
arrow334.pos.y = 35294.0 + Stress_offset;
arrow334.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow334);

Arrow arrow335(left);
arrow335.speed = Stress_tempo;
arrow335.pos.y = 35294.0 + Stress_offset;
arrow335.side = computerSide;
arrow335.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow335);

Arrow arrow336(up);
arrow336.speed = Stress_tempo;
arrow336.pos.y = 35492.0 + Stress_offset;
arrow336.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow336);

Arrow arrow337(down);
arrow337.speed = Stress_tempo;
arrow337.pos.y = 35690.0 + Stress_offset;
arrow337.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow337);

Arrow arrow338(left);
arrow338.speed = Stress_tempo;
arrow338.pos.y = 35690.0 + Stress_offset;
arrow338.side = computerSide;
arrow338.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow338);

Arrow arrow339(right);
arrow339.speed = Stress_tempo;
arrow339.pos.y = 35888.0 + Stress_offset;
arrow339.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow339);

Arrow arrow340(down);
arrow340.speed = Stress_tempo;
arrow340.pos.y = 36087.0 + Stress_offset;
arrow340.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow340);

Arrow arrow341(left);
arrow341.speed = Stress_tempo;
arrow341.pos.y = 36087.0 + Stress_offset;
arrow341.side = computerSide;
arrow341.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow341);

Arrow arrow342(down);
arrow342.speed = Stress_tempo;
arrow342.pos.y = 36285.0 + Stress_offset;
arrow342.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow342);

Arrow arrow343(left);
arrow343.speed = Stress_tempo;
arrow343.pos.y = 36384.0 + Stress_offset;
arrow343.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow343);

Arrow arrow344(up);
arrow344.speed = Stress_tempo;
arrow344.pos.y = 36483.0 + Stress_offset;
arrow344.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow344);

Arrow arrow345(down);
arrow345.speed = Stress_tempo;
arrow345.pos.y = 36483.0 + Stress_offset;
arrow345.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow345);

Arrow arrow346(left);
arrow346.speed = Stress_tempo;
arrow346.pos.y = 36681.0 + Stress_offset;
arrow346.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow346);

Arrow arrow347(left);
arrow347.speed = Stress_tempo;
arrow347.pos.y = 36880.0 + Stress_offset;
arrow347.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow347);

Arrow arrow348(up);
arrow348.speed = Stress_tempo;
arrow348.pos.y = 37078.0 + Stress_offset;
arrow348.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow348);

Arrow arrow349(down);
arrow349.speed = Stress_tempo;
arrow349.pos.y = 37276.0 + Stress_offset;
arrow349.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow349);

Arrow arrow350(right);
arrow350.speed = Stress_tempo;
arrow350.pos.y = 37474.0 + Stress_offset;
arrow350.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow350);

Arrow arrow351(down);
arrow351.speed = Stress_tempo;
arrow351.pos.y = 37672.0 + Stress_offset;
arrow351.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow351);

Arrow arrow352(down);
arrow352.speed = Stress_tempo;
arrow352.pos.y = 37871.0 + Stress_offset;
arrow352.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow352);

Arrow arrow353(left);
arrow353.speed = Stress_tempo;
arrow353.pos.y = 37970.0 + Stress_offset;
arrow353.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow353);

Arrow arrow354(down);
arrow354.speed = Stress_tempo;
arrow354.pos.y = 38070.0 + Stress_offset;
arrow354.side = computerSide;
arrow354.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow354);

Arrow arrow355(down);
arrow355.speed = Stress_tempo;
arrow355.pos.y = 38070.0 + Stress_offset;
arrow355.side = playerSide;
arrow355.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow355);

Arrow arrow356(left);
arrow356.speed = Stress_tempo;
arrow356.pos.y = 38268.0 + Stress_offset;
arrow356.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow356);

Arrow arrow357(left);
arrow357.speed = Stress_tempo;
arrow357.pos.y = 38268.0 + Stress_offset;
arrow357.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow357);

Arrow arrow358(right);
arrow358.speed = Stress_tempo;
arrow358.pos.y = 38466.0 + Stress_offset;
arrow358.side = computerSide;
arrow358.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow358);

Arrow arrow359(right);
arrow359.speed = Stress_tempo;
arrow359.pos.y = 38466.0 + Stress_offset;
arrow359.side = playerSide;
arrow359.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow359);

Arrow arrow360(down);
arrow360.speed = Stress_tempo;
arrow360.pos.y = 38664.0 + Stress_offset;
arrow360.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow360);

Arrow arrow361(down);
arrow361.speed = Stress_tempo;
arrow361.pos.y = 38664.0 + Stress_offset;
arrow361.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow361);

Arrow arrow362(right);
arrow362.speed = Stress_tempo;
arrow362.pos.y = 38862.0 + Stress_offset;
arrow362.side = playerSide;
arrow362.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow362);

Arrow arrow363(left);
arrow363.speed = Stress_tempo;
arrow363.pos.y = 38862.0 + Stress_offset;
arrow363.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow363);

Arrow arrow364(left);
arrow364.speed = Stress_tempo;
arrow364.pos.y = 39061.0 + Stress_offset;
arrow364.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow364);

Arrow arrow365(down);
arrow365.speed = Stress_tempo;
arrow365.pos.y = 39259.0 + Stress_offset;
arrow365.side = playerSide;
arrow365.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow365);

Arrow arrow366(left);
arrow366.speed = Stress_tempo;
arrow366.pos.y = 39259.0 + Stress_offset;
arrow366.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow366);

Arrow arrow367(left);
arrow367.speed = Stress_tempo;
arrow367.pos.y = 39358.0 + Stress_offset;
arrow367.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow367);

Arrow arrow368(up);
arrow368.speed = Stress_tempo;
arrow368.pos.y = 39457.0 + Stress_offset;
arrow368.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow368);

Arrow arrow369(right);
arrow369.speed = Stress_tempo;
arrow369.pos.y = 39507.0 + Stress_offset;
arrow369.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow369);

Arrow arrow370(up);
arrow370.speed = Stress_tempo;
arrow370.pos.y = 39557.0 + Stress_offset;
arrow370.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow370);

Arrow arrow371(left);
arrow371.speed = Stress_tempo;
arrow371.pos.y = 39655.0 + Stress_offset;
arrow371.side = playerSide;
arrow371.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow371);

Arrow arrow372(down);
arrow372.speed = Stress_tempo;
arrow372.pos.y = 39655.0 + Stress_offset;
arrow372.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow372);

Arrow arrow373(right);
arrow373.speed = Stress_tempo;
arrow373.pos.y = 39755.0 + Stress_offset;
arrow373.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow373);

Arrow arrow374(up);
arrow374.speed = Stress_tempo;
arrow374.pos.y = 39854.0 + Stress_offset;
arrow374.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow374);

Arrow arrow375(down);
arrow375.speed = Stress_tempo;
arrow375.pos.y = 39953.0 + Stress_offset;
arrow375.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow375);

Arrow arrow376(down);
arrow376.speed = Stress_tempo;
arrow376.pos.y = 40052.0 + Stress_offset;
arrow376.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow376);

Arrow arrow377(right);
arrow377.speed = Stress_tempo;
arrow377.pos.y = 40052.0 + Stress_offset;
arrow377.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow377);

Arrow arrow378(up);
arrow378.speed = Stress_tempo;
arrow378.pos.y = 40151.0 + Stress_offset;
arrow378.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow378);

Arrow arrow379(left);
arrow379.speed = Stress_tempo;
arrow379.pos.y = 40250.0 + Stress_offset;
arrow379.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow379);

Arrow arrow380(down);
arrow380.speed = Stress_tempo;
arrow380.pos.y = 40250.0 + Stress_offset;
arrow380.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow380);

Arrow arrow381(right);
arrow381.speed = Stress_tempo;
arrow381.pos.y = 40300.0 + Stress_offset;
arrow381.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow381);

Arrow arrow382(up);
arrow382.speed = Stress_tempo;
arrow382.pos.y = 40350.0 + Stress_offset;
arrow382.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow382);

Arrow arrow383(right);
arrow383.speed = Stress_tempo;
arrow383.pos.y = 40449.0 + Stress_offset;
arrow383.side = playerSide;
arrow383.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow383);

Arrow arrow384(left);
arrow384.speed = Stress_tempo;
arrow384.pos.y = 40449.0 + Stress_offset;
arrow384.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow384);

Arrow arrow385(right);
arrow385.speed = Stress_tempo;
arrow385.pos.y = 40548.0 + Stress_offset;
arrow385.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow385);

Arrow arrow386(up);
arrow386.speed = Stress_tempo;
arrow386.pos.y = 40647.0 + Stress_offset;
arrow386.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow386);

Arrow arrow387(right);
arrow387.speed = Stress_tempo;
arrow387.pos.y = 40746.0 + Stress_offset;
arrow387.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow387);

Arrow arrow388(left);
arrow388.speed = Stress_tempo;
arrow388.pos.y = 40845.0 + Stress_offset;
arrow388.side = playerSide;
arrow388.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow388);

Arrow arrow389(down);
arrow389.speed = Stress_tempo;
arrow389.pos.y = 40845.0 + Stress_offset;
arrow389.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow389);

Arrow arrow390(right);
arrow390.speed = Stress_tempo;
arrow390.pos.y = 40944.0 + Stress_offset;
arrow390.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow390);

Arrow arrow391(left);
arrow391.speed = Stress_tempo;
arrow391.pos.y = 41044.0 + Stress_offset;
arrow391.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow391);

Arrow arrow392(right);
arrow392.speed = Stress_tempo;
arrow392.pos.y = 41142.0 + Stress_offset;
arrow392.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow392);

Arrow arrow393(down);
arrow393.speed = Stress_tempo;
arrow393.pos.y = 41242.0 + Stress_offset;
arrow393.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow393);

Arrow arrow394(left);
arrow394.speed = Stress_tempo;
arrow394.pos.y = 41440.0 + Stress_offset;
arrow394.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow394);

Arrow arrow395(down);
arrow395.speed = Stress_tempo;
arrow395.pos.y = 41540.0 + Stress_offset;
arrow395.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow395);

Arrow arrow396(right);
arrow396.speed = Stress_tempo;
arrow396.pos.y = 41638.0 + Stress_offset;
arrow396.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow396);

Arrow arrow397(down);
arrow397.speed = Stress_tempo;
arrow397.pos.y = 41837.0 + Stress_offset;
arrow397.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow397);

Arrow arrow398(left);
arrow398.speed = Stress_tempo;
arrow398.pos.y = 42035.0 + Stress_offset;
arrow398.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow398);

Arrow arrow399(left);
arrow399.speed = Stress_tempo;
arrow399.pos.y = 42233.0 + Stress_offset;
arrow399.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow399);

Arrow arrow400(left);
arrow400.speed = Stress_tempo;
arrow400.pos.y = 42431.0 + Stress_offset;
arrow400.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow400);

Arrow arrow401(left);
arrow401.speed = Stress_tempo;
arrow401.pos.y = 42531.0 + Stress_offset;
arrow401.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow401);

Arrow arrow402(left);
arrow402.speed = Stress_tempo;
arrow402.pos.y = 42630.0 + Stress_offset;
arrow402.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow402);

Arrow arrow403(down);
arrow403.speed = Stress_tempo;
arrow403.pos.y = 42828.0 + Stress_offset;
arrow403.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow403);

Arrow arrow404(left);
arrow404.speed = Stress_tempo;
arrow404.pos.y = 42928.0 + Stress_offset;
arrow404.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow404);

Arrow arrow405(right);
arrow405.speed = Stress_tempo;
arrow405.pos.y = 43027.0 + Stress_offset;
arrow405.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow405);

Arrow arrow406(down);
arrow406.speed = Stress_tempo;
arrow406.pos.y = 43225.0 + Stress_offset;
arrow406.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow406);

Arrow arrow407(down);
arrow407.speed = Stress_tempo;
arrow407.pos.y = 43423.0 + Stress_offset;
arrow407.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow407);

Arrow arrow408(down);
arrow408.speed = Stress_tempo;
arrow408.pos.y = 43621.0 + Stress_offset;
arrow408.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow408);

Arrow arrow409(left);
arrow409.speed = Stress_tempo;
arrow409.pos.y = 43721.0 + Stress_offset;
arrow409.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow409);

Arrow arrow410(right);
arrow410.speed = Stress_tempo;
arrow410.pos.y = 43820.0 + Stress_offset;
arrow410.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow410);

Arrow arrow411(down);
arrow411.speed = Stress_tempo;
arrow411.pos.y = 44018.0 + Stress_offset;
arrow411.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow411);

Arrow arrow412(down);
arrow412.speed = Stress_tempo;
arrow412.pos.y = 44216.0 + Stress_offset;
arrow412.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow412);

Arrow arrow413(left);
arrow413.speed = Stress_tempo;
arrow413.pos.y = 44315.0 + Stress_offset;
arrow413.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow413);

Arrow arrow414(down);
arrow414.speed = Stress_tempo;
arrow414.pos.y = 44414.0 + Stress_offset;
arrow414.side = playerSide;
arrow414.trailSize = 1307;
playerArrowList->insert(playerArrowList->begin(), arrow414);

Arrow arrow415(left);
arrow415.speed = Stress_tempo;
arrow415.pos.y = 44414.0 + Stress_offset;
arrow415.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow415);

Arrow arrow416(left);
arrow416.speed = Stress_tempo;
arrow416.pos.y = 44514.0 + Stress_offset;
arrow416.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow416);

Arrow arrow417(down);
arrow417.speed = Stress_tempo;
arrow417.pos.y = 44612.0 + Stress_offset;
arrow417.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow417);

Arrow arrow418(left);
arrow418.speed = Stress_tempo;
arrow418.pos.y = 44712.0 + Stress_offset;
arrow418.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow418);

Arrow arrow419(up);
arrow419.speed = Stress_tempo;
arrow419.pos.y = 44761.0 + Stress_offset;
arrow419.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow419);

Arrow arrow420(left);
arrow420.speed = Stress_tempo;
arrow420.pos.y = 44811.0 + Stress_offset;
arrow420.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow420);

Arrow arrow421(down);
arrow421.speed = Stress_tempo;
arrow421.pos.y = 44910.0 + Stress_offset;
arrow421.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow421);

Arrow arrow422(right);
arrow422.speed = Stress_tempo;
arrow422.pos.y = 45009.0 + Stress_offset;
arrow422.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow422);

Arrow arrow423(left);
arrow423.speed = Stress_tempo;
arrow423.pos.y = 45108.0 + Stress_offset;
arrow423.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow423);

Arrow arrow424(left);
arrow424.speed = Stress_tempo;
arrow424.pos.y = 45207.0 + Stress_offset;
arrow424.side = playerSide;
arrow424.trailSize = 1307;
playerArrowList->insert(playerArrowList->begin(), arrow424);

Arrow arrow425(down);
arrow425.speed = Stress_tempo;
arrow425.pos.y = 45207.0 + Stress_offset;
arrow425.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow425);

Arrow arrow426(right);
arrow426.speed = Stress_tempo;
arrow426.pos.y = 45257.0 + Stress_offset;
arrow426.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow426);

Arrow arrow427(down);
arrow427.speed = Stress_tempo;
arrow427.pos.y = 45307.0 + Stress_offset;
arrow427.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow427);

Arrow arrow428(left);
arrow428.speed = Stress_tempo;
arrow428.pos.y = 45406.0 + Stress_offset;
arrow428.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow428);

Arrow arrow429(down);
arrow429.speed = Stress_tempo;
arrow429.pos.y = 45505.0 + Stress_offset;
arrow429.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow429);

Arrow arrow430(up);
arrow430.speed = Stress_tempo;
arrow430.pos.y = 45604.0 + Stress_offset;
arrow430.side = computerSide;
arrow430.trailSize = 295;
computerArrowList->insert(computerArrowList->begin(), arrow430);

Arrow arrow431(left);
arrow431.speed = Stress_tempo;
arrow431.pos.y = 45802.0 + Stress_offset;
arrow431.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow431);

Arrow arrow432(left);
arrow432.speed = Stress_tempo;
arrow432.pos.y = 45901.0 + Stress_offset;
arrow432.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow432);

Arrow arrow433(right);
arrow433.speed = Stress_tempo;
arrow433.pos.y = 46001.0 + Stress_offset;
arrow433.side = playerSide;
arrow433.trailSize = 1306;
playerArrowList->insert(playerArrowList->begin(), arrow433);

Arrow arrow434(down);
arrow434.speed = Stress_tempo;
arrow434.pos.y = 46001.0 + Stress_offset;
arrow434.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow434);

Arrow arrow435(left);
arrow435.speed = Stress_tempo;
arrow435.pos.y = 46100.0 + Stress_offset;
arrow435.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow435);

Arrow arrow436(right);
arrow436.speed = Stress_tempo;
arrow436.pos.y = 46150.0 + Stress_offset;
arrow436.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow436);

Arrow arrow437(left);
arrow437.speed = Stress_tempo;
arrow437.pos.y = 46199.0 + Stress_offset;
arrow437.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow437);

Arrow arrow438(right);
arrow438.speed = Stress_tempo;
arrow438.pos.y = 46298.0 + Stress_offset;
arrow438.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow438);

Arrow arrow439(left);
arrow439.speed = Stress_tempo;
arrow439.pos.y = 46348.0 + Stress_offset;
arrow439.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow439);

Arrow arrow440(down);
arrow440.speed = Stress_tempo;
arrow440.pos.y = 46397.0 + Stress_offset;
arrow440.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow440);

Arrow arrow441(down);
arrow441.speed = Stress_tempo;
arrow441.pos.y = 46496.0 + Stress_offset;
arrow441.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow441);

Arrow arrow442(right);
arrow442.speed = Stress_tempo;
arrow442.pos.y = 46546.0 + Stress_offset;
arrow442.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow442);

Arrow arrow443(up);
arrow443.speed = Stress_tempo;
arrow443.pos.y = 46595.0 + Stress_offset;
arrow443.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow443);

Arrow arrow444(left);
arrow444.speed = Stress_tempo;
arrow444.pos.y = 46695.0 + Stress_offset;
arrow444.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow444);

Arrow arrow445(down);
arrow445.speed = Stress_tempo;
arrow445.pos.y = 46744.0 + Stress_offset;
arrow445.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow445);

Arrow arrow446(left);
arrow446.speed = Stress_tempo;
arrow446.pos.y = 46794.0 + Stress_offset;
arrow446.side = playerSide;
arrow446.trailSize = 1307;
playerArrowList->insert(playerArrowList->begin(), arrow446);

Arrow arrow447(up);
arrow447.speed = Stress_tempo;
arrow447.pos.y = 46794.0 + Stress_offset;
arrow447.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow447);

Arrow arrow448(right);
arrow448.speed = Stress_tempo;
arrow448.pos.y = 46843.0 + Stress_offset;
arrow448.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow448);

Arrow arrow449(up);
arrow449.speed = Stress_tempo;
arrow449.pos.y = 46893.0 + Stress_offset;
arrow449.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow449);

Arrow arrow450(left);
arrow450.speed = Stress_tempo;
arrow450.pos.y = 46942.0 + Stress_offset;
arrow450.side = computerSide;
arrow450.trailSize = 127;
computerArrowList->insert(computerArrowList->begin(), arrow450);

Arrow arrow451(right);
arrow451.speed = Stress_tempo;
arrow451.pos.y = 47041.0 + Stress_offset;
arrow451.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow451);

Arrow arrow452(up);
arrow452.speed = Stress_tempo;
arrow452.pos.y = 47091.0 + Stress_offset;
arrow452.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow452);

Arrow arrow453(left);
arrow453.speed = Stress_tempo;
arrow453.pos.y = 47190.0 + Stress_offset;
arrow453.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow453);

Arrow arrow454(right);
arrow454.speed = Stress_tempo;
arrow454.pos.y = 47290.0 + Stress_offset;
arrow454.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow454);

Arrow arrow455(left);
arrow455.speed = Stress_tempo;
arrow455.pos.y = 47388.0 + Stress_offset;
arrow455.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow455);

Arrow arrow456(up);
arrow456.speed = Stress_tempo;
arrow456.pos.y = 47488.0 + Stress_offset;
arrow456.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow456);

Arrow arrow457(left);
arrow457.speed = Stress_tempo;
arrow457.pos.y = 47587.0 + Stress_offset;
arrow457.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow457);

Arrow arrow458(left);
arrow458.speed = Stress_tempo;
arrow458.pos.y = 47785.0 + Stress_offset;
arrow458.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow458);

Arrow arrow459(up);
arrow459.speed = Stress_tempo;
arrow459.pos.y = 47884.0 + Stress_offset;
arrow459.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow459);

Arrow arrow460(right);
arrow460.speed = Stress_tempo;
arrow460.pos.y = 47984.0 + Stress_offset;
arrow460.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow460);

Arrow arrow461(left);
arrow461.speed = Stress_tempo;
arrow461.pos.y = 48182.0 + Stress_offset;
arrow461.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow461);

Arrow arrow462(right);
arrow462.speed = Stress_tempo;
arrow462.pos.y = 48380.0 + Stress_offset;
arrow462.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow462);

Arrow arrow463(right);
arrow463.speed = Stress_tempo;
arrow463.pos.y = 48578.0 + Stress_offset;
arrow463.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow463);

Arrow arrow464(left);
arrow464.speed = Stress_tempo;
arrow464.pos.y = 48677.0 + Stress_offset;
arrow464.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow464);

Arrow arrow465(down);
arrow465.speed = Stress_tempo;
arrow465.pos.y = 48777.0 + Stress_offset;
arrow465.side = playerSide;
arrow465.trailSize = 295;
playerArrowList->insert(playerArrowList->begin(), arrow465);

Arrow arrow466(left);
arrow466.speed = Stress_tempo;
arrow466.pos.y = 48975.0 + Stress_offset;
arrow466.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow466);

Arrow arrow467(right);
arrow467.speed = Stress_tempo;
arrow467.pos.y = 49173.0 + Stress_offset;
arrow467.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow467);

Arrow arrow468(down);
arrow468.speed = Stress_tempo;
arrow468.pos.y = 49371.0 + Stress_offset;
arrow468.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow468);

Arrow arrow469(left);
arrow469.speed = Stress_tempo;
arrow469.pos.y = 49570.0 + Stress_offset;
arrow469.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow469);

Arrow arrow470(right);
arrow470.speed = Stress_tempo;
arrow470.pos.y = 49768.0 + Stress_offset;
arrow470.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow470);

Arrow arrow471(down);
arrow471.speed = Stress_tempo;
arrow471.pos.y = 49966.0 + Stress_offset;
arrow471.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow471);

Arrow arrow472(down);
arrow472.speed = Stress_tempo;
arrow472.pos.y = 50165.0 + Stress_offset;
arrow472.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow472);

Arrow arrow473(left);
arrow473.speed = Stress_tempo;
arrow473.pos.y = 50363.0 + Stress_offset;
arrow473.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow473);

Arrow arrow474(right);
arrow474.speed = Stress_tempo;
arrow474.pos.y = 50462.0 + Stress_offset;
arrow474.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow474);

Arrow arrow475(left);
arrow475.speed = Stress_tempo;
arrow475.pos.y = 50561.0 + Stress_offset;
arrow475.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow475);

Arrow arrow476(up);
arrow476.speed = Stress_tempo;
arrow476.pos.y = 50661.0 + Stress_offset;
arrow476.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow476);

Arrow arrow477(down);
arrow477.speed = Stress_tempo;
arrow477.pos.y = 50760.0 + Stress_offset;
arrow477.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow477);

Arrow arrow478(left);
arrow478.speed = Stress_tempo;
arrow478.pos.y = 50809.0 + Stress_offset;
arrow478.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow478);

Arrow arrow479(right);
arrow479.speed = Stress_tempo;
arrow479.pos.y = 50858.0 + Stress_offset;
arrow479.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow479);

Arrow arrow480(up);
arrow480.speed = Stress_tempo;
arrow480.pos.y = 50958.0 + Stress_offset;
arrow480.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow480);

Arrow arrow481(down);
arrow481.speed = Stress_tempo;
arrow481.pos.y = 51007.0 + Stress_offset;
arrow481.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow481);

Arrow arrow482(right);
arrow482.speed = Stress_tempo;
arrow482.pos.y = 51057.0 + Stress_offset;
arrow482.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow482);

Arrow arrow483(up);
arrow483.speed = Stress_tempo;
arrow483.pos.y = 51156.0 + Stress_offset;
arrow483.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow483);

Arrow arrow484(right);
arrow484.speed = Stress_tempo;
arrow484.pos.y = 51255.0 + Stress_offset;
arrow484.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow484);

Arrow arrow485(up);
arrow485.speed = Stress_tempo;
arrow485.pos.y = 51354.0 + Stress_offset;
arrow485.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow485);

Arrow arrow486(left);
arrow486.speed = Stress_tempo;
arrow486.pos.y = 51453.0 + Stress_offset;
arrow486.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow486);

Arrow arrow487(down);
arrow487.speed = Stress_tempo;
arrow487.pos.y = 51552.0 + Stress_offset;
arrow487.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow487);

Arrow arrow488(left);
arrow488.speed = Stress_tempo;
arrow488.pos.y = 51602.0 + Stress_offset;
arrow488.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow488);

Arrow arrow489(right);
arrow489.speed = Stress_tempo;
arrow489.pos.y = 51651.0 + Stress_offset;
arrow489.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow489);

Arrow arrow490(up);
arrow490.speed = Stress_tempo;
arrow490.pos.y = 51751.0 + Stress_offset;
arrow490.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow490);

Arrow arrow491(down);
arrow491.speed = Stress_tempo;
arrow491.pos.y = 51800.0 + Stress_offset;
arrow491.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow491);

Arrow arrow492(left);
arrow492.speed = Stress_tempo;
arrow492.pos.y = 51850.0 + Stress_offset;
arrow492.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow492);

Arrow arrow493(up);
arrow493.speed = Stress_tempo;
arrow493.pos.y = 51949.0 + Stress_offset;
arrow493.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow493);

Arrow arrow494(right);
arrow494.speed = Stress_tempo;
arrow494.pos.y = 52048.0 + Stress_offset;
arrow494.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow494);

Arrow arrow495(down);
arrow495.speed = Stress_tempo;
arrow495.pos.y = 52147.0 + Stress_offset;
arrow495.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow495);

Arrow arrow496(right);
arrow496.speed = Stress_tempo;
arrow496.pos.y = 52247.0 + Stress_offset;
arrow496.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow496);

Arrow arrow497(up);
arrow497.speed = Stress_tempo;
arrow497.pos.y = 52345.0 + Stress_offset;
arrow497.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow497);

Arrow arrow498(right);
arrow498.speed = Stress_tempo;
arrow498.pos.y = 52395.0 + Stress_offset;
arrow498.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow498);

Arrow arrow499(up);
arrow499.speed = Stress_tempo;
arrow499.pos.y = 52445.0 + Stress_offset;
arrow499.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow499);

Arrow arrow500(down);
arrow500.speed = Stress_tempo;
arrow500.pos.y = 52544.0 + Stress_offset;
arrow500.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow500);

Arrow arrow501(left);
arrow501.speed = Stress_tempo;
arrow501.pos.y = 52594.0 + Stress_offset;
arrow501.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow501);

Arrow arrow502(down);
arrow502.speed = Stress_tempo;
arrow502.pos.y = 52643.0 + Stress_offset;
arrow502.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow502);

Arrow arrow503(right);
arrow503.speed = Stress_tempo;
arrow503.pos.y = 52742.0 + Stress_offset;
arrow503.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow503);

Arrow arrow504(right);
arrow504.speed = Stress_tempo;
arrow504.pos.y = 52841.0 + Stress_offset;
arrow504.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow504);

Arrow arrow505(down);
arrow505.speed = Stress_tempo;
arrow505.pos.y = 52891.0 + Stress_offset;
arrow505.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow505);

Arrow arrow506(right);
arrow506.speed = Stress_tempo;
arrow506.pos.y = 52941.0 + Stress_offset;
arrow506.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow506);

Arrow arrow507(down);
arrow507.speed = Stress_tempo;
arrow507.pos.y = 53040.0 + Stress_offset;
arrow507.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow507);

Arrow arrow508(left);
arrow508.speed = Stress_tempo;
arrow508.pos.y = 53139.0 + Stress_offset;
arrow508.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow508);

Arrow arrow509(right);
arrow509.speed = Stress_tempo;
arrow509.pos.y = 53188.0 + Stress_offset;
arrow509.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow509);

Arrow arrow510(down);
arrow510.speed = Stress_tempo;
arrow510.pos.y = 53238.0 + Stress_offset;
arrow510.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow510);

Arrow arrow511(left);
arrow511.speed = Stress_tempo;
arrow511.pos.y = 53287.0 + Stress_offset;
arrow511.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow511);

Arrow arrow512(down);
arrow512.speed = Stress_tempo;
arrow512.pos.y = 53337.0 + Stress_offset;
arrow512.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow512);

Arrow arrow513(right);
arrow513.speed = Stress_tempo;
arrow513.pos.y = 53436.0 + Stress_offset;
arrow513.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow513);

Arrow arrow514(left);
arrow514.speed = Stress_tempo;
arrow514.pos.y = 53535.0 + Stress_offset;
arrow514.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow514);

Arrow arrow515(right);
arrow515.speed = Stress_tempo;
arrow515.pos.y = 53585.0 + Stress_offset;
arrow515.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow515);

Arrow arrow516(down);
arrow516.speed = Stress_tempo;
arrow516.pos.y = 53634.0 + Stress_offset;
arrow516.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow516);

Arrow arrow517(left);
arrow517.speed = Stress_tempo;
arrow517.pos.y = 53684.0 + Stress_offset;
arrow517.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow517);

Arrow arrow518(down);
arrow518.speed = Stress_tempo;
arrow518.pos.y = 53734.0 + Stress_offset;
arrow518.side = computerSide;
arrow518.trailSize = 168;
computerArrowList->insert(computerArrowList->begin(), arrow518);

Arrow arrow519(left);
arrow519.speed = Stress_tempo;
arrow519.pos.y = 53932.0 + Stress_offset;
arrow519.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow519);

Arrow arrow520(down);
arrow520.speed = Stress_tempo;
arrow520.pos.y = 54130.0 + Stress_offset;
arrow520.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow520);

Arrow arrow521(right);
arrow521.speed = Stress_tempo;
arrow521.pos.y = 54328.0 + Stress_offset;
arrow521.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow521);

Arrow arrow522(right);
arrow522.speed = Stress_tempo;
arrow522.pos.y = 54428.0 + Stress_offset;
arrow522.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow522);

Arrow arrow523(left);
arrow523.speed = Stress_tempo;
arrow523.pos.y = 54527.0 + Stress_offset;
arrow523.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow523);

Arrow arrow524(left);
arrow524.speed = Stress_tempo;
arrow524.pos.y = 54725.0 + Stress_offset;
arrow524.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow524);

Arrow arrow525(down);
arrow525.speed = Stress_tempo;
arrow525.pos.y = 54923.0 + Stress_offset;
arrow525.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow525);

Arrow arrow526(right);
arrow526.speed = Stress_tempo;
arrow526.pos.y = 55121.0 + Stress_offset;
arrow526.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow526);

Arrow arrow527(right);
arrow527.speed = Stress_tempo;
arrow527.pos.y = 55221.0 + Stress_offset;
arrow527.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow527);

Arrow arrow528(left);
arrow528.speed = Stress_tempo;
arrow528.pos.y = 55320.0 + Stress_offset;
arrow528.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow528);

Arrow arrow529(up);
arrow529.speed = Stress_tempo;
arrow529.pos.y = 55518.0 + Stress_offset;
arrow529.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow529);

Arrow arrow530(right);
arrow530.speed = Stress_tempo;
arrow530.pos.y = 55717.0 + Stress_offset;
arrow530.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow530);

Arrow arrow531(left);
arrow531.speed = Stress_tempo;
arrow531.pos.y = 55915.0 + Stress_offset;
arrow531.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow531);

Arrow arrow532(left);
arrow532.speed = Stress_tempo;
arrow532.pos.y = 56014.0 + Stress_offset;
arrow532.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow532);

Arrow arrow533(right);
arrow533.speed = Stress_tempo;
arrow533.pos.y = 56113.0 + Stress_offset;
arrow533.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow533);

Arrow arrow534(left);
arrow534.speed = Stress_tempo;
arrow534.pos.y = 56311.0 + Stress_offset;
arrow534.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow534);

Arrow arrow535(right);
arrow535.speed = Stress_tempo;
arrow535.pos.y = 56510.0 + Stress_offset;
arrow535.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow535);

Arrow arrow536(left);
arrow536.speed = Stress_tempo;
arrow536.pos.y = 56708.0 + Stress_offset;
arrow536.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow536);

Arrow arrow537(right);
arrow537.speed = Stress_tempo;
arrow537.pos.y = 56906.0 + Stress_offset;
arrow537.side = playerSide;
arrow537.trailSize = 337;
playerArrowList->insert(playerArrowList->begin(), arrow537);

Arrow arrow538(left);
arrow538.speed = Stress_tempo;
arrow538.pos.y = 57104.0 + Stress_offset;
arrow538.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow538);

Arrow arrow539(right);
arrow539.speed = Stress_tempo;
arrow539.pos.y = 57154.0 + Stress_offset;
arrow539.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow539);

Arrow arrow540(up);
arrow540.speed = Stress_tempo;
arrow540.pos.y = 57204.0 + Stress_offset;
arrow540.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow540);

Arrow arrow541(right);
arrow541.speed = Stress_tempo;
arrow541.pos.y = 57302.0 + Stress_offset;
arrow541.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow541);

Arrow arrow542(left);
arrow542.speed = Stress_tempo;
arrow542.pos.y = 57402.0 + Stress_offset;
arrow542.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow542);

Arrow arrow543(right);
arrow543.speed = Stress_tempo;
arrow543.pos.y = 57451.0 + Stress_offset;
arrow543.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow543);

Arrow arrow544(up);
arrow544.speed = Stress_tempo;
arrow544.pos.y = 57501.0 + Stress_offset;
arrow544.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow544);

Arrow arrow545(right);
arrow545.speed = Stress_tempo;
arrow545.pos.y = 57600.0 + Stress_offset;
arrow545.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow545);

Arrow arrow546(left);
arrow546.speed = Stress_tempo;
arrow546.pos.y = 57699.0 + Stress_offset;
arrow546.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow546);

Arrow arrow547(right);
arrow547.speed = Stress_tempo;
arrow547.pos.y = 57749.0 + Stress_offset;
arrow547.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow547);

Arrow arrow548(up);
arrow548.speed = Stress_tempo;
arrow548.pos.y = 57798.0 + Stress_offset;
arrow548.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow548);

Arrow arrow549(left);
arrow549.speed = Stress_tempo;
arrow549.pos.y = 57897.0 + Stress_offset;
arrow549.side = playerSide;
arrow549.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow549);

Arrow arrow550(right);
arrow550.speed = Stress_tempo;
arrow550.pos.y = 57897.0 + Stress_offset;
arrow550.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow550);

Arrow arrow551(left);
arrow551.speed = Stress_tempo;
arrow551.pos.y = 57997.0 + Stress_offset;
arrow551.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow551);

Arrow arrow552(right);
arrow552.speed = Stress_tempo;
arrow552.pos.y = 58046.0 + Stress_offset;
arrow552.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow552);

Arrow arrow553(up);
arrow553.speed = Stress_tempo;
arrow553.pos.y = 58096.0 + Stress_offset;
arrow553.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow553);

Arrow arrow554(right);
arrow554.speed = Stress_tempo;
arrow554.pos.y = 58195.0 + Stress_offset;
arrow554.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow554);

Arrow arrow555(up);
arrow555.speed = Stress_tempo;
arrow555.pos.y = 58294.0 + Stress_offset;
arrow555.side = playerSide;
arrow555.trailSize = 674;
playerArrowList->insert(playerArrowList->begin(), arrow555);

Arrow arrow556(up);
arrow556.speed = Stress_tempo;
arrow556.pos.y = 58294.0 + Stress_offset;
arrow556.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow556);

Arrow arrow557(down);
arrow557.speed = Stress_tempo;
arrow557.pos.y = 58393.0 + Stress_offset;
arrow557.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow557);

Arrow arrow558(left);
arrow558.speed = Stress_tempo;
arrow558.pos.y = 58492.0 + Stress_offset;
arrow558.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow558);

Arrow arrow559(right);
arrow559.speed = Stress_tempo;
arrow559.pos.y = 58591.0 + Stress_offset;
arrow559.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow559);

Arrow arrow560(left);
arrow560.speed = Stress_tempo;
arrow560.pos.y = 58691.0 + Stress_offset;
arrow560.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow560);

Arrow arrow561(right);
arrow561.speed = Stress_tempo;
arrow561.pos.y = 58740.0 + Stress_offset;
arrow561.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow561);

Arrow arrow562(up);
arrow562.speed = Stress_tempo;
arrow562.pos.y = 58790.0 + Stress_offset;
arrow562.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow562);

Arrow arrow563(right);
arrow563.speed = Stress_tempo;
arrow563.pos.y = 58889.0 + Stress_offset;
arrow563.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow563);

Arrow arrow564(left);
arrow564.speed = Stress_tempo;
arrow564.pos.y = 58988.0 + Stress_offset;
arrow564.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow564);

Arrow arrow565(right);
arrow565.speed = Stress_tempo;
arrow565.pos.y = 59038.0 + Stress_offset;
arrow565.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow565);

Arrow arrow566(up);
arrow566.speed = Stress_tempo;
arrow566.pos.y = 59087.0 + Stress_offset;
arrow566.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow566);

Arrow arrow567(right);
arrow567.speed = Stress_tempo;
arrow567.pos.y = 59186.0 + Stress_offset;
arrow567.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow567);

Arrow arrow568(left);
arrow568.speed = Stress_tempo;
arrow568.pos.y = 59285.0 + Stress_offset;
arrow568.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow568);

Arrow arrow569(right);
arrow569.speed = Stress_tempo;
arrow569.pos.y = 59335.0 + Stress_offset;
arrow569.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow569);

Arrow arrow570(up);
arrow570.speed = Stress_tempo;
arrow570.pos.y = 59385.0 + Stress_offset;
arrow570.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow570);

Arrow arrow571(left);
arrow571.speed = Stress_tempo;
arrow571.pos.y = 59484.0 + Stress_offset;
arrow571.side = playerSide;
arrow571.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow571);

Arrow arrow572(right);
arrow572.speed = Stress_tempo;
arrow572.pos.y = 59484.0 + Stress_offset;
arrow572.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow572);

Arrow arrow573(left);
arrow573.speed = Stress_tempo;
arrow573.pos.y = 59583.0 + Stress_offset;
arrow573.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow573);

Arrow arrow574(right);
arrow574.speed = Stress_tempo;
arrow574.pos.y = 59632.0 + Stress_offset;
arrow574.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow574);

Arrow arrow575(up);
arrow575.speed = Stress_tempo;
arrow575.pos.y = 59682.0 + Stress_offset;
arrow575.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow575);

Arrow arrow576(right);
arrow576.speed = Stress_tempo;
arrow576.pos.y = 59781.0 + Stress_offset;
arrow576.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow576);

Arrow arrow577(up);
arrow577.speed = Stress_tempo;
arrow577.pos.y = 59880.0 + Stress_offset;
arrow577.side = playerSide;
arrow577.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow577);

Arrow arrow578(up);
arrow578.speed = Stress_tempo;
arrow578.pos.y = 59880.0 + Stress_offset;
arrow578.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow578);

Arrow arrow579(down);
arrow579.speed = Stress_tempo;
arrow579.pos.y = 59980.0 + Stress_offset;
arrow579.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow579);

Arrow arrow580(left);
arrow580.speed = Stress_tempo;
arrow580.pos.y = 60078.0 + Stress_offset;
arrow580.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow580);

Arrow arrow581(right);
arrow581.speed = Stress_tempo;
arrow581.pos.y = 60178.0 + Stress_offset;
arrow581.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow581);

Arrow arrow582(up);
arrow582.speed = Stress_tempo;
arrow582.pos.y = 60277.0 + Stress_offset;
arrow582.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow582);

Arrow arrow583(left);
arrow583.speed = Stress_tempo;
arrow583.pos.y = 60277.0 + Stress_offset;
arrow583.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow583);

Arrow arrow584(right);
arrow584.speed = Stress_tempo;
arrow584.pos.y = 60327.0 + Stress_offset;
arrow584.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow584);

Arrow arrow585(up);
arrow585.speed = Stress_tempo;
arrow585.pos.y = 60376.0 + Stress_offset;
arrow585.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow585);

Arrow arrow586(right);
arrow586.speed = Stress_tempo;
arrow586.pos.y = 60475.0 + Stress_offset;
arrow586.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow586);

Arrow arrow587(left);
arrow587.speed = Stress_tempo;
arrow587.pos.y = 60475.0 + Stress_offset;
arrow587.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow587);

Arrow arrow588(left);
arrow588.speed = Stress_tempo;
arrow588.pos.y = 60574.0 + Stress_offset;
arrow588.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow588);

Arrow arrow589(up);
arrow589.speed = Stress_tempo;
arrow589.pos.y = 60575.0 + Stress_offset;
arrow589.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow589);

Arrow arrow590(right);
arrow590.speed = Stress_tempo;
arrow590.pos.y = 60624.0 + Stress_offset;
arrow590.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow590);

Arrow arrow591(up);
arrow591.speed = Stress_tempo;
arrow591.pos.y = 60674.0 + Stress_offset;
arrow591.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow591);

Arrow arrow592(right);
arrow592.speed = Stress_tempo;
arrow592.pos.y = 60772.0 + Stress_offset;
arrow592.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow592);

Arrow arrow593(left);
arrow593.speed = Stress_tempo;
arrow593.pos.y = 60773.0 + Stress_offset;
arrow593.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow593);

Arrow arrow594(left);
arrow594.speed = Stress_tempo;
arrow594.pos.y = 60872.0 + Stress_offset;
arrow594.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow594);

Arrow arrow595(up);
arrow595.speed = Stress_tempo;
arrow595.pos.y = 60872.0 + Stress_offset;
arrow595.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow595);

Arrow arrow596(right);
arrow596.speed = Stress_tempo;
arrow596.pos.y = 60921.0 + Stress_offset;
arrow596.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow596);

Arrow arrow597(up);
arrow597.speed = Stress_tempo;
arrow597.pos.y = 60971.0 + Stress_offset;
arrow597.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow597);

Arrow arrow598(right);
arrow598.speed = Stress_tempo;
arrow598.pos.y = 61070.0 + Stress_offset;
arrow598.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow598);

Arrow arrow599(left);
arrow599.speed = Stress_tempo;
arrow599.pos.y = 61070.0 + Stress_offset;
arrow599.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow599);

Arrow arrow600(up);
arrow600.speed = Stress_tempo;
arrow600.pos.y = 61169.0 + Stress_offset;
arrow600.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow600);

Arrow arrow601(left);
arrow601.speed = Stress_tempo;
arrow601.pos.y = 61169.0 + Stress_offset;
arrow601.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow601);

Arrow arrow602(right);
arrow602.speed = Stress_tempo;
arrow602.pos.y = 61219.0 + Stress_offset;
arrow602.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow602);

Arrow arrow603(up);
arrow603.speed = Stress_tempo;
arrow603.pos.y = 61268.0 + Stress_offset;
arrow603.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow603);

Arrow arrow604(left);
arrow604.speed = Stress_tempo;
arrow604.pos.y = 61268.0 + Stress_offset;
arrow604.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow604);

Arrow arrow605(right);
arrow605.speed = Stress_tempo;
arrow605.pos.y = 61367.0 + Stress_offset;
arrow605.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow605);

Arrow arrow606(down);
arrow606.speed = Stress_tempo;
arrow606.pos.y = 61467.0 + Stress_offset;
arrow606.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow606);

Arrow arrow607(up);
arrow607.speed = Stress_tempo;
arrow607.pos.y = 61467.0 + Stress_offset;
arrow607.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow607);

Arrow arrow608(down);
arrow608.speed = Stress_tempo;
arrow608.pos.y = 61565.0 + Stress_offset;
arrow608.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow608);

Arrow arrow609(down);
arrow609.speed = Stress_tempo;
arrow609.pos.y = 61665.0 + Stress_offset;
arrow609.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow609);

Arrow arrow610(left);
arrow610.speed = Stress_tempo;
arrow610.pos.y = 61665.0 + Stress_offset;
arrow610.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow610);

Arrow arrow611(right);
arrow611.speed = Stress_tempo;
arrow611.pos.y = 61764.0 + Stress_offset;
arrow611.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow611);

Arrow arrow612(up);
arrow612.speed = Stress_tempo;
arrow612.pos.y = 61863.0 + Stress_offset;
arrow612.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow612);

Arrow arrow613(left);
arrow613.speed = Stress_tempo;
arrow613.pos.y = 61863.0 + Stress_offset;
arrow613.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow613);

Arrow arrow614(right);
arrow614.speed = Stress_tempo;
arrow614.pos.y = 61912.0 + Stress_offset;
arrow614.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow614);

Arrow arrow615(up);
arrow615.speed = Stress_tempo;
arrow615.pos.y = 61962.0 + Stress_offset;
arrow615.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow615);

Arrow arrow616(right);
arrow616.speed = Stress_tempo;
arrow616.pos.y = 62061.0 + Stress_offset;
arrow616.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow616);

Arrow arrow617(right);
arrow617.speed = Stress_tempo;
arrow617.pos.y = 62062.0 + Stress_offset;
arrow617.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow617);

Arrow arrow618(up);
arrow618.speed = Stress_tempo;
arrow618.pos.y = 62161.0 + Stress_offset;
arrow618.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow618);

Arrow arrow619(left);
arrow619.speed = Stress_tempo;
arrow619.pos.y = 62161.0 + Stress_offset;
arrow619.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow619);

Arrow arrow620(right);
arrow620.speed = Stress_tempo;
arrow620.pos.y = 62210.0 + Stress_offset;
arrow620.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow620);

Arrow arrow621(up);
arrow621.speed = Stress_tempo;
arrow621.pos.y = 62260.0 + Stress_offset;
arrow621.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow621);

Arrow arrow622(right);
arrow622.speed = Stress_tempo;
arrow622.pos.y = 62359.0 + Stress_offset;
arrow622.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow622);

Arrow arrow623(right);
arrow623.speed = Stress_tempo;
arrow623.pos.y = 62359.0 + Stress_offset;
arrow623.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow623);

Arrow arrow624(up);
arrow624.speed = Stress_tempo;
arrow624.pos.y = 62458.0 + Stress_offset;
arrow624.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow624);

Arrow arrow625(left);
arrow625.speed = Stress_tempo;
arrow625.pos.y = 62458.0 + Stress_offset;
arrow625.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow625);

Arrow arrow626(right);
arrow626.speed = Stress_tempo;
arrow626.pos.y = 62508.0 + Stress_offset;
arrow626.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow626);

Arrow arrow627(up);
arrow627.speed = Stress_tempo;
arrow627.pos.y = 62557.0 + Stress_offset;
arrow627.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow627);

Arrow arrow628(right);
arrow628.speed = Stress_tempo;
arrow628.pos.y = 62656.0 + Stress_offset;
arrow628.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow628);

Arrow arrow629(right);
arrow629.speed = Stress_tempo;
arrow629.pos.y = 62656.0 + Stress_offset;
arrow629.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow629);

Arrow arrow630(up);
arrow630.speed = Stress_tempo;
arrow630.pos.y = 62755.0 + Stress_offset;
arrow630.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow630);

Arrow arrow631(left);
arrow631.speed = Stress_tempo;
arrow631.pos.y = 62755.0 + Stress_offset;
arrow631.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow631);

Arrow arrow632(right);
arrow632.speed = Stress_tempo;
arrow632.pos.y = 62805.0 + Stress_offset;
arrow632.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow632);

Arrow arrow633(up);
arrow633.speed = Stress_tempo;
arrow633.pos.y = 62854.0 + Stress_offset;
arrow633.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow633);

Arrow arrow634(left);
arrow634.speed = Stress_tempo;
arrow634.pos.y = 62855.0 + Stress_offset;
arrow634.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow634);

Arrow arrow635(right);
arrow635.speed = Stress_tempo;
arrow635.pos.y = 62954.0 + Stress_offset;
arrow635.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow635);

Arrow arrow636(down);
arrow636.speed = Stress_tempo;
arrow636.pos.y = 63053.0 + Stress_offset;
arrow636.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow636);

Arrow arrow637(up);
arrow637.speed = Stress_tempo;
arrow637.pos.y = 63053.0 + Stress_offset;
arrow637.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow637);

Arrow arrow638(down);
arrow638.speed = Stress_tempo;
arrow638.pos.y = 63152.0 + Stress_offset;
arrow638.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow638);

Arrow arrow639(down);
arrow639.speed = Stress_tempo;
arrow639.pos.y = 63251.0 + Stress_offset;
arrow639.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow639);

Arrow arrow640(left);
arrow640.speed = Stress_tempo;
arrow640.pos.y = 63251.0 + Stress_offset;
arrow640.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow640);

Arrow arrow641(right);
arrow641.speed = Stress_tempo;
arrow641.pos.y = 63350.0 + Stress_offset;
arrow641.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow641);

Arrow arrow642(right);
arrow642.speed = Stress_tempo;
arrow642.pos.y = 63450.0 + Stress_offset;
arrow642.side = playerSide;
arrow642.trailSize = 589;
playerArrowList->insert(playerArrowList->begin(), arrow642);

Arrow arrow643(right);
arrow643.speed = Stress_tempo;
arrow643.pos.y = 63450.0 + Stress_offset;
arrow643.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow643);

Arrow arrow644(up);
arrow644.speed = Stress_tempo;
arrow644.pos.y = 63499.0 + Stress_offset;
arrow644.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow644);

Arrow arrow645(right);
arrow645.speed = Stress_tempo;
arrow645.pos.y = 63548.0 + Stress_offset;
arrow645.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow645);

Arrow arrow646(up);
arrow646.speed = Stress_tempo;
arrow646.pos.y = 63598.0 + Stress_offset;
arrow646.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow646);

Arrow arrow647(left);
arrow647.speed = Stress_tempo;
arrow647.pos.y = 63648.0 + Stress_offset;
arrow647.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow647);

Arrow arrow648(down);
arrow648.speed = Stress_tempo;
arrow648.pos.y = 63747.0 + Stress_offset;
arrow648.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow648);

Arrow arrow649(down);
arrow649.speed = Stress_tempo;
arrow649.pos.y = 63846.0 + Stress_offset;
arrow649.side = playerSide;
arrow649.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow649);

Arrow arrow650(right);
arrow650.speed = Stress_tempo;
arrow650.pos.y = 63846.0 + Stress_offset;
arrow650.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow650);

Arrow arrow651(up);
arrow651.speed = Stress_tempo;
arrow651.pos.y = 63895.0 + Stress_offset;
arrow651.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow651);

Arrow arrow652(right);
arrow652.speed = Stress_tempo;
arrow652.pos.y = 63945.0 + Stress_offset;
arrow652.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow652);

Arrow arrow653(up);
arrow653.speed = Stress_tempo;
arrow653.pos.y = 63995.0 + Stress_offset;
arrow653.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow653);

Arrow arrow654(left);
arrow654.speed = Stress_tempo;
arrow654.pos.y = 64044.0 + Stress_offset;
arrow654.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow654);

Arrow arrow655(down);
arrow655.speed = Stress_tempo;
arrow655.pos.y = 64143.0 + Stress_offset;
arrow655.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow655);

Arrow arrow656(left);
arrow656.speed = Stress_tempo;
arrow656.pos.y = 64242.0 + Stress_offset;
arrow656.side = playerSide;
arrow656.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow656);

Arrow arrow657(right);
arrow657.speed = Stress_tempo;
arrow657.pos.y = 64242.0 + Stress_offset;
arrow657.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow657);

Arrow arrow658(left);
arrow658.speed = Stress_tempo;
arrow658.pos.y = 64292.0 + Stress_offset;
arrow658.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow658);

Arrow arrow659(up);
arrow659.speed = Stress_tempo;
arrow659.pos.y = 64342.0 + Stress_offset;
arrow659.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow659);

Arrow arrow660(right);
arrow660.speed = Stress_tempo;
arrow660.pos.y = 64391.0 + Stress_offset;
arrow660.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow660);

Arrow arrow661(left);
arrow661.speed = Stress_tempo;
arrow661.pos.y = 64441.0 + Stress_offset;
arrow661.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow661);

Arrow arrow662(down);
arrow662.speed = Stress_tempo;
arrow662.pos.y = 64540.0 + Stress_offset;
arrow662.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow662);

Arrow arrow663(down);
arrow663.speed = Stress_tempo;
arrow663.pos.y = 64639.0 + Stress_offset;
arrow663.side = playerSide;
arrow663.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow663);

Arrow arrow664(right);
arrow664.speed = Stress_tempo;
arrow664.pos.y = 64639.0 + Stress_offset;
arrow664.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow664);

Arrow arrow665(up);
arrow665.speed = Stress_tempo;
arrow665.pos.y = 64688.0 + Stress_offset;
arrow665.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow665);

Arrow arrow666(right);
arrow666.speed = Stress_tempo;
arrow666.pos.y = 64738.0 + Stress_offset;
arrow666.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow666);

Arrow arrow667(up);
arrow667.speed = Stress_tempo;
arrow667.pos.y = 64788.0 + Stress_offset;
arrow667.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow667);

Arrow arrow668(left);
arrow668.speed = Stress_tempo;
arrow668.pos.y = 64837.0 + Stress_offset;
arrow668.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow668);

Arrow arrow669(down);
arrow669.speed = Stress_tempo;
arrow669.pos.y = 64937.0 + Stress_offset;
arrow669.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow669);

Arrow arrow670(down);
arrow670.speed = Stress_tempo;
arrow670.pos.y = 65035.0 + Stress_offset;
arrow670.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow670);

Arrow arrow671(down);
arrow671.speed = Stress_tempo;
arrow671.pos.y = 65234.0 + Stress_offset;
arrow671.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow671);

Arrow arrow672(left);
arrow672.speed = Stress_tempo;
arrow672.pos.y = 65333.0 + Stress_offset;
arrow672.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow672);

Arrow arrow673(down);
arrow673.speed = Stress_tempo;
arrow673.pos.y = 65432.0 + Stress_offset;
arrow673.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow673);

Arrow arrow674(down);
arrow674.speed = Stress_tempo;
arrow674.pos.y = 65631.0 + Stress_offset;
arrow674.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow674);

Arrow arrow675(left);
arrow675.speed = Stress_tempo;
arrow675.pos.y = 65730.0 + Stress_offset;
arrow675.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow675);

Arrow arrow676(down);
arrow676.speed = Stress_tempo;
arrow676.pos.y = 65829.0 + Stress_offset;
arrow676.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow676);

Arrow arrow677(down);
arrow677.speed = Stress_tempo;
arrow677.pos.y = 66027.0 + Stress_offset;
arrow677.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow677);

Arrow arrow678(up);
arrow678.speed = Stress_tempo;
arrow678.pos.y = 66225.0 + Stress_offset;
arrow678.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow678);

Arrow arrow679(down);
arrow679.speed = Stress_tempo;
arrow679.pos.y = 66424.0 + Stress_offset;
arrow679.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow679);

Arrow arrow680(right);
arrow680.speed = Stress_tempo;
arrow680.pos.y = 66622.0 + Stress_offset;
arrow680.side = playerSide;
arrow680.trailSize = 632;
playerArrowList->insert(playerArrowList->begin(), arrow680);

Arrow arrow681(up);
arrow681.speed = Stress_tempo;
arrow681.pos.y = 66622.0 + Stress_offset;
arrow681.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow681);

Arrow arrow682(right);
arrow682.speed = Stress_tempo;
arrow682.pos.y = 66721.0 + Stress_offset;
arrow682.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow682);

Arrow arrow683(down);
arrow683.speed = Stress_tempo;
arrow683.pos.y = 66820.0 + Stress_offset;
arrow683.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow683);

Arrow arrow684(right);
arrow684.speed = Stress_tempo;
arrow684.pos.y = 66920.0 + Stress_offset;
arrow684.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow684);

Arrow arrow685(down);
arrow685.speed = Stress_tempo;
arrow685.pos.y = 67018.0 + Stress_offset;
arrow685.side = playerSide;
arrow685.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow685);

Arrow arrow686(left);
arrow686.speed = Stress_tempo;
arrow686.pos.y = 67018.0 + Stress_offset;
arrow686.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow686);

Arrow arrow687(down);
arrow687.speed = Stress_tempo;
arrow687.pos.y = 67118.0 + Stress_offset;
arrow687.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow687);

Arrow arrow688(left);
arrow688.speed = Stress_tempo;
arrow688.pos.y = 67217.0 + Stress_offset;
arrow688.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow688);

Arrow arrow689(right);
arrow689.speed = Stress_tempo;
arrow689.pos.y = 67266.0 + Stress_offset;
arrow689.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow689);

Arrow arrow690(down);
arrow690.speed = Stress_tempo;
arrow690.pos.y = 67316.0 + Stress_offset;
arrow690.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow690);

Arrow arrow691(left);
arrow691.speed = Stress_tempo;
arrow691.pos.y = 67365.0 + Stress_offset;
arrow691.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow691);

Arrow arrow692(left);
arrow692.speed = Stress_tempo;
arrow692.pos.y = 67415.0 + Stress_offset;
arrow692.side = playerSide;
arrow692.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow692);

Arrow arrow693(up);
arrow693.speed = Stress_tempo;
arrow693.pos.y = 67415.0 + Stress_offset;
arrow693.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow693);

Arrow arrow694(right);
arrow694.speed = Stress_tempo;
arrow694.pos.y = 67514.0 + Stress_offset;
arrow694.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow694);

Arrow arrow695(down);
arrow695.speed = Stress_tempo;
arrow695.pos.y = 67613.0 + Stress_offset;
arrow695.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow695);

Arrow arrow696(right);
arrow696.speed = Stress_tempo;
arrow696.pos.y = 67712.0 + Stress_offset;
arrow696.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow696);

Arrow arrow697(down);
arrow697.speed = Stress_tempo;
arrow697.pos.y = 67811.0 + Stress_offset;
arrow697.side = playerSide;
arrow697.trailSize = 633;
playerArrowList->insert(playerArrowList->begin(), arrow697);

Arrow arrow698(left);
arrow698.speed = Stress_tempo;
arrow698.pos.y = 67811.0 + Stress_offset;
arrow698.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow698);

Arrow arrow699(right);
arrow699.speed = Stress_tempo;
arrow699.pos.y = 67861.0 + Stress_offset;
arrow699.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow699);

Arrow arrow700(down);
arrow700.speed = Stress_tempo;
arrow700.pos.y = 67911.0 + Stress_offset;
arrow700.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow700);

Arrow arrow701(left);
arrow701.speed = Stress_tempo;
arrow701.pos.y = 67960.0 + Stress_offset;
arrow701.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow701);

Arrow arrow702(right);
arrow702.speed = Stress_tempo;
arrow702.pos.y = 68010.0 + Stress_offset;
arrow702.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow702);

Arrow arrow703(down);
arrow703.speed = Stress_tempo;
arrow703.pos.y = 68109.0 + Stress_offset;
arrow703.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow703);

Arrow arrow704(up);
arrow704.speed = Stress_tempo;
arrow704.pos.y = 68208.0 + Stress_offset;
arrow704.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow704);

Arrow arrow705(up);
arrow705.speed = Stress_tempo;
arrow705.pos.y = 68208.0 + Stress_offset;
arrow705.side = computerSide;
arrow705.trailSize = 506;
computerArrowList->insert(computerArrowList->begin(), arrow705);

Arrow arrow706(right);
arrow706.speed = Stress_tempo;
arrow706.pos.y = 68407.0 + Stress_offset;
arrow706.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow706);

Arrow arrow707(left);
arrow707.speed = Stress_tempo;
arrow707.pos.y = 68605.0 + Stress_offset;
arrow707.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow707);

Arrow arrow708(down);
arrow708.speed = Stress_tempo;
arrow708.pos.y = 68803.0 + Stress_offset;
arrow708.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow708);

Arrow arrow709(right);
arrow709.speed = Stress_tempo;
arrow709.pos.y = 68902.0 + Stress_offset;
arrow709.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow709);

Arrow arrow710(down);
arrow710.speed = Stress_tempo;
arrow710.pos.y = 69001.0 + Stress_offset;
arrow710.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow710);

Arrow arrow711(right);
arrow711.speed = Stress_tempo;
arrow711.pos.y = 69200.0 + Stress_offset;
arrow711.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow711);

Arrow arrow712(down);
arrow712.speed = Stress_tempo;
arrow712.pos.y = 69398.0 + Stress_offset;
arrow712.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow712);

Arrow arrow713(down);
arrow713.speed = Stress_tempo;
arrow713.pos.y = 69596.0 + Stress_offset;
arrow713.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow713);

Arrow arrow714(left);
arrow714.speed = Stress_tempo;
arrow714.pos.y = 69695.0 + Stress_offset;
arrow714.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow714);

}

void Stress(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList, Music* instrumental, Music* player, Rectangle* playerRec, Rectangle* enemyRec, Camera2D* camera, int difficulty){
    // you can use the start of the chart as an initialization section for all your textures etc.
    behindTrain_stress = LoadTexture("/cd/blammed/behindTrain.png");
    behindTrain_stress.width = 1108;
    behindTrain_stress.height = 428;
    city_stress = LoadTexture("/cd/blammed/city.png");
    city_stress.width = 1135;
    city_stress.height = 404;
    sky_stress = LoadTexture("/cd/blammed/sky.png");
    sky_stress.width = 864;
    sky_stress.height = 477;
    street_stress = LoadTexture("/cd/blammed/street.png");
    street_stress.width = 1108;
    street_stress.height = 428;
    train_stress = LoadTexture("/cd/blammed/train.png");
    train_stress.width = 2048;
    train_stress.height = 256;
    win_stress = LoadTexture("/cd/blammed/win.png");
    win_stress.width = 1059;
    win_stress.height = 207;
    gfSpeaker_stress = LoadTexture("/cd/shared/gfDanceTitle2.png");
    gfSpeaker_stress.width = 1816;
	gfSpeaker_stress.height = 1332;
    SetTextureFilter(gfSpeaker_stress, TEXTURE_FILTER_BILINEAR);
    pico_stress = LoadTexture("/cd/blammed/pico.png");
    pico_stress.width = 1026;
    pico_stress.height = 513;
    boyfriend_stress = LoadTexture("/cd/shared/boyfriend.png");
    boyfriend_stress.width = 900;
    boyfriend_stress.height = 675;
    currentFrame_stress = 0;
    frameCounter_stress = 0;
    *instrumental = LoadMusicStream("/cd/stress/stress.wav");
    *player = LoadMusicStream("/cd/stress/stress-player.wav");
    gfSpeakerRec_stress = { 0.0f, 0.0f, (float)gfSpeaker_stress.width/5, (float)gfSpeaker_stress.height/4 };
    *enemyRec = {0.0f, 260.0f, (float)pico_stress.width/4, (float)pico_stress.height/2};
    *playerRec = {0.0f, 225.0f, (float)boyfriend_stress.width/4, (float)boyfriend_stress.height/3};
    camera->target = {640/2,360/2};
    camera->offset = {640/2, 360/2};
    camera->rotation = 0.0f;
    camera->zoom = 1.0f;
    if(difficulty == 0){
        Stress_Easy(playerArrowList, computerArrowList);
    }
    else if(difficulty == 1){
        Stress_Normal(playerArrowList, computerArrowList);
    }else if(difficulty == 2){
        Stress_Hard(playerArrowList, computerArrowList);
    }
}
// this is for drawing the environment, you may use Camera2D* camera as an argument
// if you need camera fx
// NOTE: YOUR SONG NEEDS TO CLEAR BACKGROUND!!
void StressDraw(Rectangle* playerRec, Rectangle* enemyRec, Camera2D* camera){
    frameCounter_stress++;
    if(frameCounter_stress >= (60 / framesSpeed_stress)){
		frameCounter_stress = 0;
		currentFrame_stress++;
		if (currentFrame_stress % 5 == 0){
			gfSpeakerRec_stress.y = (float)currentFrame_stress*(float)gfSpeaker_stress.height/4;
			gfSpeakerRec_stress.x = 0;
		}
		else{ gfSpeakerRec_stress.x = (float)currentFrame_stress*(float)gfSpeaker_stress.width/5; }
		if(currentFrame_stress > 19){
			currentFrame_stress = 1;
		}
	}
    Color win_stressTint = YELLOW;
    if(trainSpeed_stress >= 2000 && trainSpeed_stress < 5000){
        win_stressTint = BLUE;
    }
    if(trainSpeed_stress >= 9999){
        trainSpeed_stress = -1280;
    }
     ClearBackground(DARKPURPLE); // dark maroon #3c0008
    DrawTextureEx(sky_stress, {-580/2, -10/2}, 0.0f, 1.4f, WHITE);
	DrawTextureEx(city_stress, {-90/2, 100/2}, 0.0f, 0.7f, WHITE);
    DrawTextureEx(win_stress, {-40/2, 190/2}, 0.0f, 0.7f, win_stressTint);
    DrawTextureEx(behindTrain_stress, {-90/2, 150/2}, 0.0f, 0.7f, WHITE);
	DrawTextureEx(train_stress, {(float)trainSpeed_stress, 270/2}, 0.0f, 0.7f, WHITE);
    DrawTextureEx(street_stress, {-90/2, 150/2}, 0.0f, 0.7f, WHITE);
    //DrawTextureEx(gfSpeaker_TestSong, {1280/2-256, 150}, 0.0f, 0.7f, WHITE);
    DrawTextureRec(gfSpeaker_stress, gfSpeakerRec_stress, {(1280/2-380)/2, 0}, WHITE);
    DrawTextureRec(pico_stress, *enemyRec, {(1280/2-700)/2, 240/2}, WHITE);
    DrawTextureRec(boyfriend_stress, *playerRec, {(1280/2+200)/2, 320/2}, WHITE);
    trainSpeed_stress += 5000 * GetFrameTime();
}
void StressCleanup(){
    UnloadTexture(behindTrain_stress);
    UnloadTexture(city_stress);
    UnloadTexture(sky_stress);
    UnloadTexture(street_stress);
    UnloadTexture(train_stress);
    UnloadTexture(win_stress);
    UnloadTexture(gfSpeaker_stress);
    UnloadTexture(pico_stress);
    UnloadTexture(boyfriend_stress);


}