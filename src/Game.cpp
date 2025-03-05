#include "../inc/Game.hpp"
#include "../inc/GlobalVariables.hpp"
#include <string>

void Game::Draw() {
    //Draw white buttons

    Vector2 mouse = GetMousePosition();

    Color c1 = WHITE;
    if ((mouse.x > 0 && mouse.x < 50) && (mouse.y > 0 && mouse.y < 400)) c1 = GRAY;
    DrawRectangle(0, 0, 50, 400, c1);
    DrawLine(0, 0, 0, 400, BLACK); 
    DrawLine(0, 0, 50, 0, BLACK);
    DrawLine(50, 0, 50, 400, BLACK);
    DrawLine(0, 400, 50, 400, BLACK);

    Color c2 = WHITE;
    if ((mouse.x > 50 && mouse.x < 100) && (mouse.y > 0 && mouse.y < 400)) c2 = GRAY;
    DrawRectangle(50, 0, 50, 400, c2);
    DrawLine(50, 0, 50, 400, BLACK);
    DrawLine(50, 0, 100, 0, BLACK);
    DrawLine(100, 0, 100, 400, BLACK);
    DrawLine(50, 400, 100, 400, BLACK);

    Color c3 = WHITE;
    if ((mouse.x > 100 && mouse.x < 150) && (mouse.y > 0 && mouse.y < 400)) c3 = GRAY;
    DrawRectangle(100, 0, 50, 400, c3);
    DrawLine(100, 0, 100, 400, BLACK);
    DrawLine(100, 0, 150, 0, BLACK);
    DrawLine(150, 0, 150, 400, BLACK);
    DrawLine(100, 400, 150, 400, BLACK);

    Color c4 = WHITE;
    if ((mouse.x > 150 && mouse.x < 200) && (mouse.y > 0 && mouse.y < 400)) c4 = GRAY;
    DrawRectangle(150, 0, 50, 400, c4);
    DrawLine(150, 0, 150, 400, BLACK);
    DrawLine(150, 0, 200, 0, BLACK);
    DrawLine(200, 0, 200, 400, BLACK);
    DrawLine(150, 400, 200, 400, BLACK);

    Color c5 = WHITE;
    if ((mouse.x > 200 && mouse.x < 250) && (mouse.y > 0 && mouse.y < 400)) c5 = GRAY;
    DrawRectangle(200, 0, 50, 400, c5);
    DrawLine(200, 0, 200, 400, BLACK);
    DrawLine(200, 0, 250, 0, BLACK);
    DrawLine(250, 0, 250, 400, BLACK);
    DrawLine(200, 400, 250, 400, BLACK);

    Color c6 = WHITE;
    if ((mouse.x > 250 && mouse.x < 300) && (mouse.y > 0 && mouse.y < 400)) c6 = GRAY;
    DrawRectangle(250, 0, 50, 400, c6);
    DrawLine(250, 0, 250, 400, BLACK);
    DrawLine(250, 0, 300, 0, BLACK);
    DrawLine(300, 0, 300, 400, BLACK);
    DrawLine(250, 400, 300, 400, BLACK);

    Color c7 = WHITE;
    if ((mouse.x > 300 && mouse.x < 350) && (mouse.y > 0 && mouse.y < 400)) c7 = GRAY;
    DrawRectangle(300, 0, 50, 400, c7);
    DrawLine(300, 0, 300, 400, BLACK);
    DrawLine(300, 0, 350, 0, BLACK);
    DrawLine(350, 0, 350, 400, BLACK);
    DrawLine(300, 400, 350, 400, BLACK);

    Color c8 = WHITE;
    if ((mouse.x > 350 && mouse.x < 400) && (mouse.y > 0 && mouse.y < 400)) c8 = GRAY;
    DrawRectangle(350, 0, 50, 400, c8);
    DrawLine(350, 0, 350, 400, BLACK);
    DrawLine(350, 0, 400, 0, BLACK);
    DrawLine(400, 0, 400, 400, BLACK);
    DrawLine(350, 400, 400, 400, BLACK);

    Color c9 = WHITE;
    if ((mouse.x > 400 && mouse.x < 450) && (mouse.y > 0 && mouse.y < 400)) c9 = GRAY;
    DrawRectangle(400, 0, 50, 400, c9);
    DrawLine(400, 0, 400, 400, BLACK);
    DrawLine(400, 0, 450, 0, BLACK);
    DrawLine(450, 0, 450, 400, BLACK);
    DrawLine(400, 400, 450, 400, BLACK);
    
    Color c10 = WHITE;
    if ((mouse.x > 450 && mouse.x < 500) && (mouse.y > 0 && mouse.y < 400)) c10 = GRAY;
    DrawRectangle(450, 0, 50, 400, c10);
    DrawLine(450, 0, 450, 400, BLACK);
    DrawLine(450, 0, 500, 0, BLACK);
    DrawLine(500, 0, 500, 400, BLACK);
    DrawLine(450, 400, 500, 400, BLACK);

    Color c11 = WHITE;
    if ((mouse.x > 500 && mouse.x < 550) && (mouse.y > 0 && mouse.y < 400)) c11 = GRAY;
    DrawRectangle(500, 0, 50, 400, c11);
    DrawLine(500, 0, 500, 400, BLACK);
    DrawLine(500, 0, 550, 0, BLACK);
    DrawLine(550, 0, 550, 400, BLACK);
    DrawLine(500, 400, 550, 400, BLACK);

    Color c12 = WHITE;
    if ((mouse.x > 550 && mouse.x < 600) && (mouse.y > 0 && mouse.y < 400)) c12 = GRAY;
    DrawRectangle(550, 0, 50, 400, c12);
    DrawLine(550, 0, 550, 400, BLACK);
    DrawLine(550, 0, 600, 0, BLACK);
    DrawLine(600, 0, 600, 400, BLACK);
    DrawLine(550, 400, 600, 400, BLACK);

    Color c13 = WHITE;
    if ((mouse.x > 600 && mouse.x < 650) && (mouse.y > 0 && mouse.y < 400)) c13 = GRAY;
    DrawRectangle(600, 0, 50, 400, c13);
    DrawLine(600, 0, 600, 400, BLACK);
    DrawLine(600, 0, 650, 0, BLACK);
    DrawLine(650, 0, 650, 400, BLACK);
    DrawLine(600, 400, 650, 400, BLACK);

    Color c14 = WHITE;
    if ((mouse.x > 650 && mouse.x < 700) && (mouse.y > 0 && mouse.y < 400)) c14 = GRAY;
    DrawRectangle(650, 0, 50, 400, c14);
    DrawLine(650, 0, 650, 400, BLACK);
    DrawLine(650, 0, 700, 0, BLACK);
    DrawLine(700, 0, 700, 400, BLACK);
    DrawLine(650, 400, 700, 400, BLACK);

    Color c15 = WHITE;
    if ((mouse.x > 700 && mouse.x < 750) && (mouse.y > 0 && mouse.y < 400)) c15 = GRAY;
    DrawRectangle(700, 0, 50, 400, c15);
    DrawLine(700, 0, 700, 400, BLACK);
    DrawLine(700, 0, 750, 0, BLACK);
    DrawLine(750, 0, 750, 400, BLACK);
    DrawLine(700, 400, 750, 400, BLACK);

    Color c16 = WHITE;
    if ((mouse.x > 750 && mouse.x < 800) && (mouse.y > 0 && mouse.y < 400)) c16 = GRAY;
    DrawRectangle(750, 0, 50, 400, c16);
    DrawLine(750, 0, 750, 400, BLACK);
    DrawLine(750, 0, 800, 0, BLACK);
    DrawLine(800, 0, 800, 400, BLACK);
    DrawLine(750, 400, 800, 400, BLACK);


    //Draw black buttons

    DrawRectangle(50, 0, 25, 200, BLACK);
    DrawRectangle(100, 0, 25, 200, BLACK);
    DrawRectangle(150, 0, 25, 200, BLACK);
    DrawRectangle(200, 0, 25, 200, BLACK);
    DrawRectangle(250, 0, 25, 200, BLACK);
    DrawRectangle(300, 0, 25, 200, BLACK);
    DrawRectangle(350, 0, 25, 200, BLACK);
    DrawRectangle(400, 0, 25, 200, BLACK);
    DrawRectangle(450, 0, 25, 200, BLACK);
    DrawRectangle(500, 0, 25, 200, BLACK);
    DrawRectangle(550, 0, 25, 200, BLACK);
    DrawRectangle(600, 0, 25, 200, BLACK);
    DrawRectangle(650, 0, 25, 200, BLACK);
    DrawRectangle(700, 0, 25, 200, BLACK);
    DrawRectangle(750, 0, 25, 200, BLACK);



}

void Game::Update() {
    Vector2 mouse = GetMousePosition();
    static Sound note1 = LoadSound("assets/Notes/a3.mp3");
    static Sound note2 = LoadSound("assets/Notes/b3.mp3");
    static Sound note3 = LoadSound("assets/Notes/c-4.mp3");
    static Sound note4 = LoadSound("assets/Notes/d-4.mp3");
    static Sound note5 = LoadSound("assets/Notes/e3.mp3");
    static Sound note6 = LoadSound("assets/Notes/f3.mp3");
    static Sound note7 = LoadSound("assets/Notes/g-4.mp3");
    static Sound note8 = LoadSound("assets/Notes/g5.mp3");
    static Sound note9 = LoadSound("assets/Notes/a5.mp3");
    static Sound note10 = LoadSound("assets/Notes/f5.mp3");
    static Sound note11 = LoadSound("assets/Notes/e5.mp3");
    static Sound note12 = LoadSound("assets/Notes/d5.mp3");
    static Sound note13 = LoadSound("assets/Notes/c-5.mp3");
    static Sound note14 = LoadSound("assets/Notes/b4.mp3");

    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        if ((mouse.x > 50 && mouse.x < 100) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note1);
        if ((mouse.x > 100 && mouse.x < 150) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note2);
        if ((mouse.x > 150 && mouse.x < 200) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note3);
        if ((mouse.x > 200 && mouse.x < 250) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note4);
        if ((mouse.x > 250 && mouse.x < 300) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note5);
        if ((mouse.x > 300 && mouse.x < 350) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note6);
        if ((mouse.x > 350 && mouse.x < 400) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note7);
        if ((mouse.x > 400 && mouse.x < 450) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note8);
        if ((mouse.x > 450 && mouse.x < 500) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note9);
        if ((mouse.x > 500 && mouse.x < 550) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note10);
        if ((mouse.x > 550 && mouse.x < 600) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note11);
        if ((mouse.x > 600 && mouse.x < 650) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note12);
        if ((mouse.x > 650 && mouse.x < 700) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note13);
        if ((mouse.x > 700 && mouse.x < 750) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note14);
        if ((mouse.x > 0 && mouse.x < 50) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note1);
        if ((mouse.x > 750 && mouse.x < 800) && (mouse.y > 0 && mouse.y < 400)) PlaySound(note9);
    }
}