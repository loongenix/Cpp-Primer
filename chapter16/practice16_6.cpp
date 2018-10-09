#include <vector>
#include <iostream>
#include <string>
template <typename T, unsigned Num>
T* begin(const T (&arr)[Num])
{
    return arr;    
}
template <typename T, unsigned Num>
T* end(const T (&arr)[Num])
{
    return arr+Num;    
}

int main(int argc, char const *argv[])
{
    int i[]={1,2,3,4,5,6};
   getchar();
   return 0;
}
