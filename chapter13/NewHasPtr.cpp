#include <string >
class NewHasPtr {
private:
  std::string *ps;
  int i;
  std::size_t *use;

public:
  NewHasPtr(const std::string &s = std::string());
  NewHasPtr(const NewHasPtr &hp);
  NewHasPtr &operator=(const NewHasPtr &hp);
  ~NewHasPtr();
};

NewHasPtr::NewHasPtr(const std::string &s)
    : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
NewHasPtr::NewHasPtr(const NewHasPtr &hp) : ps(hp.ps), i(hp.i), use(hp.use) {
  ++*use;
}
NewHasPtr &NewHasPtr::operator=(const NewHasPtr &hp) {
  ++*hp.use;

  //递减本原对象的引用
  if (--*use <= 0) {
    delete use;
    delete ps;
  }
  ps = hp.ps;
  use = hp.use;
  i = hp.i;
  return *this;
}
NewHasPtr::~NewHasPtr() {
  if (--*use <= 0) {
    delete ps;
    delete use;
  }
}
