#ifndef PERSON_H
#define PERSON_H
#include <string> 

class Person {
    public: 
        Person(); 
        Person(const std::string& name, int age); 
        void setName(const std::string& newName);
        void setAge(int newAge);
        void display();

    private: 
        std::string name;
        int age;
};

#endif
