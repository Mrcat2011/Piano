#include "../inc/menu.hpp"
#include "../inc/Button.hpp"
#include "../inc/GlobalVariables.hpp"
#include <string>

void Menu::Draw() {
    int screenHeight = GetScreenHeight();
    int screenWidth = GetScreenWidth();

    Color textcolor = WHITE;

    if (thm == light) {
        ClearBackground(WHITE);
        textcolor = BLACK;
    } else {
        ClearBackground(BLACK);
        textcolor = WHITE;
    }

    DrawText("PIANO", 240, 0, 100, textcolor);

    std::string texturePath = "assets/theme.png";
    static ImageButton btn1(750, 550, 20, 20, "C", texturePath.c_str(), 0.05);

    if (btn1.IsClicked() && thm == light) {
        thm = dark;
    } else if (btn1.IsClicked() && thm == dark) {
        thm = light;
    }
    btn1.Draw();

    DrawRectangle(280, 300, 200, 50, (thm == light) ? BLACK : WHITE);
    DrawText("Start", 300, 310, 50, (thm == light) ? WHITE : BLACK);
    
    if (CheckCollisionPointRec(GetMousePosition(), {280, 300, 200, 50})) {
        DrawRectangleLines(280, 300, 200, 50, (thm == light) ? WHITE : BLACK);
        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            plc = GAME;
            //printf("Start game\n");
        }
    }
}

void Menu::Update() {
    // Nothing to update
}

theme Menu::GetTheme() {
    return thm;
}