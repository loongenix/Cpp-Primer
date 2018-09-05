#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string word1, word2;
    cout << "input first word" << endl;
    cin >> word1;
    cout << "input second word" << endl;
    cin >> word2;

    if (word1 != word2)
    {
        cout << (word1 > word2 ? word1 : word2) << endl;
    }

    if (word1.size() != word2.size())
    {
        cout << (word1.size() > word2.size() ? word1 : word2) << endl;
    }
}