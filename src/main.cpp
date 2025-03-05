#include "raylib.h"
#include "../inc/menu.hpp"
#include "../inc/GlobalVariables.hpp"
#include "../inc/Game.hpp"

const int screenHeight = 600;
const int screenWidth = 800;

int main(int argc, char const *argv[]) {
    InitWindow(screenWidth, screenHeight, "PIONO");
    InitAudioDevice();

    Menu menu;
    Game game;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        
        if (plc == MENU) {
            menu.Draw();
        } else if (plc == GAME) {
            game.Draw();
            game.Update();
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}