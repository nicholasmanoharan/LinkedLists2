#ifndef NODE_H
#define NODE_H

#include "Student.h"

class Node {
public:
   

   //initiating variables
    Student* value;
    Node* next;

   //initiating the constructors
    Node(Student* newStudent);
    Node(Student* newStudent, Node* nextNode);


    ~Node();

   
    Student* getStudent() const;
    Node* getNext() const;

    
    void setNext(Node* newNode);
};

#endif 
