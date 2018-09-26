#include <string>
class Employee {
private:
  int id;
  std::string name;

public:
  static int number;
  Employee() = default;
  Employee(const std::string &s);
  Employee(const Employee &e);
  ~Employee();
};
int Employee::number = 0;
Employee::Employee(const std::string &s) : name(s), id(++number){};
Employee::Employee(const Employee &e) : name(e.name), id(e.id) { ++number; }
Employee::~Employee() {}
