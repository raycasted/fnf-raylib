// INTERNAL NAME: TestSong
#pragma once
#include "Arrow.hpp"
#include "raylib.h"
#include "CameraEase.hpp"
#include <vector>
// note: maybe move implementations into a cpp file?
Texture2D behindTrain_TestSong;
Texture2D city_TestSong;
Texture2D sky_TestSong;
Texture2D street_TestSong;
Texture2D train_TestSong;
Texture2D win_TestSong;
Texture2D gfSpeaker_TestSong;
Texture2D pico_TestSong;
Texture2D boyfriend_TestSong;
Rectangle gfSpeakerRec_TestSong;

// make sure main.cpp isnt dependant on song.hpp
int frameCounter_TestSong = 0;
int currentFrame_TestSong = 0;
int currentFrame2_TestSong = 0;
int trainSpeed_TestSong = -1280;
// framerate of all animations
int framesSpeed_TestSong = 15;
int TestSong_tempo = 1000; // pretty sure this is 1 second per 1 second of song?
// if this is release, change it to 410
int TestSong_offset = 240; // offset for when the notes spawn
// NOTE: if there is no chart provided, game will immediately segfault
// NOTE: instrumental and player voices have to be EXACT same length, otherwise desync will occur
// TODO: chart editor PLEASE MAKE IT
// this is the actual chart, this is called during song selection
void TestSong_Hard(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList){
    // AUTO-GENERATED CHART

Arrow arrow0(down);
arrow0.speed = TestSong_tempo;
arrow0.pos.y = 6951.0 + TestSong_offset;
arrow0.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow0);

Arrow arrow1(right);
arrow1.speed = TestSong_tempo;
arrow1.pos.y = 7058.0 + TestSong_offset;
arrow1.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow1);

Arrow arrow2(left);
arrow2.speed = TestSong_tempo;
arrow2.pos.y = 7165.0 + TestSong_offset;
arrow2.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow2);

Arrow arrow3(left);
arrow3.speed = TestSong_tempo;
arrow3.pos.y = 7272.0 + TestSong_offset;
arrow3.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow3);

Arrow arrow4(down);
arrow4.speed = TestSong_tempo;
arrow4.pos.y = 7379.0 + TestSong_offset;
arrow4.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow4);

Arrow arrow5(right);
arrow5.speed = TestSong_tempo;
arrow5.pos.y = 7486.0 + TestSong_offset;
arrow5.side = computerSide;
arrow5.trailSize = 228;
computerArrowList->insert(computerArrowList->begin(), arrow5);

Arrow arrow6(up);
arrow6.speed = TestSong_tempo;
arrow6.pos.y = 7700.0 + TestSong_offset;
arrow6.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow6);

Arrow arrow7(left);
arrow7.speed = TestSong_tempo;
arrow7.pos.y = 7807.0 + TestSong_offset;
arrow7.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow7);

Arrow arrow8(up);
arrow8.speed = TestSong_tempo;
arrow8.pos.y = 7914.0 + TestSong_offset;
arrow8.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow8);

Arrow arrow9(right);
arrow9.speed = TestSong_tempo;
arrow9.pos.y = 8021.0 + TestSong_offset;
arrow9.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow9);

Arrow arrow10(left);
arrow10.speed = TestSong_tempo;
arrow10.pos.y = 8074.0 + TestSong_offset;
arrow10.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow10);

Arrow arrow11(right);
arrow11.speed = TestSong_tempo;
arrow11.pos.y = 8128.0 + TestSong_offset;
arrow11.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow11);

Arrow arrow12(right);
arrow12.speed = TestSong_tempo;
arrow12.pos.y = 8235.0 + TestSong_offset;
arrow12.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow12);

Arrow arrow13(down);
arrow13.speed = TestSong_tempo;
arrow13.pos.y = 8341.0 + TestSong_offset;
arrow13.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow13);

Arrow arrow14(down);
arrow14.speed = TestSong_tempo;
arrow14.pos.y = 8662.0 + TestSong_offset;
arrow14.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow14);

Arrow arrow15(right);
arrow15.speed = TestSong_tempo;
arrow15.pos.y = 8770.0 + TestSong_offset;
arrow15.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow15);

Arrow arrow16(left);
arrow16.speed = TestSong_tempo;
arrow16.pos.y = 8876.0 + TestSong_offset;
arrow16.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow16);

Arrow arrow17(left);
arrow17.speed = TestSong_tempo;
arrow17.pos.y = 8983.0 + TestSong_offset;
arrow17.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow17);

Arrow arrow18(down);
arrow18.speed = TestSong_tempo;
arrow18.pos.y = 9090.0 + TestSong_offset;
arrow18.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow18);

Arrow arrow19(right);
arrow19.speed = TestSong_tempo;
arrow19.pos.y = 9197.0 + TestSong_offset;
arrow19.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow19);

Arrow arrow20(up);
arrow20.speed = TestSong_tempo;
arrow20.pos.y = 9304.0 + TestSong_offset;
arrow20.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow20);

Arrow arrow21(right);
arrow21.speed = TestSong_tempo;
arrow21.pos.y = 9411.0 + TestSong_offset;
arrow21.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow21);

Arrow arrow22(down);
arrow22.speed = TestSong_tempo;
arrow22.pos.y = 9518.0 + TestSong_offset;
arrow22.side = computerSide;
arrow22.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow22);

Arrow arrow23(right);
arrow23.speed = TestSong_tempo;
arrow23.pos.y = 9625.0 + TestSong_offset;
arrow23.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow23);

Arrow arrow24(up);
arrow24.speed = TestSong_tempo;
arrow24.pos.y = 9732.0 + TestSong_offset;
arrow24.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow24);

Arrow arrow25(down);
arrow25.speed = TestSong_tempo;
arrow25.pos.y = 9839.0 + TestSong_offset;
arrow25.side = computerSide;
arrow25.trailSize = 114;
computerArrowList->insert(computerArrowList->begin(), arrow25);

Arrow arrow26(right);
arrow26.speed = TestSong_tempo;
arrow26.pos.y = 9946.0 + TestSong_offset;
arrow26.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow26);

Arrow arrow27(down);
arrow27.speed = TestSong_tempo;
arrow27.pos.y = 10052.0 + TestSong_offset;
arrow27.side = computerSide;
arrow27.trailSize = 205;
computerArrowList->insert(computerArrowList->begin(), arrow27);

Arrow arrow28(down);
arrow28.speed = TestSong_tempo;
arrow28.pos.y = 10374.0 + TestSong_offset;
arrow28.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow28);

Arrow arrow29(right);
arrow29.speed = TestSong_tempo;
arrow29.pos.y = 10481.0 + TestSong_offset;
arrow29.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow29);

Arrow arrow30(left);
arrow30.speed = TestSong_tempo;
arrow30.pos.y = 10588.0 + TestSong_offset;
arrow30.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow30);

Arrow arrow31(left);
arrow31.speed = TestSong_tempo;
arrow31.pos.y = 10694.0 + TestSong_offset;
arrow31.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow31);

Arrow arrow32(down);
arrow32.speed = TestSong_tempo;
arrow32.pos.y = 10801.0 + TestSong_offset;
arrow32.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow32);

Arrow arrow33(right);
arrow33.speed = TestSong_tempo;
arrow33.pos.y = 10908.0 + TestSong_offset;
arrow33.side = playerSide;
arrow33.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow33);

Arrow arrow34(up);
arrow34.speed = TestSong_tempo;
arrow34.pos.y = 11122.0 + TestSong_offset;
arrow34.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow34);

Arrow arrow35(left);
arrow35.speed = TestSong_tempo;
arrow35.pos.y = 11229.0 + TestSong_offset;
arrow35.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow35);

Arrow arrow36(up);
arrow36.speed = TestSong_tempo;
arrow36.pos.y = 11336.0 + TestSong_offset;
arrow36.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow36);

Arrow arrow37(right);
arrow37.speed = TestSong_tempo;
arrow37.pos.y = 11443.0 + TestSong_offset;
arrow37.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow37);

Arrow arrow38(left);
arrow38.speed = TestSong_tempo;
arrow38.pos.y = 11497.0 + TestSong_offset;
arrow38.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow38);

Arrow arrow39(right);
arrow39.speed = TestSong_tempo;
arrow39.pos.y = 11550.0 + TestSong_offset;
arrow39.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow39);

Arrow arrow40(right);
arrow40.speed = TestSong_tempo;
arrow40.pos.y = 11657.0 + TestSong_offset;
arrow40.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow40);

Arrow arrow41(down);
arrow41.speed = TestSong_tempo;
arrow41.pos.y = 11764.0 + TestSong_offset;
arrow41.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow41);

Arrow arrow42(down);
arrow42.speed = TestSong_tempo;
arrow42.pos.y = 12085.0 + TestSong_offset;
arrow42.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow42);

Arrow arrow43(right);
arrow43.speed = TestSong_tempo;
arrow43.pos.y = 12192.0 + TestSong_offset;
arrow43.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow43);

Arrow arrow44(left);
arrow44.speed = TestSong_tempo;
arrow44.pos.y = 12299.0 + TestSong_offset;
arrow44.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow44);

Arrow arrow45(left);
arrow45.speed = TestSong_tempo;
arrow45.pos.y = 12405.0 + TestSong_offset;
arrow45.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow45);

Arrow arrow46(down);
arrow46.speed = TestSong_tempo;
arrow46.pos.y = 12512.0 + TestSong_offset;
arrow46.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow46);

Arrow arrow47(right);
arrow47.speed = TestSong_tempo;
arrow47.pos.y = 12620.0 + TestSong_offset;
arrow47.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow47);

Arrow arrow48(up);
arrow48.speed = TestSong_tempo;
arrow48.pos.y = 12727.0 + TestSong_offset;
arrow48.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow48);

Arrow arrow49(right);
arrow49.speed = TestSong_tempo;
arrow49.pos.y = 12834.0 + TestSong_offset;
arrow49.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow49);

Arrow arrow50(down);
arrow50.speed = TestSong_tempo;
arrow50.pos.y = 12941.0 + TestSong_offset;
arrow50.side = playerSide;
arrow50.trailSize = 136;
playerArrowList->insert(playerArrowList->begin(), arrow50);

Arrow arrow51(right);
arrow51.speed = TestSong_tempo;
arrow51.pos.y = 13047.0 + TestSong_offset;
arrow51.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow51);

Arrow arrow52(up);
arrow52.speed = TestSong_tempo;
arrow52.pos.y = 13154.0 + TestSong_offset;
arrow52.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow52);

Arrow arrow53(down);
arrow53.speed = TestSong_tempo;
arrow53.pos.y = 13261.0 + TestSong_offset;
arrow53.side = playerSide;
arrow53.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow53);

Arrow arrow54(right);
arrow54.speed = TestSong_tempo;
arrow54.pos.y = 13368.0 + TestSong_offset;
arrow54.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow54);

Arrow arrow55(down);
arrow55.speed = TestSong_tempo;
arrow55.pos.y = 13475.0 + TestSong_offset;
arrow55.side = playerSide;
arrow55.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow55);

Arrow arrow56(up);
arrow56.speed = TestSong_tempo;
arrow56.pos.y = 13797.0 + TestSong_offset;
arrow56.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow56);

Arrow arrow57(right);
arrow57.speed = TestSong_tempo;
arrow57.pos.y = 13904.0 + TestSong_offset;
arrow57.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow57);

Arrow arrow58(right);
arrow58.speed = TestSong_tempo;
arrow58.pos.y = 14011.0 + TestSong_offset;
arrow58.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow58);

Arrow arrow59(up);
arrow59.speed = TestSong_tempo;
arrow59.pos.y = 14118.0 + TestSong_offset;
arrow59.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow59);

Arrow arrow60(left);
arrow60.speed = TestSong_tempo;
arrow60.pos.y = 14225.0 + TestSong_offset;
arrow60.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow60);

Arrow arrow61(down);
arrow61.speed = TestSong_tempo;
arrow61.pos.y = 14438.0 + TestSong_offset;
arrow61.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow61);

Arrow arrow62(right);
arrow62.speed = TestSong_tempo;
arrow62.pos.y = 14545.0 + TestSong_offset;
arrow62.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow62);

Arrow arrow63(down);
arrow63.speed = TestSong_tempo;
arrow63.pos.y = 14652.0 + TestSong_offset;
arrow63.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow63);

Arrow arrow64(left);
arrow64.speed = TestSong_tempo;
arrow64.pos.y = 14760.0 + TestSong_offset;
arrow64.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow64);

Arrow arrow65(right);
arrow65.speed = TestSong_tempo;
arrow65.pos.y = 14866.0 + TestSong_offset;
arrow65.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow65);

Arrow arrow66(up);
arrow66.speed = TestSong_tempo;
arrow66.pos.y = 14973.0 + TestSong_offset;
arrow66.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow66);

Arrow arrow67(right);
arrow67.speed = TestSong_tempo;
arrow67.pos.y = 15080.0 + TestSong_offset;
arrow67.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow67);

Arrow arrow68(left);
arrow68.speed = TestSong_tempo;
arrow68.pos.y = 15187.0 + TestSong_offset;
arrow68.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow68);

Arrow arrow69(down);
arrow69.speed = TestSong_tempo;
arrow69.pos.y = 15294.0 + TestSong_offset;
arrow69.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow69);

Arrow arrow70(up);
arrow70.speed = TestSong_tempo;
arrow70.pos.y = 15508.0 + TestSong_offset;
arrow70.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow70);

Arrow arrow71(right);
arrow71.speed = TestSong_tempo;
arrow71.pos.y = 15615.0 + TestSong_offset;
arrow71.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow71);

Arrow arrow72(right);
arrow72.speed = TestSong_tempo;
arrow72.pos.y = 15722.0 + TestSong_offset;
arrow72.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow72);

Arrow arrow73(down);
arrow73.speed = TestSong_tempo;
arrow73.pos.y = 15829.0 + TestSong_offset;
arrow73.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow73);

Arrow arrow74(left);
arrow74.speed = TestSong_tempo;
arrow74.pos.y = 15936.0 + TestSong_offset;
arrow74.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow74);

Arrow arrow75(up);
arrow75.speed = TestSong_tempo;
arrow75.pos.y = 16150.0 + TestSong_offset;
arrow75.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow75);

Arrow arrow76(right);
arrow76.speed = TestSong_tempo;
arrow76.pos.y = 16257.0 + TestSong_offset;
arrow76.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow76);

Arrow arrow77(left);
arrow77.speed = TestSong_tempo;
arrow77.pos.y = 16364.0 + TestSong_offset;
arrow77.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow77);

Arrow arrow78(down);
arrow78.speed = TestSong_tempo;
arrow78.pos.y = 16471.0 + TestSong_offset;
arrow78.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow78);

Arrow arrow79(right);
arrow79.speed = TestSong_tempo;
arrow79.pos.y = 16578.0 + TestSong_offset;
arrow79.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow79);

Arrow arrow80(left);
arrow80.speed = TestSong_tempo;
arrow80.pos.y = 16684.0 + TestSong_offset;
arrow80.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow80);

Arrow arrow81(up);
arrow81.speed = TestSong_tempo;
arrow81.pos.y = 16791.0 + TestSong_offset;
arrow81.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow81);

Arrow arrow82(left);
arrow82.speed = TestSong_tempo;
arrow82.pos.y = 16898.0 + TestSong_offset;
arrow82.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow82);

Arrow arrow83(down);
arrow83.speed = TestSong_tempo;
arrow83.pos.y = 17005.0 + TestSong_offset;
arrow83.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow83);

Arrow arrow84(up);
arrow84.speed = TestSong_tempo;
arrow84.pos.y = 17218.0 + TestSong_offset;
arrow84.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow84);

Arrow arrow85(right);
arrow85.speed = TestSong_tempo;
arrow85.pos.y = 17325.0 + TestSong_offset;
arrow85.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow85);

Arrow arrow86(right);
arrow86.speed = TestSong_tempo;
arrow86.pos.y = 17432.0 + TestSong_offset;
arrow86.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow86);

Arrow arrow87(up);
arrow87.speed = TestSong_tempo;
arrow87.pos.y = 17540.0 + TestSong_offset;
arrow87.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow87);

Arrow arrow88(left);
arrow88.speed = TestSong_tempo;
arrow88.pos.y = 17647.0 + TestSong_offset;
arrow88.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow88);

Arrow arrow89(right);
arrow89.speed = TestSong_tempo;
arrow89.pos.y = 17753.0 + TestSong_offset;
arrow89.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow89);

Arrow arrow90(down);
arrow90.speed = TestSong_tempo;
arrow90.pos.y = 17860.0 + TestSong_offset;
arrow90.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow90);

Arrow arrow91(right);
arrow91.speed = TestSong_tempo;
arrow91.pos.y = 17967.0 + TestSong_offset;
arrow91.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow91);

Arrow arrow92(down);
arrow92.speed = TestSong_tempo;
arrow92.pos.y = 18074.0 + TestSong_offset;
arrow92.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow92);

Arrow arrow93(left);
arrow93.speed = TestSong_tempo;
arrow93.pos.y = 18181.0 + TestSong_offset;
arrow93.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow93);

Arrow arrow94(right);
arrow94.speed = TestSong_tempo;
arrow94.pos.y = 18288.0 + TestSong_offset;
arrow94.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow94);

Arrow arrow95(up);
arrow95.speed = TestSong_tempo;
arrow95.pos.y = 18395.0 + TestSong_offset;
arrow95.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow95);

Arrow arrow96(right);
arrow96.speed = TestSong_tempo;
arrow96.pos.y = 18502.0 + TestSong_offset;
arrow96.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow96);

Arrow arrow97(left);
arrow97.speed = TestSong_tempo;
arrow97.pos.y = 18609.0 + TestSong_offset;
arrow97.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow97);

Arrow arrow98(down);
arrow98.speed = TestSong_tempo;
arrow98.pos.y = 18716.0 + TestSong_offset;
arrow98.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow98);

Arrow arrow99(up);
arrow99.speed = TestSong_tempo;
arrow99.pos.y = 18930.0 + TestSong_offset;
arrow99.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow99);

Arrow arrow100(right);
arrow100.speed = TestSong_tempo;
arrow100.pos.y = 19037.0 + TestSong_offset;
arrow100.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow100);

Arrow arrow101(right);
arrow101.speed = TestSong_tempo;
arrow101.pos.y = 19144.0 + TestSong_offset;
arrow101.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow101);

Arrow arrow102(down);
arrow102.speed = TestSong_tempo;
arrow102.pos.y = 19251.0 + TestSong_offset;
arrow102.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow102);

Arrow arrow103(left);
arrow103.speed = TestSong_tempo;
arrow103.pos.y = 19358.0 + TestSong_offset;
arrow103.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow103);

Arrow arrow104(right);
arrow104.speed = TestSong_tempo;
arrow104.pos.y = 19464.0 + TestSong_offset;
arrow104.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow104);

Arrow arrow105(up);
arrow105.speed = TestSong_tempo;
arrow105.pos.y = 19571.0 + TestSong_offset;
arrow105.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow105);

Arrow arrow106(right);
arrow106.speed = TestSong_tempo;
arrow106.pos.y = 19678.0 + TestSong_offset;
arrow106.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow106);

Arrow arrow107(left);
arrow107.speed = TestSong_tempo;
arrow107.pos.y = 19785.0 + TestSong_offset;
arrow107.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow107);

Arrow arrow108(down);
arrow108.speed = TestSong_tempo;
arrow108.pos.y = 19892.0 + TestSong_offset;
arrow108.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow108);

Arrow arrow109(right);
arrow109.speed = TestSong_tempo;
arrow109.pos.y = 20000.0 + TestSong_offset;
arrow109.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow109);

Arrow arrow110(left);
arrow110.speed = TestSong_tempo;
arrow110.pos.y = 20107.0 + TestSong_offset;
arrow110.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow110);

Arrow arrow111(up);
arrow111.speed = TestSong_tempo;
arrow111.pos.y = 20213.0 + TestSong_offset;
arrow111.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow111);

Arrow arrow112(left);
arrow112.speed = TestSong_tempo;
arrow112.pos.y = 20320.0 + TestSong_offset;
arrow112.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow112);

Arrow arrow113(down);
arrow113.speed = TestSong_tempo;
arrow113.pos.y = 20427.0 + TestSong_offset;
arrow113.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow113);

Arrow arrow114(left);
arrow114.speed = TestSong_tempo;
arrow114.pos.y = 20641.0 + TestSong_offset;
arrow114.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow114);

Arrow arrow115(up);
arrow115.speed = TestSong_tempo;
arrow115.pos.y = 20748.0 + TestSong_offset;
arrow115.side = computerSide;
arrow115.trailSize = 273;
computerArrowList->insert(computerArrowList->begin(), arrow115);

Arrow arrow116(right);
arrow116.speed = TestSong_tempo;
arrow116.pos.y = 20962.0 + TestSong_offset;
arrow116.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow116);

Arrow arrow117(right);
arrow117.speed = TestSong_tempo;
arrow117.pos.y = 21069.0 + TestSong_offset;
arrow117.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow117);

Arrow arrow118(down);
arrow118.speed = TestSong_tempo;
arrow118.pos.y = 21176.0 + TestSong_offset;
arrow118.side = computerSide;
arrow118.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow118);

Arrow arrow119(up);
arrow119.speed = TestSong_tempo;
arrow119.pos.y = 21390.0 + TestSong_offset;
arrow119.side = computerSide;
arrow119.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow119);

Arrow arrow120(right);
arrow120.speed = TestSong_tempo;
arrow120.pos.y = 21604.0 + TestSong_offset;
arrow120.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow120);

Arrow arrow121(up);
arrow121.speed = TestSong_tempo;
arrow121.pos.y = 21817.0 + TestSong_offset;
arrow121.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow121);

Arrow arrow122(left);
arrow122.speed = TestSong_tempo;
arrow122.pos.y = 22031.0 + TestSong_offset;
arrow122.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow122);

Arrow arrow123(right);
arrow123.speed = TestSong_tempo;
arrow123.pos.y = 22138.0 + TestSong_offset;
arrow123.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow123);

Arrow arrow124(left);
arrow124.speed = TestSong_tempo;
arrow124.pos.y = 22352.0 + TestSong_offset;
arrow124.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow124);

Arrow arrow125(up);
arrow125.speed = TestSong_tempo;
arrow125.pos.y = 22459.0 + TestSong_offset;
arrow125.side = computerSide;
arrow125.trailSize = 319;
computerArrowList->insert(computerArrowList->begin(), arrow125);

Arrow arrow126(right);
arrow126.speed = TestSong_tempo;
arrow126.pos.y = 22673.0 + TestSong_offset;
arrow126.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow126);

Arrow arrow127(right);
arrow127.speed = TestSong_tempo;
arrow127.pos.y = 22780.0 + TestSong_offset;
arrow127.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow127);

Arrow arrow128(down);
arrow128.speed = TestSong_tempo;
arrow128.pos.y = 22887.0 + TestSong_offset;
arrow128.side = computerSide;
arrow128.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow128);

Arrow arrow129(left);
arrow129.speed = TestSong_tempo;
arrow129.pos.y = 23101.0 + TestSong_offset;
arrow129.side = computerSide;
arrow129.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow129);

Arrow arrow130(down);
arrow130.speed = TestSong_tempo;
arrow130.pos.y = 23315.0 + TestSong_offset;
arrow130.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow130);

Arrow arrow131(right);
arrow131.speed = TestSong_tempo;
arrow131.pos.y = 23529.0 + TestSong_offset;
arrow131.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow131);

Arrow arrow132(right);
arrow132.speed = TestSong_tempo;
arrow132.pos.y = 23582.0 + TestSong_offset;
arrow132.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow132);

Arrow arrow133(down);
arrow133.speed = TestSong_tempo;
arrow133.pos.y = 23635.0 + TestSong_offset;
arrow133.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow133);

Arrow arrow134(up);
arrow134.speed = TestSong_tempo;
arrow134.pos.y = 23742.0 + TestSong_offset;
arrow134.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow134);

Arrow arrow135(right);
arrow135.speed = TestSong_tempo;
arrow135.pos.y = 23850.0 + TestSong_offset;
arrow135.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow135);

Arrow arrow136(left);
arrow136.speed = TestSong_tempo;
arrow136.pos.y = 24064.0 + TestSong_offset;
arrow136.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow136);

Arrow arrow137(up);
arrow137.speed = TestSong_tempo;
arrow137.pos.y = 24170.0 + TestSong_offset;
arrow137.side = playerSide;
arrow137.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow137);

Arrow arrow138(right);
arrow138.speed = TestSong_tempo;
arrow138.pos.y = 24384.0 + TestSong_offset;
arrow138.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow138);

Arrow arrow139(right);
arrow139.speed = TestSong_tempo;
arrow139.pos.y = 24491.0 + TestSong_offset;
arrow139.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow139);

Arrow arrow140(down);
arrow140.speed = TestSong_tempo;
arrow140.pos.y = 24598.0 + TestSong_offset;
arrow140.side = playerSide;
arrow140.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow140);

Arrow arrow141(up);
arrow141.speed = TestSong_tempo;
arrow141.pos.y = 24812.0 + TestSong_offset;
arrow141.side = playerSide;
arrow141.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow141);

Arrow arrow142(right);
arrow142.speed = TestSong_tempo;
arrow142.pos.y = 25026.0 + TestSong_offset;
arrow142.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow142);

Arrow arrow143(up);
arrow143.speed = TestSong_tempo;
arrow143.pos.y = 25240.0 + TestSong_offset;
arrow143.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow143);

Arrow arrow144(left);
arrow144.speed = TestSong_tempo;
arrow144.pos.y = 25454.0 + TestSong_offset;
arrow144.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow144);

Arrow arrow145(right);
arrow145.speed = TestSong_tempo;
arrow145.pos.y = 25561.0 + TestSong_offset;
arrow145.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow145);

Arrow arrow146(left);
arrow146.speed = TestSong_tempo;
arrow146.pos.y = 25775.0 + TestSong_offset;
arrow146.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow146);

Arrow arrow147(up);
arrow147.speed = TestSong_tempo;
arrow147.pos.y = 25882.0 + TestSong_offset;
arrow147.side = playerSide;
arrow147.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow147);

Arrow arrow148(right);
arrow148.speed = TestSong_tempo;
arrow148.pos.y = 26095.0 + TestSong_offset;
arrow148.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow148);

Arrow arrow149(right);
arrow149.speed = TestSong_tempo;
arrow149.pos.y = 26202.0 + TestSong_offset;
arrow149.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow149);

Arrow arrow150(down);
arrow150.speed = TestSong_tempo;
arrow150.pos.y = 26310.0 + TestSong_offset;
arrow150.side = playerSide;
arrow150.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow150);

Arrow arrow151(left);
arrow151.speed = TestSong_tempo;
arrow151.pos.y = 26523.0 + TestSong_offset;
arrow151.side = playerSide;
arrow151.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow151);

Arrow arrow152(down);
arrow152.speed = TestSong_tempo;
arrow152.pos.y = 26737.0 + TestSong_offset;
arrow152.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow152);

Arrow arrow153(right);
arrow153.speed = TestSong_tempo;
arrow153.pos.y = 26951.0 + TestSong_offset;
arrow153.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow153);

Arrow arrow154(right);
arrow154.speed = TestSong_tempo;
arrow154.pos.y = 27005.0 + TestSong_offset;
arrow154.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow154);

Arrow arrow155(down);
arrow155.speed = TestSong_tempo;
arrow155.pos.y = 27058.0 + TestSong_offset;
arrow155.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow155);

Arrow arrow156(up);
arrow156.speed = TestSong_tempo;
arrow156.pos.y = 27165.0 + TestSong_offset;
arrow156.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow156);

Arrow arrow157(right);
arrow157.speed = TestSong_tempo;
arrow157.pos.y = 27272.0 + TestSong_offset;
arrow157.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow157);

Arrow arrow158(left);
arrow158.speed = TestSong_tempo;
arrow158.pos.y = 27379.0 + TestSong_offset;
arrow158.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow158);

Arrow arrow159(left);
arrow159.speed = TestSong_tempo;
arrow159.pos.y = 27486.0 + TestSong_offset;
arrow159.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow159);

Arrow arrow160(right);
arrow160.speed = TestSong_tempo;
arrow160.pos.y = 27593.0 + TestSong_offset;
arrow160.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow160);

Arrow arrow161(down);
arrow161.speed = TestSong_tempo;
arrow161.pos.y = 27700.0 + TestSong_offset;
arrow161.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow161);

Arrow arrow162(right);
arrow162.speed = TestSong_tempo;
arrow162.pos.y = 27754.0 + TestSong_offset;
arrow162.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow162);

Arrow arrow163(down);
arrow163.speed = TestSong_tempo;
arrow163.pos.y = 27807.0 + TestSong_offset;
arrow163.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow163);

Arrow arrow164(left);
arrow164.speed = TestSong_tempo;
arrow164.pos.y = 27914.0 + TestSong_offset;
arrow164.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow164);

Arrow arrow165(down);
arrow165.speed = TestSong_tempo;
arrow165.pos.y = 28021.0 + TestSong_offset;
arrow165.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow165);

Arrow arrow166(left);
arrow166.speed = TestSong_tempo;
arrow166.pos.y = 28128.0 + TestSong_offset;
arrow166.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow166);

Arrow arrow167(up);
arrow167.speed = TestSong_tempo;
arrow167.pos.y = 28235.0 + TestSong_offset;
arrow167.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow167);

Arrow arrow168(up);
arrow168.speed = TestSong_tempo;
arrow168.pos.y = 28342.0 + TestSong_offset;
arrow168.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow168);

Arrow arrow169(left);
arrow169.speed = TestSong_tempo;
arrow169.pos.y = 28449.0 + TestSong_offset;
arrow169.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow169);

Arrow arrow170(right);
arrow170.speed = TestSong_tempo;
arrow170.pos.y = 28556.0 + TestSong_offset;
arrow170.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow170);

Arrow arrow171(down);
arrow171.speed = TestSong_tempo;
arrow171.pos.y = 28663.0 + TestSong_offset;
arrow171.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow171);

Arrow arrow172(left);
arrow172.speed = TestSong_tempo;
arrow172.pos.y = 28770.0 + TestSong_offset;
arrow172.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow172);

Arrow arrow173(down);
arrow173.speed = TestSong_tempo;
arrow173.pos.y = 28823.0 + TestSong_offset;
arrow173.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow173);

Arrow arrow174(left);
arrow174.speed = TestSong_tempo;
arrow174.pos.y = 28877.0 + TestSong_offset;
arrow174.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow174);

Arrow arrow175(up);
arrow175.speed = TestSong_tempo;
arrow175.pos.y = 28984.0 + TestSong_offset;
arrow175.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow175);

Arrow arrow176(right);
arrow176.speed = TestSong_tempo;
arrow176.pos.y = 29090.0 + TestSong_offset;
arrow176.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow176);

Arrow arrow177(right);
arrow177.speed = TestSong_tempo;
arrow177.pos.y = 29197.0 + TestSong_offset;
arrow177.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow177);

Arrow arrow178(left);
arrow178.speed = TestSong_tempo;
arrow178.pos.y = 29305.0 + TestSong_offset;
arrow178.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow178);

Arrow arrow179(up);
arrow179.speed = TestSong_tempo;
arrow179.pos.y = 29411.0 + TestSong_offset;
arrow179.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow179);

Arrow arrow180(left);
arrow180.speed = TestSong_tempo;
arrow180.pos.y = 29465.0 + TestSong_offset;
arrow180.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow180);

Arrow arrow181(up);
arrow181.speed = TestSong_tempo;
arrow181.pos.y = 29518.0 + TestSong_offset;
arrow181.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow181);

Arrow arrow182(down);
arrow182.speed = TestSong_tempo;
arrow182.pos.y = 29625.0 + TestSong_offset;
arrow182.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow182);

Arrow arrow183(right);
arrow183.speed = TestSong_tempo;
arrow183.pos.y = 29732.0 + TestSong_offset;
arrow183.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow183);

Arrow arrow184(up);
arrow184.speed = TestSong_tempo;
arrow184.pos.y = 29840.0 + TestSong_offset;
arrow184.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow184);

Arrow arrow185(left);
arrow185.speed = TestSong_tempo;
arrow185.pos.y = 29946.0 + TestSong_offset;
arrow185.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow185);

Arrow arrow186(left);
arrow186.speed = TestSong_tempo;
arrow186.pos.y = 30053.0 + TestSong_offset;
arrow186.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow186);

Arrow arrow187(right);
arrow187.speed = TestSong_tempo;
arrow187.pos.y = 30160.0 + TestSong_offset;
arrow187.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow187);

Arrow arrow188(right);
arrow188.speed = TestSong_tempo;
arrow188.pos.y = 30267.0 + TestSong_offset;
arrow188.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow188);

Arrow arrow189(left);
arrow189.speed = TestSong_tempo;
arrow189.pos.y = 30374.0 + TestSong_offset;
arrow189.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow189);

Arrow arrow190(up);
arrow190.speed = TestSong_tempo;
arrow190.pos.y = 30481.0 + TestSong_offset;
arrow190.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow190);

Arrow arrow191(left);
arrow191.speed = TestSong_tempo;
arrow191.pos.y = 30588.0 + TestSong_offset;
arrow191.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow191);

Arrow arrow192(down);
arrow192.speed = TestSong_tempo;
arrow192.pos.y = 30695.0 + TestSong_offset;
arrow192.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow192);

Arrow arrow193(left);
arrow193.speed = TestSong_tempo;
arrow193.pos.y = 30801.0 + TestSong_offset;
arrow193.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow193);

Arrow arrow194(left);
arrow194.speed = TestSong_tempo;
arrow194.pos.y = 30908.0 + TestSong_offset;
arrow194.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow194);

Arrow arrow195(right);
arrow195.speed = TestSong_tempo;
arrow195.pos.y = 31015.0 + TestSong_offset;
arrow195.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow195);

Arrow arrow196(down);
arrow196.speed = TestSong_tempo;
arrow196.pos.y = 31122.0 + TestSong_offset;
arrow196.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow196);

Arrow arrow197(right);
arrow197.speed = TestSong_tempo;
arrow197.pos.y = 31176.0 + TestSong_offset;
arrow197.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow197);

Arrow arrow198(down);
arrow198.speed = TestSong_tempo;
arrow198.pos.y = 31229.0 + TestSong_offset;
arrow198.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow198);

Arrow arrow199(left);
arrow199.speed = TestSong_tempo;
arrow199.pos.y = 31336.0 + TestSong_offset;
arrow199.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow199);

Arrow arrow200(down);
arrow200.speed = TestSong_tempo;
arrow200.pos.y = 31443.0 + TestSong_offset;
arrow200.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow200);

Arrow arrow201(left);
arrow201.speed = TestSong_tempo;
arrow201.pos.y = 31550.0 + TestSong_offset;
arrow201.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow201);

Arrow arrow202(up);
arrow202.speed = TestSong_tempo;
arrow202.pos.y = 31657.0 + TestSong_offset;
arrow202.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow202);

Arrow arrow203(up);
arrow203.speed = TestSong_tempo;
arrow203.pos.y = 31764.0 + TestSong_offset;
arrow203.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow203);

Arrow arrow204(left);
arrow204.speed = TestSong_tempo;
arrow204.pos.y = 31871.0 + TestSong_offset;
arrow204.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow204);

Arrow arrow205(right);
arrow205.speed = TestSong_tempo;
arrow205.pos.y = 31978.0 + TestSong_offset;
arrow205.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow205);

Arrow arrow206(down);
arrow206.speed = TestSong_tempo;
arrow206.pos.y = 32085.0 + TestSong_offset;
arrow206.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow206);

Arrow arrow207(left);
arrow207.speed = TestSong_tempo;
arrow207.pos.y = 32192.0 + TestSong_offset;
arrow207.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow207);

Arrow arrow208(down);
arrow208.speed = TestSong_tempo;
arrow208.pos.y = 32245.0 + TestSong_offset;
arrow208.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow208);

Arrow arrow209(left);
arrow209.speed = TestSong_tempo;
arrow209.pos.y = 32299.0 + TestSong_offset;
arrow209.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow209);

Arrow arrow210(up);
arrow210.speed = TestSong_tempo;
arrow210.pos.y = 32406.0 + TestSong_offset;
arrow210.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow210);

Arrow arrow211(right);
arrow211.speed = TestSong_tempo;
arrow211.pos.y = 32512.0 + TestSong_offset;
arrow211.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow211);

Arrow arrow212(right);
arrow212.speed = TestSong_tempo;
arrow212.pos.y = 32620.0 + TestSong_offset;
arrow212.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow212);

Arrow arrow213(left);
arrow213.speed = TestSong_tempo;
arrow213.pos.y = 32727.0 + TestSong_offset;
arrow213.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow213);

Arrow arrow214(up);
arrow214.speed = TestSong_tempo;
arrow214.pos.y = 32834.0 + TestSong_offset;
arrow214.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow214);

Arrow arrow215(left);
arrow215.speed = TestSong_tempo;
arrow215.pos.y = 32887.0 + TestSong_offset;
arrow215.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow215);

Arrow arrow216(up);
arrow216.speed = TestSong_tempo;
arrow216.pos.y = 32941.0 + TestSong_offset;
arrow216.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow216);

Arrow arrow217(down);
arrow217.speed = TestSong_tempo;
arrow217.pos.y = 33047.0 + TestSong_offset;
arrow217.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow217);

Arrow arrow218(down);
arrow218.speed = TestSong_tempo;
arrow218.pos.y = 33048.0 + TestSong_offset;
arrow218.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow218);

Arrow arrow219(left);
arrow219.speed = TestSong_tempo;
arrow219.pos.y = 33154.0 + TestSong_offset;
arrow219.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow219);

Arrow arrow220(right);
arrow220.speed = TestSong_tempo;
arrow220.pos.y = 33155.0 + TestSong_offset;
arrow220.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow220);

Arrow arrow221(left);
arrow221.speed = TestSong_tempo;
arrow221.pos.y = 33261.0 + TestSong_offset;
arrow221.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow221);

Arrow arrow222(up);
arrow222.speed = TestSong_tempo;
arrow222.pos.y = 33261.0 + TestSong_offset;
arrow222.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow222);

Arrow arrow223(right);
arrow223.speed = TestSong_tempo;
arrow223.pos.y = 33368.0 + TestSong_offset;
arrow223.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow223);

Arrow arrow224(left);
arrow224.speed = TestSong_tempo;
arrow224.pos.y = 33368.0 + TestSong_offset;
arrow224.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow224);

Arrow arrow225(right);
arrow225.speed = TestSong_tempo;
arrow225.pos.y = 33475.0 + TestSong_offset;
arrow225.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow225);

Arrow arrow226(left);
arrow226.speed = TestSong_tempo;
arrow226.pos.y = 33475.0 + TestSong_offset;
arrow226.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow226);

Arrow arrow227(up);
arrow227.speed = TestSong_tempo;
arrow227.pos.y = 33582.0 + TestSong_offset;
arrow227.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow227);

Arrow arrow228(right);
arrow228.speed = TestSong_tempo;
arrow228.pos.y = 33582.0 + TestSong_offset;
arrow228.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow228);

Arrow arrow229(right);
arrow229.speed = TestSong_tempo;
arrow229.pos.y = 33689.0 + TestSong_offset;
arrow229.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow229);

Arrow arrow230(right);
arrow230.speed = TestSong_tempo;
arrow230.pos.y = 33690.0 + TestSong_offset;
arrow230.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow230);

Arrow arrow231(up);
arrow231.speed = TestSong_tempo;
arrow231.pos.y = 33796.0 + TestSong_offset;
arrow231.side = computerSide;
arrow231.trailSize = 296;
computerArrowList->insert(computerArrowList->begin(), arrow231);

Arrow arrow232(left);
arrow232.speed = TestSong_tempo;
arrow232.pos.y = 33797.0 + TestSong_offset;
arrow232.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow232);

Arrow arrow233(up);
arrow233.speed = TestSong_tempo;
arrow233.pos.y = 33903.0 + TestSong_offset;
arrow233.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow233);

Arrow arrow234(right);
arrow234.speed = TestSong_tempo;
arrow234.pos.y = 34010.0 + TestSong_offset;
arrow234.side = computerSide;
arrow234.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow234);

Arrow arrow235(left);
arrow235.speed = TestSong_tempo;
arrow235.pos.y = 34010.0 + TestSong_offset;
arrow235.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow235);

Arrow arrow236(down);
arrow236.speed = TestSong_tempo;
arrow236.pos.y = 34117.0 + TestSong_offset;
arrow236.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow236);

Arrow arrow237(left);
arrow237.speed = TestSong_tempo;
arrow237.pos.y = 34224.0 + TestSong_offset;
arrow237.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow237);

Arrow arrow238(left);
arrow238.speed = TestSong_tempo;
arrow238.pos.y = 34331.0 + TestSong_offset;
arrow238.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow238);

Arrow arrow239(right);
arrow239.speed = TestSong_tempo;
arrow239.pos.y = 34438.0 + TestSong_offset;
arrow239.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow239);

Arrow arrow240(down);
arrow240.speed = TestSong_tempo;
arrow240.pos.y = 34545.0 + TestSong_offset;
arrow240.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow240);

Arrow arrow241(right);
arrow241.speed = TestSong_tempo;
arrow241.pos.y = 34599.0 + TestSong_offset;
arrow241.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow241);

Arrow arrow242(down);
arrow242.speed = TestSong_tempo;
arrow242.pos.y = 34652.0 + TestSong_offset;
arrow242.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow242);

Arrow arrow243(left);
arrow243.speed = TestSong_tempo;
arrow243.pos.y = 34759.0 + TestSong_offset;
arrow243.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow243);

Arrow arrow244(down);
arrow244.speed = TestSong_tempo;
arrow244.pos.y = 34866.0 + TestSong_offset;
arrow244.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow244);

Arrow arrow245(left);
arrow245.speed = TestSong_tempo;
arrow245.pos.y = 34973.0 + TestSong_offset;
arrow245.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow245);

Arrow arrow246(up);
arrow246.speed = TestSong_tempo;
arrow246.pos.y = 35080.0 + TestSong_offset;
arrow246.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow246);

Arrow arrow247(up);
arrow247.speed = TestSong_tempo;
arrow247.pos.y = 35187.0 + TestSong_offset;
arrow247.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow247);

Arrow arrow248(left);
arrow248.speed = TestSong_tempo;
arrow248.pos.y = 35294.0 + TestSong_offset;
arrow248.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow248);

Arrow arrow249(right);
arrow249.speed = TestSong_tempo;
arrow249.pos.y = 35401.0 + TestSong_offset;
arrow249.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow249);

Arrow arrow250(down);
arrow250.speed = TestSong_tempo;
arrow250.pos.y = 35508.0 + TestSong_offset;
arrow250.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow250);

Arrow arrow251(left);
arrow251.speed = TestSong_tempo;
arrow251.pos.y = 35615.0 + TestSong_offset;
arrow251.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow251);

Arrow arrow252(down);
arrow252.speed = TestSong_tempo;
arrow252.pos.y = 35668.0 + TestSong_offset;
arrow252.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow252);

Arrow arrow253(left);
arrow253.speed = TestSong_tempo;
arrow253.pos.y = 35722.0 + TestSong_offset;
arrow253.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow253);

Arrow arrow254(up);
arrow254.speed = TestSong_tempo;
arrow254.pos.y = 35829.0 + TestSong_offset;
arrow254.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow254);

Arrow arrow255(right);
arrow255.speed = TestSong_tempo;
arrow255.pos.y = 35935.0 + TestSong_offset;
arrow255.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow255);

Arrow arrow256(right);
arrow256.speed = TestSong_tempo;
arrow256.pos.y = 36042.0 + TestSong_offset;
arrow256.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow256);

Arrow arrow257(left);
arrow257.speed = TestSong_tempo;
arrow257.pos.y = 36150.0 + TestSong_offset;
arrow257.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow257);

Arrow arrow258(up);
arrow258.speed = TestSong_tempo;
arrow258.pos.y = 36257.0 + TestSong_offset;
arrow258.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow258);

Arrow arrow259(left);
arrow259.speed = TestSong_tempo;
arrow259.pos.y = 36310.0 + TestSong_offset;
arrow259.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow259);

Arrow arrow260(up);
arrow260.speed = TestSong_tempo;
arrow260.pos.y = 36364.0 + TestSong_offset;
arrow260.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow260);

Arrow arrow261(down);
arrow261.speed = TestSong_tempo;
arrow261.pos.y = 36471.0 + TestSong_offset;
arrow261.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow261);

Arrow arrow262(right);
arrow262.speed = TestSong_tempo;
arrow262.pos.y = 36577.0 + TestSong_offset;
arrow262.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow262);

Arrow arrow263(left);
arrow263.speed = TestSong_tempo;
arrow263.pos.y = 36684.0 + TestSong_offset;
arrow263.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow263);

Arrow arrow264(up);
arrow264.speed = TestSong_tempo;
arrow264.pos.y = 36791.0 + TestSong_offset;
arrow264.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow264);

Arrow arrow265(right);
arrow265.speed = TestSong_tempo;
arrow265.pos.y = 36898.0 + TestSong_offset;
arrow265.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow265);

Arrow arrow266(up);
arrow266.speed = TestSong_tempo;
arrow266.pos.y = 37005.0 + TestSong_offset;
arrow266.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow266);

Arrow arrow267(left);
arrow267.speed = TestSong_tempo;
arrow267.pos.y = 37112.0 + TestSong_offset;
arrow267.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow267);

Arrow arrow268(down);
arrow268.speed = TestSong_tempo;
arrow268.pos.y = 37218.0 + TestSong_offset;
arrow268.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow268);

Arrow arrow269(left);
arrow269.speed = TestSong_tempo;
arrow269.pos.y = 37325.0 + TestSong_offset;
arrow269.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow269);

Arrow arrow270(up);
arrow270.speed = TestSong_tempo;
arrow270.pos.y = 37432.0 + TestSong_offset;
arrow270.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow270);

Arrow arrow271(right);
arrow271.speed = TestSong_tempo;
arrow271.pos.y = 37540.0 + TestSong_offset;
arrow271.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow271);

Arrow arrow272(left);
arrow272.speed = TestSong_tempo;
arrow272.pos.y = 37647.0 + TestSong_offset;
arrow272.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow272);

Arrow arrow273(left);
arrow273.speed = TestSong_tempo;
arrow273.pos.y = 37754.0 + TestSong_offset;
arrow273.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow273);

Arrow arrow274(right);
arrow274.speed = TestSong_tempo;
arrow274.pos.y = 37861.0 + TestSong_offset;
arrow274.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow274);

Arrow arrow275(down);
arrow275.speed = TestSong_tempo;
arrow275.pos.y = 37968.0 + TestSong_offset;
arrow275.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow275);

Arrow arrow276(right);
arrow276.speed = TestSong_tempo;
arrow276.pos.y = 38021.0 + TestSong_offset;
arrow276.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow276);

Arrow arrow277(down);
arrow277.speed = TestSong_tempo;
arrow277.pos.y = 38074.0 + TestSong_offset;
arrow277.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow277);

Arrow arrow278(left);
arrow278.speed = TestSong_tempo;
arrow278.pos.y = 38181.0 + TestSong_offset;
arrow278.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow278);

Arrow arrow279(down);
arrow279.speed = TestSong_tempo;
arrow279.pos.y = 38288.0 + TestSong_offset;
arrow279.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow279);

Arrow arrow280(left);
arrow280.speed = TestSong_tempo;
arrow280.pos.y = 38395.0 + TestSong_offset;
arrow280.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow280);

Arrow arrow281(up);
arrow281.speed = TestSong_tempo;
arrow281.pos.y = 38502.0 + TestSong_offset;
arrow281.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow281);

Arrow arrow282(up);
arrow282.speed = TestSong_tempo;
arrow282.pos.y = 38610.0 + TestSong_offset;
arrow282.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow282);

Arrow arrow283(left);
arrow283.speed = TestSong_tempo;
arrow283.pos.y = 38717.0 + TestSong_offset;
arrow283.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow283);

Arrow arrow284(right);
arrow284.speed = TestSong_tempo;
arrow284.pos.y = 38824.0 + TestSong_offset;
arrow284.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow284);

Arrow arrow285(down);
arrow285.speed = TestSong_tempo;
arrow285.pos.y = 38930.0 + TestSong_offset;
arrow285.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow285);

Arrow arrow286(left);
arrow286.speed = TestSong_tempo;
arrow286.pos.y = 39037.0 + TestSong_offset;
arrow286.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow286);

Arrow arrow287(down);
arrow287.speed = TestSong_tempo;
arrow287.pos.y = 39091.0 + TestSong_offset;
arrow287.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow287);

Arrow arrow288(left);
arrow288.speed = TestSong_tempo;
arrow288.pos.y = 39144.0 + TestSong_offset;
arrow288.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow288);

Arrow arrow289(up);
arrow289.speed = TestSong_tempo;
arrow289.pos.y = 39251.0 + TestSong_offset;
arrow289.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow289);

Arrow arrow290(right);
arrow290.speed = TestSong_tempo;
arrow290.pos.y = 39358.0 + TestSong_offset;
arrow290.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow290);

Arrow arrow291(right);
arrow291.speed = TestSong_tempo;
arrow291.pos.y = 39465.0 + TestSong_offset;
arrow291.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow291);

Arrow arrow292(left);
arrow292.speed = TestSong_tempo;
arrow292.pos.y = 39572.0 + TestSong_offset;
arrow292.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow292);

Arrow arrow293(up);
arrow293.speed = TestSong_tempo;
arrow293.pos.y = 39679.0 + TestSong_offset;
arrow293.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow293);

Arrow arrow294(left);
arrow294.speed = TestSong_tempo;
arrow294.pos.y = 39732.0 + TestSong_offset;
arrow294.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow294);

Arrow arrow295(up);
arrow295.speed = TestSong_tempo;
arrow295.pos.y = 39786.0 + TestSong_offset;
arrow295.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow295);

Arrow arrow296(down);
arrow296.speed = TestSong_tempo;
arrow296.pos.y = 39893.0 + TestSong_offset;
arrow296.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow296);

Arrow arrow297(right);
arrow297.speed = TestSong_tempo;
arrow297.pos.y = 40000.0 + TestSong_offset;
arrow297.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow297);

Arrow arrow298(left);
arrow298.speed = TestSong_tempo;
arrow298.pos.y = 40107.0 + TestSong_offset;
arrow298.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow298);

Arrow arrow299(up);
arrow299.speed = TestSong_tempo;
arrow299.pos.y = 40213.0 + TestSong_offset;
arrow299.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow299);

Arrow arrow300(right);
arrow300.speed = TestSong_tempo;
arrow300.pos.y = 40320.0 + TestSong_offset;
arrow300.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow300);

Arrow arrow301(up);
arrow301.speed = TestSong_tempo;
arrow301.pos.y = 40427.0 + TestSong_offset;
arrow301.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow301);

Arrow arrow302(left);
arrow302.speed = TestSong_tempo;
arrow302.pos.y = 40534.0 + TestSong_offset;
arrow302.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow302);

Arrow arrow303(down);
arrow303.speed = TestSong_tempo;
arrow303.pos.y = 40641.0 + TestSong_offset;
arrow303.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow303);

Arrow arrow304(left);
arrow304.speed = TestSong_tempo;
arrow304.pos.y = 40748.0 + TestSong_offset;
arrow304.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow304);

Arrow arrow305(up);
arrow305.speed = TestSong_tempo;
arrow305.pos.y = 40855.0 + TestSong_offset;
arrow305.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow305);

Arrow arrow306(right);
arrow306.speed = TestSong_tempo;
arrow306.pos.y = 40962.0 + TestSong_offset;
arrow306.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow306);

Arrow arrow307(down);
arrow307.speed = TestSong_tempo;
arrow307.pos.y = 41069.0 + TestSong_offset;
arrow307.side = playerSide;
arrow307.trailSize = 318;
playerArrowList->insert(playerArrowList->begin(), arrow307);

Arrow arrow308(left);
arrow308.speed = TestSong_tempo;
arrow308.pos.y = 41176.0 + TestSong_offset;
arrow308.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow308);

Arrow arrow309(up);
arrow309.speed = TestSong_tempo;
arrow309.pos.y = 41282.0 + TestSong_offset;
arrow309.side = computerSide;
arrow309.trailSize = 274;
computerArrowList->insert(computerArrowList->begin(), arrow309);

Arrow arrow310(right);
arrow310.speed = TestSong_tempo;
arrow310.pos.y = 41497.0 + TestSong_offset;
arrow310.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow310);

Arrow arrow311(right);
arrow311.speed = TestSong_tempo;
arrow311.pos.y = 41604.0 + TestSong_offset;
arrow311.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow311);

Arrow arrow312(down);
arrow312.speed = TestSong_tempo;
arrow312.pos.y = 41711.0 + TestSong_offset;
arrow312.side = computerSide;
arrow312.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow312);

Arrow arrow313(up);
arrow313.speed = TestSong_tempo;
arrow313.pos.y = 41924.0 + TestSong_offset;
arrow313.side = computerSide;
arrow313.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow313);

Arrow arrow314(right);
arrow314.speed = TestSong_tempo;
arrow314.pos.y = 42138.0 + TestSong_offset;
arrow314.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow314);

Arrow arrow315(up);
arrow315.speed = TestSong_tempo;
arrow315.pos.y = 42352.0 + TestSong_offset;
arrow315.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow315);

Arrow arrow316(left);
arrow316.speed = TestSong_tempo;
arrow316.pos.y = 42566.0 + TestSong_offset;
arrow316.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow316);

Arrow arrow317(right);
arrow317.speed = TestSong_tempo;
arrow317.pos.y = 42673.0 + TestSong_offset;
arrow317.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow317);

Arrow arrow318(left);
arrow318.speed = TestSong_tempo;
arrow318.pos.y = 42887.0 + TestSong_offset;
arrow318.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow318);

Arrow arrow319(up);
arrow319.speed = TestSong_tempo;
arrow319.pos.y = 42994.0 + TestSong_offset;
arrow319.side = computerSide;
arrow319.trailSize = 319;
computerArrowList->insert(computerArrowList->begin(), arrow319);

Arrow arrow320(right);
arrow320.speed = TestSong_tempo;
arrow320.pos.y = 43208.0 + TestSong_offset;
arrow320.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow320);

Arrow arrow321(right);
arrow321.speed = TestSong_tempo;
arrow321.pos.y = 43315.0 + TestSong_offset;
arrow321.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow321);

Arrow arrow322(down);
arrow322.speed = TestSong_tempo;
arrow322.pos.y = 43422.0 + TestSong_offset;
arrow322.side = computerSide;
arrow322.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow322);

Arrow arrow323(left);
arrow323.speed = TestSong_tempo;
arrow323.pos.y = 43635.0 + TestSong_offset;
arrow323.side = computerSide;
arrow323.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow323);

Arrow arrow324(down);
arrow324.speed = TestSong_tempo;
arrow324.pos.y = 43850.0 + TestSong_offset;
arrow324.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow324);

Arrow arrow325(right);
arrow325.speed = TestSong_tempo;
arrow325.pos.y = 44064.0 + TestSong_offset;
arrow325.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow325);

Arrow arrow326(right);
arrow326.speed = TestSong_tempo;
arrow326.pos.y = 44117.0 + TestSong_offset;
arrow326.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow326);

Arrow arrow327(down);
arrow327.speed = TestSong_tempo;
arrow327.pos.y = 44170.0 + TestSong_offset;
arrow327.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow327);

Arrow arrow328(up);
arrow328.speed = TestSong_tempo;
arrow328.pos.y = 44277.0 + TestSong_offset;
arrow328.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow328);

Arrow arrow329(right);
arrow329.speed = TestSong_tempo;
arrow329.pos.y = 44384.0 + TestSong_offset;
arrow329.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow329);

Arrow arrow330(left);
arrow330.speed = TestSong_tempo;
arrow330.pos.y = 44598.0 + TestSong_offset;
arrow330.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow330);

Arrow arrow331(up);
arrow331.speed = TestSong_tempo;
arrow331.pos.y = 44705.0 + TestSong_offset;
arrow331.side = playerSide;
arrow331.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow331);

Arrow arrow332(right);
arrow332.speed = TestSong_tempo;
arrow332.pos.y = 44919.0 + TestSong_offset;
arrow332.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow332);

Arrow arrow333(right);
arrow333.speed = TestSong_tempo;
arrow333.pos.y = 45026.0 + TestSong_offset;
arrow333.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow333);

Arrow arrow334(down);
arrow334.speed = TestSong_tempo;
arrow334.pos.y = 45133.0 + TestSong_offset;
arrow334.side = playerSide;
arrow334.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow334);

Arrow arrow335(up);
arrow335.speed = TestSong_tempo;
arrow335.pos.y = 45347.0 + TestSong_offset;
arrow335.side = playerSide;
arrow335.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow335);

Arrow arrow336(right);
arrow336.speed = TestSong_tempo;
arrow336.pos.y = 45561.0 + TestSong_offset;
arrow336.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow336);

Arrow arrow337(up);
arrow337.speed = TestSong_tempo;
arrow337.pos.y = 45775.0 + TestSong_offset;
arrow337.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow337);

Arrow arrow338(left);
arrow338.speed = TestSong_tempo;
arrow338.pos.y = 45988.0 + TestSong_offset;
arrow338.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow338);

Arrow arrow339(right);
arrow339.speed = TestSong_tempo;
arrow339.pos.y = 46095.0 + TestSong_offset;
arrow339.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow339);

Arrow arrow340(left);
arrow340.speed = TestSong_tempo;
arrow340.pos.y = 46310.0 + TestSong_offset;
arrow340.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow340);

Arrow arrow341(up);
arrow341.speed = TestSong_tempo;
arrow341.pos.y = 46417.0 + TestSong_offset;
arrow341.side = playerSide;
arrow341.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow341);

Arrow arrow342(right);
arrow342.speed = TestSong_tempo;
arrow342.pos.y = 46630.0 + TestSong_offset;
arrow342.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow342);

Arrow arrow343(right);
arrow343.speed = TestSong_tempo;
arrow343.pos.y = 46737.0 + TestSong_offset;
arrow343.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow343);

Arrow arrow344(down);
arrow344.speed = TestSong_tempo;
arrow344.pos.y = 46844.0 + TestSong_offset;
arrow344.side = playerSide;
arrow344.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow344);

Arrow arrow345(left);
arrow345.speed = TestSong_tempo;
arrow345.pos.y = 47058.0 + TestSong_offset;
arrow345.side = playerSide;
arrow345.trailSize = 136;
playerArrowList->insert(playerArrowList->begin(), arrow345);

Arrow arrow346(down);
arrow346.speed = TestSong_tempo;
arrow346.pos.y = 47272.0 + TestSong_offset;
arrow346.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow346);

Arrow arrow347(right);
arrow347.speed = TestSong_tempo;
arrow347.pos.y = 47486.0 + TestSong_offset;
arrow347.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow347);

Arrow arrow348(right);
arrow348.speed = TestSong_tempo;
arrow348.pos.y = 47540.0 + TestSong_offset;
arrow348.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow348);

Arrow arrow349(down);
arrow349.speed = TestSong_tempo;
arrow349.pos.y = 47593.0 + TestSong_offset;
arrow349.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow349);

Arrow arrow350(up);
arrow350.speed = TestSong_tempo;
arrow350.pos.y = 47700.0 + TestSong_offset;
arrow350.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow350);

Arrow arrow351(right);
arrow351.speed = TestSong_tempo;
arrow351.pos.y = 47807.0 + TestSong_offset;
arrow351.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow351);

Arrow arrow352(left);
arrow352.speed = TestSong_tempo;
arrow352.pos.y = 48021.0 + TestSong_offset;
arrow352.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow352);

Arrow arrow353(left);
arrow353.speed = TestSong_tempo;
arrow353.pos.y = 48074.0 + TestSong_offset;
arrow353.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow353);

Arrow arrow354(up);
arrow354.speed = TestSong_tempo;
arrow354.pos.y = 48128.0 + TestSong_offset;
arrow354.side = computerSide;
arrow354.trailSize = 273;
computerArrowList->insert(computerArrowList->begin(), arrow354);

Arrow arrow355(right);
arrow355.speed = TestSong_tempo;
arrow355.pos.y = 48341.0 + TestSong_offset;
arrow355.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow355);

Arrow arrow356(right);
arrow356.speed = TestSong_tempo;
arrow356.pos.y = 48448.0 + TestSong_offset;
arrow356.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow356);

Arrow arrow357(down);
arrow357.speed = TestSong_tempo;
arrow357.pos.y = 48555.0 + TestSong_offset;
arrow357.side = computerSide;
arrow357.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow357);

Arrow arrow358(up);
arrow358.speed = TestSong_tempo;
arrow358.pos.y = 48770.0 + TestSong_offset;
arrow358.side = computerSide;
arrow358.trailSize = 136;
computerArrowList->insert(computerArrowList->begin(), arrow358);

Arrow arrow359(right);
arrow359.speed = TestSong_tempo;
arrow359.pos.y = 48983.0 + TestSong_offset;
arrow359.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow359);

Arrow arrow360(up);
arrow360.speed = TestSong_tempo;
arrow360.pos.y = 49197.0 + TestSong_offset;
arrow360.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow360);

Arrow arrow361(left);
arrow361.speed = TestSong_tempo;
arrow361.pos.y = 49411.0 + TestSong_offset;
arrow361.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow361);

Arrow arrow362(right);
arrow362.speed = TestSong_tempo;
arrow362.pos.y = 49518.0 + TestSong_offset;
arrow362.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow362);

Arrow arrow363(left);
arrow363.speed = TestSong_tempo;
arrow363.pos.y = 49732.0 + TestSong_offset;
arrow363.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow363);

Arrow arrow364(up);
arrow364.speed = TestSong_tempo;
arrow364.pos.y = 49839.0 + TestSong_offset;
arrow364.side = computerSide;
arrow364.trailSize = 318;
computerArrowList->insert(computerArrowList->begin(), arrow364);

Arrow arrow365(right);
arrow365.speed = TestSong_tempo;
arrow365.pos.y = 50052.0 + TestSong_offset;
arrow365.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow365);

Arrow arrow366(right);
arrow366.speed = TestSong_tempo;
arrow366.pos.y = 50160.0 + TestSong_offset;
arrow366.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow366);

Arrow arrow367(down);
arrow367.speed = TestSong_tempo;
arrow367.pos.y = 50267.0 + TestSong_offset;
arrow367.side = computerSide;
arrow367.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow367);

Arrow arrow368(left);
arrow368.speed = TestSong_tempo;
arrow368.pos.y = 50481.0 + TestSong_offset;
arrow368.side = computerSide;
arrow368.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow368);

Arrow arrow369(down);
arrow369.speed = TestSong_tempo;
arrow369.pos.y = 50694.0 + TestSong_offset;
arrow369.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow369);

Arrow arrow370(right);
arrow370.speed = TestSong_tempo;
arrow370.pos.y = 50908.0 + TestSong_offset;
arrow370.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow370);

Arrow arrow371(right);
arrow371.speed = TestSong_tempo;
arrow371.pos.y = 50962.0 + TestSong_offset;
arrow371.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow371);

Arrow arrow372(down);
arrow372.speed = TestSong_tempo;
arrow372.pos.y = 51015.0 + TestSong_offset;
arrow372.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow372);

Arrow arrow373(up);
arrow373.speed = TestSong_tempo;
arrow373.pos.y = 51122.0 + TestSong_offset;
arrow373.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow373);

Arrow arrow374(right);
arrow374.speed = TestSong_tempo;
arrow374.pos.y = 51229.0 + TestSong_offset;
arrow374.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow374);

Arrow arrow375(left);
arrow375.speed = TestSong_tempo;
arrow375.pos.y = 51443.0 + TestSong_offset;
arrow375.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow375);

Arrow arrow376(left);
arrow376.speed = TestSong_tempo;
arrow376.pos.y = 51497.0 + TestSong_offset;
arrow376.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow376);

Arrow arrow377(up);
arrow377.speed = TestSong_tempo;
arrow377.pos.y = 51550.0 + TestSong_offset;
arrow377.side = playerSide;
arrow377.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow377);

Arrow arrow378(right);
arrow378.speed = TestSong_tempo;
arrow378.pos.y = 51764.0 + TestSong_offset;
arrow378.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow378);

Arrow arrow379(right);
arrow379.speed = TestSong_tempo;
arrow379.pos.y = 51871.0 + TestSong_offset;
arrow379.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow379);

Arrow arrow380(down);
arrow380.speed = TestSong_tempo;
arrow380.pos.y = 51978.0 + TestSong_offset;
arrow380.side = playerSide;
arrow380.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow380);

Arrow arrow381(up);
arrow381.speed = TestSong_tempo;
arrow381.pos.y = 52192.0 + TestSong_offset;
arrow381.side = playerSide;
arrow381.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow381);

Arrow arrow382(right);
arrow382.speed = TestSong_tempo;
arrow382.pos.y = 52405.0 + TestSong_offset;
arrow382.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow382);

Arrow arrow383(up);
arrow383.speed = TestSong_tempo;
arrow383.pos.y = 52620.0 + TestSong_offset;
arrow383.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow383);

Arrow arrow384(left);
arrow384.speed = TestSong_tempo;
arrow384.pos.y = 52834.0 + TestSong_offset;
arrow384.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow384);

Arrow arrow385(right);
arrow385.speed = TestSong_tempo;
arrow385.pos.y = 52941.0 + TestSong_offset;
arrow385.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow385);

Arrow arrow386(left);
arrow386.speed = TestSong_tempo;
arrow386.pos.y = 53154.0 + TestSong_offset;
arrow386.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow386);

Arrow arrow387(up);
arrow387.speed = TestSong_tempo;
arrow387.pos.y = 53261.0 + TestSong_offset;
arrow387.side = playerSide;
arrow387.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow387);

Arrow arrow388(right);
arrow388.speed = TestSong_tempo;
arrow388.pos.y = 53475.0 + TestSong_offset;
arrow388.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow388);

Arrow arrow389(right);
arrow389.speed = TestSong_tempo;
arrow389.pos.y = 53582.0 + TestSong_offset;
arrow389.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow389);

Arrow arrow390(down);
arrow390.speed = TestSong_tempo;
arrow390.pos.y = 53689.0 + TestSong_offset;
arrow390.side = playerSide;
arrow390.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow390);

Arrow arrow391(left);
arrow391.speed = TestSong_tempo;
arrow391.pos.y = 53903.0 + TestSong_offset;
arrow391.side = playerSide;
arrow391.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow391);

Arrow arrow392(down);
arrow392.speed = TestSong_tempo;
arrow392.pos.y = 54117.0 + TestSong_offset;
arrow392.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow392);

Arrow arrow393(right);
arrow393.speed = TestSong_tempo;
arrow393.pos.y = 54331.0 + TestSong_offset;
arrow393.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow393);

Arrow arrow394(right);
arrow394.speed = TestSong_tempo;
arrow394.pos.y = 54384.0 + TestSong_offset;
arrow394.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow394);

Arrow arrow395(down);
arrow395.speed = TestSong_tempo;
arrow395.pos.y = 54438.0 + TestSong_offset;
arrow395.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow395);

Arrow arrow396(up);
arrow396.speed = TestSong_tempo;
arrow396.pos.y = 54545.0 + TestSong_offset;
arrow396.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow396);

Arrow arrow397(right);
arrow397.speed = TestSong_tempo;
arrow397.pos.y = 54652.0 + TestSong_offset;
arrow397.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow397);

}
void TestSong_Normal(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList){
        // AUTO-GENERATED CHART

Arrow arrow0(down);
arrow0.speed = TestSong_tempo;
arrow0.pos.y = 6951.0 + TestSong_offset;
arrow0.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow0);

Arrow arrow1(left);
arrow1.speed = TestSong_tempo;
arrow1.pos.y = 7165.0 + TestSong_offset;
arrow1.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow1);

Arrow arrow2(left);
arrow2.speed = TestSong_tempo;
arrow2.pos.y = 7272.0 + TestSong_offset;
arrow2.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow2);

Arrow arrow3(down);
arrow3.speed = TestSong_tempo;
arrow3.pos.y = 7379.0 + TestSong_offset;
arrow3.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow3);

Arrow arrow4(right);
arrow4.speed = TestSong_tempo;
arrow4.pos.y = 7486.0 + TestSong_offset;
arrow4.side = computerSide;
arrow4.trailSize = 228;
computerArrowList->insert(computerArrowList->begin(), arrow4);

Arrow arrow5(up);
arrow5.speed = TestSong_tempo;
arrow5.pos.y = 7700.0 + TestSong_offset;
arrow5.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow5);

Arrow arrow6(up);
arrow6.speed = TestSong_tempo;
arrow6.pos.y = 7914.0 + TestSong_offset;
arrow6.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow6);

Arrow arrow7(right);
arrow7.speed = TestSong_tempo;
arrow7.pos.y = 8021.0 + TestSong_offset;
arrow7.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow7);

Arrow arrow8(right);
arrow8.speed = TestSong_tempo;
arrow8.pos.y = 8128.0 + TestSong_offset;
arrow8.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow8);

Arrow arrow9(left);
arrow9.speed = TestSong_tempo;
arrow9.pos.y = 8235.0 + TestSong_offset;
arrow9.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow9);

Arrow arrow10(down);
arrow10.speed = TestSong_tempo;
arrow10.pos.y = 8341.0 + TestSong_offset;
arrow10.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow10);

Arrow arrow11(down);
arrow11.speed = TestSong_tempo;
arrow11.pos.y = 8662.0 + TestSong_offset;
arrow11.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow11);

Arrow arrow12(left);
arrow12.speed = TestSong_tempo;
arrow12.pos.y = 8877.0 + TestSong_offset;
arrow12.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow12);

Arrow arrow13(left);
arrow13.speed = TestSong_tempo;
arrow13.pos.y = 8983.0 + TestSong_offset;
arrow13.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow13);

Arrow arrow14(down);
arrow14.speed = TestSong_tempo;
arrow14.pos.y = 9091.0 + TestSong_offset;
arrow14.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow14);

Arrow arrow15(right);
arrow15.speed = TestSong_tempo;
arrow15.pos.y = 9304.0 + TestSong_offset;
arrow15.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow15);

Arrow arrow16(down);
arrow16.speed = TestSong_tempo;
arrow16.pos.y = 9411.0 + TestSong_offset;
arrow16.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow16);

Arrow arrow17(up);
arrow17.speed = TestSong_tempo;
arrow17.pos.y = 9625.0 + TestSong_offset;
arrow17.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow17);

Arrow arrow18(down);
arrow18.speed = TestSong_tempo;
arrow18.pos.y = 9839.0 + TestSong_offset;
arrow18.side = computerSide;
arrow18.trailSize = 114;
computerArrowList->insert(computerArrowList->begin(), arrow18);

Arrow arrow19(right);
arrow19.speed = TestSong_tempo;
arrow19.pos.y = 9946.0 + TestSong_offset;
arrow19.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow19);

Arrow arrow20(down);
arrow20.speed = TestSong_tempo;
arrow20.pos.y = 10052.0 + TestSong_offset;
arrow20.side = computerSide;
arrow20.trailSize = 205;
computerArrowList->insert(computerArrowList->begin(), arrow20);

Arrow arrow21(down);
arrow21.speed = TestSong_tempo;
arrow21.pos.y = 10374.0 + TestSong_offset;
arrow21.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow21);

Arrow arrow22(left);
arrow22.speed = TestSong_tempo;
arrow22.pos.y = 10588.0 + TestSong_offset;
arrow22.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow22);

Arrow arrow23(left);
arrow23.speed = TestSong_tempo;
arrow23.pos.y = 10694.0 + TestSong_offset;
arrow23.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow23);

Arrow arrow24(down);
arrow24.speed = TestSong_tempo;
arrow24.pos.y = 10802.0 + TestSong_offset;
arrow24.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow24);

Arrow arrow25(right);
arrow25.speed = TestSong_tempo;
arrow25.pos.y = 10908.0 + TestSong_offset;
arrow25.side = playerSide;
arrow25.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow25);

Arrow arrow26(up);
arrow26.speed = TestSong_tempo;
arrow26.pos.y = 11122.0 + TestSong_offset;
arrow26.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow26);

Arrow arrow27(up);
arrow27.speed = TestSong_tempo;
arrow27.pos.y = 11336.0 + TestSong_offset;
arrow27.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow27);

Arrow arrow28(right);
arrow28.speed = TestSong_tempo;
arrow28.pos.y = 11444.0 + TestSong_offset;
arrow28.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow28);

Arrow arrow29(right);
arrow29.speed = TestSong_tempo;
arrow29.pos.y = 11550.0 + TestSong_offset;
arrow29.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow29);

Arrow arrow30(left);
arrow30.speed = TestSong_tempo;
arrow30.pos.y = 11657.0 + TestSong_offset;
arrow30.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow30);

Arrow arrow31(down);
arrow31.speed = TestSong_tempo;
arrow31.pos.y = 11764.0 + TestSong_offset;
arrow31.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow31);

Arrow arrow32(down);
arrow32.speed = TestSong_tempo;
arrow32.pos.y = 12085.0 + TestSong_offset;
arrow32.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow32);

Arrow arrow33(left);
arrow33.speed = TestSong_tempo;
arrow33.pos.y = 12299.0 + TestSong_offset;
arrow33.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow33);

Arrow arrow34(left);
arrow34.speed = TestSong_tempo;
arrow34.pos.y = 12405.0 + TestSong_offset;
arrow34.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow34);

Arrow arrow35(down);
arrow35.speed = TestSong_tempo;
arrow35.pos.y = 12513.0 + TestSong_offset;
arrow35.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow35);

Arrow arrow36(right);
arrow36.speed = TestSong_tempo;
arrow36.pos.y = 12727.0 + TestSong_offset;
arrow36.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow36);

Arrow arrow37(down);
arrow37.speed = TestSong_tempo;
arrow37.pos.y = 12834.0 + TestSong_offset;
arrow37.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow37);

Arrow arrow38(up);
arrow38.speed = TestSong_tempo;
arrow38.pos.y = 13048.0 + TestSong_offset;
arrow38.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow38);

Arrow arrow39(down);
arrow39.speed = TestSong_tempo;
arrow39.pos.y = 13261.0 + TestSong_offset;
arrow39.side = playerSide;
arrow39.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow39);

Arrow arrow40(right);
arrow40.speed = TestSong_tempo;
arrow40.pos.y = 13368.0 + TestSong_offset;
arrow40.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow40);

Arrow arrow41(down);
arrow41.speed = TestSong_tempo;
arrow41.pos.y = 13475.0 + TestSong_offset;
arrow41.side = playerSide;
arrow41.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow41);

Arrow arrow42(up);
arrow42.speed = TestSong_tempo;
arrow42.pos.y = 13796.0 + TestSong_offset;
arrow42.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow42);

Arrow arrow43(up);
arrow43.speed = TestSong_tempo;
arrow43.pos.y = 14117.0 + TestSong_offset;
arrow43.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow43);

Arrow arrow44(left);
arrow44.speed = TestSong_tempo;
arrow44.pos.y = 14224.0 + TestSong_offset;
arrow44.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow44);

Arrow arrow45(right);
arrow45.speed = TestSong_tempo;
arrow45.pos.y = 14331.0 + TestSong_offset;
arrow45.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow45);

Arrow arrow46(down);
arrow46.speed = TestSong_tempo;
arrow46.pos.y = 14438.0 + TestSong_offset;
arrow46.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow46);

Arrow arrow47(right);
arrow47.speed = TestSong_tempo;
arrow47.pos.y = 14545.0 + TestSong_offset;
arrow47.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow47);

Arrow arrow48(left);
arrow48.speed = TestSong_tempo;
arrow48.pos.y = 14758.0 + TestSong_offset;
arrow48.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow48);

Arrow arrow49(up);
arrow49.speed = TestSong_tempo;
arrow49.pos.y = 14972.0 + TestSong_offset;
arrow49.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow49);

Arrow arrow50(right);
arrow50.speed = TestSong_tempo;
arrow50.pos.y = 15080.0 + TestSong_offset;
arrow50.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow50);

Arrow arrow51(left);
arrow51.speed = TestSong_tempo;
arrow51.pos.y = 15187.0 + TestSong_offset;
arrow51.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow51);

Arrow arrow52(down);
arrow52.speed = TestSong_tempo;
arrow52.pos.y = 15294.0 + TestSong_offset;
arrow52.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow52);

Arrow arrow53(up);
arrow53.speed = TestSong_tempo;
arrow53.pos.y = 15507.0 + TestSong_offset;
arrow53.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow53);

Arrow arrow54(down);
arrow54.speed = TestSong_tempo;
arrow54.pos.y = 15828.0 + TestSong_offset;
arrow54.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow54);

Arrow arrow55(left);
arrow55.speed = TestSong_tempo;
arrow55.pos.y = 15935.0 + TestSong_offset;
arrow55.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow55);

Arrow arrow56(right);
arrow56.speed = TestSong_tempo;
arrow56.pos.y = 16042.0 + TestSong_offset;
arrow56.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow56);

Arrow arrow57(left);
arrow57.speed = TestSong_tempo;
arrow57.pos.y = 16150.0 + TestSong_offset;
arrow57.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow57);

Arrow arrow58(right);
arrow58.speed = TestSong_tempo;
arrow58.pos.y = 16256.0 + TestSong_offset;
arrow58.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow58);

Arrow arrow59(down);
arrow59.speed = TestSong_tempo;
arrow59.pos.y = 16470.0 + TestSong_offset;
arrow59.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow59);

Arrow arrow60(right);
arrow60.speed = TestSong_tempo;
arrow60.pos.y = 16684.0 + TestSong_offset;
arrow60.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow60);

Arrow arrow61(up);
arrow61.speed = TestSong_tempo;
arrow61.pos.y = 16791.0 + TestSong_offset;
arrow61.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow61);

Arrow arrow62(left);
arrow62.speed = TestSong_tempo;
arrow62.pos.y = 16898.0 + TestSong_offset;
arrow62.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow62);

Arrow arrow63(down);
arrow63.speed = TestSong_tempo;
arrow63.pos.y = 17005.0 + TestSong_offset;
arrow63.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow63);

Arrow arrow64(up);
arrow64.speed = TestSong_tempo;
arrow64.pos.y = 17218.0 + TestSong_offset;
arrow64.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow64);

Arrow arrow65(up);
arrow65.speed = TestSong_tempo;
arrow65.pos.y = 17540.0 + TestSong_offset;
arrow65.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow65);

Arrow arrow66(left);
arrow66.speed = TestSong_tempo;
arrow66.pos.y = 17647.0 + TestSong_offset;
arrow66.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow66);

Arrow arrow67(right);
arrow67.speed = TestSong_tempo;
arrow67.pos.y = 17754.0 + TestSong_offset;
arrow67.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow67);

Arrow arrow68(down);
arrow68.speed = TestSong_tempo;
arrow68.pos.y = 17860.0 + TestSong_offset;
arrow68.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow68);

Arrow arrow69(right);
arrow69.speed = TestSong_tempo;
arrow69.pos.y = 17967.0 + TestSong_offset;
arrow69.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow69);

Arrow arrow70(left);
arrow70.speed = TestSong_tempo;
arrow70.pos.y = 18181.0 + TestSong_offset;
arrow70.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow70);

Arrow arrow71(up);
arrow71.speed = TestSong_tempo;
arrow71.pos.y = 18395.0 + TestSong_offset;
arrow71.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow71);

Arrow arrow72(right);
arrow72.speed = TestSong_tempo;
arrow72.pos.y = 18502.0 + TestSong_offset;
arrow72.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow72);

Arrow arrow73(left);
arrow73.speed = TestSong_tempo;
arrow73.pos.y = 18609.0 + TestSong_offset;
arrow73.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow73);

Arrow arrow74(down);
arrow74.speed = TestSong_tempo;
arrow74.pos.y = 18716.0 + TestSong_offset;
arrow74.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow74);

Arrow arrow75(up);
arrow75.speed = TestSong_tempo;
arrow75.pos.y = 18930.0 + TestSong_offset;
arrow75.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow75);

Arrow arrow76(down);
arrow76.speed = TestSong_tempo;
arrow76.pos.y = 19251.0 + TestSong_offset;
arrow76.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow76);

Arrow arrow77(left);
arrow77.speed = TestSong_tempo;
arrow77.pos.y = 19358.0 + TestSong_offset;
arrow77.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow77);

Arrow arrow78(right);
arrow78.speed = TestSong_tempo;
arrow78.pos.y = 19465.0 + TestSong_offset;
arrow78.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow78);

Arrow arrow79(left);
arrow79.speed = TestSong_tempo;
arrow79.pos.y = 19572.0 + TestSong_offset;
arrow79.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow79);

Arrow arrow80(right);
arrow80.speed = TestSong_tempo;
arrow80.pos.y = 19678.0 + TestSong_offset;
arrow80.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow80);

Arrow arrow81(down);
arrow81.speed = TestSong_tempo;
arrow81.pos.y = 19892.0 + TestSong_offset;
arrow81.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow81);

Arrow arrow82(right);
arrow82.speed = TestSong_tempo;
arrow82.pos.y = 20106.0 + TestSong_offset;
arrow82.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow82);

Arrow arrow83(up);
arrow83.speed = TestSong_tempo;
arrow83.pos.y = 20214.0 + TestSong_offset;
arrow83.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow83);

Arrow arrow84(left);
arrow84.speed = TestSong_tempo;
arrow84.pos.y = 20320.0 + TestSong_offset;
arrow84.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow84);

Arrow arrow85(down);
arrow85.speed = TestSong_tempo;
arrow85.pos.y = 20427.0 + TestSong_offset;
arrow85.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow85);

Arrow arrow86(left);
arrow86.speed = TestSong_tempo;
arrow86.pos.y = 20641.0 + TestSong_offset;
arrow86.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow86);

Arrow arrow87(up);
arrow87.speed = TestSong_tempo;
arrow87.pos.y = 20748.0 + TestSong_offset;
arrow87.side = computerSide;
arrow87.trailSize = 273;
computerArrowList->insert(computerArrowList->begin(), arrow87);

Arrow arrow88(right);
arrow88.speed = TestSong_tempo;
arrow88.pos.y = 20962.0 + TestSong_offset;
arrow88.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow88);

Arrow arrow89(down);
arrow89.speed = TestSong_tempo;
arrow89.pos.y = 21176.0 + TestSong_offset;
arrow89.side = computerSide;
arrow89.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow89);

Arrow arrow90(up);
arrow90.speed = TestSong_tempo;
arrow90.pos.y = 21390.0 + TestSong_offset;
arrow90.side = computerSide;
arrow90.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow90);

Arrow arrow91(right);
arrow91.speed = TestSong_tempo;
arrow91.pos.y = 21604.0 + TestSong_offset;
arrow91.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow91);

Arrow arrow92(up);
arrow92.speed = TestSong_tempo;
arrow92.pos.y = 21817.0 + TestSong_offset;
arrow92.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow92);

Arrow arrow93(left);
arrow93.speed = TestSong_tempo;
arrow93.pos.y = 22031.0 + TestSong_offset;
arrow93.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow93);

Arrow arrow94(right);
arrow94.speed = TestSong_tempo;
arrow94.pos.y = 22138.0 + TestSong_offset;
arrow94.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow94);

Arrow arrow95(left);
arrow95.speed = TestSong_tempo;
arrow95.pos.y = 22352.0 + TestSong_offset;
arrow95.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow95);

Arrow arrow96(up);
arrow96.speed = TestSong_tempo;
arrow96.pos.y = 22460.0 + TestSong_offset;
arrow96.side = computerSide;
arrow96.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow96);

Arrow arrow97(right);
arrow97.speed = TestSong_tempo;
arrow97.pos.y = 22673.0 + TestSong_offset;
arrow97.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow97);

Arrow arrow98(right);
arrow98.speed = TestSong_tempo;
arrow98.pos.y = 22780.0 + TestSong_offset;
arrow98.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow98);

Arrow arrow99(down);
arrow99.speed = TestSong_tempo;
arrow99.pos.y = 22887.0 + TestSong_offset;
arrow99.side = computerSide;
arrow99.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow99);

Arrow arrow100(left);
arrow100.speed = TestSong_tempo;
arrow100.pos.y = 23101.0 + TestSong_offset;
arrow100.side = computerSide;
arrow100.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow100);

Arrow arrow101(down);
arrow101.speed = TestSong_tempo;
arrow101.pos.y = 23315.0 + TestSong_offset;
arrow101.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow101);

Arrow arrow102(right);
arrow102.speed = TestSong_tempo;
arrow102.pos.y = 23529.0 + TestSong_offset;
arrow102.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow102);

Arrow arrow103(down);
arrow103.speed = TestSong_tempo;
arrow103.pos.y = 23636.0 + TestSong_offset;
arrow103.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow103);

Arrow arrow104(up);
arrow104.speed = TestSong_tempo;
arrow104.pos.y = 23742.0 + TestSong_offset;
arrow104.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow104);

Arrow arrow105(right);
arrow105.speed = TestSong_tempo;
arrow105.pos.y = 23850.0 + TestSong_offset;
arrow105.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow105);

Arrow arrow106(left);
arrow106.speed = TestSong_tempo;
arrow106.pos.y = 24064.0 + TestSong_offset;
arrow106.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow106);

Arrow arrow107(up);
arrow107.speed = TestSong_tempo;
arrow107.pos.y = 24171.0 + TestSong_offset;
arrow107.side = playerSide;
arrow107.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow107);

Arrow arrow108(right);
arrow108.speed = TestSong_tempo;
arrow108.pos.y = 24384.0 + TestSong_offset;
arrow108.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow108);

Arrow arrow109(down);
arrow109.speed = TestSong_tempo;
arrow109.pos.y = 24598.0 + TestSong_offset;
arrow109.side = playerSide;
arrow109.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow109);

Arrow arrow110(up);
arrow110.speed = TestSong_tempo;
arrow110.pos.y = 24812.0 + TestSong_offset;
arrow110.side = playerSide;
arrow110.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow110);

Arrow arrow111(right);
arrow111.speed = TestSong_tempo;
arrow111.pos.y = 25026.0 + TestSong_offset;
arrow111.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow111);

Arrow arrow112(up);
arrow112.speed = TestSong_tempo;
arrow112.pos.y = 25240.0 + TestSong_offset;
arrow112.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow112);

Arrow arrow113(left);
arrow113.speed = TestSong_tempo;
arrow113.pos.y = 25454.0 + TestSong_offset;
arrow113.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow113);

Arrow arrow114(right);
arrow114.speed = TestSong_tempo;
arrow114.pos.y = 25561.0 + TestSong_offset;
arrow114.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow114);

Arrow arrow115(left);
arrow115.speed = TestSong_tempo;
arrow115.pos.y = 25775.0 + TestSong_offset;
arrow115.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow115);

Arrow arrow116(up);
arrow116.speed = TestSong_tempo;
arrow116.pos.y = 25882.0 + TestSong_offset;
arrow116.side = playerSide;
arrow116.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow116);

Arrow arrow117(right);
arrow117.speed = TestSong_tempo;
arrow117.pos.y = 26095.0 + TestSong_offset;
arrow117.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow117);

Arrow arrow118(right);
arrow118.speed = TestSong_tempo;
arrow118.pos.y = 26202.0 + TestSong_offset;
arrow118.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow118);

Arrow arrow119(down);
arrow119.speed = TestSong_tempo;
arrow119.pos.y = 26310.0 + TestSong_offset;
arrow119.side = playerSide;
arrow119.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow119);

Arrow arrow120(left);
arrow120.speed = TestSong_tempo;
arrow120.pos.y = 26523.0 + TestSong_offset;
arrow120.side = playerSide;
arrow120.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow120);

Arrow arrow121(down);
arrow121.speed = TestSong_tempo;
arrow121.pos.y = 26737.0 + TestSong_offset;
arrow121.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow121);

Arrow arrow122(right);
arrow122.speed = TestSong_tempo;
arrow122.pos.y = 26951.0 + TestSong_offset;
arrow122.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow122);

Arrow arrow123(down);
arrow123.speed = TestSong_tempo;
arrow123.pos.y = 27058.0 + TestSong_offset;
arrow123.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow123);

Arrow arrow124(up);
arrow124.speed = TestSong_tempo;
arrow124.pos.y = 27165.0 + TestSong_offset;
arrow124.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow124);

Arrow arrow125(right);
arrow125.speed = TestSong_tempo;
arrow125.pos.y = 27272.0 + TestSong_offset;
arrow125.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow125);

Arrow arrow126(left);
arrow126.speed = TestSong_tempo;
arrow126.pos.y = 27379.0 + TestSong_offset;
arrow126.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow126);

Arrow arrow127(right);
arrow127.speed = TestSong_tempo;
arrow127.pos.y = 27593.0 + TestSong_offset;
arrow127.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow127);

Arrow arrow128(down);
arrow128.speed = TestSong_tempo;
arrow128.pos.y = 27807.0 + TestSong_offset;
arrow128.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow128);

Arrow arrow129(left);
arrow129.speed = TestSong_tempo;
arrow129.pos.y = 27914.0 + TestSong_offset;
arrow129.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow129);

Arrow arrow130(down);
arrow130.speed = TestSong_tempo;
arrow130.pos.y = 28021.0 + TestSong_offset;
arrow130.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow130);

Arrow arrow131(up);
arrow131.speed = TestSong_tempo;
arrow131.pos.y = 28235.0 + TestSong_offset;
arrow131.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow131);

Arrow arrow132(right);
arrow132.speed = TestSong_tempo;
arrow132.pos.y = 28448.0 + TestSong_offset;
arrow132.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow132);

Arrow arrow133(down);
arrow133.speed = TestSong_tempo;
arrow133.pos.y = 28662.0 + TestSong_offset;
arrow133.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow133);

Arrow arrow134(left);
arrow134.speed = TestSong_tempo;
arrow134.pos.y = 28770.0 + TestSong_offset;
arrow134.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow134);

Arrow arrow135(left);
arrow135.speed = TestSong_tempo;
arrow135.pos.y = 28876.0 + TestSong_offset;
arrow135.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow135);

Arrow arrow136(right);
arrow136.speed = TestSong_tempo;
arrow136.pos.y = 29090.0 + TestSong_offset;
arrow136.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow136);

Arrow arrow137(right);
arrow137.speed = TestSong_tempo;
arrow137.pos.y = 29304.0 + TestSong_offset;
arrow137.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow137);

Arrow arrow138(up);
arrow138.speed = TestSong_tempo;
arrow138.pos.y = 29518.0 + TestSong_offset;
arrow138.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow138);

Arrow arrow139(left);
arrow139.speed = TestSong_tempo;
arrow139.pos.y = 29625.0 + TestSong_offset;
arrow139.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow139);

Arrow arrow140(left);
arrow140.speed = TestSong_tempo;
arrow140.pos.y = 29732.0 + TestSong_offset;
arrow140.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow140);

Arrow arrow141(left);
arrow141.speed = TestSong_tempo;
arrow141.pos.y = 29946.0 + TestSong_offset;
arrow141.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow141);

Arrow arrow142(right);
arrow142.speed = TestSong_tempo;
arrow142.pos.y = 30160.0 + TestSong_offset;
arrow142.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow142);

Arrow arrow143(up);
arrow143.speed = TestSong_tempo;
arrow143.pos.y = 30374.0 + TestSong_offset;
arrow143.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow143);

Arrow arrow144(left);
arrow144.speed = TestSong_tempo;
arrow144.pos.y = 30481.0 + TestSong_offset;
arrow144.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow144);

Arrow arrow145(up);
arrow145.speed = TestSong_tempo;
arrow145.pos.y = 30588.0 + TestSong_offset;
arrow145.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow145);

Arrow arrow146(right);
arrow146.speed = TestSong_tempo;
arrow146.pos.y = 30694.0 + TestSong_offset;
arrow146.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow146);

Arrow arrow147(left);
arrow147.speed = TestSong_tempo;
arrow147.pos.y = 30801.0 + TestSong_offset;
arrow147.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow147);

Arrow arrow148(right);
arrow148.speed = TestSong_tempo;
arrow148.pos.y = 31015.0 + TestSong_offset;
arrow148.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow148);

Arrow arrow149(down);
arrow149.speed = TestSong_tempo;
arrow149.pos.y = 31229.0 + TestSong_offset;
arrow149.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow149);

Arrow arrow150(left);
arrow150.speed = TestSong_tempo;
arrow150.pos.y = 31336.0 + TestSong_offset;
arrow150.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow150);

Arrow arrow151(down);
arrow151.speed = TestSong_tempo;
arrow151.pos.y = 31443.0 + TestSong_offset;
arrow151.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow151);

Arrow arrow152(up);
arrow152.speed = TestSong_tempo;
arrow152.pos.y = 31657.0 + TestSong_offset;
arrow152.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow152);

Arrow arrow153(right);
arrow153.speed = TestSong_tempo;
arrow153.pos.y = 31871.0 + TestSong_offset;
arrow153.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow153);

Arrow arrow154(down);
arrow154.speed = TestSong_tempo;
arrow154.pos.y = 32085.0 + TestSong_offset;
arrow154.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow154);

Arrow arrow155(left);
arrow155.speed = TestSong_tempo;
arrow155.pos.y = 32192.0 + TestSong_offset;
arrow155.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow155);

Arrow arrow156(left);
arrow156.speed = TestSong_tempo;
arrow156.pos.y = 32299.0 + TestSong_offset;
arrow156.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow156);

Arrow arrow157(right);
arrow157.speed = TestSong_tempo;
arrow157.pos.y = 32512.0 + TestSong_offset;
arrow157.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow157);

Arrow arrow158(right);
arrow158.speed = TestSong_tempo;
arrow158.pos.y = 32727.0 + TestSong_offset;
arrow158.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow158);

Arrow arrow159(up);
arrow159.speed = TestSong_tempo;
arrow159.pos.y = 32941.0 + TestSong_offset;
arrow159.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow159);

Arrow arrow160(down);
arrow160.speed = TestSong_tempo;
arrow160.pos.y = 33047.0 + TestSong_offset;
arrow160.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow160);

Arrow arrow161(left);
arrow161.speed = TestSong_tempo;
arrow161.pos.y = 33047.0 + TestSong_offset;
arrow161.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow161);

Arrow arrow162(left);
arrow162.speed = TestSong_tempo;
arrow162.pos.y = 33154.0 + TestSong_offset;
arrow162.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow162);

Arrow arrow163(left);
arrow163.speed = TestSong_tempo;
arrow163.pos.y = 33154.0 + TestSong_offset;
arrow163.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow163);

Arrow arrow164(left);
arrow164.speed = TestSong_tempo;
arrow164.pos.y = 33261.0 + TestSong_offset;
arrow164.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow164);

Arrow arrow165(right);
arrow165.speed = TestSong_tempo;
arrow165.pos.y = 33368.0 + TestSong_offset;
arrow165.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow165);

Arrow arrow166(left);
arrow166.speed = TestSong_tempo;
arrow166.pos.y = 33368.0 + TestSong_offset;
arrow166.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow166);

Arrow arrow167(up);
arrow167.speed = TestSong_tempo;
arrow167.pos.y = 33582.0 + TestSong_offset;
arrow167.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow167);

Arrow arrow168(right);
arrow168.speed = TestSong_tempo;
arrow168.pos.y = 33582.0 + TestSong_offset;
arrow168.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow168);

Arrow arrow169(right);
arrow169.speed = TestSong_tempo;
arrow169.pos.y = 33689.0 + TestSong_offset;
arrow169.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow169);

Arrow arrow170(up);
arrow170.speed = TestSong_tempo;
arrow170.pos.y = 33796.0 + TestSong_offset;
arrow170.side = computerSide;
arrow170.trailSize = 296;
computerArrowList->insert(computerArrowList->begin(), arrow170);

Arrow arrow171(up);
arrow171.speed = TestSong_tempo;
arrow171.pos.y = 33796.0 + TestSong_offset;
arrow171.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow171);

Arrow arrow172(left);
arrow172.speed = TestSong_tempo;
arrow172.pos.y = 33903.0 + TestSong_offset;
arrow172.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow172);

Arrow arrow173(right);
arrow173.speed = TestSong_tempo;
arrow173.pos.y = 34010.0 + TestSong_offset;
arrow173.side = computerSide;
arrow173.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow173);

Arrow arrow174(up);
arrow174.speed = TestSong_tempo;
arrow174.pos.y = 34010.0 + TestSong_offset;
arrow174.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow174);

Arrow arrow175(right);
arrow175.speed = TestSong_tempo;
arrow175.pos.y = 34117.0 + TestSong_offset;
arrow175.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow175);

Arrow arrow176(left);
arrow176.speed = TestSong_tempo;
arrow176.pos.y = 34224.0 + TestSong_offset;
arrow176.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow176);

Arrow arrow177(right);
arrow177.speed = TestSong_tempo;
arrow177.pos.y = 34438.0 + TestSong_offset;
arrow177.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow177);

Arrow arrow178(down);
arrow178.speed = TestSong_tempo;
arrow178.pos.y = 34652.0 + TestSong_offset;
arrow178.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow178);

Arrow arrow179(left);
arrow179.speed = TestSong_tempo;
arrow179.pos.y = 34758.0 + TestSong_offset;
arrow179.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow179);

Arrow arrow180(down);
arrow180.speed = TestSong_tempo;
arrow180.pos.y = 34865.0 + TestSong_offset;
arrow180.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow180);

Arrow arrow181(left);
arrow181.speed = TestSong_tempo;
arrow181.pos.y = 34972.0 + TestSong_offset;
arrow181.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow181);

Arrow arrow182(up);
arrow182.speed = TestSong_tempo;
arrow182.pos.y = 35080.0 + TestSong_offset;
arrow182.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow182);

Arrow arrow183(right);
arrow183.speed = TestSong_tempo;
arrow183.pos.y = 35294.0 + TestSong_offset;
arrow183.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow183);

Arrow arrow184(down);
arrow184.speed = TestSong_tempo;
arrow184.pos.y = 35507.0 + TestSong_offset;
arrow184.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow184);

Arrow arrow185(left);
arrow185.speed = TestSong_tempo;
arrow185.pos.y = 35614.0 + TestSong_offset;
arrow185.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow185);

Arrow arrow186(right);
arrow186.speed = TestSong_tempo;
arrow186.pos.y = 35721.0 + TestSong_offset;
arrow186.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow186);

Arrow arrow187(down);
arrow187.speed = TestSong_tempo;
arrow187.pos.y = 35828.0 + TestSong_offset;
arrow187.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow187);

Arrow arrow188(right);
arrow188.speed = TestSong_tempo;
arrow188.pos.y = 35935.0 + TestSong_offset;
arrow188.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow188);

Arrow arrow189(right);
arrow189.speed = TestSong_tempo;
arrow189.pos.y = 36149.0 + TestSong_offset;
arrow189.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow189);

Arrow arrow190(up);
arrow190.speed = TestSong_tempo;
arrow190.pos.y = 36363.0 + TestSong_offset;
arrow190.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow190);

Arrow arrow191(left);
arrow191.speed = TestSong_tempo;
arrow191.pos.y = 36470.0 + TestSong_offset;
arrow191.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow191);

Arrow arrow192(left);
arrow192.speed = TestSong_tempo;
arrow192.pos.y = 36577.0 + TestSong_offset;
arrow192.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow192);

Arrow arrow193(left);
arrow193.speed = TestSong_tempo;
arrow193.pos.y = 36684.0 + TestSong_offset;
arrow193.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow193);

Arrow arrow194(up);
arrow194.speed = TestSong_tempo;
arrow194.pos.y = 36791.0 + TestSong_offset;
arrow194.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow194);

Arrow arrow195(right);
arrow195.speed = TestSong_tempo;
arrow195.pos.y = 36898.0 + TestSong_offset;
arrow195.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow195);

Arrow arrow196(up);
arrow196.speed = TestSong_tempo;
arrow196.pos.y = 37005.0 + TestSong_offset;
arrow196.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow196);

Arrow arrow197(down);
arrow197.speed = TestSong_tempo;
arrow197.pos.y = 37218.0 + TestSong_offset;
arrow197.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow197);

Arrow arrow198(up);
arrow198.speed = TestSong_tempo;
arrow198.pos.y = 37432.0 + TestSong_offset;
arrow198.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow198);

Arrow arrow199(left);
arrow199.speed = TestSong_tempo;
arrow199.pos.y = 37647.0 + TestSong_offset;
arrow199.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow199);

Arrow arrow200(right);
arrow200.speed = TestSong_tempo;
arrow200.pos.y = 37860.0 + TestSong_offset;
arrow200.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow200);

Arrow arrow201(down);
arrow201.speed = TestSong_tempo;
arrow201.pos.y = 38074.0 + TestSong_offset;
arrow201.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow201);

Arrow arrow202(left);
arrow202.speed = TestSong_tempo;
arrow202.pos.y = 38181.0 + TestSong_offset;
arrow202.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow202);

Arrow arrow203(down);
arrow203.speed = TestSong_tempo;
arrow203.pos.y = 38288.0 + TestSong_offset;
arrow203.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow203);

Arrow arrow204(left);
arrow204.speed = TestSong_tempo;
arrow204.pos.y = 38395.0 + TestSong_offset;
arrow204.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow204);

Arrow arrow205(up);
arrow205.speed = TestSong_tempo;
arrow205.pos.y = 38502.0 + TestSong_offset;
arrow205.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow205);

Arrow arrow206(right);
arrow206.speed = TestSong_tempo;
arrow206.pos.y = 38716.0 + TestSong_offset;
arrow206.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow206);

Arrow arrow207(down);
arrow207.speed = TestSong_tempo;
arrow207.pos.y = 38930.0 + TestSong_offset;
arrow207.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow207);

Arrow arrow208(left);
arrow208.speed = TestSong_tempo;
arrow208.pos.y = 39037.0 + TestSong_offset;
arrow208.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow208);

Arrow arrow209(right);
arrow209.speed = TestSong_tempo;
arrow209.pos.y = 39144.0 + TestSong_offset;
arrow209.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow209);

Arrow arrow210(down);
arrow210.speed = TestSong_tempo;
arrow210.pos.y = 39251.0 + TestSong_offset;
arrow210.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow210);

Arrow arrow211(right);
arrow211.speed = TestSong_tempo;
arrow211.pos.y = 39358.0 + TestSong_offset;
arrow211.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow211);

Arrow arrow212(right);
arrow212.speed = TestSong_tempo;
arrow212.pos.y = 39571.0 + TestSong_offset;
arrow212.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow212);

Arrow arrow213(up);
arrow213.speed = TestSong_tempo;
arrow213.pos.y = 39785.0 + TestSong_offset;
arrow213.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow213);

Arrow arrow214(left);
arrow214.speed = TestSong_tempo;
arrow214.pos.y = 39892.0 + TestSong_offset;
arrow214.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow214);

Arrow arrow215(left);
arrow215.speed = TestSong_tempo;
arrow215.pos.y = 40000.0 + TestSong_offset;
arrow215.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow215);

Arrow arrow216(left);
arrow216.speed = TestSong_tempo;
arrow216.pos.y = 40107.0 + TestSong_offset;
arrow216.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow216);

Arrow arrow217(up);
arrow217.speed = TestSong_tempo;
arrow217.pos.y = 40213.0 + TestSong_offset;
arrow217.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow217);

Arrow arrow218(right);
arrow218.speed = TestSong_tempo;
arrow218.pos.y = 40320.0 + TestSong_offset;
arrow218.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow218);

Arrow arrow219(up);
arrow219.speed = TestSong_tempo;
arrow219.pos.y = 40427.0 + TestSong_offset;
arrow219.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow219);

Arrow arrow220(down);
arrow220.speed = TestSong_tempo;
arrow220.pos.y = 40641.0 + TestSong_offset;
arrow220.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow220);

Arrow arrow221(up);
arrow221.speed = TestSong_tempo;
arrow221.pos.y = 40855.0 + TestSong_offset;
arrow221.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow221);

Arrow arrow222(down);
arrow222.speed = TestSong_tempo;
arrow222.pos.y = 41069.0 + TestSong_offset;
arrow222.side = playerSide;
arrow222.trailSize = 318;
playerArrowList->insert(playerArrowList->begin(), arrow222);

Arrow arrow223(left);
arrow223.speed = TestSong_tempo;
arrow223.pos.y = 41176.0 + TestSong_offset;
arrow223.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow223);

Arrow arrow224(up);
arrow224.speed = TestSong_tempo;
arrow224.pos.y = 41282.0 + TestSong_offset;
arrow224.side = computerSide;
arrow224.trailSize = 274;
computerArrowList->insert(computerArrowList->begin(), arrow224);

Arrow arrow225(right);
arrow225.speed = TestSong_tempo;
arrow225.pos.y = 41497.0 + TestSong_offset;
arrow225.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow225);

Arrow arrow226(down);
arrow226.speed = TestSong_tempo;
arrow226.pos.y = 41711.0 + TestSong_offset;
arrow226.side = computerSide;
arrow226.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow226);

Arrow arrow227(up);
arrow227.speed = TestSong_tempo;
arrow227.pos.y = 41924.0 + TestSong_offset;
arrow227.side = computerSide;
arrow227.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow227);

Arrow arrow228(right);
arrow228.speed = TestSong_tempo;
arrow228.pos.y = 42138.0 + TestSong_offset;
arrow228.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow228);

Arrow arrow229(up);
arrow229.speed = TestSong_tempo;
arrow229.pos.y = 42352.0 + TestSong_offset;
arrow229.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow229);

Arrow arrow230(left);
arrow230.speed = TestSong_tempo;
arrow230.pos.y = 42566.0 + TestSong_offset;
arrow230.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow230);

Arrow arrow231(right);
arrow231.speed = TestSong_tempo;
arrow231.pos.y = 42673.0 + TestSong_offset;
arrow231.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow231);

Arrow arrow232(left);
arrow232.speed = TestSong_tempo;
arrow232.pos.y = 42887.0 + TestSong_offset;
arrow232.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow232);

Arrow arrow233(up);
arrow233.speed = TestSong_tempo;
arrow233.pos.y = 42994.0 + TestSong_offset;
arrow233.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow233);

Arrow arrow234(right);
arrow234.speed = TestSong_tempo;
arrow234.pos.y = 43208.0 + TestSong_offset;
arrow234.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow234);

Arrow arrow235(down);
arrow235.speed = TestSong_tempo;
arrow235.pos.y = 43422.0 + TestSong_offset;
arrow235.side = computerSide;
arrow235.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow235);

Arrow arrow236(left);
arrow236.speed = TestSong_tempo;
arrow236.pos.y = 43635.0 + TestSong_offset;
arrow236.side = computerSide;
arrow236.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow236);

Arrow arrow237(down);
arrow237.speed = TestSong_tempo;
arrow237.pos.y = 43850.0 + TestSong_offset;
arrow237.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow237);

Arrow arrow238(right);
arrow238.speed = TestSong_tempo;
arrow238.pos.y = 44064.0 + TestSong_offset;
arrow238.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow238);

Arrow arrow239(down);
arrow239.speed = TestSong_tempo;
arrow239.pos.y = 44171.0 + TestSong_offset;
arrow239.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow239);

Arrow arrow240(up);
arrow240.speed = TestSong_tempo;
arrow240.pos.y = 44277.0 + TestSong_offset;
arrow240.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow240);

Arrow arrow241(right);
arrow241.speed = TestSong_tempo;
arrow241.pos.y = 44384.0 + TestSong_offset;
arrow241.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow241);

Arrow arrow242(left);
arrow242.speed = TestSong_tempo;
arrow242.pos.y = 44598.0 + TestSong_offset;
arrow242.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow242);

Arrow arrow243(up);
arrow243.speed = TestSong_tempo;
arrow243.pos.y = 44705.0 + TestSong_offset;
arrow243.side = playerSide;
arrow243.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow243);

Arrow arrow244(right);
arrow244.speed = TestSong_tempo;
arrow244.pos.y = 44919.0 + TestSong_offset;
arrow244.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow244);

Arrow arrow245(down);
arrow245.speed = TestSong_tempo;
arrow245.pos.y = 45133.0 + TestSong_offset;
arrow245.side = playerSide;
arrow245.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow245);

Arrow arrow246(up);
arrow246.speed = TestSong_tempo;
arrow246.pos.y = 45347.0 + TestSong_offset;
arrow246.side = playerSide;
arrow246.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow246);

Arrow arrow247(right);
arrow247.speed = TestSong_tempo;
arrow247.pos.y = 45561.0 + TestSong_offset;
arrow247.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow247);

Arrow arrow248(up);
arrow248.speed = TestSong_tempo;
arrow248.pos.y = 45775.0 + TestSong_offset;
arrow248.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow248);

Arrow arrow249(left);
arrow249.speed = TestSong_tempo;
arrow249.pos.y = 45988.0 + TestSong_offset;
arrow249.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow249);

Arrow arrow250(right);
arrow250.speed = TestSong_tempo;
arrow250.pos.y = 46095.0 + TestSong_offset;
arrow250.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow250);

Arrow arrow251(left);
arrow251.speed = TestSong_tempo;
arrow251.pos.y = 46310.0 + TestSong_offset;
arrow251.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow251);

Arrow arrow252(up);
arrow252.speed = TestSong_tempo;
arrow252.pos.y = 46417.0 + TestSong_offset;
arrow252.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow252);

Arrow arrow253(right);
arrow253.speed = TestSong_tempo;
arrow253.pos.y = 46630.0 + TestSong_offset;
arrow253.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow253);

Arrow arrow254(down);
arrow254.speed = TestSong_tempo;
arrow254.pos.y = 46844.0 + TestSong_offset;
arrow254.side = playerSide;
arrow254.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow254);

Arrow arrow255(left);
arrow255.speed = TestSong_tempo;
arrow255.pos.y = 47058.0 + TestSong_offset;
arrow255.side = playerSide;
arrow255.trailSize = 136;
playerArrowList->insert(playerArrowList->begin(), arrow255);

Arrow arrow256(down);
arrow256.speed = TestSong_tempo;
arrow256.pos.y = 47272.0 + TestSong_offset;
arrow256.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow256);

Arrow arrow257(right);
arrow257.speed = TestSong_tempo;
arrow257.pos.y = 47486.0 + TestSong_offset;
arrow257.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow257);

Arrow arrow258(down);
arrow258.speed = TestSong_tempo;
arrow258.pos.y = 47593.0 + TestSong_offset;
arrow258.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow258);

Arrow arrow259(up);
arrow259.speed = TestSong_tempo;
arrow259.pos.y = 47700.0 + TestSong_offset;
arrow259.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow259);

Arrow arrow260(right);
arrow260.speed = TestSong_tempo;
arrow260.pos.y = 47807.0 + TestSong_offset;
arrow260.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow260);

Arrow arrow261(left);
arrow261.speed = TestSong_tempo;
arrow261.pos.y = 48021.0 + TestSong_offset;
arrow261.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow261);

Arrow arrow262(up);
arrow262.speed = TestSong_tempo;
arrow262.pos.y = 48128.0 + TestSong_offset;
arrow262.side = computerSide;
arrow262.trailSize = 273;
computerArrowList->insert(computerArrowList->begin(), arrow262);

Arrow arrow263(right);
arrow263.speed = TestSong_tempo;
arrow263.pos.y = 48341.0 + TestSong_offset;
arrow263.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow263);

Arrow arrow264(down);
arrow264.speed = TestSong_tempo;
arrow264.pos.y = 48555.0 + TestSong_offset;
arrow264.side = computerSide;
arrow264.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow264);

Arrow arrow265(up);
arrow265.speed = TestSong_tempo;
arrow265.pos.y = 48770.0 + TestSong_offset;
arrow265.side = computerSide;
arrow265.trailSize = 136;
computerArrowList->insert(computerArrowList->begin(), arrow265);

Arrow arrow266(right);
arrow266.speed = TestSong_tempo;
arrow266.pos.y = 48983.0 + TestSong_offset;
arrow266.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow266);

Arrow arrow267(up);
arrow267.speed = TestSong_tempo;
arrow267.pos.y = 49197.0 + TestSong_offset;
arrow267.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow267);

Arrow arrow268(left);
arrow268.speed = TestSong_tempo;
arrow268.pos.y = 49411.0 + TestSong_offset;
arrow268.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow268);

Arrow arrow269(right);
arrow269.speed = TestSong_tempo;
arrow269.pos.y = 49518.0 + TestSong_offset;
arrow269.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow269);

Arrow arrow270(left);
arrow270.speed = TestSong_tempo;
arrow270.pos.y = 49732.0 + TestSong_offset;
arrow270.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow270);

Arrow arrow271(up);
arrow271.speed = TestSong_tempo;
arrow271.pos.y = 49839.0 + TestSong_offset;
arrow271.side = computerSide;
arrow271.trailSize = 318;
computerArrowList->insert(computerArrowList->begin(), arrow271);

Arrow arrow272(right);
arrow272.speed = TestSong_tempo;
arrow272.pos.y = 50052.0 + TestSong_offset;
arrow272.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow272);

Arrow arrow273(right);
arrow273.speed = TestSong_tempo;
arrow273.pos.y = 50160.0 + TestSong_offset;
arrow273.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow273);

Arrow arrow274(down);
arrow274.speed = TestSong_tempo;
arrow274.pos.y = 50267.0 + TestSong_offset;
arrow274.side = computerSide;
arrow274.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow274);

Arrow arrow275(left);
arrow275.speed = TestSong_tempo;
arrow275.pos.y = 50481.0 + TestSong_offset;
arrow275.side = computerSide;
arrow275.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow275);

Arrow arrow276(down);
arrow276.speed = TestSong_tempo;
arrow276.pos.y = 50694.0 + TestSong_offset;
arrow276.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow276);

Arrow arrow277(right);
arrow277.speed = TestSong_tempo;
arrow277.pos.y = 50908.0 + TestSong_offset;
arrow277.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow277);

Arrow arrow278(down);
arrow278.speed = TestSong_tempo;
arrow278.pos.y = 51015.0 + TestSong_offset;
arrow278.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow278);

Arrow arrow279(up);
arrow279.speed = TestSong_tempo;
arrow279.pos.y = 51122.0 + TestSong_offset;
arrow279.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow279);

Arrow arrow280(right);
arrow280.speed = TestSong_tempo;
arrow280.pos.y = 51229.0 + TestSong_offset;
arrow280.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow280);

Arrow arrow281(left);
arrow281.speed = TestSong_tempo;
arrow281.pos.y = 51443.0 + TestSong_offset;
arrow281.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow281);

Arrow arrow282(up);
arrow282.speed = TestSong_tempo;
arrow282.pos.y = 51550.0 + TestSong_offset;
arrow282.side = playerSide;
arrow282.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow282);

Arrow arrow283(right);
arrow283.speed = TestSong_tempo;
arrow283.pos.y = 51764.0 + TestSong_offset;
arrow283.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow283);

Arrow arrow284(down);
arrow284.speed = TestSong_tempo;
arrow284.pos.y = 51978.0 + TestSong_offset;
arrow284.side = playerSide;
arrow284.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow284);

Arrow arrow285(up);
arrow285.speed = TestSong_tempo;
arrow285.pos.y = 52192.0 + TestSong_offset;
arrow285.side = playerSide;
arrow285.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow285);

Arrow arrow286(right);
arrow286.speed = TestSong_tempo;
arrow286.pos.y = 52405.0 + TestSong_offset;
arrow286.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow286);

Arrow arrow287(up);
arrow287.speed = TestSong_tempo;
arrow287.pos.y = 52620.0 + TestSong_offset;
arrow287.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow287);

Arrow arrow288(left);
arrow288.speed = TestSong_tempo;
arrow288.pos.y = 52834.0 + TestSong_offset;
arrow288.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow288);

Arrow arrow289(right);
arrow289.speed = TestSong_tempo;
arrow289.pos.y = 52941.0 + TestSong_offset;
arrow289.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow289);

Arrow arrow290(left);
arrow290.speed = TestSong_tempo;
arrow290.pos.y = 53154.0 + TestSong_offset;
arrow290.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow290);

Arrow arrow291(up);
arrow291.speed = TestSong_tempo;
arrow291.pos.y = 53261.0 + TestSong_offset;
arrow291.side = playerSide;
arrow291.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow291);

Arrow arrow292(right);
arrow292.speed = TestSong_tempo;
arrow292.pos.y = 53475.0 + TestSong_offset;
arrow292.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow292);

Arrow arrow293(right);
arrow293.speed = TestSong_tempo;
arrow293.pos.y = 53582.0 + TestSong_offset;
arrow293.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow293);

Arrow arrow294(down);
arrow294.speed = TestSong_tempo;
arrow294.pos.y = 53689.0 + TestSong_offset;
arrow294.side = playerSide;
arrow294.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow294);

Arrow arrow295(left);
arrow295.speed = TestSong_tempo;
arrow295.pos.y = 53903.0 + TestSong_offset;
arrow295.side = playerSide;
arrow295.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow295);

Arrow arrow296(down);
arrow296.speed = TestSong_tempo;
arrow296.pos.y = 54117.0 + TestSong_offset;
arrow296.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow296);

Arrow arrow297(right);
arrow297.speed = TestSong_tempo;
arrow297.pos.y = 54331.0 + TestSong_offset;
arrow297.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow297);

Arrow arrow298(down);
arrow298.speed = TestSong_tempo;
arrow298.pos.y = 54438.0 + TestSong_offset;
arrow298.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow298);

Arrow arrow299(up);
arrow299.speed = TestSong_tempo;
arrow299.pos.y = 54545.0 + TestSong_offset;
arrow299.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow299);

Arrow arrow300(right);
arrow300.speed = TestSong_tempo;
arrow300.pos.y = 54652.0 + TestSong_offset;
arrow300.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow300);

}
void TestSong_Easy(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList){
    // AUTO-GENERATED CHART

Arrow arrow0(down);
arrow0.speed = TestSong_tempo;
arrow0.pos.y = 6951.0 + TestSong_offset;
arrow0.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow0);

Arrow arrow1(left);
arrow1.speed = TestSong_tempo;
arrow1.pos.y = 7272.0 + TestSong_offset;
arrow1.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow1);

Arrow arrow2(right);
arrow2.speed = TestSong_tempo;
arrow2.pos.y = 7486.0 + TestSong_offset;
arrow2.side = computerSide;
arrow2.trailSize = 228;
computerArrowList->insert(computerArrowList->begin(), arrow2);

Arrow arrow3(up);
arrow3.speed = TestSong_tempo;
arrow3.pos.y = 7700.0 + TestSong_offset;
arrow3.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow3);

Arrow arrow4(up);
arrow4.speed = TestSong_tempo;
arrow4.pos.y = 7914.0 + TestSong_offset;
arrow4.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow4);

Arrow arrow5(right);
arrow5.speed = TestSong_tempo;
arrow5.pos.y = 8128.0 + TestSong_offset;
arrow5.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow5);

Arrow arrow6(down);
arrow6.speed = TestSong_tempo;
arrow6.pos.y = 8341.0 + TestSong_offset;
arrow6.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow6);

Arrow arrow7(down);
arrow7.speed = TestSong_tempo;
arrow7.pos.y = 8662.0 + TestSong_offset;
arrow7.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow7);

Arrow arrow8(left);
arrow8.speed = TestSong_tempo;
arrow8.pos.y = 8983.0 + TestSong_offset;
arrow8.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow8);

Arrow arrow9(right);
arrow9.speed = TestSong_tempo;
arrow9.pos.y = 9197.0 + TestSong_offset;
arrow9.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow9);

Arrow arrow10(down);
arrow10.speed = TestSong_tempo;
arrow10.pos.y = 9411.0 + TestSong_offset;
arrow10.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow10);

Arrow arrow11(down);
arrow11.speed = TestSong_tempo;
arrow11.pos.y = 9625.0 + TestSong_offset;
arrow11.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow11);

Arrow arrow12(up);
arrow12.speed = TestSong_tempo;
arrow12.pos.y = 9839.0 + TestSong_offset;
arrow12.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow12);

Arrow arrow13(down);
arrow13.speed = TestSong_tempo;
arrow13.pos.y = 10052.0 + TestSong_offset;
arrow13.side = computerSide;
arrow13.trailSize = 205;
computerArrowList->insert(computerArrowList->begin(), arrow13);

Arrow arrow14(down);
arrow14.speed = TestSong_tempo;
arrow14.pos.y = 10374.0 + TestSong_offset;
arrow14.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow14);

Arrow arrow15(left);
arrow15.speed = TestSong_tempo;
arrow15.pos.y = 10694.0 + TestSong_offset;
arrow15.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow15);

Arrow arrow16(right);
arrow16.speed = TestSong_tempo;
arrow16.pos.y = 10908.0 + TestSong_offset;
arrow16.side = playerSide;
arrow16.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow16);

Arrow arrow17(up);
arrow17.speed = TestSong_tempo;
arrow17.pos.y = 11122.0 + TestSong_offset;
arrow17.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow17);

Arrow arrow18(up);
arrow18.speed = TestSong_tempo;
arrow18.pos.y = 11336.0 + TestSong_offset;
arrow18.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow18);

Arrow arrow19(right);
arrow19.speed = TestSong_tempo;
arrow19.pos.y = 11550.0 + TestSong_offset;
arrow19.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow19);

Arrow arrow20(down);
arrow20.speed = TestSong_tempo;
arrow20.pos.y = 11764.0 + TestSong_offset;
arrow20.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow20);

Arrow arrow21(down);
arrow21.speed = TestSong_tempo;
arrow21.pos.y = 12085.0 + TestSong_offset;
arrow21.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow21);

Arrow arrow22(left);
arrow22.speed = TestSong_tempo;
arrow22.pos.y = 12405.0 + TestSong_offset;
arrow22.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow22);

Arrow arrow23(right);
arrow23.speed = TestSong_tempo;
arrow23.pos.y = 12620.0 + TestSong_offset;
arrow23.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow23);

Arrow arrow24(down);
arrow24.speed = TestSong_tempo;
arrow24.pos.y = 12834.0 + TestSong_offset;
arrow24.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow24);

Arrow arrow25(down);
arrow25.speed = TestSong_tempo;
arrow25.pos.y = 13048.0 + TestSong_offset;
arrow25.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow25);

Arrow arrow26(up);
arrow26.speed = TestSong_tempo;
arrow26.pos.y = 13261.0 + TestSong_offset;
arrow26.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow26);

Arrow arrow27(down);
arrow27.speed = TestSong_tempo;
arrow27.pos.y = 13475.0 + TestSong_offset;
arrow27.side = playerSide;
arrow27.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow27);

Arrow arrow28(up);
arrow28.speed = TestSong_tempo;
arrow28.pos.y = 13796.0 + TestSong_offset;
arrow28.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow28);

Arrow arrow29(up);
arrow29.speed = TestSong_tempo;
arrow29.pos.y = 14117.0 + TestSong_offset;
arrow29.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow29);

Arrow arrow30(left);
arrow30.speed = TestSong_tempo;
arrow30.pos.y = 14224.0 + TestSong_offset;
arrow30.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow30);

Arrow arrow31(right);
arrow31.speed = TestSong_tempo;
arrow31.pos.y = 14545.0 + TestSong_offset;
arrow31.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow31);

Arrow arrow32(left);
arrow32.speed = TestSong_tempo;
arrow32.pos.y = 14758.0 + TestSong_offset;
arrow32.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow32);

Arrow arrow33(up);
arrow33.speed = TestSong_tempo;
arrow33.pos.y = 14972.0 + TestSong_offset;
arrow33.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow33);

Arrow arrow34(left);
arrow34.speed = TestSong_tempo;
arrow34.pos.y = 15187.0 + TestSong_offset;
arrow34.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow34);

Arrow arrow35(up);
arrow35.speed = TestSong_tempo;
arrow35.pos.y = 15507.0 + TestSong_offset;
arrow35.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow35);

Arrow arrow36(down);
arrow36.speed = TestSong_tempo;
arrow36.pos.y = 15828.0 + TestSong_offset;
arrow36.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow36);

Arrow arrow37(left);
arrow37.speed = TestSong_tempo;
arrow37.pos.y = 15935.0 + TestSong_offset;
arrow37.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow37);

Arrow arrow38(right);
arrow38.speed = TestSong_tempo;
arrow38.pos.y = 16256.0 + TestSong_offset;
arrow38.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow38);

Arrow arrow39(down);
arrow39.speed = TestSong_tempo;
arrow39.pos.y = 16470.0 + TestSong_offset;
arrow39.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow39);

Arrow arrow40(right);
arrow40.speed = TestSong_tempo;
arrow40.pos.y = 16684.0 + TestSong_offset;
arrow40.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow40);

Arrow arrow41(left);
arrow41.speed = TestSong_tempo;
arrow41.pos.y = 16898.0 + TestSong_offset;
arrow41.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow41);

Arrow arrow42(down);
arrow42.speed = TestSong_tempo;
arrow42.pos.y = 17005.0 + TestSong_offset;
arrow42.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow42);

Arrow arrow43(up);
arrow43.speed = TestSong_tempo;
arrow43.pos.y = 17218.0 + TestSong_offset;
arrow43.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow43);

Arrow arrow44(up);
arrow44.speed = TestSong_tempo;
arrow44.pos.y = 17540.0 + TestSong_offset;
arrow44.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow44);

Arrow arrow45(left);
arrow45.speed = TestSong_tempo;
arrow45.pos.y = 17647.0 + TestSong_offset;
arrow45.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow45);

Arrow arrow46(right);
arrow46.speed = TestSong_tempo;
arrow46.pos.y = 17967.0 + TestSong_offset;
arrow46.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow46);

Arrow arrow47(left);
arrow47.speed = TestSong_tempo;
arrow47.pos.y = 18181.0 + TestSong_offset;
arrow47.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow47);

Arrow arrow48(up);
arrow48.speed = TestSong_tempo;
arrow48.pos.y = 18395.0 + TestSong_offset;
arrow48.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow48);

Arrow arrow49(left);
arrow49.speed = TestSong_tempo;
arrow49.pos.y = 18609.0 + TestSong_offset;
arrow49.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow49);

Arrow arrow50(up);
arrow50.speed = TestSong_tempo;
arrow50.pos.y = 18930.0 + TestSong_offset;
arrow50.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow50);

Arrow arrow51(down);
arrow51.speed = TestSong_tempo;
arrow51.pos.y = 19251.0 + TestSong_offset;
arrow51.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow51);

Arrow arrow52(left);
arrow52.speed = TestSong_tempo;
arrow52.pos.y = 19358.0 + TestSong_offset;
arrow52.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow52);

Arrow arrow53(right);
arrow53.speed = TestSong_tempo;
arrow53.pos.y = 19678.0 + TestSong_offset;
arrow53.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow53);

Arrow arrow54(down);
arrow54.speed = TestSong_tempo;
arrow54.pos.y = 19892.0 + TestSong_offset;
arrow54.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow54);

Arrow arrow55(right);
arrow55.speed = TestSong_tempo;
arrow55.pos.y = 20106.0 + TestSong_offset;
arrow55.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow55);

Arrow arrow56(left);
arrow56.speed = TestSong_tempo;
arrow56.pos.y = 20320.0 + TestSong_offset;
arrow56.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow56);

Arrow arrow57(down);
arrow57.speed = TestSong_tempo;
arrow57.pos.y = 20427.0 + TestSong_offset;
arrow57.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow57);

Arrow arrow58(left);
arrow58.speed = TestSong_tempo;
arrow58.pos.y = 20641.0 + TestSong_offset;
arrow58.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow58);

Arrow arrow59(right);
arrow59.speed = TestSong_tempo;
arrow59.pos.y = 20962.0 + TestSong_offset;
arrow59.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow59);

Arrow arrow60(down);
arrow60.speed = TestSong_tempo;
arrow60.pos.y = 21176.0 + TestSong_offset;
arrow60.side = computerSide;
arrow60.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow60);

Arrow arrow61(up);
arrow61.speed = TestSong_tempo;
arrow61.pos.y = 21390.0 + TestSong_offset;
arrow61.side = computerSide;
arrow61.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow61);

Arrow arrow62(right);
arrow62.speed = TestSong_tempo;
arrow62.pos.y = 21604.0 + TestSong_offset;
arrow62.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow62);

Arrow arrow63(up);
arrow63.speed = TestSong_tempo;
arrow63.pos.y = 21817.0 + TestSong_offset;
arrow63.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow63);

Arrow arrow64(left);
arrow64.speed = TestSong_tempo;
arrow64.pos.y = 22031.0 + TestSong_offset;
arrow64.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow64);

Arrow arrow65(right);
arrow65.speed = TestSong_tempo;
arrow65.pos.y = 22138.0 + TestSong_offset;
arrow65.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow65);

Arrow arrow66(left);
arrow66.speed = TestSong_tempo;
arrow66.pos.y = 22352.0 + TestSong_offset;
arrow66.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow66);

Arrow arrow67(right);
arrow67.speed = TestSong_tempo;
arrow67.pos.y = 22673.0 + TestSong_offset;
arrow67.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow67);

Arrow arrow68(down);
arrow68.speed = TestSong_tempo;
arrow68.pos.y = 22887.0 + TestSong_offset;
arrow68.side = computerSide;
arrow68.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow68);

Arrow arrow69(left);
arrow69.speed = TestSong_tempo;
arrow69.pos.y = 23101.0 + TestSong_offset;
arrow69.side = computerSide;
arrow69.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow69);

Arrow arrow70(down);
arrow70.speed = TestSong_tempo;
arrow70.pos.y = 23315.0 + TestSong_offset;
arrow70.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow70);

Arrow arrow71(right);
arrow71.speed = TestSong_tempo;
arrow71.pos.y = 23529.0 + TestSong_offset;
arrow71.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow71);

Arrow arrow72(up);
arrow72.speed = TestSong_tempo;
arrow72.pos.y = 23742.0 + TestSong_offset;
arrow72.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow72);

Arrow arrow73(right);
arrow73.speed = TestSong_tempo;
arrow73.pos.y = 23850.0 + TestSong_offset;
arrow73.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow73);

Arrow arrow74(left);
arrow74.speed = TestSong_tempo;
arrow74.pos.y = 24064.0 + TestSong_offset;
arrow74.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow74);

Arrow arrow75(right);
arrow75.speed = TestSong_tempo;
arrow75.pos.y = 24384.0 + TestSong_offset;
arrow75.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow75);

Arrow arrow76(down);
arrow76.speed = TestSong_tempo;
arrow76.pos.y = 24598.0 + TestSong_offset;
arrow76.side = playerSide;
arrow76.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow76);

Arrow arrow77(up);
arrow77.speed = TestSong_tempo;
arrow77.pos.y = 24812.0 + TestSong_offset;
arrow77.side = playerSide;
arrow77.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow77);

Arrow arrow78(right);
arrow78.speed = TestSong_tempo;
arrow78.pos.y = 25026.0 + TestSong_offset;
arrow78.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow78);

Arrow arrow79(up);
arrow79.speed = TestSong_tempo;
arrow79.pos.y = 25240.0 + TestSong_offset;
arrow79.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow79);

Arrow arrow80(left);
arrow80.speed = TestSong_tempo;
arrow80.pos.y = 25454.0 + TestSong_offset;
arrow80.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow80);

Arrow arrow81(right);
arrow81.speed = TestSong_tempo;
arrow81.pos.y = 25561.0 + TestSong_offset;
arrow81.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow81);

Arrow arrow82(left);
arrow82.speed = TestSong_tempo;
arrow82.pos.y = 25775.0 + TestSong_offset;
arrow82.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow82);

Arrow arrow83(right);
arrow83.speed = TestSong_tempo;
arrow83.pos.y = 26095.0 + TestSong_offset;
arrow83.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow83);

Arrow arrow84(down);
arrow84.speed = TestSong_tempo;
arrow84.pos.y = 26310.0 + TestSong_offset;
arrow84.side = playerSide;
arrow84.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow84);

Arrow arrow85(left);
arrow85.speed = TestSong_tempo;
arrow85.pos.y = 26523.0 + TestSong_offset;
arrow85.side = playerSide;
arrow85.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow85);

Arrow arrow86(down);
arrow86.speed = TestSong_tempo;
arrow86.pos.y = 26737.0 + TestSong_offset;
arrow86.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow86);

Arrow arrow87(right);
arrow87.speed = TestSong_tempo;
arrow87.pos.y = 26951.0 + TestSong_offset;
arrow87.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow87);

Arrow arrow88(up);
arrow88.speed = TestSong_tempo;
arrow88.pos.y = 27165.0 + TestSong_offset;
arrow88.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow88);

Arrow arrow89(right);
arrow89.speed = TestSong_tempo;
arrow89.pos.y = 27272.0 + TestSong_offset;
arrow89.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow89);

Arrow arrow90(left);
arrow90.speed = TestSong_tempo;
arrow90.pos.y = 27379.0 + TestSong_offset;
arrow90.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow90);

Arrow arrow91(right);
arrow91.speed = TestSong_tempo;
arrow91.pos.y = 27593.0 + TestSong_offset;
arrow91.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow91);

Arrow arrow92(left);
arrow92.speed = TestSong_tempo;
arrow92.pos.y = 27807.0 + TestSong_offset;
arrow92.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow92);

Arrow arrow93(left);
arrow93.speed = TestSong_tempo;
arrow93.pos.y = 28021.0 + TestSong_offset;
arrow93.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow93);

Arrow arrow94(up);
arrow94.speed = TestSong_tempo;
arrow94.pos.y = 28235.0 + TestSong_offset;
arrow94.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow94);

Arrow arrow95(right);
arrow95.speed = TestSong_tempo;
arrow95.pos.y = 28448.0 + TestSong_offset;
arrow95.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow95);

Arrow arrow96(down);
arrow96.speed = TestSong_tempo;
arrow96.pos.y = 28662.0 + TestSong_offset;
arrow96.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow96);

Arrow arrow97(left);
arrow97.speed = TestSong_tempo;
arrow97.pos.y = 28876.0 + TestSong_offset;
arrow97.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow97);

Arrow arrow98(right);
arrow98.speed = TestSong_tempo;
arrow98.pos.y = 29090.0 + TestSong_offset;
arrow98.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow98);

Arrow arrow99(right);
arrow99.speed = TestSong_tempo;
arrow99.pos.y = 29304.0 + TestSong_offset;
arrow99.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow99);

Arrow arrow100(up);
arrow100.speed = TestSong_tempo;
arrow100.pos.y = 29518.0 + TestSong_offset;
arrow100.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow100);

Arrow arrow101(left);
arrow101.speed = TestSong_tempo;
arrow101.pos.y = 29732.0 + TestSong_offset;
arrow101.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow101);

Arrow arrow102(left);
arrow102.speed = TestSong_tempo;
arrow102.pos.y = 29946.0 + TestSong_offset;
arrow102.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow102);

Arrow arrow103(right);
arrow103.speed = TestSong_tempo;
arrow103.pos.y = 30160.0 + TestSong_offset;
arrow103.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow103);

Arrow arrow104(up);
arrow104.speed = TestSong_tempo;
arrow104.pos.y = 30374.0 + TestSong_offset;
arrow104.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow104);

Arrow arrow105(left);
arrow105.speed = TestSong_tempo;
arrow105.pos.y = 30481.0 + TestSong_offset;
arrow105.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow105);

Arrow arrow106(up);
arrow106.speed = TestSong_tempo;
arrow106.pos.y = 30588.0 + TestSong_offset;
arrow106.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow106);

Arrow arrow107(left);
arrow107.speed = TestSong_tempo;
arrow107.pos.y = 30801.0 + TestSong_offset;
arrow107.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow107);

Arrow arrow108(right);
arrow108.speed = TestSong_tempo;
arrow108.pos.y = 31015.0 + TestSong_offset;
arrow108.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow108);

Arrow arrow109(left);
arrow109.speed = TestSong_tempo;
arrow109.pos.y = 31229.0 + TestSong_offset;
arrow109.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow109);

Arrow arrow110(left);
arrow110.speed = TestSong_tempo;
arrow110.pos.y = 31443.0 + TestSong_offset;
arrow110.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow110);

Arrow arrow111(up);
arrow111.speed = TestSong_tempo;
arrow111.pos.y = 31657.0 + TestSong_offset;
arrow111.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow111);

Arrow arrow112(right);
arrow112.speed = TestSong_tempo;
arrow112.pos.y = 31871.0 + TestSong_offset;
arrow112.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow112);

Arrow arrow113(down);
arrow113.speed = TestSong_tempo;
arrow113.pos.y = 32085.0 + TestSong_offset;
arrow113.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow113);

Arrow arrow114(left);
arrow114.speed = TestSong_tempo;
arrow114.pos.y = 32299.0 + TestSong_offset;
arrow114.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow114);

Arrow arrow115(right);
arrow115.speed = TestSong_tempo;
arrow115.pos.y = 32512.0 + TestSong_offset;
arrow115.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow115);

Arrow arrow116(right);
arrow116.speed = TestSong_tempo;
arrow116.pos.y = 32727.0 + TestSong_offset;
arrow116.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow116);

Arrow arrow117(up);
arrow117.speed = TestSong_tempo;
arrow117.pos.y = 32941.0 + TestSong_offset;
arrow117.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow117);

Arrow arrow118(down);
arrow118.speed = TestSong_tempo;
arrow118.pos.y = 33047.0 + TestSong_offset;
arrow118.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow118);

Arrow arrow119(left);
arrow119.speed = TestSong_tempo;
arrow119.pos.y = 33154.0 + TestSong_offset;
arrow119.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow119);

Arrow arrow120(left);
arrow120.speed = TestSong_tempo;
arrow120.pos.y = 33154.0 + TestSong_offset;
arrow120.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow120);

Arrow arrow121(right);
arrow121.speed = TestSong_tempo;
arrow121.pos.y = 33368.0 + TestSong_offset;
arrow121.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow121);

Arrow arrow122(left);
arrow122.speed = TestSong_tempo;
arrow122.pos.y = 33368.0 + TestSong_offset;
arrow122.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow122);

Arrow arrow123(up);
arrow123.speed = TestSong_tempo;
arrow123.pos.y = 33582.0 + TestSong_offset;
arrow123.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow123);

Arrow arrow124(right);
arrow124.speed = TestSong_tempo;
arrow124.pos.y = 33582.0 + TestSong_offset;
arrow124.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow124);

Arrow arrow125(up);
arrow125.speed = TestSong_tempo;
arrow125.pos.y = 33796.0 + TestSong_offset;
arrow125.side = computerSide;
arrow125.trailSize = 296;
computerArrowList->insert(computerArrowList->begin(), arrow125);

Arrow arrow126(up);
arrow126.speed = TestSong_tempo;
arrow126.pos.y = 33796.0 + TestSong_offset;
arrow126.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow126);

Arrow arrow127(left);
arrow127.speed = TestSong_tempo;
arrow127.pos.y = 33903.0 + TestSong_offset;
arrow127.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow127);

Arrow arrow128(right);
arrow128.speed = TestSong_tempo;
arrow128.pos.y = 34010.0 + TestSong_offset;
arrow128.side = computerSide;
arrow128.trailSize = 250;
computerArrowList->insert(computerArrowList->begin(), arrow128);

Arrow arrow129(up);
arrow129.speed = TestSong_tempo;
arrow129.pos.y = 34010.0 + TestSong_offset;
arrow129.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow129);

Arrow arrow130(left);
arrow130.speed = TestSong_tempo;
arrow130.pos.y = 34224.0 + TestSong_offset;
arrow130.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow130);

Arrow arrow131(right);
arrow131.speed = TestSong_tempo;
arrow131.pos.y = 34438.0 + TestSong_offset;
arrow131.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow131);

Arrow arrow132(left);
arrow132.speed = TestSong_tempo;
arrow132.pos.y = 34652.0 + TestSong_offset;
arrow132.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow132);

Arrow arrow133(left);
arrow133.speed = TestSong_tempo;
arrow133.pos.y = 34865.0 + TestSong_offset;
arrow133.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow133);

Arrow arrow134(up);
arrow134.speed = TestSong_tempo;
arrow134.pos.y = 35080.0 + TestSong_offset;
arrow134.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow134);

Arrow arrow135(right);
arrow135.speed = TestSong_tempo;
arrow135.pos.y = 35294.0 + TestSong_offset;
arrow135.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow135);

Arrow arrow136(down);
arrow136.speed = TestSong_tempo;
arrow136.pos.y = 35507.0 + TestSong_offset;
arrow136.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow136);

Arrow arrow137(left);
arrow137.speed = TestSong_tempo;
arrow137.pos.y = 35721.0 + TestSong_offset;
arrow137.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow137);

Arrow arrow138(right);
arrow138.speed = TestSong_tempo;
arrow138.pos.y = 35935.0 + TestSong_offset;
arrow138.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow138);

Arrow arrow139(right);
arrow139.speed = TestSong_tempo;
arrow139.pos.y = 36149.0 + TestSong_offset;
arrow139.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow139);

Arrow arrow140(up);
arrow140.speed = TestSong_tempo;
arrow140.pos.y = 36363.0 + TestSong_offset;
arrow140.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow140);

Arrow arrow141(left);
arrow141.speed = TestSong_tempo;
arrow141.pos.y = 36577.0 + TestSong_offset;
arrow141.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow141);

Arrow arrow142(up);
arrow142.speed = TestSong_tempo;
arrow142.pos.y = 36791.0 + TestSong_offset;
arrow142.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow142);

Arrow arrow143(right);
arrow143.speed = TestSong_tempo;
arrow143.pos.y = 36898.0 + TestSong_offset;
arrow143.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow143);

Arrow arrow144(up);
arrow144.speed = TestSong_tempo;
arrow144.pos.y = 37005.0 + TestSong_offset;
arrow144.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow144);

Arrow arrow145(down);
arrow145.speed = TestSong_tempo;
arrow145.pos.y = 37218.0 + TestSong_offset;
arrow145.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow145);

Arrow arrow146(up);
arrow146.speed = TestSong_tempo;
arrow146.pos.y = 37432.0 + TestSong_offset;
arrow146.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow146);

Arrow arrow147(left);
arrow147.speed = TestSong_tempo;
arrow147.pos.y = 37647.0 + TestSong_offset;
arrow147.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow147);

Arrow arrow148(right);
arrow148.speed = TestSong_tempo;
arrow148.pos.y = 37860.0 + TestSong_offset;
arrow148.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow148);

Arrow arrow149(left);
arrow149.speed = TestSong_tempo;
arrow149.pos.y = 38074.0 + TestSong_offset;
arrow149.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow149);

Arrow arrow150(left);
arrow150.speed = TestSong_tempo;
arrow150.pos.y = 38288.0 + TestSong_offset;
arrow150.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow150);

Arrow arrow151(up);
arrow151.speed = TestSong_tempo;
arrow151.pos.y = 38502.0 + TestSong_offset;
arrow151.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow151);

Arrow arrow152(right);
arrow152.speed = TestSong_tempo;
arrow152.pos.y = 38716.0 + TestSong_offset;
arrow152.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow152);

Arrow arrow153(down);
arrow153.speed = TestSong_tempo;
arrow153.pos.y = 38930.0 + TestSong_offset;
arrow153.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow153);

Arrow arrow154(left);
arrow154.speed = TestSong_tempo;
arrow154.pos.y = 39144.0 + TestSong_offset;
arrow154.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow154);

Arrow arrow155(right);
arrow155.speed = TestSong_tempo;
arrow155.pos.y = 39358.0 + TestSong_offset;
arrow155.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow155);

Arrow arrow156(right);
arrow156.speed = TestSong_tempo;
arrow156.pos.y = 39571.0 + TestSong_offset;
arrow156.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow156);

Arrow arrow157(up);
arrow157.speed = TestSong_tempo;
arrow157.pos.y = 39785.0 + TestSong_offset;
arrow157.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow157);

Arrow arrow158(left);
arrow158.speed = TestSong_tempo;
arrow158.pos.y = 40000.0 + TestSong_offset;
arrow158.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow158);

Arrow arrow159(up);
arrow159.speed = TestSong_tempo;
arrow159.pos.y = 40213.0 + TestSong_offset;
arrow159.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow159);

Arrow arrow160(right);
arrow160.speed = TestSong_tempo;
arrow160.pos.y = 40320.0 + TestSong_offset;
arrow160.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow160);

Arrow arrow161(up);
arrow161.speed = TestSong_tempo;
arrow161.pos.y = 40427.0 + TestSong_offset;
arrow161.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow161);

Arrow arrow162(down);
arrow162.speed = TestSong_tempo;
arrow162.pos.y = 40641.0 + TestSong_offset;
arrow162.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow162);

Arrow arrow163(up);
arrow163.speed = TestSong_tempo;
arrow163.pos.y = 40855.0 + TestSong_offset;
arrow163.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow163);

Arrow arrow164(down);
arrow164.speed = TestSong_tempo;
arrow164.pos.y = 41069.0 + TestSong_offset;
arrow164.side = playerSide;
arrow164.trailSize = 318;
playerArrowList->insert(playerArrowList->begin(), arrow164);

Arrow arrow165(left);
arrow165.speed = TestSong_tempo;
arrow165.pos.y = 41176.0 + TestSong_offset;
arrow165.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow165);

Arrow arrow166(right);
arrow166.speed = TestSong_tempo;
arrow166.pos.y = 41497.0 + TestSong_offset;
arrow166.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow166);

Arrow arrow167(down);
arrow167.speed = TestSong_tempo;
arrow167.pos.y = 41711.0 + TestSong_offset;
arrow167.side = computerSide;
arrow167.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow167);

Arrow arrow168(up);
arrow168.speed = TestSong_tempo;
arrow168.pos.y = 41924.0 + TestSong_offset;
arrow168.side = computerSide;
arrow168.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow168);

Arrow arrow169(right);
arrow169.speed = TestSong_tempo;
arrow169.pos.y = 42138.0 + TestSong_offset;
arrow169.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow169);

Arrow arrow170(up);
arrow170.speed = TestSong_tempo;
arrow170.pos.y = 42352.0 + TestSong_offset;
arrow170.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow170);

Arrow arrow171(left);
arrow171.speed = TestSong_tempo;
arrow171.pos.y = 42566.0 + TestSong_offset;
arrow171.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow171);

Arrow arrow172(right);
arrow172.speed = TestSong_tempo;
arrow172.pos.y = 42673.0 + TestSong_offset;
arrow172.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow172);

Arrow arrow173(left);
arrow173.speed = TestSong_tempo;
arrow173.pos.y = 42887.0 + TestSong_offset;
arrow173.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow173);

Arrow arrow174(right);
arrow174.speed = TestSong_tempo;
arrow174.pos.y = 43208.0 + TestSong_offset;
arrow174.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow174);

Arrow arrow175(down);
arrow175.speed = TestSong_tempo;
arrow175.pos.y = 43422.0 + TestSong_offset;
arrow175.side = computerSide;
arrow175.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow175);

Arrow arrow176(left);
arrow176.speed = TestSong_tempo;
arrow176.pos.y = 43635.0 + TestSong_offset;
arrow176.side = computerSide;
arrow176.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow176);

Arrow arrow177(down);
arrow177.speed = TestSong_tempo;
arrow177.pos.y = 43850.0 + TestSong_offset;
arrow177.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow177);

Arrow arrow178(right);
arrow178.speed = TestSong_tempo;
arrow178.pos.y = 44064.0 + TestSong_offset;
arrow178.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow178);

Arrow arrow179(up);
arrow179.speed = TestSong_tempo;
arrow179.pos.y = 44277.0 + TestSong_offset;
arrow179.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow179);

Arrow arrow180(right);
arrow180.speed = TestSong_tempo;
arrow180.pos.y = 44385.0 + TestSong_offset;
arrow180.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow180);

Arrow arrow181(left);
arrow181.speed = TestSong_tempo;
arrow181.pos.y = 44598.0 + TestSong_offset;
arrow181.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow181);

Arrow arrow182(right);
arrow182.speed = TestSong_tempo;
arrow182.pos.y = 44919.0 + TestSong_offset;
arrow182.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow182);

Arrow arrow183(down);
arrow183.speed = TestSong_tempo;
arrow183.pos.y = 45133.0 + TestSong_offset;
arrow183.side = playerSide;
arrow183.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow183);

Arrow arrow184(up);
arrow184.speed = TestSong_tempo;
arrow184.pos.y = 45347.0 + TestSong_offset;
arrow184.side = playerSide;
arrow184.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow184);

Arrow arrow185(right);
arrow185.speed = TestSong_tempo;
arrow185.pos.y = 45561.0 + TestSong_offset;
arrow185.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow185);

Arrow arrow186(up);
arrow186.speed = TestSong_tempo;
arrow186.pos.y = 45775.0 + TestSong_offset;
arrow186.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow186);

Arrow arrow187(left);
arrow187.speed = TestSong_tempo;
arrow187.pos.y = 45988.0 + TestSong_offset;
arrow187.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow187);

Arrow arrow188(right);
arrow188.speed = TestSong_tempo;
arrow188.pos.y = 46096.0 + TestSong_offset;
arrow188.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow188);

Arrow arrow189(left);
arrow189.speed = TestSong_tempo;
arrow189.pos.y = 46310.0 + TestSong_offset;
arrow189.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow189);

Arrow arrow190(right);
arrow190.speed = TestSong_tempo;
arrow190.pos.y = 46630.0 + TestSong_offset;
arrow190.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow190);

Arrow arrow191(down);
arrow191.speed = TestSong_tempo;
arrow191.pos.y = 46844.0 + TestSong_offset;
arrow191.side = playerSide;
arrow191.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow191);

Arrow arrow192(left);
arrow192.speed = TestSong_tempo;
arrow192.pos.y = 47058.0 + TestSong_offset;
arrow192.side = playerSide;
arrow192.trailSize = 136;
playerArrowList->insert(playerArrowList->begin(), arrow192);

Arrow arrow193(down);
arrow193.speed = TestSong_tempo;
arrow193.pos.y = 47272.0 + TestSong_offset;
arrow193.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow193);

Arrow arrow194(right);
arrow194.speed = TestSong_tempo;
arrow194.pos.y = 47486.0 + TestSong_offset;
arrow194.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow194);

Arrow arrow195(up);
arrow195.speed = TestSong_tempo;
arrow195.pos.y = 47700.0 + TestSong_offset;
arrow195.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow195);

Arrow arrow196(right);
arrow196.speed = TestSong_tempo;
arrow196.pos.y = 47807.0 + TestSong_offset;
arrow196.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow196);

Arrow arrow197(left);
arrow197.speed = TestSong_tempo;
arrow197.pos.y = 48021.0 + TestSong_offset;
arrow197.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow197);

Arrow arrow198(up);
arrow198.speed = TestSong_tempo;
arrow198.pos.y = 48128.0 + TestSong_offset;
arrow198.side = computerSide;
arrow198.trailSize = 273;
computerArrowList->insert(computerArrowList->begin(), arrow198);

Arrow arrow199(right);
arrow199.speed = TestSong_tempo;
arrow199.pos.y = 48341.0 + TestSong_offset;
arrow199.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow199);

Arrow arrow200(down);
arrow200.speed = TestSong_tempo;
arrow200.pos.y = 48555.0 + TestSong_offset;
arrow200.side = computerSide;
arrow200.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow200);

Arrow arrow201(up);
arrow201.speed = TestSong_tempo;
arrow201.pos.y = 48770.0 + TestSong_offset;
arrow201.side = computerSide;
arrow201.trailSize = 136;
computerArrowList->insert(computerArrowList->begin(), arrow201);

Arrow arrow202(right);
arrow202.speed = TestSong_tempo;
arrow202.pos.y = 48983.0 + TestSong_offset;
arrow202.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow202);

Arrow arrow203(up);
arrow203.speed = TestSong_tempo;
arrow203.pos.y = 49197.0 + TestSong_offset;
arrow203.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow203);

Arrow arrow204(left);
arrow204.speed = TestSong_tempo;
arrow204.pos.y = 49411.0 + TestSong_offset;
arrow204.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow204);

Arrow arrow205(right);
arrow205.speed = TestSong_tempo;
arrow205.pos.y = 49518.0 + TestSong_offset;
arrow205.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow205);

Arrow arrow206(left);
arrow206.speed = TestSong_tempo;
arrow206.pos.y = 49732.0 + TestSong_offset;
arrow206.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow206);

Arrow arrow207(up);
arrow207.speed = TestSong_tempo;
arrow207.pos.y = 49839.0 + TestSong_offset;
arrow207.side = computerSide;
arrow207.trailSize = 318;
computerArrowList->insert(computerArrowList->begin(), arrow207);

Arrow arrow208(right);
arrow208.speed = TestSong_tempo;
arrow208.pos.y = 50052.0 + TestSong_offset;
arrow208.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow208);

Arrow arrow209(down);
arrow209.speed = TestSong_tempo;
arrow209.pos.y = 50267.0 + TestSong_offset;
arrow209.side = computerSide;
arrow209.trailSize = 182;
computerArrowList->insert(computerArrowList->begin(), arrow209);

Arrow arrow210(left);
arrow210.speed = TestSong_tempo;
arrow210.pos.y = 50481.0 + TestSong_offset;
arrow210.side = computerSide;
arrow210.trailSize = 137;
computerArrowList->insert(computerArrowList->begin(), arrow210);

Arrow arrow211(down);
arrow211.speed = TestSong_tempo;
arrow211.pos.y = 50694.0 + TestSong_offset;
arrow211.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow211);

Arrow arrow212(right);
arrow212.speed = TestSong_tempo;
arrow212.pos.y = 50908.0 + TestSong_offset;
arrow212.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow212);

Arrow arrow213(down);
arrow213.speed = TestSong_tempo;
arrow213.pos.y = 51015.0 + TestSong_offset;
arrow213.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow213);

Arrow arrow214(up);
arrow214.speed = TestSong_tempo;
arrow214.pos.y = 51122.0 + TestSong_offset;
arrow214.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow214);

Arrow arrow215(right);
arrow215.speed = TestSong_tempo;
arrow215.pos.y = 51229.0 + TestSong_offset;
arrow215.side = computerSide;
computerArrowList->insert(computerArrowList->begin(), arrow215);

Arrow arrow216(left);
arrow216.speed = TestSong_tempo;
arrow216.pos.y = 51443.0 + TestSong_offset;
arrow216.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow216);

Arrow arrow217(up);
arrow217.speed = TestSong_tempo;
arrow217.pos.y = 51550.0 + TestSong_offset;
arrow217.side = playerSide;
arrow217.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow217);

Arrow arrow218(right);
arrow218.speed = TestSong_tempo;
arrow218.pos.y = 51764.0 + TestSong_offset;
arrow218.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow218);

Arrow arrow219(down);
arrow219.speed = TestSong_tempo;
arrow219.pos.y = 51978.0 + TestSong_offset;
arrow219.side = playerSide;
arrow219.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow219);

Arrow arrow220(up);
arrow220.speed = TestSong_tempo;
arrow220.pos.y = 52192.0 + TestSong_offset;
arrow220.side = playerSide;
arrow220.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow220);

Arrow arrow221(right);
arrow221.speed = TestSong_tempo;
arrow221.pos.y = 52405.0 + TestSong_offset;
arrow221.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow221);

Arrow arrow222(up);
arrow222.speed = TestSong_tempo;
arrow222.pos.y = 52620.0 + TestSong_offset;
arrow222.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow222);

Arrow arrow223(left);
arrow223.speed = TestSong_tempo;
arrow223.pos.y = 52834.0 + TestSong_offset;
arrow223.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow223);

Arrow arrow224(right);
arrow224.speed = TestSong_tempo;
arrow224.pos.y = 52941.0 + TestSong_offset;
arrow224.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow224);

Arrow arrow225(left);
arrow225.speed = TestSong_tempo;
arrow225.pos.y = 53154.0 + TestSong_offset;
arrow225.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow225);

Arrow arrow226(up);
arrow226.speed = TestSong_tempo;
arrow226.pos.y = 53261.0 + TestSong_offset;
arrow226.side = playerSide;
arrow226.trailSize = 227;
playerArrowList->insert(playerArrowList->begin(), arrow226);

Arrow arrow227(right);
arrow227.speed = TestSong_tempo;
arrow227.pos.y = 53475.0 + TestSong_offset;
arrow227.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow227);

Arrow arrow228(down);
arrow228.speed = TestSong_tempo;
arrow228.pos.y = 53689.0 + TestSong_offset;
arrow228.side = playerSide;
arrow228.trailSize = 228;
playerArrowList->insert(playerArrowList->begin(), arrow228);

Arrow arrow229(left);
arrow229.speed = TestSong_tempo;
arrow229.pos.y = 53903.0 + TestSong_offset;
arrow229.side = playerSide;
arrow229.trailSize = 137;
playerArrowList->insert(playerArrowList->begin(), arrow229);

Arrow arrow230(down);
arrow230.speed = TestSong_tempo;
arrow230.pos.y = 54117.0 + TestSong_offset;
arrow230.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow230);

Arrow arrow231(right);
arrow231.speed = TestSong_tempo;
arrow231.pos.y = 54331.0 + TestSong_offset;
arrow231.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow231);

Arrow arrow232(down);
arrow232.speed = TestSong_tempo;
arrow232.pos.y = 54438.0 + TestSong_offset;
arrow232.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow232);

Arrow arrow233(up);
arrow233.speed = TestSong_tempo;
arrow233.pos.y = 54545.0 + TestSong_offset;
arrow233.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow233);

Arrow arrow234(right);
arrow234.speed = TestSong_tempo;
arrow234.pos.y = 54652.0 + TestSong_offset;
arrow234.side = playerSide;
playerArrowList->insert(playerArrowList->begin(), arrow234);
    
}
void TestSong(std::vector<Arrow>* playerArrowList, std::vector<Arrow>* computerArrowList, Music* instrumental, Music* player, Rectangle* playerRec, Rectangle* enemyRec, Camera2D* camera, int difficulty){
    // you can use the start of the chart as an initialization section for all your textures etc.
    behindTrain_TestSong = LoadTexture("/cd/blammed/behindTrain.png");
    behindTrain_TestSong.width = 1108;
    behindTrain_TestSong.height = 428;
    city_TestSong = LoadTexture("/cd/blammed/city.png");
    city_TestSong.width = 1135;
    city_TestSong.height = 404;
    sky_TestSong = LoadTexture("/cd/blammed/sky.png");
    sky_TestSong.width = 864;
    sky_TestSong.height = 477;
    street_TestSong = LoadTexture("/cd/blammed/street.png");
    street_TestSong.width = 1108;
    street_TestSong.height = 428;
    train_TestSong = LoadTexture("/cd/blammed/train.png");
    train_TestSong.width = 2048;
    train_TestSong.height = 256;
    win_TestSong = LoadTexture("/cd/blammed/win.png");
    win_TestSong.width = 1059;
    win_TestSong.height = 207;
    gfSpeaker_TestSong = LoadTexture("/cd/shared/gfDanceTitle2.png");
    gfSpeaker_TestSong.width = 1816;
	gfSpeaker_TestSong.height = 1332;
    pico_TestSong = LoadTexture("/cd/blammed/pico.png");
    pico_TestSong.width = 2340;
    pico_TestSong.height = 256;
    boyfriend_TestSong = LoadTexture("/cd/shared/boyfriend.png");
    boyfriend_TestSong.width = 2925;
    boyfriend_TestSong.height = 225;
    currentFrame_TestSong = 0;
    frameCounter_TestSong = 0;
    *instrumental = LoadMusicStream("/cd/blammed/blammed.wav");
    *player = LoadMusicStream("/cd/blammed/blammed-player.wav");
    gfSpeakerRec_TestSong = { 0.0f, 0.0f, (float)gfSpeaker_TestSong.width/5, (float)gfSpeaker_TestSong.height/4 };
    *enemyRec = {0.0f, 0.0f, (float)pico_TestSong.width/9, (float)pico_TestSong.height};
    *playerRec = {0.0f, 0.0f, (float)boyfriend_TestSong.width/13, (float)boyfriend_TestSong.height};
    camera->target = {640/2,360/2};
    camera->offset = {640/2, 360/2};
    camera->rotation = 0.0f;
    camera->zoom = 1.0f;
    if(difficulty == 0){
        TestSong_Easy(playerArrowList, computerArrowList);
    }
    else if(difficulty == 1){
        TestSong_Normal(playerArrowList, computerArrowList);
    }else if(difficulty == 2){
        TestSong_Hard(playerArrowList, computerArrowList);
    }
}
// this is for drawing the environment, you may use Camera2D* camera as an argument
// if you need camera fx
// NOTE: YOUR SONG NEEDS TO CLEAR BACKGROUND!!
void TestSongDraw(Rectangle* playerRec, Rectangle* enemyRec, Camera2D* camera){
    frameCounter_TestSong++;
    if(frameCounter_TestSong >= (60 / framesSpeed_TestSong)){
		frameCounter_TestSong = 0;
		currentFrame_TestSong++;
		if (currentFrame_TestSong % 5 == 0){
			gfSpeakerRec_TestSong.y = (float)currentFrame_TestSong*(float)gfSpeaker_TestSong.height/4;
			gfSpeakerRec_TestSong.x = 0;
		}
		else{ gfSpeakerRec_TestSong.x = (float)currentFrame_TestSong*(float)gfSpeaker_TestSong.width/5; }
		if(currentFrame_TestSong > 19){
			currentFrame_TestSong = 1;
		}
	}
    Color win_TestSongTint = YELLOW;
    if(trainSpeed_TestSong >= 2000 && trainSpeed_TestSong < 5000){
        win_TestSongTint = BLUE;
    }
    if(trainSpeed_TestSong >= 9999){
        trainSpeed_TestSong = -1280;
    }
    ClearBackground(DARKPURPLE); // dark maroon #3c0008
    DrawTextureEx(sky_TestSong, {-580/2, -10/2}, 0.0f, 1.4f, WHITE);
	DrawTextureEx(city_TestSong, {-90/2, 100/2}, 0.0f, 0.7f, WHITE);
    DrawTextureEx(win_TestSong, {-40/2, 190/2}, 0.0f, 0.7f, win_TestSongTint);
    DrawTextureEx(behindTrain_TestSong, {-90/2, 150/2}, 0.0f, 0.7f, WHITE);
	DrawTextureEx(train_TestSong, {(float)trainSpeed_TestSong, 270/2}, 0.0f, 0.7f, WHITE);
    DrawTextureEx(street_TestSong, {-90/2, 150/2}, 0.0f, 0.7f, WHITE);
    //DrawTextureEx(gfSpeaker_TestSong, {1280/2-256, 150}, 0.0f, 0.7f, WHITE);
    DrawTextureRec(gfSpeaker_TestSong, gfSpeakerRec_TestSong, {(1280/2-380)/2, 0}, WHITE);
    DrawTextureRec(pico_TestSong, *enemyRec, {(1280/2-700)/2, 240/2}, WHITE);
    DrawTextureRec(boyfriend_TestSong, *playerRec, {(1280/2+200)/2, 320/2}, WHITE);
    trainSpeed_TestSong += 5000 * GetFrameTime();
}
void TestSongCleanup(){
    UnloadTexture(behindTrain_TestSong);
    UnloadTexture(city_TestSong);
    UnloadTexture(sky_TestSong);
    UnloadTexture(street_TestSong);
    UnloadTexture(train_TestSong);
    UnloadTexture(win_TestSong);
    UnloadTexture(gfSpeaker_TestSong);
    UnloadTexture(pico_TestSong);
    UnloadTexture(boyfriend_TestSong);


}