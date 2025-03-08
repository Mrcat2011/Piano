#include "../inc/Button.hpp"
#include <stdio.h>

Button::Button(Color _color, Vector2 _pos, int _height, int _width, KeyboardKey _key, const char* _sound_path) { 
    sound_path = _sound_path;
    color = _color;
    squareColor = _color;
    pos = _pos;
    height = _height;
    width = _width;
    clicked = false;
    clickTime = 0;
    key = _key;
    sound = LoadSound(_sound_path);
}

void Button::Draw() {
    DrawRectangle(pos.x, pos.y, width, height, color);
    if (sound_path[13] != 'f' || sound_path[13] != 'b') {
        DrawRectangleLines(pos.x, pos.y, width, height, BLACK);
    }
}

void Button::Update() {
    // Update
    if (IsClick()) {
        clicked = true;
        PlaySound(sound);
        clickTime = GetTime(); 
    }

    if (clicked) {
        color = GRAY;
        if (GetTime() - clickTime > 0.1) { 
            clicked = false;
            color = squareColor;
        }
    } else {
        color = squareColor; 
    }
}

boolean Button::IsClick() {
    Vector2 mouse_pos = GetMousePosition();

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        if (mouse_pos.x >= pos.x && mouse_pos.x <= pos.x + width && mouse_pos.y >= pos.y && mouse_pos.y <= pos.y + height) {
            return true;
        }
    }

    if (IsKeyPressed(key)) {
        return true;
    }
    return false;
}
