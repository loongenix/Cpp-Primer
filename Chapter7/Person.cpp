#include "Person.hpp"

Person::Person()
{
}
Person::Person(const std::string &name, const std::string &address) : _name(name), _address(address) {
    std::cout<<"init"<<std::endl;
}
Person::Person(const std::string &name) : _name(name), _address("China") {
    std::cout<<"init"<<std::endl;
}
Person::~Person()
{
}
std::string const &Person::getName() const
{
    return this->_name;
}
std::string const &Person::getAddress() const
{
    return this->_address;
}

std::ostream &print(std::ostream &os, const Person &person){
    os<<"name:"<<person.getName()<<std::endl<<"address:"<<person.getAddress();
    return os;
}

std::istream &read(std::istream &is, Person &person){
    is>>person._name>>person._address;
    return is;
}