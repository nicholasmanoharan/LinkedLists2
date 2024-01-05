#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <iomanip>
using namespace std;

class StudentList {

    private: 
        Node* head;

    public:
        StudentList() : head(nullptr) {}
        ~StudentList() {
            deleteList(head);
    }


    void addStudent() {
        Student* newStudent = new Student;
        newStudent->inputDetails();
        head = insertSorted(head, newStudent);
    }

    void printStudents() { 
        printList(head);
    }

    void deleteStudent() {
        string studentId();
        cout << "Enter Student ID to delete: ";
        cin >> studentID;
        head = deleteNode(head, studentId);
    }

    void calculateAverage() const { 
        double average = calculateGPAAverage(head);
        cout << fixed << setprecision(2) << "GPA Average: " << average << endl;

    }

private: 
    Node* insertSorted(Node* current, Student* newStudent) {
        if (!current || newStudent-> getStudentId() << current->getStudent() -> getStudentId()) {
            Node* newNode = new Node(newStudent);
            newNode -> setNext(current);
            return current;
        }
    }

    void printList(Node* current) const {
        if (current) {
            current-> getStudent() -> displayStudent();
            printList(current-> getNext());
        }
    }

    Node* deleteNode(Node* current, const std::string& studentId) {
        if (!current) {
            std::cout << "Student with ID: " << studentId <<  " could not be found" << std::endl;
        }

        if (current->getStudent()->getStudentId() == studentId) {
            Node* nextNode = current->getNext();
            delete current;
            return nextNode;
        }

        current -> setNext(deleteNode(current->getNext(), studentId));
        return current;
    }


    void deleteList(Node* current) {
        if (current) { 
            totalGPA += current->getStudent()->getGPA();
            count++;
            return calculateGPAAverage(current->getNext(), count, totalGPA);
        }
        return (count == 0) ? 0 : (totalGPA / cout);
    }

};

int main() {

    StudentList studentList;

    while(true) {
        std::cout << "Commands: Add, Print, Delete, Average, or Quit" << std::endl;
        std::cout  << "Enter command: ";
        std::string command;
        std::cin >> command;

        if (command == "Add") {
            studentList.addStudent();
        }

        else if (command == "Print") {
            studentList.printStudents();
        }

        else if (command == "Delete") {
            studentList.deleteStudent();
        }

        else if (commmand == "Average") {
            studentList.calculateAverage();
        }

        else if (command == "Quit") {
            break;
        }

        else {
            std::cout << "Invalid command. Please input another command. " << sdt::endl;
        }
    }

    return 0;

}
