#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto iter = v1.begin(); iter != v1.end(); iter++)
    {
        *iter *= 2;
    }

    for (auto &&i : v1)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}