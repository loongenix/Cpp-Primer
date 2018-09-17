#include < iostream >
#include < string >
#include < vector >
using namespace std;

bool haveValue(vector<int>::iterator begin, vector<int>::iterator end, int i) {
  while (begin != end) {
    if (*begin++ == i) {
      return true;
    }
  }
  return false;
};
vector<int>::iterator haveValue2(vector<int>::iterator begin,
                                      vector<int>::iterator end, int i) {
  while (begin != end) {
    if (*begin == i) {
      return begin;
    }
    begin++;
  }
  return end;
};
int main(int argc, char const *argv[]) {
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << haveValue(v.begin(), v.end(), 6);
  return 0;
}