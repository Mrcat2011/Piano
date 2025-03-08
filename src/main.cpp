#include "raylib.h"
#include "../inc/Button.hpp"

const int screenHeight = 300;
const int screenWidth = 650;

int main(int argc, char const *argv[])
{
    InitAudioDevice();
    InitWindow(screenWidth, screenHeight, "Piano");

    SetTraceLogLevel(LOG_NONE);

    Button btn(WHITE, {0, 0}, 300, 50, KEY_A, "assets/notes/c3.mp3");
    Button btn2(BLACK, {25, 0}, 150, 35, KEY_W, "assets/notes/c-3.mp3");
    Button btn3(WHITE, {50, 0}, 300, 50, KEY_D, "assets/notes/d3.mp3");
    Button btn4(BLACK, {75, 0}, 150, 35, KEY_E, "assets/notes/d-3.mp3");
    Button btn5(WHITE, {100, 0}, 300, 50, KEY_F, "assets/notes/e3.mp3");
    Button btn6(WHITE, {150, 0}, 300, 50, KEY_G, "assets/notes/f3.mp3");
    Button btn7(BLACK, {175, 0}, 150, 35, KEY_T, "assets/notes/f-3.mp3");
    Button btn8(WHITE, {200, 0}, 300, 50, KEY_H, "assets/notes/g3.mp3");
    Button btn9(BLACK, {225, 0}, 150, 35, KEY_Y, "assets/notes/g-3.mp3");
    Button btn10(WHITE, {250, 0}, 300, 50, KEY_J, "assets/notes/a3.mp3");
    Button btn11(BLACK, {275, 0}, 150, 35, KEY_U, "assets/notes/a-3.mp3");
    Button btn12(WHITE, {300, 0}, 300, 50, KEY_K, "assets/notes/b3.mp3");
    Button btn13(WHITE, {325, 0}, 300, 50, KEY_L, "assets/notes/c4.mp3");
    Button btn14(BLACK, {350, 0}, 150, 35, KEY_O, "assets/notes/c-4.mp3");
    Button btn15(WHITE, {375, 0}, 300, 50, KEY_SEMICOLON, "assets/notes/d4.mp3");
    Button btn16(BLACK, {400, 0}, 150, 35, KEY_P, "assets/notes/d-4.mp3");
    Button btn17(WHITE, {425, 0}, 300, 50, KEY_Z, "assets/notes/e4.mp3");
    Button btn18(WHITE, {450, 0}, 300, 50, KEY_X, "assets/notes/f4.mp3");
    Button btn19(BLACK, {475, 0}, 150, 35, KEY_C, "assets/notes/f-4.mp3");
    Button btn20(WHITE, {500, 0}, 300, 50, KEY_V, "assets/notes/g4.mp3");
    Button btn21(BLACK, {525, 0}, 150, 35, KEY_B, "assets/notes/g-4.mp3");
    Button btn22(WHITE, {550, 0}, 300, 50, KEY_N, "assets/notes/a4.mp3");
    Button btn23(BLACK, {575, 0}, 150, 35, KEY_M, "assets/notes/a-4.mp3");
    Button btn24(WHITE, {600, 0}, 300, 50, KEY_COMMA, "assets/notes/b4.mp3");

    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();

        btn.Draw();
        btn.Update();

        btn3.Draw();
        btn3.Update();


        btn5.Draw();
        btn5.Update();


        btn6.Draw();
        btn6.Update();


        btn8.Draw();
        btn8.Update();


        btn10.Draw();
        btn10.Update();


        btn12.Draw();
        btn12.Update();

        btn13.Draw();
        btn13.Update();

        
        btn15.Draw();
        btn15.Update();


        btn17.Draw();
        btn17.Update();

        btn18.Draw();
        btn18.Update();
        

        btn20.Draw();
        btn20.Update();


        btn22.Draw();
        btn22.Update();


        btn24.Draw();
        btn24.Update();

        btn2.Draw();
        btn2.Update();

        btn4.Draw();
        btn4.Update();

        btn7.Draw();
        btn7.Update();

        btn9.Draw();
        btn9.Update();

        btn11.Draw();
        btn11.Update();

        btn14.Draw();
        btn14.Update();

        btn16.Draw();
        btn16.Update();

        btn19.Draw();
        btn19.Update();

        btn21.Draw();
        btn21.Update();

        btn23.Draw();
        btn23.Update();


        EndDrawing();
    }

    CloseAudioDevice();
    CloseWindow();    
    return 0;
}
