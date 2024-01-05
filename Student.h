#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"
#include <string>

class Student : public Person {
public:
   
    Student();
    explicit Student(const std::string& name, const std::string& studentId);

   
    void inputDetails();
    void displayStudent() const;
    const std::string& getStudentId() const;
    double getGPA() const;

private:
    std::string studentId;
    double gpa;
};

#endif 
