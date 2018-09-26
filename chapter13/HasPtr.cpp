#include <string>
class HasPtr {
private:
  std::string *ps;
  int i;

public:
  HasPtr() = default;
  HasPtr(const std::string &s = std::string());
  HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
  HasPtr &operator=(const HasPtr &hp);
  

  friend void swap(HasPtr &l, HasPtr &r);

  ~HasPtr();
};

HasPtr::HasPtr(const std::string &s) : ps(new std::string(s)), i(0) {}
HasPtr &HasPtr::operator=(const HasPtr &hp) {
  //先保存到临时变量
  auto temp = new std::string(*hp.ps);

  if (ps) {
    delete ps;
  }
  //如果hp和*this是同一个对象这里就错了
  // ps=new std::string(*hp.ps);

  ps = temp;
  i = hp.i;
  return *this;
}
inline void swap(HasPtr &l, HasPtr &r) {
    using std::swap;
    swap(l.ps,r.ps);
    swap(l.i,r.i);
}
HasPtr::~HasPtr() { delete ps; }

int main(int argc, char const *argv[])
{
    HasPtr h1("Hello");
    HasPtr h2("World");

    swap(h1,h2);

    return 0;
}
