#include <iostream>
#include <string>
using namespace std;

int sum(initializer_list<int> i);

int main(int argc, char const *argv[])
{

    cout << sum({1, 2, 3, 4, 5, 6, 7})<<endl;
    return 0;
}

int sum(initializer_list<int> i)
{

    int sum = 0;

    for (auto &&c : i)
    {
        sum += c;
    }
    return sum;
}