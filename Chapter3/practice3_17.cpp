#include <vector>
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> result;
    string word;
    while (cin >> word)
    {
        result.push_back(word);
    }

    for (auto &i : result)
    {

        for (auto &c : i)
        {
            if (islower(c))
            {
                c = toupper(c);
            }
        }
    }

    for (auto &&i : result)
    {
        cout << i << endl;
    }

 
    return 0;
}