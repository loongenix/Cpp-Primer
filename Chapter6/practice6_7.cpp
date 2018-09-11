#include <iostream>
#include"chapter6.h"

using namespace std;

// int main(int argc, char const *argv[])
// {

//     for (int i = 0; i < 10; i++)
//         cout << getInt() << endl;
//     return 0;
// }
int getInt()
{
    static int count = 0;
    return count++;
}
