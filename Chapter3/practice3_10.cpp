
#include <cctype>
#include <iostream>
#include <string>


using namespace std;
int main(int argc, char const *argv[])
{
   
    string ss;
    getline(cin, ss);

    int i = 0;
    int count = 0;

    string r;

    for (auto &i : ss)
    {
        if (!ispunct(i))
        {
            r += i;
        }
    }

    cout << r;
    return 0;
}
