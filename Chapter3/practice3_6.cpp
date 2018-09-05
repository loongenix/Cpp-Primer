#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main(int argc, char const *argv[])
{

    string s("Hello World");
    // 3.6
    // for (auto &c : s)
    // {
    //     c = 'X';
    // }
    // cout<<s<<endl;

    //3.8

    int i = 0;
    while (i < s.size())
    {
        auto &c = s[i];
        c = 'X';
        i++;
    }
    cout<<s<<endl;

    for(size_t i = 0; i < s.size(); i++)
    {

        auto &c = s[i];
        c = 'Z';
    }

    cout << s << endl;

   
}