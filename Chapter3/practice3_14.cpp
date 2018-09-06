#include <vector>
#include <string>
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

    for (const auto &i : result)
    {
        cout << i << "---";
    }
    cout<<endl;

    return 0;
}
