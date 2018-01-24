#include <iostream>
#include <string>
#include "Screen/Screen.h"


using namespace std;

class Y;

class X {
    public:
        Y *y;
};

class Y {
    public:
        X *x;
};


int main() {

    X *x;
    Y *y;

    x->y = y;

    Class1 c1, c2;
    c1.next = c2;

    Screen s = Screen(10, 1, 'a');
    char c = s.get();
    std::cout << c << std::endl;

    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << endl;
    myScreen.display(cout);
    cout << endl;
}
