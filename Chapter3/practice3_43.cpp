#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    constexpr int row = 3;
    constexpr int col = 4;
    int ia[row][col] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    for (int(&r)[col] : ia)
    {

        for (int c : r)
        {
            cout << c << "--";
        }
    }

    cout << endl<< "----------------------" << endl;
    for (int i = 0; i < row; i++)
    {

        for (size_t j = 0; j < col; j++)
        {
            cout << ia[i][j] << "--";
        }
    }

    cout << endl         << "----------------------" << endl;

    for (int(*prbeg)[4] = begin(ia); prbeg < end(ia); prbeg++)
    {

        for (int *pcbeg = begin(*prbeg); pcbeg < end(*prbeg); pcbeg++)
        {
            cout << *pcbeg << "--";
        }
    }

    return 0;
}
