#include <iostream>      // header file for standard input and output
#include "linked_list.h" // header file to be included in main.cpp

using namespace std;

// Node class definition
Node::Node(int data) : info(data), next(nullptr) {}

// LinkedList constructor definition
LinkedList::LinkedList() : HEAD(nullptr), TAIL(nullptr), size(0) {}

// LinkedList destructor definition
LinkedList::~LinkedList() {
    // Destructor can be left empty if there's nothing to clean up for now
}

// Method to check if the list is empty
bool LinkedList::isEmpty() {
    return HEAD == nullptr;
}
