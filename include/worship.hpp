#pragma once
#include "Arrow.hpp"
#include "CameraEase.hpp"
#include "raylib.h"
#include <vector>

// note: maybe move implementations into a cpp file?
Texture2D bg_worship;
Texture2D gfSpeaker_worship;
Texture2D sarvente_worship;
Texture2D boyfriend_worship;
Rectangle gfSpeakerRec_worship;

// make sure main.cpp isnt dependant on song.hpp
int frameCounter_worship = 0;
int currentFrame_worship = 0;
int currentFrame2_worship = 0;
// framerate of all animations
int framesSpeed_worship = 15;
int Worship_tempo = 1000; // pretty sure this is 1 second per 1 second of song?
// if this is release, change it to 410
int Worship_offset = 100; // offset for when the notes spawn
// NOTE: if there is no chart provided, game will immediately segfault
// NOTE: instrumental and player voices have to be EXACT same length, otherwise desync will occur
// TODO: chart editor PLEASE MAKE IT
// this is the actual chart, this is called during song selection
void worship_Hard(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList){
    // AUTO-GENERATED CHART

Arrow arrow0(up);
arrow0.speed = Worship_tempo;
arrow0.pos.y = 375 + Worship_offset;
arrow0.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow0);

Arrow arrow1(right);
arrow1.speed = Worship_tempo;
arrow1.pos.y = 500 + Worship_offset;
arrow1.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow1);

Arrow arrow2(left);
arrow2.speed = Worship_tempo;
arrow2.pos.y = 625 + Worship_offset;
arrow2.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow2);

Arrow arrow3(right);
arrow3.speed = Worship_tempo;
arrow3.pos.y = 750 + Worship_offset;
arrow3.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow3);

Arrow arrow4(down);
arrow4.speed = Worship_tempo;
arrow4.pos.y = 875 + Worship_offset;
arrow4.side = computerSide;
arrow4.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow4);

Arrow arrow5(left);
arrow5.speed = Worship_tempo;
arrow5.pos.y = 1125 + Worship_offset;
arrow5.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow5);

Arrow arrow6(right);
arrow6.speed = Worship_tempo;
arrow6.pos.y = 1250 + Worship_offset;
arrow6.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow6);

Arrow arrow7(left);
arrow7.speed = Worship_tempo;
arrow7.pos.y = 1375 + Worship_offset;
arrow7.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow7);

Arrow arrow8(right);
arrow8.speed = Worship_tempo;
arrow8.pos.y = 1500 + Worship_offset;
arrow8.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow8);

Arrow arrow9(down);
arrow9.speed = Worship_tempo;
arrow9.pos.y = 1625 + Worship_offset;
arrow9.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow9);

Arrow arrow10(up);
arrow10.speed = Worship_tempo;
arrow10.pos.y = 1750 + Worship_offset;
arrow10.side = computerSide;
arrow10.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow10);

Arrow arrow11(up);
arrow11.speed = Worship_tempo;
arrow11.pos.y = 2000 + Worship_offset;
arrow11.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow11);

Arrow arrow12(left);
arrow12.speed = Worship_tempo;
arrow12.pos.y = 2250 + Worship_offset;
arrow12.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow12);

Arrow arrow13(down);
arrow13.speed = Worship_tempo;
arrow13.pos.y = 2375 + Worship_offset;
arrow13.side = computerSide;
arrow13.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow13);

Arrow arrow14(left);
arrow14.speed = Worship_tempo;
arrow14.pos.y = 2750 + Worship_offset;
arrow14.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow14);

Arrow arrow15(right);
arrow15.speed = Worship_tempo;
arrow15.pos.y = 3000 + Worship_offset;
arrow15.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow15);

Arrow arrow16(left);
arrow16.speed = Worship_tempo;
arrow16.pos.y = 3250 + Worship_offset;
arrow16.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow16);

Arrow arrow17(up);
arrow17.speed = Worship_tempo;
arrow17.pos.y = 3500 + Worship_offset;
arrow17.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow17);

Arrow arrow18(down);
arrow18.speed = Worship_tempo;
arrow18.pos.y = 3750 + Worship_offset;
arrow18.side = computerSide;
arrow18.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow18);

Arrow arrow19(up);
arrow19.speed = Worship_tempo;
arrow19.pos.y = 4375 + Worship_offset;
arrow19.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow19);

Arrow arrow20(right);
arrow20.speed = Worship_tempo;
arrow20.pos.y = 4500 + Worship_offset;
arrow20.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow20);

Arrow arrow21(left);
arrow21.speed = Worship_tempo;
arrow21.pos.y = 4625 + Worship_offset;
arrow21.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow21);

Arrow arrow22(right);
arrow22.speed = Worship_tempo;
arrow22.pos.y = 4750 + Worship_offset;
arrow22.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow22);

Arrow arrow23(down);
arrow23.speed = Worship_tempo;
arrow23.pos.y = 4875 + Worship_offset;
arrow23.side = playerSide;
arrow23.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow23);

Arrow arrow24(left);
arrow24.speed = Worship_tempo;
arrow24.pos.y = 5125 + Worship_offset;
arrow24.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow24);

Arrow arrow25(right);
arrow25.speed = Worship_tempo;
arrow25.pos.y = 5250 + Worship_offset;
arrow25.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow25);

Arrow arrow26(left);
arrow26.speed = Worship_tempo;
arrow26.pos.y = 5375 + Worship_offset;
arrow26.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow26);

Arrow arrow27(right);
arrow27.speed = Worship_tempo;
arrow27.pos.y = 5500 + Worship_offset;
arrow27.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow27);

Arrow arrow28(down);
arrow28.speed = Worship_tempo;
arrow28.pos.y = 5625 + Worship_offset;
arrow28.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow28);

Arrow arrow29(up);
arrow29.speed = Worship_tempo;
arrow29.pos.y = 5750 + Worship_offset;
arrow29.side = playerSide;
arrow29.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow29);

Arrow arrow30(up);
arrow30.speed = Worship_tempo;
arrow30.pos.y = 6000 + Worship_offset;
arrow30.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow30);

Arrow arrow31(down);
arrow31.speed = Worship_tempo;
arrow31.pos.y = 6375 + Worship_offset;
arrow31.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow31);

Arrow arrow32(left);
arrow32.speed = Worship_tempo;
arrow32.pos.y = 6875 + Worship_offset;
arrow32.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow32);

Arrow arrow33(right);
arrow33.speed = Worship_tempo;
arrow33.pos.y = 6875 + Worship_offset;
arrow33.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow33);

Arrow arrow34(left);
arrow34.speed = Worship_tempo;
arrow34.pos.y = 7250 + Worship_offset;
arrow34.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow34);

Arrow arrow35(down);
arrow35.speed = Worship_tempo;
arrow35.pos.y = 7500 + Worship_offset;
arrow35.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow35);

Arrow arrow36(right);
arrow36.speed = Worship_tempo;
arrow36.pos.y = 7750 + Worship_offset;
arrow36.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow36);

Arrow arrow37(down);
arrow37.speed = Worship_tempo;
arrow37.pos.y = 8375 + Worship_offset;
arrow37.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow37);

Arrow arrow38(left);
arrow38.speed = Worship_tempo;
arrow38.pos.y = 8500 + Worship_offset;
arrow38.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow38);

Arrow arrow39(right);
arrow39.speed = Worship_tempo;
arrow39.pos.y = 8625 + Worship_offset;
arrow39.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow39);

Arrow arrow40(left);
arrow40.speed = Worship_tempo;
arrow40.pos.y = 8750 + Worship_offset;
arrow40.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow40);

Arrow arrow41(up);
arrow41.speed = Worship_tempo;
arrow41.pos.y = 8875 + Worship_offset;
arrow41.side = computerSide;
arrow41.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow41);

Arrow arrow42(right);
arrow42.speed = Worship_tempo;
arrow42.pos.y = 9125 + Worship_offset;
arrow42.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow42);

Arrow arrow43(left);
arrow43.speed = Worship_tempo;
arrow43.pos.y = 9250 + Worship_offset;
arrow43.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow43);

Arrow arrow44(right);
arrow44.speed = Worship_tempo;
arrow44.pos.y = 9375 + Worship_offset;
arrow44.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow44);

Arrow arrow45(left);
arrow45.speed = Worship_tempo;
arrow45.pos.y = 9500 + Worship_offset;
arrow45.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow45);

Arrow arrow46(down);
arrow46.speed = Worship_tempo;
arrow46.pos.y = 9625 + Worship_offset;
arrow46.side = computerSide;
arrow46.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow46);

Arrow arrow47(up);
arrow47.speed = Worship_tempo;
arrow47.pos.y = 9875 + Worship_offset;
arrow47.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow47);

Arrow arrow48(up);
arrow48.speed = Worship_tempo;
arrow48.pos.y = 10000 + Worship_offset;
arrow48.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow48);

Arrow arrow49(left);
arrow49.speed = Worship_tempo;
arrow49.pos.y = 10250 + Worship_offset;
arrow49.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow49);

Arrow arrow50(down);
arrow50.speed = Worship_tempo;
arrow50.pos.y = 10500 + Worship_offset;
arrow50.side = computerSide;
arrow50.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow50);

Arrow arrow51(right);
arrow51.speed = Worship_tempo;
arrow51.pos.y = 10875 + Worship_offset;
arrow51.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow51);

Arrow arrow52(left);
arrow52.speed = Worship_tempo;
arrow52.pos.y = 11125 + Worship_offset;
arrow52.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow52);

Arrow arrow53(down);
arrow53.speed = Worship_tempo;
arrow53.pos.y = 11125 + Worship_offset;
arrow53.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow53);

Arrow arrow54(left);
arrow54.speed = Worship_tempo;
arrow54.pos.y = 11375 + Worship_offset;
arrow54.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow54);

Arrow arrow55(up);
arrow55.speed = Worship_tempo;
arrow55.pos.y = 11375 + Worship_offset;
arrow55.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow55);

Arrow arrow56(up);
arrow56.speed = Worship_tempo;
arrow56.pos.y = 11625 + Worship_offset;
arrow56.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow56);

Arrow arrow57(down);
arrow57.speed = Worship_tempo;
arrow57.pos.y = 11875 + Worship_offset;
arrow57.side = computerSide;
arrow57.trailSize = 188;
computerArrowList->insert(computerArrowList->begin(), arrow57);

Arrow arrow58(down);
arrow58.speed = Worship_tempo;
arrow58.pos.y = 12375 + Worship_offset;
arrow58.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow58);

Arrow arrow59(left);
arrow59.speed = Worship_tempo;
arrow59.pos.y = 12500 + Worship_offset;
arrow59.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow59);

Arrow arrow60(right);
arrow60.speed = Worship_tempo;
arrow60.pos.y = 12625 + Worship_offset;
arrow60.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow60);

Arrow arrow61(left);
arrow61.speed = Worship_tempo;
arrow61.pos.y = 12750 + Worship_offset;
arrow61.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow61);

Arrow arrow62(up);
arrow62.speed = Worship_tempo;
arrow62.pos.y = 12875 + Worship_offset;
arrow62.side = playerSide;
arrow62.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow62);

Arrow arrow63(right);
arrow63.speed = Worship_tempo;
arrow63.pos.y = 13125 + Worship_offset;
arrow63.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow63);

Arrow arrow64(left);
arrow64.speed = Worship_tempo;
arrow64.pos.y = 13250 + Worship_offset;
arrow64.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow64);

Arrow arrow65(right);
arrow65.speed = Worship_tempo;
arrow65.pos.y = 13375 + Worship_offset;
arrow65.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow65);

Arrow arrow66(left);
arrow66.speed = Worship_tempo;
arrow66.pos.y = 13500 + Worship_offset;
arrow66.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow66);

Arrow arrow67(down);
arrow67.speed = Worship_tempo;
arrow67.pos.y = 13625 + Worship_offset;
arrow67.side = playerSide;
arrow67.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow67);

Arrow arrow68(up);
arrow68.speed = Worship_tempo;
arrow68.pos.y = 13875 + Worship_offset;
arrow68.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow68);

Arrow arrow69(up);
arrow69.speed = Worship_tempo;
arrow69.pos.y = 14000 + Worship_offset;
arrow69.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow69);

Arrow arrow70(down);
arrow70.speed = Worship_tempo;
arrow70.pos.y = 14250 + Worship_offset;
arrow70.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow70);

Arrow arrow71(left);
arrow71.speed = Worship_tempo;
arrow71.pos.y = 14375 + Worship_offset;
arrow71.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow71);

Arrow arrow72(up);
arrow72.speed = Worship_tempo;
arrow72.pos.y = 14500 + Worship_offset;
arrow72.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow72);

Arrow arrow73(left);
arrow73.speed = Worship_tempo;
arrow73.pos.y = 14750 + Worship_offset;
arrow73.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow73);

Arrow arrow74(left);
arrow74.speed = Worship_tempo;
arrow74.pos.y = 15000 + Worship_offset;
arrow74.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow74);

Arrow arrow75(up);
arrow75.speed = Worship_tempo;
arrow75.pos.y = 15000 + Worship_offset;
arrow75.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow75);

Arrow arrow76(right);
arrow76.speed = Worship_tempo;
arrow76.pos.y = 15250 + Worship_offset;
arrow76.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow76);

Arrow arrow77(down);
arrow77.speed = Worship_tempo;
arrow77.pos.y = 15250 + Worship_offset;
arrow77.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow77);

Arrow arrow78(up);
arrow78.speed = Worship_tempo;
arrow78.pos.y = 15500 + Worship_offset;
arrow78.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow78);

Arrow arrow79(right);
arrow79.speed = Worship_tempo;
arrow79.pos.y = 15500 + Worship_offset;
arrow79.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow79);

Arrow arrow80(down);
arrow80.speed = Worship_tempo;
arrow80.pos.y = 15750 + Worship_offset;
arrow80.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow80);

Arrow arrow81(up);
arrow81.speed = Worship_tempo;
arrow81.pos.y = 15750 + Worship_offset;
arrow81.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow81);

Arrow arrow82(left);
arrow82.speed = Worship_tempo;
arrow82.pos.y = 16125 + Worship_offset;
arrow82.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow82);

Arrow arrow83(right);
arrow83.speed = Worship_tempo;
arrow83.pos.y = 16125 + Worship_offset;
arrow83.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow83);

Arrow arrow84(right);
arrow84.speed = Worship_tempo;
arrow84.pos.y = 16375 + Worship_offset;
arrow84.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow84);

Arrow arrow85(down);
arrow85.speed = Worship_tempo;
arrow85.pos.y = 16750 + Worship_offset;
arrow85.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow85);

Arrow arrow86(right);
arrow86.speed = Worship_tempo;
arrow86.pos.y = 17000 + Worship_offset;
arrow86.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow86);

Arrow arrow87(up);
arrow87.speed = Worship_tempo;
arrow87.pos.y = 17125 + Worship_offset;
arrow87.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow87);

Arrow arrow88(right);
arrow88.speed = Worship_tempo;
arrow88.pos.y = 17250 + Worship_offset;
arrow88.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow88);

Arrow arrow89(up);
arrow89.speed = Worship_tempo;
arrow89.pos.y = 17375 + Worship_offset;
arrow89.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow89);

Arrow arrow90(right);
arrow90.speed = Worship_tempo;
arrow90.pos.y = 17625 + Worship_offset;
arrow90.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow90);

Arrow arrow91(down);
arrow91.speed = Worship_tempo;
arrow91.pos.y = 17678 + Worship_offset;
arrow91.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow91);

Arrow arrow92(left);
arrow92.speed = Worship_tempo;
arrow92.pos.y = 17875 + Worship_offset;
arrow92.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow92);

Arrow arrow93(left);
arrow93.speed = Worship_tempo;
arrow93.pos.y = 18125 + Worship_offset;
arrow93.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow93);

Arrow arrow94(up);
arrow94.speed = Worship_tempo;
arrow94.pos.y = 18250 + Worship_offset;
arrow94.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow94);

Arrow arrow95(right);
arrow95.speed = Worship_tempo;
arrow95.pos.y = 18375 + Worship_offset;
arrow95.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow95);

Arrow arrow96(down);
arrow96.speed = Worship_tempo;
arrow96.pos.y = 18500 + Worship_offset;
arrow96.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow96);

Arrow arrow97(left);
arrow97.speed = Worship_tempo;
arrow97.pos.y = 18625 + Worship_offset;
arrow97.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow97);

Arrow arrow98(up);
arrow98.speed = Worship_tempo;
arrow98.pos.y = 18750 + Worship_offset;
arrow98.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow98);

Arrow arrow99(right);
arrow99.speed = Worship_tempo;
arrow99.pos.y = 18875 + Worship_offset;
arrow99.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow99);

Arrow arrow100(down);
arrow100.speed = Worship_tempo;
arrow100.pos.y = 19000 + Worship_offset;
arrow100.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow100);

Arrow arrow101(down);
arrow101.speed = Worship_tempo;
arrow101.pos.y = 19125 + Worship_offset;
arrow101.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow101);

Arrow arrow102(up);
arrow102.speed = Worship_tempo;
arrow102.pos.y = 19250 + Worship_offset;
arrow102.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow102);

Arrow arrow103(right);
arrow103.speed = Worship_tempo;
arrow103.pos.y = 19375 + Worship_offset;
arrow103.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow103);

Arrow arrow104(left);
arrow104.speed = Worship_tempo;
arrow104.pos.y = 19500 + Worship_offset;
arrow104.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow104);

Arrow arrow105(left);
arrow105.speed = Worship_tempo;
arrow105.pos.y = 19625 + Worship_offset;
arrow105.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow105);

Arrow arrow106(up);
arrow106.speed = Worship_tempo;
arrow106.pos.y = 19750 + Worship_offset;
arrow106.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow106);

Arrow arrow107(right);
arrow107.speed = Worship_tempo;
arrow107.pos.y = 19875 + Worship_offset;
arrow107.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow107);

Arrow arrow108(down);
arrow108.speed = Worship_tempo;
arrow108.pos.y = 20000 + Worship_offset;
arrow108.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow108);

Arrow arrow109(right);
arrow109.speed = Worship_tempo;
arrow109.pos.y = 20375 + Worship_offset;
arrow109.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow109);

Arrow arrow110(down);
arrow110.speed = Worship_tempo;
arrow110.pos.y = 20750 + Worship_offset;
arrow110.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow110);

Arrow arrow111(right);
arrow111.speed = Worship_tempo;
arrow111.pos.y = 21000 + Worship_offset;
arrow111.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow111);

Arrow arrow112(up);
arrow112.speed = Worship_tempo;
arrow112.pos.y = 21125 + Worship_offset;
arrow112.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow112);

Arrow arrow113(right);
arrow113.speed = Worship_tempo;
arrow113.pos.y = 21250 + Worship_offset;
arrow113.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow113);

Arrow arrow114(up);
arrow114.speed = Worship_tempo;
arrow114.pos.y = 21375 + Worship_offset;
arrow114.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow114);

Arrow arrow115(right);
arrow115.speed = Worship_tempo;
arrow115.pos.y = 21625 + Worship_offset;
arrow115.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow115);

Arrow arrow116(down);
arrow116.speed = Worship_tempo;
arrow116.pos.y = 21694 + Worship_offset;
arrow116.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow116);

Arrow arrow117(left);
arrow117.speed = Worship_tempo;
arrow117.pos.y = 21875 + Worship_offset;
arrow117.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow117);

Arrow arrow118(left);
arrow118.speed = Worship_tempo;
arrow118.pos.y = 22125 + Worship_offset;
arrow118.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow118);

Arrow arrow119(up);
arrow119.speed = Worship_tempo;
arrow119.pos.y = 22250 + Worship_offset;
arrow119.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow119);

Arrow arrow120(right);
arrow120.speed = Worship_tempo;
arrow120.pos.y = 22375 + Worship_offset;
arrow120.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow120);

Arrow arrow121(down);
arrow121.speed = Worship_tempo;
arrow121.pos.y = 22500 + Worship_offset;
arrow121.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow121);

Arrow arrow122(left);
arrow122.speed = Worship_tempo;
arrow122.pos.y = 22625 + Worship_offset;
arrow122.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow122);

Arrow arrow123(up);
arrow123.speed = Worship_tempo;
arrow123.pos.y = 22750 + Worship_offset;
arrow123.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow123);

Arrow arrow124(right);
arrow124.speed = Worship_tempo;
arrow124.pos.y = 22875 + Worship_offset;
arrow124.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow124);

Arrow arrow125(down);
arrow125.speed = Worship_tempo;
arrow125.pos.y = 23000 + Worship_offset;
arrow125.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow125);

Arrow arrow126(down);
arrow126.speed = Worship_tempo;
arrow126.pos.y = 23125 + Worship_offset;
arrow126.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow126);

Arrow arrow127(up);
arrow127.speed = Worship_tempo;
arrow127.pos.y = 23250 + Worship_offset;
arrow127.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow127);

Arrow arrow128(right);
arrow128.speed = Worship_tempo;
arrow128.pos.y = 23375 + Worship_offset;
arrow128.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow128);

Arrow arrow129(left);
arrow129.speed = Worship_tempo;
arrow129.pos.y = 23500 + Worship_offset;
arrow129.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow129);

Arrow arrow130(left);
arrow130.speed = Worship_tempo;
arrow130.pos.y = 23625 + Worship_offset;
arrow130.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow130);

Arrow arrow131(up);
arrow131.speed = Worship_tempo;
arrow131.pos.y = 23750 + Worship_offset;
arrow131.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow131);

Arrow arrow132(right);
arrow132.speed = Worship_tempo;
arrow132.pos.y = 23875 + Worship_offset;
arrow132.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow132);

Arrow arrow133(down);
arrow133.speed = Worship_tempo;
arrow133.pos.y = 24000 + Worship_offset;
arrow133.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow133);

Arrow arrow134(right);
arrow134.speed = Worship_tempo;
arrow134.pos.y = 24375 + Worship_offset;
arrow134.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow134);

Arrow arrow135(down);
arrow135.speed = Worship_tempo;
arrow135.pos.y = 24750 + Worship_offset;
arrow135.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow135);

Arrow arrow136(right);
arrow136.speed = Worship_tempo;
arrow136.pos.y = 25000 + Worship_offset;
arrow136.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow136);

Arrow arrow137(up);
arrow137.speed = Worship_tempo;
arrow137.pos.y = 25125 + Worship_offset;
arrow137.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow137);

Arrow arrow138(down);
arrow138.speed = Worship_tempo;
arrow138.pos.y = 25250 + Worship_offset;
arrow138.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow138);

Arrow arrow139(up);
arrow139.speed = Worship_tempo;
arrow139.pos.y = 25375 + Worship_offset;
arrow139.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow139);

Arrow arrow140(right);
arrow140.speed = Worship_tempo;
arrow140.pos.y = 25625 + Worship_offset;
arrow140.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow140);

Arrow arrow141(down);
arrow141.speed = Worship_tempo;
arrow141.pos.y = 25681 + Worship_offset;
arrow141.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow141);

Arrow arrow142(left);
arrow142.speed = Worship_tempo;
arrow142.pos.y = 25875 + Worship_offset;
arrow142.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow142);

Arrow arrow143(left);
arrow143.speed = Worship_tempo;
arrow143.pos.y = 26125 + Worship_offset;
arrow143.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow143);

Arrow arrow144(up);
arrow144.speed = Worship_tempo;
arrow144.pos.y = 26250 + Worship_offset;
arrow144.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow144);

Arrow arrow145(right);
arrow145.speed = Worship_tempo;
arrow145.pos.y = 26375 + Worship_offset;
arrow145.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow145);

Arrow arrow146(right);
arrow146.speed = Worship_tempo;
arrow146.pos.y = 26500 + Worship_offset;
arrow146.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow146);

Arrow arrow147(left);
arrow147.speed = Worship_tempo;
arrow147.pos.y = 26625 + Worship_offset;
arrow147.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow147);

Arrow arrow148(up);
arrow148.speed = Worship_tempo;
arrow148.pos.y = 26750 + Worship_offset;
arrow148.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow148);

Arrow arrow149(right);
arrow149.speed = Worship_tempo;
arrow149.pos.y = 26875 + Worship_offset;
arrow149.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow149);

Arrow arrow150(left);
arrow150.speed = Worship_tempo;
arrow150.pos.y = 27000 + Worship_offset;
arrow150.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow150);

Arrow arrow151(down);
arrow151.speed = Worship_tempo;
arrow151.pos.y = 27125 + Worship_offset;
arrow151.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow151);

Arrow arrow152(up);
arrow152.speed = Worship_tempo;
arrow152.pos.y = 27250 + Worship_offset;
arrow152.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow152);

Arrow arrow153(right);
arrow153.speed = Worship_tempo;
arrow153.pos.y = 27375 + Worship_offset;
arrow153.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow153);

Arrow arrow154(right);
arrow154.speed = Worship_tempo;
arrow154.pos.y = 27500 + Worship_offset;
arrow154.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow154);

Arrow arrow155(down);
arrow155.speed = Worship_tempo;
arrow155.pos.y = 27625 + Worship_offset;
arrow155.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow155);

Arrow arrow156(up);
arrow156.speed = Worship_tempo;
arrow156.pos.y = 27750 + Worship_offset;
arrow156.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow156);

Arrow arrow157(right);
arrow157.speed = Worship_tempo;
arrow157.pos.y = 27875 + Worship_offset;
arrow157.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow157);

Arrow arrow158(left);
arrow158.speed = Worship_tempo;
arrow158.pos.y = 28000 + Worship_offset;
arrow158.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow158);

Arrow arrow159(left);
arrow159.speed = Worship_tempo;
arrow159.pos.y = 28375 + Worship_offset;
arrow159.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow159);

Arrow arrow160(down);
arrow160.speed = Worship_tempo;
arrow160.pos.y = 28750 + Worship_offset;
arrow160.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow160);

Arrow arrow161(left);
arrow161.speed = Worship_tempo;
arrow161.pos.y = 29000 + Worship_offset;
arrow161.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow161);

Arrow arrow162(up);
arrow162.speed = Worship_tempo;
arrow162.pos.y = 29125 + Worship_offset;
arrow162.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow162);

Arrow arrow163(down);
arrow163.speed = Worship_tempo;
arrow163.pos.y = 29250 + Worship_offset;
arrow163.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow163);

Arrow arrow164(up);
arrow164.speed = Worship_tempo;
arrow164.pos.y = 29375 + Worship_offset;
arrow164.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow164);

Arrow arrow165(left);
arrow165.speed = Worship_tempo;
arrow165.pos.y = 29625 + Worship_offset;
arrow165.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow165);

Arrow arrow166(up);
arrow166.speed = Worship_tempo;
arrow166.pos.y = 29672 + Worship_offset;
arrow166.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow166);

Arrow arrow167(left);
arrow167.speed = Worship_tempo;
arrow167.pos.y = 29875 + Worship_offset;
arrow167.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow167);

Arrow arrow168(left);
arrow168.speed = Worship_tempo;
arrow168.pos.y = 30125 + Worship_offset;
arrow168.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow168);

Arrow arrow169(up);
arrow169.speed = Worship_tempo;
arrow169.pos.y = 30250 + Worship_offset;
arrow169.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow169);

Arrow arrow170(right);
arrow170.speed = Worship_tempo;
arrow170.pos.y = 30375 + Worship_offset;
arrow170.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow170);

Arrow arrow171(right);
arrow171.speed = Worship_tempo;
arrow171.pos.y = 30500 + Worship_offset;
arrow171.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow171);

Arrow arrow172(left);
arrow172.speed = Worship_tempo;
arrow172.pos.y = 30625 + Worship_offset;
arrow172.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow172);

Arrow arrow173(up);
arrow173.speed = Worship_tempo;
arrow173.pos.y = 30750 + Worship_offset;
arrow173.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow173);

Arrow arrow174(right);
arrow174.speed = Worship_tempo;
arrow174.pos.y = 30875 + Worship_offset;
arrow174.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow174);

Arrow arrow175(left);
arrow175.speed = Worship_tempo;
arrow175.pos.y = 31000 + Worship_offset;
arrow175.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow175);

Arrow arrow176(down);
arrow176.speed = Worship_tempo;
arrow176.pos.y = 31125 + Worship_offset;
arrow176.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow176);

Arrow arrow177(up);
arrow177.speed = Worship_tempo;
arrow177.pos.y = 31250 + Worship_offset;
arrow177.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow177);

Arrow arrow178(right);
arrow178.speed = Worship_tempo;
arrow178.pos.y = 31375 + Worship_offset;
arrow178.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow178);

Arrow arrow179(left);
arrow179.speed = Worship_tempo;
arrow179.pos.y = 31500 + Worship_offset;
arrow179.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow179);

Arrow arrow180(down);
arrow180.speed = Worship_tempo;
arrow180.pos.y = 31625 + Worship_offset;
arrow180.side = playerSide;
arrow180.trailSize = 250;
playerArrowList->insert(playerArrowList->begin(), arrow180);

Arrow arrow181(up);
arrow181.speed = Worship_tempo;
arrow181.pos.y = 32250 + Worship_offset;
arrow181.side = computerSide;
arrow181.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow181);

Arrow arrow182(down);
arrow182.speed = Worship_tempo;
arrow182.pos.y = 32500 + Worship_offset;
arrow182.side = computerSide;
arrow182.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow182);

Arrow arrow183(up);
arrow183.speed = Worship_tempo;
arrow183.pos.y = 32750 + Worship_offset;
arrow183.side = computerSide;
arrow183.trailSize = 375;
computerArrowList->insert(computerArrowList->begin(), arrow183);

Arrow arrow184(left);
arrow184.speed = Worship_tempo;
arrow184.pos.y = 33625 + Worship_offset;
arrow184.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow184);

Arrow arrow185(left);
arrow185.speed = Worship_tempo;
arrow185.pos.y = 33875 + Worship_offset;
arrow185.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow185);

Arrow arrow186(right);
arrow186.speed = Worship_tempo;
arrow186.pos.y = 34250 + Worship_offset;
arrow186.side = computerSide;
arrow186.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow186);

Arrow arrow187(right);
arrow187.speed = Worship_tempo;
arrow187.pos.y = 34500 + Worship_offset;
arrow187.side = computerSide;
arrow187.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow187);

Arrow arrow188(left);
arrow188.speed = Worship_tempo;
arrow188.pos.y = 34750 + Worship_offset;
arrow188.side = computerSide;
arrow188.trailSize = 188;
computerArrowList->insert(computerArrowList->begin(), arrow188);

Arrow arrow189(right);
arrow189.speed = Worship_tempo;
arrow189.pos.y = 35375 + Worship_offset;
arrow189.side = computerSide;
arrow189.trailSize = 375;
computerArrowList->insert(computerArrowList->begin(), arrow189);

Arrow arrow190(up);
arrow190.speed = Worship_tempo;
arrow190.pos.y = 36250 + Worship_offset;
arrow190.side = playerSide;
arrow190.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow190);

Arrow arrow191(down);
arrow191.speed = Worship_tempo;
arrow191.pos.y = 36500 + Worship_offset;
arrow191.side = playerSide;
arrow191.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow191);

Arrow arrow192(up);
arrow192.speed = Worship_tempo;
arrow192.pos.y = 36750 + Worship_offset;
arrow192.side = playerSide;
arrow192.trailSize = 375;
playerArrowList->insert(playerArrowList->begin(), arrow192);

Arrow arrow193(up);
arrow193.speed = Worship_tempo;
arrow193.pos.y = 37625 + Worship_offset;
arrow193.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow193);

Arrow arrow194(left);
arrow194.speed = Worship_tempo;
arrow194.pos.y = 37875 + Worship_offset;
arrow194.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow194);

Arrow arrow195(up);
arrow195.speed = Worship_tempo;
arrow195.pos.y = 38203 + Worship_offset;
arrow195.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow195);

Arrow arrow196(right);
arrow196.speed = Worship_tempo;
arrow196.pos.y = 38250 + Worship_offset;
arrow196.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow196);

Arrow arrow197(up);
arrow197.speed = Worship_tempo;
arrow197.pos.y = 38447 + Worship_offset;
arrow197.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow197);

Arrow arrow198(right);
arrow198.speed = Worship_tempo;
arrow198.pos.y = 38500 + Worship_offset;
arrow198.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow198);

Arrow arrow199(left);
arrow199.speed = Worship_tempo;
arrow199.pos.y = 38750 + Worship_offset;
arrow199.side = playerSide;
arrow199.trailSize = 188;
playerArrowList->insert(playerArrowList->begin(), arrow199);

Arrow arrow200(down);
arrow200.speed = Worship_tempo;
arrow200.pos.y = 39375 + Worship_offset;
arrow200.side = playerSide;
arrow200.trailSize = 375;
playerArrowList->insert(playerArrowList->begin(), arrow200);

Arrow arrow201(up);
arrow201.speed = Worship_tempo;
arrow201.pos.y = 40250 + Worship_offset;
arrow201.side = computerSide;
arrow201.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow201);

Arrow arrow202(down);
arrow202.speed = Worship_tempo;
arrow202.pos.y = 40500 + Worship_offset;
arrow202.side = computerSide;
arrow202.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow202);

Arrow arrow203(up);
arrow203.speed = Worship_tempo;
arrow203.pos.y = 40750 + Worship_offset;
arrow203.side = computerSide;
arrow203.trailSize = 375;
computerArrowList->insert(computerArrowList->begin(), arrow203);

Arrow arrow204(right);
arrow204.speed = Worship_tempo;
arrow204.pos.y = 41625 + Worship_offset;
arrow204.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow204);

Arrow arrow205(left);
arrow205.speed = Worship_tempo;
arrow205.pos.y = 41875 + Worship_offset;
arrow205.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow205);

Arrow arrow206(right);
arrow206.speed = Worship_tempo;
arrow206.pos.y = 42250 + Worship_offset;
arrow206.side = computerSide;
arrow206.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow206);

Arrow arrow207(right);
arrow207.speed = Worship_tempo;
arrow207.pos.y = 42500 + Worship_offset;
arrow207.side = computerSide;
arrow207.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow207);

Arrow arrow208(left);
arrow208.speed = Worship_tempo;
arrow208.pos.y = 42750 + Worship_offset;
arrow208.side = computerSide;
arrow208.trailSize = 188;
computerArrowList->insert(computerArrowList->begin(), arrow208);

Arrow arrow209(right);
arrow209.speed = Worship_tempo;
arrow209.pos.y = 43375 + Worship_offset;
arrow209.side = computerSide;
arrow209.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow209);

Arrow arrow210(down);
arrow210.speed = Worship_tempo;
arrow210.pos.y = 43625 + Worship_offset;
arrow210.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow210);

Arrow arrow211(up);
arrow211.speed = Worship_tempo;
arrow211.pos.y = 43875 + Worship_offset;
arrow211.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow211);

Arrow arrow212(left);
arrow212.speed = Worship_tempo;
arrow212.pos.y = 44125 + Worship_offset;
arrow212.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow212);

Arrow arrow213(right);
arrow213.speed = Worship_tempo;
arrow213.pos.y = 44375 + Worship_offset;
arrow213.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow213);

Arrow arrow214(right);
arrow214.speed = Worship_tempo;
arrow214.pos.y = 44625 + Worship_offset;
arrow214.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow214);

Arrow arrow215(left);
arrow215.speed = Worship_tempo;
arrow215.pos.y = 44875 + Worship_offset;
arrow215.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow215);

Arrow arrow216(left);
arrow216.speed = Worship_tempo;
arrow216.pos.y = 45125 + Worship_offset;
arrow216.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow216);

Arrow arrow217(up);
arrow217.speed = Worship_tempo;
arrow217.pos.y = 45125 + Worship_offset;
arrow217.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow217);

Arrow arrow218(right);
arrow218.speed = Worship_tempo;
arrow218.pos.y = 45250 + Worship_offset;
arrow218.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow218);

Arrow arrow219(down);
arrow219.speed = Worship_tempo;
arrow219.pos.y = 45250 + Worship_offset;
arrow219.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow219);

Arrow arrow220(right);
arrow220.speed = Worship_tempo;
arrow220.pos.y = 45625 + Worship_offset;
arrow220.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow220);

Arrow arrow221(down);
arrow221.speed = Worship_tempo;
arrow221.pos.y = 45625 + Worship_offset;
arrow221.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow221);

Arrow arrow222(left);
arrow222.speed = Worship_tempo;
arrow222.pos.y = 45750 + Worship_offset;
arrow222.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow222);

Arrow arrow223(up);
arrow223.speed = Worship_tempo;
arrow223.pos.y = 45750 + Worship_offset;
arrow223.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow223);

Arrow arrow224(left);
arrow224.speed = Worship_tempo;
arrow224.pos.y = 46125 + Worship_offset;
arrow224.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow224);

Arrow arrow225(up);
arrow225.speed = Worship_tempo;
arrow225.pos.y = 46375 + Worship_offset;
arrow225.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow225);

Arrow arrow226(right);
arrow226.speed = Worship_tempo;
arrow226.pos.y = 46625 + Worship_offset;
arrow226.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow226);

Arrow arrow227(left);
arrow227.speed = Worship_tempo;
arrow227.pos.y = 46875 + Worship_offset;
arrow227.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow227);

Arrow arrow228(up);
arrow228.speed = Worship_tempo;
arrow228.pos.y = 47000 + Worship_offset;
arrow228.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow228);

Arrow arrow229(up);
arrow229.speed = Worship_tempo;
arrow229.pos.y = 47000 + Worship_offset;
arrow229.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow229);

Arrow arrow230(up);
arrow230.speed = Worship_tempo;
arrow230.pos.y = 47250 + Worship_offset;
arrow230.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow230);

Arrow arrow231(up);
arrow231.speed = Worship_tempo;
arrow231.pos.y = 47250 + Worship_offset;
arrow231.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow231);

Arrow arrow232(left);
arrow232.speed = Worship_tempo;
arrow232.pos.y = 47500 + Worship_offset;
arrow232.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow232);

Arrow arrow233(left);
arrow233.speed = Worship_tempo;
arrow233.pos.y = 47500 + Worship_offset;
arrow233.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow233);

Arrow arrow234(right);
arrow234.speed = Worship_tempo;
arrow234.pos.y = 47750 + Worship_offset;
arrow234.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow234);

Arrow arrow235(right);
arrow235.speed = Worship_tempo;
arrow235.pos.y = 47750 + Worship_offset;
arrow235.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow235);

Arrow arrow236(down);
arrow236.speed = Worship_tempo;
arrow236.pos.y = 48125 + Worship_offset;
arrow236.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow236);

Arrow arrow237(down);
arrow237.speed = Worship_tempo;
arrow237.pos.y = 48125 + Worship_offset;
arrow237.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow237);

Arrow arrow238(up);
arrow238.speed = Worship_tempo;
arrow238.pos.y = 48250 + Worship_offset;
arrow238.side = playerSide;
arrow238.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow238);

Arrow arrow239(down);
arrow239.speed = Worship_tempo;
arrow239.pos.y = 48500 + Worship_offset;
arrow239.side = playerSide;
arrow239.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow239);

Arrow arrow240(up);
arrow240.speed = Worship_tempo;
arrow240.pos.y = 48750 + Worship_offset;
arrow240.side = playerSide;
arrow240.trailSize = 375;
playerArrowList->insert(playerArrowList->begin(), arrow240);

Arrow arrow241(left);
arrow241.speed = Worship_tempo;
arrow241.pos.y = 49625 + Worship_offset;
arrow241.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow241);

Arrow arrow242(right);
arrow242.speed = Worship_tempo;
arrow242.pos.y = 49875 + Worship_offset;
arrow242.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow242);

Arrow arrow243(up);
arrow243.speed = Worship_tempo;
arrow243.pos.y = 50184 + Worship_offset;
arrow243.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow243);

Arrow arrow244(right);
arrow244.speed = Worship_tempo;
arrow244.pos.y = 50250 + Worship_offset;
arrow244.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow244);

Arrow arrow245(up);
arrow245.speed = Worship_tempo;
arrow245.pos.y = 50438 + Worship_offset;
arrow245.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow245);

Arrow arrow246(right);
arrow246.speed = Worship_tempo;
arrow246.pos.y = 50500 + Worship_offset;
arrow246.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow246);

Arrow arrow247(left);
arrow247.speed = Worship_tempo;
arrow247.pos.y = 50875 + Worship_offset;
arrow247.side = playerSide;
arrow247.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow247);

Arrow arrow248(right);
arrow248.speed = Worship_tempo;
arrow248.pos.y = 51375 + Worship_offset;
arrow248.side = playerSide;
arrow248.trailSize = 375;
playerArrowList->insert(playerArrowList->begin(), arrow248);

Arrow arrow249(up);
arrow249.speed = Worship_tempo;
arrow249.pos.y = 52250 + Worship_offset;
arrow249.side = computerSide;
arrow249.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow249);

Arrow arrow250(down);
arrow250.speed = Worship_tempo;
arrow250.pos.y = 52500 + Worship_offset;
arrow250.side = computerSide;
arrow250.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow250);

Arrow arrow251(up);
arrow251.speed = Worship_tempo;
arrow251.pos.y = 52750 + Worship_offset;
arrow251.side = computerSide;
arrow251.trailSize = 375;
computerArrowList->insert(computerArrowList->begin(), arrow251);

Arrow arrow252(up);
arrow252.speed = Worship_tempo;
arrow252.pos.y = 53625 + Worship_offset;
arrow252.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow252);

Arrow arrow253(left);
arrow253.speed = Worship_tempo;
arrow253.pos.y = 53875 + Worship_offset;
arrow253.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow253);

Arrow arrow254(up);
arrow254.speed = Worship_tempo;
arrow254.pos.y = 54184 + Worship_offset;
arrow254.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow254);

Arrow arrow255(right);
arrow255.speed = Worship_tempo;
arrow255.pos.y = 54250 + Worship_offset;
arrow255.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow255);

Arrow arrow256(up);
arrow256.speed = Worship_tempo;
arrow256.pos.y = 54438 + Worship_offset;
arrow256.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow256);

Arrow arrow257(right);
arrow257.speed = Worship_tempo;
arrow257.pos.y = 54500 + Worship_offset;
arrow257.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow257);

Arrow arrow258(left);
arrow258.speed = Worship_tempo;
arrow258.pos.y = 54750 + Worship_offset;
arrow258.side = computerSide;
arrow258.trailSize = 188;
computerArrowList->insert(computerArrowList->begin(), arrow258);

Arrow arrow259(down);
arrow259.speed = Worship_tempo;
arrow259.pos.y = 55375 + Worship_offset;
arrow259.side = computerSide;
arrow259.trailSize = 375;
computerArrowList->insert(computerArrowList->begin(), arrow259);

Arrow arrow260(down);
arrow260.speed = Worship_tempo;
arrow260.pos.y = 56125 + Worship_offset;
arrow260.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow260);

Arrow arrow261(up);
arrow261.speed = Worship_tempo;
arrow261.pos.y = 56250 + Worship_offset;
arrow261.side = playerSide;
arrow261.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow261);

Arrow arrow262(down);
arrow262.speed = Worship_tempo;
arrow262.pos.y = 56500 + Worship_offset;
arrow262.side = playerSide;
arrow262.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow262);

Arrow arrow263(up);
arrow263.speed = Worship_tempo;
arrow263.pos.y = 56750 + Worship_offset;
arrow263.side = playerSide;
arrow263.trailSize = 375;
playerArrowList->insert(playerArrowList->begin(), arrow263);

Arrow arrow264(right);
arrow264.speed = Worship_tempo;
arrow264.pos.y = 57625 + Worship_offset;
arrow264.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow264);

Arrow arrow265(left);
arrow265.speed = Worship_tempo;
arrow265.pos.y = 57875 + Worship_offset;
arrow265.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow265);

Arrow arrow266(up);
arrow266.speed = Worship_tempo;
arrow266.pos.y = 58184 + Worship_offset;
arrow266.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow266);

Arrow arrow267(right);
arrow267.speed = Worship_tempo;
arrow267.pos.y = 58250 + Worship_offset;
arrow267.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow267);

Arrow arrow268(up);
arrow268.speed = Worship_tempo;
arrow268.pos.y = 58559 + Worship_offset;
arrow268.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow268);

Arrow arrow269(right);
arrow269.speed = Worship_tempo;
arrow269.pos.y = 58625 + Worship_offset;
arrow269.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow269);

Arrow arrow270(left);
arrow270.speed = Worship_tempo;
arrow270.pos.y = 59000 + Worship_offset;
arrow270.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow270);

Arrow arrow271(right);
arrow271.speed = Worship_tempo;
arrow271.pos.y = 59375 + Worship_offset;
arrow271.side = playerSide;
arrow271.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow271);

Arrow arrow272(down);
arrow272.speed = Worship_tempo;
arrow272.pos.y = 59625 + Worship_offset;
arrow272.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow272);

Arrow arrow273(up);
arrow273.speed = Worship_tempo;
arrow273.pos.y = 59875 + Worship_offset;
arrow273.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow273);

Arrow arrow274(left);
arrow274.speed = Worship_tempo;
arrow274.pos.y = 60125 + Worship_offset;
arrow274.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow274);

Arrow arrow275(right);
arrow275.speed = Worship_tempo;
arrow275.pos.y = 60375 + Worship_offset;
arrow275.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow275);

Arrow arrow276(right);
arrow276.speed = Worship_tempo;
arrow276.pos.y = 60625 + Worship_offset;
arrow276.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow276);

Arrow arrow277(left);
arrow277.speed = Worship_tempo;
arrow277.pos.y = 60875 + Worship_offset;
arrow277.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow277);

Arrow arrow278(left);
arrow278.speed = Worship_tempo;
arrow278.pos.y = 61125 + Worship_offset;
arrow278.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow278);

Arrow arrow279(down);
arrow279.speed = Worship_tempo;
arrow279.pos.y = 61125 + Worship_offset;
arrow279.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow279);

Arrow arrow280(right);
arrow280.speed = Worship_tempo;
arrow280.pos.y = 61250 + Worship_offset;
arrow280.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow280);

Arrow arrow281(up);
arrow281.speed = Worship_tempo;
arrow281.pos.y = 61250 + Worship_offset;
arrow281.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow281);

Arrow arrow282(right);
arrow282.speed = Worship_tempo;
arrow282.pos.y = 61625 + Worship_offset;
arrow282.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow282);

Arrow arrow283(up);
arrow283.speed = Worship_tempo;
arrow283.pos.y = 61625 + Worship_offset;
arrow283.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow283);

Arrow arrow284(left);
arrow284.speed = Worship_tempo;
arrow284.pos.y = 61750 + Worship_offset;
arrow284.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow284);

Arrow arrow285(down);
arrow285.speed = Worship_tempo;
arrow285.pos.y = 61750 + Worship_offset;
arrow285.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow285);

Arrow arrow286(left);
arrow286.speed = Worship_tempo;
arrow286.pos.y = 62125 + Worship_offset;
arrow286.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow286);

Arrow arrow287(up);
arrow287.speed = Worship_tempo;
arrow287.pos.y = 62375 + Worship_offset;
arrow287.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow287);

Arrow arrow288(right);
arrow288.speed = Worship_tempo;
arrow288.pos.y = 62625 + Worship_offset;
arrow288.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow288);

Arrow arrow289(left);
arrow289.speed = Worship_tempo;
arrow289.pos.y = 62875 + Worship_offset;
arrow289.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow289);

Arrow arrow290(left);
arrow290.speed = Worship_tempo;
arrow290.pos.y = 62875 + Worship_offset;
arrow290.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow290);

Arrow arrow291(up);
arrow291.speed = Worship_tempo;
arrow291.pos.y = 63125 + Worship_offset;
arrow291.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow291);

Arrow arrow292(up);
arrow292.speed = Worship_tempo;
arrow292.pos.y = 63125 + Worship_offset;
arrow292.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow292);

Arrow arrow293(up);
arrow293.speed = Worship_tempo;
arrow293.pos.y = 63250 + Worship_offset;
arrow293.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow293);

Arrow arrow294(up);
arrow294.speed = Worship_tempo;
arrow294.pos.y = 63250 + Worship_offset;
arrow294.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow294);

Arrow arrow295(left);
arrow295.speed = Worship_tempo;
arrow295.pos.y = 63500 + Worship_offset;
arrow295.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow295);

Arrow arrow296(left);
arrow296.speed = Worship_tempo;
arrow296.pos.y = 63500 + Worship_offset;
arrow296.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow296);

Arrow arrow297(up);
arrow297.speed = Worship_tempo;
arrow297.pos.y = 63500 + Worship_offset;
arrow297.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow297);

Arrow arrow298(up);
arrow298.speed = Worship_tempo;
arrow298.pos.y = 63500 + Worship_offset;
arrow298.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow298);

Arrow arrow299(right);
arrow299.speed = Worship_tempo;
arrow299.pos.y = 63750 + Worship_offset;
arrow299.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow299);

Arrow arrow300(right);
arrow300.speed = Worship_tempo;
arrow300.pos.y = 63750 + Worship_offset;
arrow300.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow300);

Arrow arrow301(down);
arrow301.speed = Worship_tempo;
arrow301.pos.y = 63750 + Worship_offset;
arrow301.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow301);

Arrow arrow302(down);
arrow302.speed = Worship_tempo;
arrow302.pos.y = 63750 + Worship_offset;
arrow302.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow302);

Arrow arrow303(up);
arrow303.speed = Worship_tempo;
arrow303.pos.y = 64375 + Worship_offset;
arrow303.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow303);

Arrow arrow304(right);
arrow304.speed = Worship_tempo;
arrow304.pos.y = 64500 + Worship_offset;
arrow304.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow304);

Arrow arrow305(left);
arrow305.speed = Worship_tempo;
arrow305.pos.y = 64625 + Worship_offset;
arrow305.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow305);

Arrow arrow306(right);
arrow306.speed = Worship_tempo;
arrow306.pos.y = 64750 + Worship_offset;
arrow306.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow306);

Arrow arrow307(down);
arrow307.speed = Worship_tempo;
arrow307.pos.y = 64875 + Worship_offset;
arrow307.side = computerSide;
arrow307.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow307);

Arrow arrow308(left);
arrow308.speed = Worship_tempo;
arrow308.pos.y = 65125 + Worship_offset;
arrow308.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow308);

Arrow arrow309(right);
arrow309.speed = Worship_tempo;
arrow309.pos.y = 65250 + Worship_offset;
arrow309.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow309);

Arrow arrow310(down);
arrow310.speed = Worship_tempo;
arrow310.pos.y = 65375 + Worship_offset;
arrow310.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow310);

Arrow arrow311(right);
arrow311.speed = Worship_tempo;
arrow311.pos.y = 65500 + Worship_offset;
arrow311.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow311);

Arrow arrow312(down);
arrow312.speed = Worship_tempo;
arrow312.pos.y = 65625 + Worship_offset;
arrow312.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow312);

Arrow arrow313(right);
arrow313.speed = Worship_tempo;
arrow313.pos.y = 65875 + Worship_offset;
arrow313.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow313);

Arrow arrow314(up);
arrow314.speed = Worship_tempo;
arrow314.pos.y = 66000 + Worship_offset;
arrow314.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow314);

Arrow arrow315(left);
arrow315.speed = Worship_tempo;
arrow315.pos.y = 66250 + Worship_offset;
arrow315.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow315);

Arrow arrow316(down);
arrow316.speed = Worship_tempo;
arrow316.pos.y = 66375 + Worship_offset;
arrow316.side = computerSide;
arrow316.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow316);

Arrow arrow317(left);
arrow317.speed = Worship_tempo;
arrow317.pos.y = 66750 + Worship_offset;
arrow317.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow317);

Arrow arrow318(right);
arrow318.speed = Worship_tempo;
arrow318.pos.y = 66875 + Worship_offset;
arrow318.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow318);

Arrow arrow319(left);
arrow319.speed = Worship_tempo;
arrow319.pos.y = 67071 + Worship_offset;
arrow319.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow319);

Arrow arrow320(up);
arrow320.speed = Worship_tempo;
arrow320.pos.y = 67375 + Worship_offset;
arrow320.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow320);

Arrow arrow321(down);
arrow321.speed = Worship_tempo;
arrow321.pos.y = 67625 + Worship_offset;
arrow321.side = computerSide;
arrow321.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow321);

Arrow arrow322(left);
arrow322.speed = Worship_tempo;
arrow322.pos.y = 67875 + Worship_offset;
arrow322.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow322);

Arrow arrow323(up);
arrow323.speed = Worship_tempo;
arrow323.pos.y = 68375 + Worship_offset;
arrow323.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow323);

Arrow arrow324(right);
arrow324.speed = Worship_tempo;
arrow324.pos.y = 68500 + Worship_offset;
arrow324.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow324);

Arrow arrow325(left);
arrow325.speed = Worship_tempo;
arrow325.pos.y = 68625 + Worship_offset;
arrow325.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow325);

Arrow arrow326(right);
arrow326.speed = Worship_tempo;
arrow326.pos.y = 68750 + Worship_offset;
arrow326.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow326);

Arrow arrow327(down);
arrow327.speed = Worship_tempo;
arrow327.pos.y = 68875 + Worship_offset;
arrow327.side = playerSide;
arrow327.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow327);

Arrow arrow328(left);
arrow328.speed = Worship_tempo;
arrow328.pos.y = 69125 + Worship_offset;
arrow328.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow328);

Arrow arrow329(right);
arrow329.speed = Worship_tempo;
arrow329.pos.y = 69250 + Worship_offset;
arrow329.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow329);

Arrow arrow330(down);
arrow330.speed = Worship_tempo;
arrow330.pos.y = 69375 + Worship_offset;
arrow330.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow330);

Arrow arrow331(right);
arrow331.speed = Worship_tempo;
arrow331.pos.y = 69500 + Worship_offset;
arrow331.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow331);

Arrow arrow332(down);
arrow332.speed = Worship_tempo;
arrow332.pos.y = 69625 + Worship_offset;
arrow332.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow332);

Arrow arrow333(right);
arrow333.speed = Worship_tempo;
arrow333.pos.y = 69875 + Worship_offset;
arrow333.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow333);

Arrow arrow334(up);
arrow334.speed = Worship_tempo;
arrow334.pos.y = 70125 + Worship_offset;
arrow334.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow334);

Arrow arrow335(right);
arrow335.speed = Worship_tempo;
arrow335.pos.y = 70375 + Worship_offset;
arrow335.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow335);

Arrow arrow336(left);
arrow336.speed = Worship_tempo;
arrow336.pos.y = 70750 + Worship_offset;
arrow336.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow336);

Arrow arrow337(up);
arrow337.speed = Worship_tempo;
arrow337.pos.y = 71250 + Worship_offset;
arrow337.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow337);

Arrow arrow338(down);
arrow338.speed = Worship_tempo;
arrow338.pos.y = 71500 + Worship_offset;
arrow338.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow338);

Arrow arrow339(up);
arrow339.speed = Worship_tempo;
arrow339.pos.y = 71750 + Worship_offset;
arrow339.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow339);

Arrow arrow340(down);
arrow340.speed = Worship_tempo;
arrow340.pos.y = 72375 + Worship_offset;
arrow340.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow340);

Arrow arrow341(left);
arrow341.speed = Worship_tempo;
arrow341.pos.y = 72500 + Worship_offset;
arrow341.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow341);

Arrow arrow342(right);
arrow342.speed = Worship_tempo;
arrow342.pos.y = 72625 + Worship_offset;
arrow342.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow342);

Arrow arrow343(left);
arrow343.speed = Worship_tempo;
arrow343.pos.y = 72750 + Worship_offset;
arrow343.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow343);

Arrow arrow344(up);
arrow344.speed = Worship_tempo;
arrow344.pos.y = 72875 + Worship_offset;
arrow344.side = computerSide;
arrow344.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow344);

Arrow arrow345(right);
arrow345.speed = Worship_tempo;
arrow345.pos.y = 73125 + Worship_offset;
arrow345.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow345);

Arrow arrow346(left);
arrow346.speed = Worship_tempo;
arrow346.pos.y = 73250 + Worship_offset;
arrow346.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow346);

Arrow arrow347(right);
arrow347.speed = Worship_tempo;
arrow347.pos.y = 73375 + Worship_offset;
arrow347.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow347);

Arrow arrow348(down);
arrow348.speed = Worship_tempo;
arrow348.pos.y = 73500 + Worship_offset;
arrow348.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow348);

Arrow arrow349(left);
arrow349.speed = Worship_tempo;
arrow349.pos.y = 73625 + Worship_offset;
arrow349.side = computerSide;
arrow349.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow349);

Arrow arrow350(right);
arrow350.speed = Worship_tempo;
arrow350.pos.y = 73875 + Worship_offset;
arrow350.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow350);

Arrow arrow351(up);
arrow351.speed = Worship_tempo;
arrow351.pos.y = 74000 + Worship_offset;
arrow351.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow351);

Arrow arrow352(left);
arrow352.speed = Worship_tempo;
arrow352.pos.y = 74250 + Worship_offset;
arrow352.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow352);

Arrow arrow353(down);
arrow353.speed = Worship_tempo;
arrow353.pos.y = 74375 + Worship_offset;
arrow353.side = computerSide;
arrow353.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow353);

Arrow arrow354(left);
arrow354.speed = Worship_tempo;
arrow354.pos.y = 74750 + Worship_offset;
arrow354.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow354);

Arrow arrow355(right);
arrow355.speed = Worship_tempo;
arrow355.pos.y = 74875 + Worship_offset;
arrow355.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow355);

Arrow arrow356(left);
arrow356.speed = Worship_tempo;
arrow356.pos.y = 75125 + Worship_offset;
arrow356.side = computerSide;
arrow356.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow356);

Arrow arrow357(left);
arrow357.speed = Worship_tempo;
arrow357.pos.y = 75375 + Worship_offset;
arrow357.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow357);

Arrow arrow358(up);
arrow358.speed = Worship_tempo;
arrow358.pos.y = 75625 + Worship_offset;
arrow358.side = computerSide;
arrow358.trailSize = 125;
computerArrowList->insert(computerArrowList->begin(), arrow358);

Arrow arrow359(up);
arrow359.speed = Worship_tempo;
arrow359.pos.y = 75875 + Worship_offset;
arrow359.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow359);

Arrow arrow360(down);
arrow360.speed = Worship_tempo;
arrow360.pos.y = 76375 + Worship_offset;
arrow360.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow360);

Arrow arrow361(left);
arrow361.speed = Worship_tempo;
arrow361.pos.y = 76500 + Worship_offset;
arrow361.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow361);

Arrow arrow362(right);
arrow362.speed = Worship_tempo;
arrow362.pos.y = 76625 + Worship_offset;
arrow362.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow362);

Arrow arrow363(left);
arrow363.speed = Worship_tempo;
arrow363.pos.y = 76750 + Worship_offset;
arrow363.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow363);

Arrow arrow364(up);
arrow364.speed = Worship_tempo;
arrow364.pos.y = 76875 + Worship_offset;
arrow364.side = playerSide;
arrow364.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow364);

Arrow arrow365(right);
arrow365.speed = Worship_tempo;
arrow365.pos.y = 77125 + Worship_offset;
arrow365.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow365);

Arrow arrow366(left);
arrow366.speed = Worship_tempo;
arrow366.pos.y = 77250 + Worship_offset;
arrow366.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow366);

Arrow arrow367(right);
arrow367.speed = Worship_tempo;
arrow367.pos.y = 77375 + Worship_offset;
arrow367.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow367);

Arrow arrow368(down);
arrow368.speed = Worship_tempo;
arrow368.pos.y = 77500 + Worship_offset;
arrow368.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow368);

Arrow arrow369(left);
arrow369.speed = Worship_tempo;
arrow369.pos.y = 77625 + Worship_offset;
arrow369.side = playerSide;
arrow369.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow369);

Arrow arrow370(right);
arrow370.speed = Worship_tempo;
arrow370.pos.y = 77875 + Worship_offset;
arrow370.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow370);

Arrow arrow371(down);
arrow371.speed = Worship_tempo;
arrow371.pos.y = 78125 + Worship_offset;
arrow371.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow371);

Arrow arrow372(right);
arrow372.speed = Worship_tempo;
arrow372.pos.y = 78250 + Worship_offset;
arrow372.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow372);

Arrow arrow373(up);
arrow373.speed = Worship_tempo;
arrow373.pos.y = 78500 + Worship_offset;
arrow373.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow373);

Arrow arrow374(left);
arrow374.speed = Worship_tempo;
arrow374.pos.y = 78750 + Worship_offset;
arrow374.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow374);

Arrow arrow375(left);
arrow375.speed = Worship_tempo;
arrow375.pos.y = 79000 + Worship_offset;
arrow375.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow375);

Arrow arrow376(right);
arrow376.speed = Worship_tempo;
arrow376.pos.y = 79250 + Worship_offset;
arrow376.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow376);

Arrow arrow377(up);
arrow377.speed = Worship_tempo;
arrow377.pos.y = 79625 + Worship_offset;
arrow377.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow377);

Arrow arrow378(down);
arrow378.speed = Worship_tempo;
arrow378.pos.y = 79875 + Worship_offset;
arrow378.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow378);

Arrow arrow379(up);
arrow379.speed = Worship_tempo;
arrow379.pos.y = 79875 + Worship_offset;
arrow379.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow379);

Arrow arrow380(left);
arrow380.speed = Worship_tempo;
arrow380.pos.y = 80125 + Worship_offset;
arrow380.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow380);

Arrow arrow381(right);
arrow381.speed = Worship_tempo;
arrow381.pos.y = 80125 + Worship_offset;
arrow381.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow381);

Arrow arrow382(right);
arrow382.speed = Worship_tempo;
arrow382.pos.y = 80375 + Worship_offset;
arrow382.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow382);

Arrow arrow383(left);
arrow383.speed = Worship_tempo;
arrow383.pos.y = 80375 + Worship_offset;
arrow383.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow383);

Arrow arrow384(down);
arrow384.speed = Worship_tempo;
arrow384.pos.y = 80750 + Worship_offset;
arrow384.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow384);

Arrow arrow385(up);
arrow385.speed = Worship_tempo;
arrow385.pos.y = 80750 + Worship_offset;
arrow385.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow385);

Arrow arrow386(up);
arrow386.speed = Worship_tempo;
arrow386.pos.y = 81000 + Worship_offset;
arrow386.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow386);

Arrow arrow387(right);
arrow387.speed = Worship_tempo;
arrow387.pos.y = 81125 + Worship_offset;
arrow387.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow387);

Arrow arrow388(up);
arrow388.speed = Worship_tempo;
arrow388.pos.y = 81250 + Worship_offset;
arrow388.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow388);

Arrow arrow389(down);
arrow389.speed = Worship_tempo;
arrow389.pos.y = 81375 + Worship_offset;
arrow389.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow389);

Arrow arrow390(left);
arrow390.speed = Worship_tempo;
arrow390.pos.y = 81625 + Worship_offset;
arrow390.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow390);

Arrow arrow391(up);
arrow391.speed = Worship_tempo;
arrow391.pos.y = 81684 + Worship_offset;
arrow391.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow391);

Arrow arrow392(right);
arrow392.speed = Worship_tempo;
arrow392.pos.y = 81875 + Worship_offset;
arrow392.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow392);

Arrow arrow393(left);
arrow393.speed = Worship_tempo;
arrow393.pos.y = 82125 + Worship_offset;
arrow393.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow393);

Arrow arrow394(up);
arrow394.speed = Worship_tempo;
arrow394.pos.y = 82250 + Worship_offset;
arrow394.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow394);

Arrow arrow395(right);
arrow395.speed = Worship_tempo;
arrow395.pos.y = 82375 + Worship_offset;
arrow395.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow395);

Arrow arrow396(down);
arrow396.speed = Worship_tempo;
arrow396.pos.y = 82500 + Worship_offset;
arrow396.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow396);

Arrow arrow397(left);
arrow397.speed = Worship_tempo;
arrow397.pos.y = 82625 + Worship_offset;
arrow397.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow397);

Arrow arrow398(up);
arrow398.speed = Worship_tempo;
arrow398.pos.y = 82750 + Worship_offset;
arrow398.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow398);

Arrow arrow399(right);
arrow399.speed = Worship_tempo;
arrow399.pos.y = 82875 + Worship_offset;
arrow399.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow399);

Arrow arrow400(down);
arrow400.speed = Worship_tempo;
arrow400.pos.y = 83000 + Worship_offset;
arrow400.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow400);

Arrow arrow401(down);
arrow401.speed = Worship_tempo;
arrow401.pos.y = 83125 + Worship_offset;
arrow401.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow401);

Arrow arrow402(left);
arrow402.speed = Worship_tempo;
arrow402.pos.y = 83250 + Worship_offset;
arrow402.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow402);

Arrow arrow403(right);
arrow403.speed = Worship_tempo;
arrow403.pos.y = 83375 + Worship_offset;
arrow403.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow403);

Arrow arrow404(up);
arrow404.speed = Worship_tempo;
arrow404.pos.y = 83500 + Worship_offset;
arrow404.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow404);

Arrow arrow405(down);
arrow405.speed = Worship_tempo;
arrow405.pos.y = 83625 + Worship_offset;
arrow405.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow405);

Arrow arrow406(left);
arrow406.speed = Worship_tempo;
arrow406.pos.y = 83750 + Worship_offset;
arrow406.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow406);

Arrow arrow407(right);
arrow407.speed = Worship_tempo;
arrow407.pos.y = 83875 + Worship_offset;
arrow407.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow407);

Arrow arrow408(up);
arrow408.speed = Worship_tempo;
arrow408.pos.y = 84000 + Worship_offset;
arrow408.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow408);

Arrow arrow409(right);
arrow409.speed = Worship_tempo;
arrow409.pos.y = 84375 + Worship_offset;
arrow409.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow409);

Arrow arrow410(left);
arrow410.speed = Worship_tempo;
arrow410.pos.y = 84375 + Worship_offset;
arrow410.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow410);

Arrow arrow411(down);
arrow411.speed = Worship_tempo;
arrow411.pos.y = 84750 + Worship_offset;
arrow411.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow411);

Arrow arrow412(up);
arrow412.speed = Worship_tempo;
arrow412.pos.y = 84750 + Worship_offset;
arrow412.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow412);

Arrow arrow413(up);
arrow413.speed = Worship_tempo;
arrow413.pos.y = 85000 + Worship_offset;
arrow413.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow413);

Arrow arrow414(right);
arrow414.speed = Worship_tempo;
arrow414.pos.y = 85125 + Worship_offset;
arrow414.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow414);

Arrow arrow415(up);
arrow415.speed = Worship_tempo;
arrow415.pos.y = 85250 + Worship_offset;
arrow415.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow415);

Arrow arrow416(down);
arrow416.speed = Worship_tempo;
arrow416.pos.y = 85375 + Worship_offset;
arrow416.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow416);

Arrow arrow417(left);
arrow417.speed = Worship_tempo;
arrow417.pos.y = 85625 + Worship_offset;
arrow417.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow417);

Arrow arrow418(up);
arrow418.speed = Worship_tempo;
arrow418.pos.y = 85684 + Worship_offset;
arrow418.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow418);

Arrow arrow419(right);
arrow419.speed = Worship_tempo;
arrow419.pos.y = 85875 + Worship_offset;
arrow419.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow419);

Arrow arrow420(left);
arrow420.speed = Worship_tempo;
arrow420.pos.y = 86125 + Worship_offset;
arrow420.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow420);

Arrow arrow421(up);
arrow421.speed = Worship_tempo;
arrow421.pos.y = 86250 + Worship_offset;
arrow421.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow421);

Arrow arrow422(right);
arrow422.speed = Worship_tempo;
arrow422.pos.y = 86375 + Worship_offset;
arrow422.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow422);

Arrow arrow423(down);
arrow423.speed = Worship_tempo;
arrow423.pos.y = 86500 + Worship_offset;
arrow423.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow423);

Arrow arrow424(left);
arrow424.speed = Worship_tempo;
arrow424.pos.y = 86625 + Worship_offset;
arrow424.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow424);

Arrow arrow425(up);
arrow425.speed = Worship_tempo;
arrow425.pos.y = 86750 + Worship_offset;
arrow425.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow425);

Arrow arrow426(right);
arrow426.speed = Worship_tempo;
arrow426.pos.y = 86875 + Worship_offset;
arrow426.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow426);

Arrow arrow427(down);
arrow427.speed = Worship_tempo;
arrow427.pos.y = 87000 + Worship_offset;
arrow427.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow427);

Arrow arrow428(down);
arrow428.speed = Worship_tempo;
arrow428.pos.y = 87125 + Worship_offset;
arrow428.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow428);

Arrow arrow429(left);
arrow429.speed = Worship_tempo;
arrow429.pos.y = 87250 + Worship_offset;
arrow429.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow429);

Arrow arrow430(right);
arrow430.speed = Worship_tempo;
arrow430.pos.y = 87375 + Worship_offset;
arrow430.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow430);

Arrow arrow431(up);
arrow431.speed = Worship_tempo;
arrow431.pos.y = 87500 + Worship_offset;
arrow431.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow431);

Arrow arrow432(down);
arrow432.speed = Worship_tempo;
arrow432.pos.y = 87625 + Worship_offset;
arrow432.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow432);

Arrow arrow433(left);
arrow433.speed = Worship_tempo;
arrow433.pos.y = 87750 + Worship_offset;
arrow433.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow433);

Arrow arrow434(right);
arrow434.speed = Worship_tempo;
arrow434.pos.y = 87875 + Worship_offset;
arrow434.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow434);

Arrow arrow435(up);
arrow435.speed = Worship_tempo;
arrow435.pos.y = 88000 + Worship_offset;
arrow435.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow435);

Arrow arrow436(right);
arrow436.speed = Worship_tempo;
arrow436.pos.y = 88375 + Worship_offset;
arrow436.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow436);

Arrow arrow437(down);
arrow437.speed = Worship_tempo;
arrow437.pos.y = 88750 + Worship_offset;
arrow437.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow437);

Arrow arrow438(right);
arrow438.speed = Worship_tempo;
arrow438.pos.y = 88750 + Worship_offset;
arrow438.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow438);

Arrow arrow439(right);
arrow439.speed = Worship_tempo;
arrow439.pos.y = 89000 + Worship_offset;
arrow439.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow439);

Arrow arrow440(left);
arrow440.speed = Worship_tempo;
arrow440.pos.y = 89125 + Worship_offset;
arrow440.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow440);

Arrow arrow441(up);
arrow441.speed = Worship_tempo;
arrow441.pos.y = 89250 + Worship_offset;
arrow441.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow441);

Arrow arrow442(left);
arrow442.speed = Worship_tempo;
arrow442.pos.y = 89375 + Worship_offset;
arrow442.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow442);

Arrow arrow443(down);
arrow443.speed = Worship_tempo;
arrow443.pos.y = 89625 + Worship_offset;
arrow443.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow443);

Arrow arrow444(left);
arrow444.speed = Worship_tempo;
arrow444.pos.y = 89691 + Worship_offset;
arrow444.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow444);

Arrow arrow445(right);
arrow445.speed = Worship_tempo;
arrow445.pos.y = 89875 + Worship_offset;
arrow445.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow445);

Arrow arrow446(left);
arrow446.speed = Worship_tempo;
arrow446.pos.y = 90125 + Worship_offset;
arrow446.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow446);

Arrow arrow447(up);
arrow447.speed = Worship_tempo;
arrow447.pos.y = 90250 + Worship_offset;
arrow447.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow447);

Arrow arrow448(right);
arrow448.speed = Worship_tempo;
arrow448.pos.y = 90375 + Worship_offset;
arrow448.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow448);

Arrow arrow449(right);
arrow449.speed = Worship_tempo;
arrow449.pos.y = 90500 + Worship_offset;
arrow449.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow449);

Arrow arrow450(left);
arrow450.speed = Worship_tempo;
arrow450.pos.y = 90625 + Worship_offset;
arrow450.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow450);

Arrow arrow451(up);
arrow451.speed = Worship_tempo;
arrow451.pos.y = 90750 + Worship_offset;
arrow451.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow451);

Arrow arrow452(right);
arrow452.speed = Worship_tempo;
arrow452.pos.y = 90875 + Worship_offset;
arrow452.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow452);

Arrow arrow453(left);
arrow453.speed = Worship_tempo;
arrow453.pos.y = 91000 + Worship_offset;
arrow453.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow453);

Arrow arrow454(down);
arrow454.speed = Worship_tempo;
arrow454.pos.y = 91125 + Worship_offset;
arrow454.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow454);

Arrow arrow455(up);
arrow455.speed = Worship_tempo;
arrow455.pos.y = 91250 + Worship_offset;
arrow455.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow455);

Arrow arrow456(right);
arrow456.speed = Worship_tempo;
arrow456.pos.y = 91375 + Worship_offset;
arrow456.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow456);

Arrow arrow457(right);
arrow457.speed = Worship_tempo;
arrow457.pos.y = 91500 + Worship_offset;
arrow457.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow457);

Arrow arrow458(down);
arrow458.speed = Worship_tempo;
arrow458.pos.y = 91625 + Worship_offset;
arrow458.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow458);

Arrow arrow459(up);
arrow459.speed = Worship_tempo;
arrow459.pos.y = 91750 + Worship_offset;
arrow459.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow459);

Arrow arrow460(right);
arrow460.speed = Worship_tempo;
arrow460.pos.y = 91875 + Worship_offset;
arrow460.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow460);

Arrow arrow461(left);
arrow461.speed = Worship_tempo;
arrow461.pos.y = 92000 + Worship_offset;
arrow461.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow461);

Arrow arrow462(down);
arrow462.speed = Worship_tempo;
arrow462.pos.y = 92375 + Worship_offset;
arrow462.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow462);

Arrow arrow463(down);
arrow463.speed = Worship_tempo;
arrow463.pos.y = 92375 + Worship_offset;
arrow463.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow463);

Arrow arrow464(left);
arrow464.speed = Worship_tempo;
arrow464.pos.y = 92375 + Worship_offset;
arrow464.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow464);

Arrow arrow465(left);
arrow465.speed = Worship_tempo;
arrow465.pos.y = 92750 + Worship_offset;
arrow465.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow465);

Arrow arrow466(right);
arrow466.speed = Worship_tempo;
arrow466.pos.y = 93000 + Worship_offset;
arrow466.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow466);

Arrow arrow467(left);
arrow467.speed = Worship_tempo;
arrow467.pos.y = 93125 + Worship_offset;
arrow467.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow467);

Arrow arrow468(up);
arrow468.speed = Worship_tempo;
arrow468.pos.y = 93250 + Worship_offset;
arrow468.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow468);

Arrow arrow469(left);
arrow469.speed = Worship_tempo;
arrow469.pos.y = 93375 + Worship_offset;
arrow469.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow469);

Arrow arrow470(down);
arrow470.speed = Worship_tempo;
arrow470.pos.y = 93625 + Worship_offset;
arrow470.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow470);

Arrow arrow471(left);
arrow471.speed = Worship_tempo;
arrow471.pos.y = 93691 + Worship_offset;
arrow471.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow471);

Arrow arrow472(right);
arrow472.speed = Worship_tempo;
arrow472.pos.y = 93875 + Worship_offset;
arrow472.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow472);

Arrow arrow473(right);
arrow473.speed = Worship_tempo;
arrow473.pos.y = 94125 + Worship_offset;
arrow473.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow473);

Arrow arrow474(up);
arrow474.speed = Worship_tempo;
arrow474.pos.y = 94250 + Worship_offset;
arrow474.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow474);

Arrow arrow475(left);
arrow475.speed = Worship_tempo;
arrow475.pos.y = 94375 + Worship_offset;
arrow475.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow475);

Arrow arrow476(left);
arrow476.speed = Worship_tempo;
arrow476.pos.y = 94500 + Worship_offset;
arrow476.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow476);

Arrow arrow477(right);
arrow477.speed = Worship_tempo;
arrow477.pos.y = 94625 + Worship_offset;
arrow477.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow477);

Arrow arrow478(up);
arrow478.speed = Worship_tempo;
arrow478.pos.y = 94750 + Worship_offset;
arrow478.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow478);

Arrow arrow479(left);
arrow479.speed = Worship_tempo;
arrow479.pos.y = 94875 + Worship_offset;
arrow479.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow479);

Arrow arrow480(left);
arrow480.speed = Worship_tempo;
arrow480.pos.y = 95000 + Worship_offset;
arrow480.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow480);

Arrow arrow481(down);
arrow481.speed = Worship_tempo;
arrow481.pos.y = 95125 + Worship_offset;
arrow481.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow481);

Arrow arrow482(right);
arrow482.speed = Worship_tempo;
arrow482.pos.y = 95250 + Worship_offset;
arrow482.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow482);

Arrow arrow483(left);
arrow483.speed = Worship_tempo;
arrow483.pos.y = 95375 + Worship_offset;
arrow483.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow483);

Arrow arrow484(up);
arrow484.speed = Worship_tempo;
arrow484.pos.y = 95500 + Worship_offset;
arrow484.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow484);

Arrow arrow485(down);
arrow485.speed = Worship_tempo;
arrow485.pos.y = 95625 + Worship_offset;
arrow485.side = playerSide;
arrow485.trailSize = 250;
playerArrowList->insert(playerArrowList->begin(), arrow485);

Arrow arrow486(right);
arrow486.speed = Worship_tempo;
arrow486.pos.y = 96375 + Worship_offset;
arrow486.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow486);

Arrow arrow487(up);
arrow487.speed = Worship_tempo;
arrow487.pos.y = 96375 + Worship_offset;
arrow487.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow487);

Arrow arrow488(right);
arrow488.speed = Worship_tempo;
arrow488.pos.y = 96750 + Worship_offset;
arrow488.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow488);

Arrow arrow489(left);
arrow489.speed = Worship_tempo;
arrow489.pos.y = 96750 + Worship_offset;
arrow489.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow489);

Arrow arrow490(down);
arrow490.speed = Worship_tempo;
arrow490.pos.y = 97000 + Worship_offset;
arrow490.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow490);

Arrow arrow491(left);
arrow491.speed = Worship_tempo;
arrow491.pos.y = 97125 + Worship_offset;
arrow491.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow491);

Arrow arrow492(down);
arrow492.speed = Worship_tempo;
arrow492.pos.y = 97250 + Worship_offset;
arrow492.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow492);

Arrow arrow493(right);
arrow493.speed = Worship_tempo;
arrow493.pos.y = 97375 + Worship_offset;
arrow493.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow493);

Arrow arrow494(down);
arrow494.speed = Worship_tempo;
arrow494.pos.y = 97625 + Worship_offset;
arrow494.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow494);

Arrow arrow495(up);
arrow495.speed = Worship_tempo;
arrow495.pos.y = 97688 + Worship_offset;
arrow495.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow495);

Arrow arrow496(left);
arrow496.speed = Worship_tempo;
arrow496.pos.y = 97875 + Worship_offset;
arrow496.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow496);

Arrow arrow497(right);
arrow497.speed = Worship_tempo;
arrow497.pos.y = 97875 + Worship_offset;
arrow497.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow497);

Arrow arrow498(up);
arrow498.speed = Worship_tempo;
arrow498.pos.y = 98125 + Worship_offset;
arrow498.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow498);

Arrow arrow499(down);
arrow499.speed = Worship_tempo;
arrow499.pos.y = 98250 + Worship_offset;
arrow499.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow499);

Arrow arrow500(left);
arrow500.speed = Worship_tempo;
arrow500.pos.y = 98375 + Worship_offset;
arrow500.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow500);

Arrow arrow501(up);
arrow501.speed = Worship_tempo;
arrow501.pos.y = 98500 + Worship_offset;
arrow501.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow501);

Arrow arrow502(up);
arrow502.speed = Worship_tempo;
arrow502.pos.y = 98625 + Worship_offset;
arrow502.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow502);

Arrow arrow503(down);
arrow503.speed = Worship_tempo;
arrow503.pos.y = 98750 + Worship_offset;
arrow503.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow503);

Arrow arrow504(left);
arrow504.speed = Worship_tempo;
arrow504.pos.y = 98875 + Worship_offset;
arrow504.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow504);

Arrow arrow505(up);
arrow505.speed = Worship_tempo;
arrow505.pos.y = 99000 + Worship_offset;
arrow505.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow505);

Arrow arrow506(down);
arrow506.speed = Worship_tempo;
arrow506.pos.y = 99125 + Worship_offset;
arrow506.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow506);

Arrow arrow507(left);
arrow507.speed = Worship_tempo;
arrow507.pos.y = 99250 + Worship_offset;
arrow507.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow507);

Arrow arrow508(up);
arrow508.speed = Worship_tempo;
arrow508.pos.y = 99375 + Worship_offset;
arrow508.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow508);

Arrow arrow509(up);
arrow509.speed = Worship_tempo;
arrow509.pos.y = 99500 + Worship_offset;
arrow509.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow509);

Arrow arrow510(down);
arrow510.speed = Worship_tempo;
arrow510.pos.y = 99625 + Worship_offset;
arrow510.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow510);

Arrow arrow511(left);
arrow511.speed = Worship_tempo;
arrow511.pos.y = 99750 + Worship_offset;
arrow511.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow511);

Arrow arrow512(up);
arrow512.speed = Worship_tempo;
arrow512.pos.y = 99875 + Worship_offset;
arrow512.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow512);

Arrow arrow513(up);
arrow513.speed = Worship_tempo;
arrow513.pos.y = 100000 + Worship_offset;
arrow513.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow513);

Arrow arrow514(right);
arrow514.speed = Worship_tempo;
arrow514.pos.y = 100375 + Worship_offset;
arrow514.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow514);

Arrow arrow515(up);
arrow515.speed = Worship_tempo;
arrow515.pos.y = 100375 + Worship_offset;
arrow515.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow515);

Arrow arrow516(right);
arrow516.speed = Worship_tempo;
arrow516.pos.y = 100750 + Worship_offset;
arrow516.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow516);

Arrow arrow517(down);
arrow517.speed = Worship_tempo;
arrow517.pos.y = 100750 + Worship_offset;
arrow517.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow517);

Arrow arrow518(down);
arrow518.speed = Worship_tempo;
arrow518.pos.y = 101000 + Worship_offset;
arrow518.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow518);

Arrow arrow519(left);
arrow519.speed = Worship_tempo;
arrow519.pos.y = 101125 + Worship_offset;
arrow519.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow519);

Arrow arrow520(down);
arrow520.speed = Worship_tempo;
arrow520.pos.y = 101250 + Worship_offset;
arrow520.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow520);

Arrow arrow521(left);
arrow521.speed = Worship_tempo;
arrow521.pos.y = 101375 + Worship_offset;
arrow521.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow521);

Arrow arrow522(down);
arrow522.speed = Worship_tempo;
arrow522.pos.y = 101625 + Worship_offset;
arrow522.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow522);

Arrow arrow523(up);
arrow523.speed = Worship_tempo;
arrow523.pos.y = 101688 + Worship_offset;
arrow523.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow523);

Arrow arrow524(right);
arrow524.speed = Worship_tempo;
arrow524.pos.y = 101875 + Worship_offset;
arrow524.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow524);

Arrow arrow525(left);
arrow525.speed = Worship_tempo;
arrow525.pos.y = 101875 + Worship_offset;
arrow525.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow525);

Arrow arrow526(up);
arrow526.speed = Worship_tempo;
arrow526.pos.y = 102125 + Worship_offset;
arrow526.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow526);

Arrow arrow527(down);
arrow527.speed = Worship_tempo;
arrow527.pos.y = 102250 + Worship_offset;
arrow527.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow527);

Arrow arrow528(left);
arrow528.speed = Worship_tempo;
arrow528.pos.y = 102375 + Worship_offset;
arrow528.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow528);

Arrow arrow529(up);
arrow529.speed = Worship_tempo;
arrow529.pos.y = 102500 + Worship_offset;
arrow529.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow529);

Arrow arrow530(up);
arrow530.speed = Worship_tempo;
arrow530.pos.y = 102625 + Worship_offset;
arrow530.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow530);

Arrow arrow531(down);
arrow531.speed = Worship_tempo;
arrow531.pos.y = 102750 + Worship_offset;
arrow531.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow531);

Arrow arrow532(left);
arrow532.speed = Worship_tempo;
arrow532.pos.y = 102875 + Worship_offset;
arrow532.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow532);

Arrow arrow533(up);
arrow533.speed = Worship_tempo;
arrow533.pos.y = 103000 + Worship_offset;
arrow533.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow533);

Arrow arrow534(down);
arrow534.speed = Worship_tempo;
arrow534.pos.y = 103125 + Worship_offset;
arrow534.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow534);

Arrow arrow535(left);
arrow535.speed = Worship_tempo;
arrow535.pos.y = 103250 + Worship_offset;
arrow535.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow535);

Arrow arrow536(up);
arrow536.speed = Worship_tempo;
arrow536.pos.y = 103375 + Worship_offset;
arrow536.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow536);

Arrow arrow537(up);
arrow537.speed = Worship_tempo;
arrow537.pos.y = 103500 + Worship_offset;
arrow537.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow537);

Arrow arrow538(down);
arrow538.speed = Worship_tempo;
arrow538.pos.y = 103625 + Worship_offset;
arrow538.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow538);

Arrow arrow539(left);
arrow539.speed = Worship_tempo;
arrow539.pos.y = 103750 + Worship_offset;
arrow539.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow539);

Arrow arrow540(up);
arrow540.speed = Worship_tempo;
arrow540.pos.y = 103875 + Worship_offset;
arrow540.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow540);

Arrow arrow541(up);
arrow541.speed = Worship_tempo;
arrow541.pos.y = 104000 + Worship_offset;
arrow541.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow541);

Arrow arrow542(up);
arrow542.speed = Worship_tempo;
arrow542.pos.y = 104375 + Worship_offset;
arrow542.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow542);

Arrow arrow543(down);
arrow543.speed = Worship_tempo;
arrow543.pos.y = 104375 + Worship_offset;
arrow543.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow543);

Arrow arrow544(down);
arrow544.speed = Worship_tempo;
arrow544.pos.y = 104750 + Worship_offset;
arrow544.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow544);

Arrow arrow545(right);
arrow545.speed = Worship_tempo;
arrow545.pos.y = 104750 + Worship_offset;
arrow545.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow545);

Arrow arrow546(up);
arrow546.speed = Worship_tempo;
arrow546.pos.y = 105000 + Worship_offset;
arrow546.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow546);

Arrow arrow547(down);
arrow547.speed = Worship_tempo;
arrow547.pos.y = 105125 + Worship_offset;
arrow547.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow547);

Arrow arrow548(up);
arrow548.speed = Worship_tempo;
arrow548.pos.y = 105250 + Worship_offset;
arrow548.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow548);

Arrow arrow549(down);
arrow549.speed = Worship_tempo;
arrow549.pos.y = 105375 + Worship_offset;
arrow549.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow549);

Arrow arrow550(up);
arrow550.speed = Worship_tempo;
arrow550.pos.y = 105625 + Worship_offset;
arrow550.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow550);

Arrow arrow551(right);
arrow551.speed = Worship_tempo;
arrow551.pos.y = 105675 + Worship_offset;
arrow551.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow551);

Arrow arrow552(left);
arrow552.speed = Worship_tempo;
arrow552.pos.y = 105875 + Worship_offset;
arrow552.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow552);

Arrow arrow553(up);
arrow553.speed = Worship_tempo;
arrow553.pos.y = 105875 + Worship_offset;
arrow553.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow553);

Arrow arrow554(down);
arrow554.speed = Worship_tempo;
arrow554.pos.y = 106125 + Worship_offset;
arrow554.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow554);

Arrow arrow555(up);
arrow555.speed = Worship_tempo;
arrow555.pos.y = 106250 + Worship_offset;
arrow555.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow555);

Arrow arrow556(right);
arrow556.speed = Worship_tempo;
arrow556.pos.y = 106375 + Worship_offset;
arrow556.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow556);

Arrow arrow557(left);
arrow557.speed = Worship_tempo;
arrow557.pos.y = 106500 + Worship_offset;
arrow557.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow557);

Arrow arrow558(down);
arrow558.speed = Worship_tempo;
arrow558.pos.y = 106625 + Worship_offset;
arrow558.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow558);

Arrow arrow559(up);
arrow559.speed = Worship_tempo;
arrow559.pos.y = 106750 + Worship_offset;
arrow559.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow559);

Arrow arrow560(right);
arrow560.speed = Worship_tempo;
arrow560.pos.y = 106875 + Worship_offset;
arrow560.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow560);

Arrow arrow561(left);
arrow561.speed = Worship_tempo;
arrow561.pos.y = 107000 + Worship_offset;
arrow561.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow561);

Arrow arrow562(down);
arrow562.speed = Worship_tempo;
arrow562.pos.y = 107125 + Worship_offset;
arrow562.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow562);

Arrow arrow563(up);
arrow563.speed = Worship_tempo;
arrow563.pos.y = 107250 + Worship_offset;
arrow563.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow563);

Arrow arrow564(left);
arrow564.speed = Worship_tempo;
arrow564.pos.y = 107375 + Worship_offset;
arrow564.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow564);

Arrow arrow565(down);
arrow565.speed = Worship_tempo;
arrow565.pos.y = 107500 + Worship_offset;
arrow565.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow565);

Arrow arrow566(left);
arrow566.speed = Worship_tempo;
arrow566.pos.y = 107625 + Worship_offset;
arrow566.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow566);

Arrow arrow567(down);
arrow567.speed = Worship_tempo;
arrow567.pos.y = 107750 + Worship_offset;
arrow567.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow567);

Arrow arrow568(up);
arrow568.speed = Worship_tempo;
arrow568.pos.y = 107875 + Worship_offset;
arrow568.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow568);

Arrow arrow569(left);
arrow569.speed = Worship_tempo;
arrow569.pos.y = 108000 + Worship_offset;
arrow569.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow569);

Arrow arrow570(down);
arrow570.speed = Worship_tempo;
arrow570.pos.y = 108000 + Worship_offset;
arrow570.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow570);

Arrow arrow571(up);
arrow571.speed = Worship_tempo;
arrow571.pos.y = 108375 + Worship_offset;
arrow571.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow571);

Arrow arrow572(down);
arrow572.speed = Worship_tempo;
arrow572.pos.y = 108375 + Worship_offset;
arrow572.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow572);

Arrow arrow573(down);
arrow573.speed = Worship_tempo;
arrow573.pos.y = 108750 + Worship_offset;
arrow573.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow573);

Arrow arrow574(right);
arrow574.speed = Worship_tempo;
arrow574.pos.y = 108750 + Worship_offset;
arrow574.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow574);

Arrow arrow575(up);
arrow575.speed = Worship_tempo;
arrow575.pos.y = 109000 + Worship_offset;
arrow575.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow575);

Arrow arrow576(down);
arrow576.speed = Worship_tempo;
arrow576.pos.y = 109125 + Worship_offset;
arrow576.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow576);

Arrow arrow577(up);
arrow577.speed = Worship_tempo;
arrow577.pos.y = 109250 + Worship_offset;
arrow577.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow577);

Arrow arrow578(down);
arrow578.speed = Worship_tempo;
arrow578.pos.y = 109375 + Worship_offset;
arrow578.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow578);

Arrow arrow579(up);
arrow579.speed = Worship_tempo;
arrow579.pos.y = 109625 + Worship_offset;
arrow579.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow579);

Arrow arrow580(left);
arrow580.speed = Worship_tempo;
arrow580.pos.y = 109684 + Worship_offset;
arrow580.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow580);

Arrow arrow581(right);
arrow581.speed = Worship_tempo;
arrow581.pos.y = 109875 + Worship_offset;
arrow581.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow581);

Arrow arrow582(down);
arrow582.speed = Worship_tempo;
arrow582.pos.y = 109875 + Worship_offset;
arrow582.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow582);

Arrow arrow583(down);
arrow583.speed = Worship_tempo;
arrow583.pos.y = 110125 + Worship_offset;
arrow583.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow583);

Arrow arrow584(up);
arrow584.speed = Worship_tempo;
arrow584.pos.y = 110250 + Worship_offset;
arrow584.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow584);

Arrow arrow585(right);
arrow585.speed = Worship_tempo;
arrow585.pos.y = 110375 + Worship_offset;
arrow585.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow585);

Arrow arrow586(left);
arrow586.speed = Worship_tempo;
arrow586.pos.y = 110500 + Worship_offset;
arrow586.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow586);

Arrow arrow587(down);
arrow587.speed = Worship_tempo;
arrow587.pos.y = 110625 + Worship_offset;
arrow587.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow587);

Arrow arrow588(right);
arrow588.speed = Worship_tempo;
arrow588.pos.y = 110750 + Worship_offset;
arrow588.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow588);

Arrow arrow589(left);
arrow589.speed = Worship_tempo;
arrow589.pos.y = 110875 + Worship_offset;
arrow589.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow589);

Arrow arrow590(up);
arrow590.speed = Worship_tempo;
arrow590.pos.y = 111000 + Worship_offset;
arrow590.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow590);

Arrow arrow591(left);
arrow591.speed = Worship_tempo;
arrow591.pos.y = 111125 + Worship_offset;
arrow591.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow591);

Arrow arrow592(up);
arrow592.speed = Worship_tempo;
arrow592.pos.y = 111375 + Worship_offset;
arrow592.side = playerSide;
arrow592.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow592);

Arrow arrow593(down);
arrow593.speed = Worship_tempo;
arrow593.pos.y = 111625 + Worship_offset;
arrow593.side = playerSide;
arrow593.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow593);

Arrow arrow594(up);
arrow594.speed = Worship_tempo;
arrow594.pos.y = 111875 + Worship_offset;
arrow594.side = playerSide;
arrow594.trailSize = 125;
playerArrowList->insert(playerArrowList->begin(), arrow594);

Arrow arrow595(down);
arrow595.speed = Worship_tempo;
arrow595.pos.y = 112125 + Worship_offset;
arrow595.side = computerSide;
arrow595.trailSize = 1750;
computerArrowList->insert(computerArrowList->begin(), arrow595);

Arrow arrow596(down);
arrow596.speed = Worship_tempo;
arrow596.pos.y = 112125 + Worship_offset;
arrow596.side = playerSide;
arrow596.trailSize = 500;
playerArrowList->insert(playerArrowList->begin(), arrow596);

Arrow arrow597(down);
arrow597.speed = Worship_tempo;
arrow597.pos.y = 113875 + Worship_offset;
arrow597.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow597);

}

void worship(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList, Music* instrumental, Music* player, Rectangle* playerRec, Rectangle* enemyRec, Camera2D* camera, int difficulty){
    // you can use the start of the chart as an initialization section for all your textures etc.
    bg_worship = LoadTexture("resources/worship/base.png");
    gfSpeaker_worship = LoadTexture("resources/shared/gfDanceTitle2.png");
    gfSpeaker_worship.width *= 0.7f;
    gfSpeaker_worship.height *= 0.7f;
    sarvente_worship = LoadTexture("resources/worship/sarvente_dark.png");
    

    boyfriend_worship = LoadTexture("resources/shared/boyfriend.png");
    // REMOVE THIS ON DC PORT
    GenTextureMipmaps(&gfSpeaker_worship); // Generates mipmaps
    SetTextureFilter(gfSpeaker_worship, TEXTURE_FILTER_TRILINEAR);
    currentFrame_worship = 0;
    frameCounter_worship = 0;
    *instrumental = LoadMusicStream("resources/worship/worship.mp3");
    *player = LoadMusicStream("resources/worship/worship-player.mp3");
    gfSpeakerRec_worship = { 0.0f, 0.0f, (float)gfSpeaker_worship.width/5, (float)gfSpeaker_worship.height/4 };
    *enemyRec = {0.0f, 0.0f, (float)sarvente_worship.width/9, (float)sarvente_worship.height};
    *playerRec = {0.0f, 450.0f, (float)boyfriend_worship.width/4, (float)boyfriend_worship.height/3};
    camera->target = {640,360};
    camera->offset = {640, 360};
    camera->rotation = 0.0f;
    camera->zoom = 1.0f;
    // too lazy to actually convert all the charts :P
    if(difficulty == 0){
        worship_Hard(playerArrowList, computerArrowList);
    }
    else if(difficulty == 1){
        worship_Hard(playerArrowList, computerArrowList);
    }else if(difficulty == 2){
        worship_Hard(playerArrowList, computerArrowList);
    }
}
// this is for drawing the environment, you may use Camera2D* camera as an argument
// if you need camera fx
// NOTE: YOUR SONG NEEDS TO CLEAR BACKGROUND!!
void worshipDraw(Rectangle* playerRec, Rectangle* enemyRec, Camera2D* camera){
    frameCounter_worship++;
    if(frameCounter_worship >= (60 / framesSpeed_worship)){
		frameCounter_worship = 0;
		currentFrame_worship++;
		if (currentFrame_worship % 5 == 0){
			gfSpeakerRec_worship.y = (float)currentFrame_worship*(float)gfSpeaker_worship.height/4;
			gfSpeakerRec_worship.x = 0;
		}
		else{ gfSpeakerRec_worship.x = (float)currentFrame_worship*(float)gfSpeaker_worship.width/5; }
		if(currentFrame_worship > 19){
			currentFrame_worship = 1;
		}
	}
    ClearBackground(DARKPURPLE); // dark maroon #3c0008
    BeginMode2D(*camera);
    DrawTexture(bg_worship, -90, -742, PINK);
    DrawTextureRec(gfSpeaker_worship, gfSpeakerRec_worship, {1280/2-90, 60}, WHITE);
    DrawTextureRec(sarvente_worship, *enemyRec, {1280/2-700, 240}, WHITE);
    DrawTextureRec(boyfriend_worship, *playerRec, {1280/2+200, 320}, WHITE);
    EndMode2D();
    if(playerRec->x > 450*5){
        CameraEase(camera, (Vector2){750, camera->target.y}, GetFrameTime(), 1280, 720);
    }else if(enemyRec->x > 520*5){
        CameraEase(camera, (Vector2){455, camera->target.y}, GetFrameTime(), 1280, 720);
    }else{
        //CameraEase(camera, (Vector2){640, camera->target.y}, GetFrameTime(), 1280, 720);
    }
}
void worshipCleanup(){
    UnloadTexture(bg_worship);
    UnloadTexture(gfSpeaker_worship);
    UnloadTexture(sarvente_worship);
    UnloadTexture(boyfriend_worship);


}