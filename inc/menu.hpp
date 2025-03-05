#ifndef MENU_H_
#define MENU_H_

#include "raylib.h"
#include "GlobalVariables.hpp"

class Menu {
    private:
        theme thm;
    public:

        void Draw();
        void Update();
        theme GetTheme();


};

#endif //!MENU_H_