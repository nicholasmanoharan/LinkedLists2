#include "Person.h"
#include <iostream> 

Person::Person() : name(""), age (0) {} 
Person::Person(const std::string& name, int age) : name(name), age(age) {}

voidPerson::setName(const std::string& newName) {

    name = newName;

}

void Person::setAge(int newAge) {
    
    age = newAge;

}

void Person::display() const {

    std::cout << "Name: " << name << ", Age: " << age << std::endl;

}
