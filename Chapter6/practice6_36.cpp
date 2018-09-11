#include <iostream>
#include <string>
using namespace std;

string (&reverse(string (&arr)[10]))[10];

int main(int argc, char const *argv[])
{

    string arr[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

    string(&arr2)[10] = arr;

    string(&arrResult)[10] = reverse(arr);

    for (size_t i = 0; i < 10; i++)
    {
        cout << arrResult[i] << " ";
    }
    cout << endl;
    return 0;
}

string (&reverse(string (&arr)[10]))[10]
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