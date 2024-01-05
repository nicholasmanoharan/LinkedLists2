#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"
#include <string>

class Student : public Person {
public:
 
    Student();
    Student(const std::string& name, const std::string& studentId);

    //methods to display all details
    void inputDetails();
    void displayStudent() const;
    const std::string& getStudentId() const;
    double getGPA() const;

private:
    std::string studentId;
    double gpa;
};

#endif 
