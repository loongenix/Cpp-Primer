#include <iostream>

void swap(int *p1, int *p2);
void swap(int &p1, int &p2);

int main(int argc, char const *argv[])
{

    int i1 = 2, i2 = 3;
    swap(&i1, &i2);

    std::cout << i1 << " " << i2 << std::endl;
    swap(i1, i2);
    std::cout << i1 << " " << i2 << std::endl;
    return 0;
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
