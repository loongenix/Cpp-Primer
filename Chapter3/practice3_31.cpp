#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10];

    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    int arr2[10];

    for (size_t i = 0; i < 10; i++)
    {
        arr2[i] = arr[i];
    }

    cout << end(arr)-begin(arr);

    return 0;
}
