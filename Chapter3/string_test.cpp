#include <string>
#include <iostream>
using std::string;
int main(int argc, char const *argv[])
{
    // string s1="a";
    // string s2=s1;
    // string s3="Hello World";
    // string s4(10,'c');
    // std::cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<std::endl;

    string word;

    // while (std::cin >> word)
    // {

    //     std::cout << word << std::endl;
    // }

    while (std::getline(std::cin, word))
    {
        std::cout << word << std::endl;
    }

    string::size_type a=word.size();

    return 0;
}
