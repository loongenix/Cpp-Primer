#include <iostream>
#include <string>
using namespace std;

int compare(int a, int *b);

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 5;
    cout << compare(a, &b) << endl;
    return 0;
}

int compare(int a, int *b)
{
    return a > *b ? a : *b;
}
