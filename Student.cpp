#include "Student.h"
#include <iostream> 

Student::Student() : studentId(""), gpa(0.0) {}

Student::Student(const std::string& name, int age, const std::string& studentId) : Person(name, age), studentId(studentId), gpa(0.0) {}

void Student::inputDetails() {
    std::cout  << "Enter student details: " << std::endl;

    setName("");
    setAge(0);

    std::cout << "Student ID: ";
    std::getLine(std::cin, studentId);
    std::cout << "GPA: ";
    std::cin.ignore();
}

void Student::displayStudent() const {

    display();
    std::cout << "Student ID: " << studentId << ", GPA: " << gpa << std::endl;

}

const std::string& Student::getStudentId() const {
    
    return studentId;

}

const std::string& Student::getStudentId() const {

    return studentId;

}

double Student::getGPA() const { 

    return gpa;

}
