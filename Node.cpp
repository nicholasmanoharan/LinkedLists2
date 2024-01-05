#include "Node.h"
#include "Student.h"
#include <iostream> 

Node::Node(Student* newStudent) : value(newStudent), next(nullptr) {}
Node::Node(Student* newStudent, Node* nextNode) : value(newStudent), next(nextNode) {}

Node::~Node() {

    delete value;
    next = nullptr;

}

Student* Node::getStudent() const {

    return value;

}

Node* Node::getNext() const {
    
    return next;

}

void Node::setNext(Node* newNode) {

    next = newNode;

}
