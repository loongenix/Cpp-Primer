#include<iostream>
using namespace std;
template<typename T>
int compare(const T& t1,const T&t2){
    if(t1<t2) return -1;
    if(t2<t1) return 1;
    return 0;
}
int main(int argc, char const *argv[])
{

    std::cout<<compare(3,4)<<std::endl;
    return 0;
}
