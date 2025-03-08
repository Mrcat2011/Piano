#ifndef BUTTON_HPP
#define BUTTON_HPP

typedef char boolean;

#include "raylib.h"

class Button {
public:
    Button(Color _color, Vector2 _pos, int _height, int _width, KeyboardKey key, const char* _sound_path);
    void Draw();
    void Update();
    boolean IsClick();

private:
    const char* sound_path;
    Color color;
    Color squareColor;
    Vector2 pos;
    int height;
    int width;
    boolean clicked;      
    double clickTime;  
    KeyboardKey key;
    Sound sound;
};

#endif // BUTTON_HPP