//
// Created by Jeremy on 2018/1/3.
//

#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main(){

    string a;
    vector<string> vector1;
    while (cin >> a) {



        if (a == "b") {
            break;
        }
        vector1.push_back(a);
    }

    for (int i = 0; i < vector1.size(); ++i) {
        for (auto &c:vector1[i]) {
            toupper(c);
        }
        cout<<vector1[i]<<endl;
    }


    return 0;
};
