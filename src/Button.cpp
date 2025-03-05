#include "../inc/Button.hpp"

ImageButton::ImageButton(int x, int y, int width, int height, const char* text, const char* texturePath, float scale) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->text = text;

    Image img = LoadImage(texturePath);
    int originalWidth = img.width;
    int originalHeight = img.height;

    int newWidth = originalWidth * scale;
    int newHeight = originalHeight * scale;

    ImageResize(&img, newWidth, newHeight);
    texture = LoadTextureFromImage(img);
    UnloadImage(img);
}

void ImageButton::Draw() {
    DrawTexture(texture, x, y, WHITE);
}

char ImageButton::IsClicked() {
    Vector2 mousePos = GetMousePosition();
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x >= x && mousePos.x <= GetScreenWidth() && mousePos.y >= y && mousePos.y <= GetScreenHeight()) {
        return true;
    }
    return false;
}

SimpleButton::SimpleButton(int x, int y, int width, int height, const char* text) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->text = text;
}

void SimpleButton::Draw() {
    DrawRectangle(x, y, width, height, WHITE);
    DrawText(text, x + 10, y + 10, 80, BLACK);
}