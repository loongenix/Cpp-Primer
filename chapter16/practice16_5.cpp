#include <vector>
#include <iostream>
#include <string>
template <typename T, unsigned Num>
void myprint(const T (&arr)[Num])
{
    
    for(size_t i = 0; i < Num; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int main(int argc, char const *argv[])
{
    int i[]={1,2,3,4,5,6};
   myprint(i);
   getchar();
   return 0;
}
