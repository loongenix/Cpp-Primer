//
// Created by Jeremy on 2018/1/23.
//

#ifndef CHAPTER7_SCREEN_H
#define CHAPTER7_SCREEN_H

#include <string>
#include <vector>
#include "WindowManager.h"

class Screen {

    friend class  WindowManager;

public:
    using pos=std::string::size_type;

    Screen() = default;

    Screen(pos height, pos width);

    Screen(pos height, pos width, char c);


    Screen &set(char ch);

    Screen &set(pos r, pos c, char ch);

    char get() const { return contents[cursor]; }

    inline char get(pos ht, pos wd) const;

    Screen &move(int r, int c);


    Screen &display(std::ostream &os) {
        do_display(os);
        return *this;
    }

    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &ostream) const;
};


inline Screen &Screen::set(Screen::pos r, Screen::pos col, char ch) {
    contents[r * width + col] = ch;
    return *this;

}

inline Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}
inline Screen &Screen::move(int r, int c) {
    pos row = r * width;
    cursor = row + c;
    return *this;

}
char Screen::get(Screen::pos ht, Screen::pos wd) const {
    pos row = ht * width;
    return contents[row + wd];
}


#endif //CHAPTER7_SCREEN_H

