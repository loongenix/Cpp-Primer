#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> result;
    int number;
    while (cin >> number)
    {
        result.push_back(number);
    }

    for (size_t i = 1; i < result.size(); i++)
    {
        cout << result[i - 1] + result[i] << endl;
    }
    cout << "------------------" << endl;
    int size = result.size();
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] + result[size - i - 1] << endl;
    }
    return 0;
}