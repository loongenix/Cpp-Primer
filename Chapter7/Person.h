//
// Created by Jeremy on 2018/1/22.
//

#ifndef CHAPTER7_PERSON_H
#define CHAPTER7_PERSON_H

#endif //CHAPTER7_PERSON_H

#include <string>

struct Person {
    std::string name;
    std::string address;

    std::string Name() const { return this->name; }

    std::string Address() const { return this->address; }


};

