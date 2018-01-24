//
// Created by Jeremy on 2018/1/23.
//

#include "Screen.h"





Screen::Screen(Screen::pos height, Screen::pos width, char c) : height(height), width(width),
                                                                contents(height * width, c) {}

Screen::Screen(Screen::pos height, Screen::pos width) : height(height), width(width), contents(height * width, ' ') {}


void Screen::do_display(std::ostream &ostream)const {
    ostream << contents;
}


