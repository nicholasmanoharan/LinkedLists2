#include "Person.h"
#include <iostream>


Person::Person() : name("") {}


Person::Person(const std::string& name) : name(name) {}


void Person::setName(const std::string& newName) {
    name = newName;
}

void Person::display() const {
    std::cout << "Name: " << name << std::endl;
}
