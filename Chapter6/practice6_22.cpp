#include <iostream>
#include <string>
using namespace std;

void swap(int *&a, int *&b);

int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 5;

    int *pa = &a;
    int *pb = &b;
    swap(pa, pb);

    cout<<*pa<<"  "<<*pb<<endl;


    return 0;
}

void swap(int *&a, int *&b)
{
    int *temp = a;
    a = b;
    b = temp;
}
