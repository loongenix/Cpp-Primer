#include <iostream>
#include <string>
using namespace std;



int main(int argc, char const *argv[])
{
    
    int i=1;
    while(argv[i]!=0){
        
        cout<<argv[i]<<endl;
        i++;
    }
    
    
    return 0;
}
