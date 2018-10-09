#include <vector>
#include <iostream>
#include <string>
template <typename Iter, typename T>
Iter myfind(const Iter &iter1, const Iter &iter2, const T &t)
{
    auto iter3 = iter1;

    while (iter3 != iter2)
    {
        if (*iter3 == t)
        {
            return iter3;
        }
        else
        {
            iter3++;
        }
    }

    return iter2;
}

int main(int argc, char const *argv[])
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6};

    auto i = myfind(v.begin(), v.end(), 4);

    std::cout << *i << std::endl;

    std::vector<std::string> v2 = {"abc",
                                   "bcd",
                                   "efg",
                                   "hij",
                                   "klm"};

    auto c = myfind(v2.begin(), v2.end(), "efgh");
    std::cout << *c << std::endl;
    getchar();
    return 0;
}
