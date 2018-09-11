#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool haveUpperChar(const string &s);
void stringToLower(string &s);

int main(int argc, char const *argv[])
{

    cout << haveUpperChar("Hello World") << endl;

    string s = "Hello World";

    stringToLower(s);
    cout << s << endl;

    return 0;
}

bool haveUpperChar(const string &s)
{

    for (auto &&c : s)
    {
        return isupper(c);
    }
}
void stringToLower(string &s)
{

    for (auto &&c : s)
    {
        if (isupper(c))
        {
            c = tolower(c);
        }
    }
}