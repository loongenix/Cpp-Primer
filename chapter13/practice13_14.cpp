
#include<iostream>
using namespace std;
int number=0;

class numbered
{
    
public:
    int mysn;
    numbered(){
        mysn=++number;
        cout<<mysn<<endl;
    }
};
void f(numbered s){
    cout<<s.mysn<<endl;
}
int main(int argc, char const *argv[])
{
    numbered a,b=a,c=b;
    cout<<"--------------"<<endl;
    f(a);f(b);f(c);
    return 0;
}

