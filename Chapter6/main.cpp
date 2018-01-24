
#include <vector>
#include <iostream>

using namespace std;

int Operat(int a, int b);

typedef int (*Operat2)(int, int);

int add(int a, int b);

int multi(int a, int b);

int de(int a, int b);

int jian(int a, int b);

int main() {

    int (*s)(int, int);
    s = add;

    typedef decltype(Operat) *pp;

    pp ss = add;

    cout << ss(8, 9) << endl;

    cout << s(5, 6) << endl;
    vector<pp> v;
    v.push_back(add);
    v.push_back(multi);
    v.push_back(de);
    v.push_back(jian);

    for (auto o:v) {
        cout << o(3, 4) << endl;
    }
}

int add(int a, int b) {
    return a + b;
}

int multi(int a, int b) {
    return a * b;
}

int de(int a, int b) {
    return a / b;
}

int jian(int a, int b) {
    return a - b;
}






