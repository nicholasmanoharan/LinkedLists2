#include "Student.h"
#include <iostream>


Student::Student() : Person(), studentId(""), gpa(0.0) {}


Student::Student(const std::string& name, const std::string& studentId)
    : Person(name), studentId(studentId), gpa(0.0) {}


void Student::inputDetails() {
    std::cout << "Enter student details:" << std::endl;


    setName("");
    
    std::cout << "Student ID: ";
    std::getline(std::cin, studentId);

    std::cout << "GPA: ";
    std::cin >> gpa;
    std::cin.ignore(); 
}


void Student::displayStudent() const {
    
    display();
    std::cout << "Student ID: " << studentId << ", GPA: " << gpa << std::endl;
}


const std::string& Student::getStudentId() const {
    return studentId;
}

double Student::getGPA() const {
    return gpa;
}
