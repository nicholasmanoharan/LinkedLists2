#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
    public: 
        Student();
        Student(const std::strig& name, int age, const std::string& studentId);
        void inputDetails();
        void displayStudent() const;
        const std::string& getStudentId() const;
        double getGPA() const;

    private: 
        sdt::string studentId(); 
        double gpa;
};
