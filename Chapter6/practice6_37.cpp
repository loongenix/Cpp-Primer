#include <iostream>
#include <string>
using namespace std;

string arr[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

using arrRef = string[10]; //typedef string arrRef[10]

arrRef &reverse1(arrRef &arr);
auto reverse2(string (&arr)[10]) -> string (&)[10];

decltype(arr) &reverse3(decltype(arr) &);

int main(int argc, char const *argv[])
{

    string(&arr2)[10] = arr;

    string(&arrResult)[10] = reverse1(arr);

    for (size_t i = 0; i < 10; i++)
    {
        cout << arrResult[i] << " ";
    }
    cout << endl;

    string(&arrResult2)[10] = reverse2(arrResult);

    for (size_t i = 0; i < 10; i++)
    {
        cout << arrResult2[i] << " ";
    }
    cout << endl;

    string(&arrResult3)[10] = reverse3(arrResult2);

    for (size_t i = 0; i < 10; i++)
    {
        cout << arrResult3[i] << " ";
    }
    cout << endl;

    return 0;
}

arrRef &reverse1(arrRef &arr)
{
    int i = 0;
    int j = 9;
    while (i < j)
    {
        string temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return arr;
}

auto reverse2(string (&arr)[10]) -> string (&)[10]
{
    int i = 0;
    int j = 9;
    while (i < j)
    {
        string temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return arr;
}

decltype(arr) &reverse3(decltype(arr) &)
{
    int i = 0;
    int j = 9;
    while (i < j)
    {
        string temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return arr;
}