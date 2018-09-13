#include "Screen.hpp"
Screen::~Screen() {
}
Screen::Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht * wd, c) {}
Screen::Screen(pos ht, pos wd):height(ht), width(wd), contents(ht * wd,' ') {}
