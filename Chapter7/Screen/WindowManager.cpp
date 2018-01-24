//
// Created by Jeremy on 2018/1/24.
//

#include "WindowManager.h"

void WindowManager::Clear(ScreenIndex index) {
    Screen &s = screens[index];
    s.contents = std::string(s.height * s.width, ' ');
}
