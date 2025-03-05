#ifndef BUTTON_H_
#define BUTTON_H_

#include "raylib.h"

class ImageButton {
    private:
        int x, y, width, height;
        const char* text;
        Texture2D texture;
    public:
        ImageButton(int x, int y, int width, int height, const char* text, const char* texturePath, float scale);
        void Draw();
        char IsClicked();
};


class SimpleButton {
    private:
        int x, y, width, height;
        const char* text;
    public:
        SimpleButton(int x, int y, int width, int height, const char* text);
        void Draw();
        char IsClicked();
};

#endif //!BUTTON_H_