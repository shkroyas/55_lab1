#include <iostream>
#include "linked_list.h"

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

// Method to traverse the list and display the data of each node
void LinkedList::display() {
    Node* current = HEAD;
    while (current != nullptr) {
        cout << current->info << " ";
        current = current->next;
    }
    cout << endl;
}

// Method to add a node to the head of the list
void LinkedList::addToHead(int data) {
    Node* newNode = new Node(data);
    newNode->next = HEAD;
    HEAD = newNode;
    if (TAIL == nullptr) {
        TAIL = HEAD;
    }
    size++;
}



