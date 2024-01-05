#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
public:
   
    Person();
    explicit Person(const std::string& name); // Explicit to avoid implicit conversions

   
    void setName(const std::string& newName);


    void display() const; // Mark it as const

private:
    std::string name;
};

#endif 
