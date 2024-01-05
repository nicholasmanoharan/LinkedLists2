#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
public:
    
    Person();
    explicit Person(const std::string& name);  // Ensuring the right inputs are in the terminal

    
    void setName(const std::string& newName);

    
    void display() const;  

private:

    std::string name;
    
};

#endif 
