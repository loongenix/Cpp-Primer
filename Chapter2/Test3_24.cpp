//
// Created by Jeremy on 2018/1/3.
//

//
// Created by Jeremy on 2018/1/3.
//

#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main() {


    int a;
    vector<int> vector1;
    while (cin >> a) {

        if (a == 'b') {
            break;
        }
        vector1.push_back(a);
    }

/*

    auto size = vector1.size();
    for (int i = 1; i < vector1.size(); ++i) {

        cout << "vector[" << i - 1 << "]+vector[" << i << "]=" << vector1[i - 1] + vector1[i] << endl;
    }


    for (int j = 0; j < vector1.size(); ++j) {
        cout << "vector[" << j<< "]+vector[" << size -1- j << "]=" << vector1[j] + vector1[size -1- j]<<endl;
    }
*/


    for (auto i = vector1.cbegin(); i < vector1.cend() - 1; i++) {
        cout << *i + *(i + 1) << endl;
    }


    auto j = vector1.cbegin();
    auto k = vector1.cend() - 1;

    while (j != k) {
        cout << *j + *k << endl;
        j++;
        k--;
    }

    return 0;
}