#pragma onece
#include <string>
#include <iostream>
class Person
{

  friend std::istream &read(std::istream &is, Person &person);

private:
  std::string _name;
  std::string _address;

public:
  Person();
  Person(const std::string &name, const std::string &address);
  Person(const std::string &name);
  ~Person();

  std::string const &getName() const;
  std::string const &getAddress() const;
};
std::istream &read(std::istream &is, Person &person);
std::ostream &print(std::ostream &os, const Person &person);