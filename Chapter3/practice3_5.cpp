#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{

    string result1, result2, word1;

    while (cin >> word1)
    {
        result1 += word1;
        result2 += word1 + " ";
    }

    cout << "result1:" << result1 << endl
         << endl;
    cout << "result2:" << result2 << endl;
}