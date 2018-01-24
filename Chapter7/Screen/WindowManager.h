//
// Created by Jeremy on 2018/1/24.
//

#ifndef CHAPTER7_WINDOWMANAGER_H
#define CHAPTER7_WINDOWMANAGER_H


#include "Screen.h"

class WindowManager {
public:
    using ScreenIndex=std::vector<Screen>::size_type;

    void Clear(ScreenIndex index);

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};


#endif //CHAPTER7_WINDOWMANAGER_H
