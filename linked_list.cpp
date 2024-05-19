#include <iostream>
#include "linked_list.h"

using namespace std;

// Node class constructor
Node::Node(int data) : info(data), next(nullptr) {}

// LinkedList class constructor
LinkedList::LinkedList() : HEAD(nullptr), TAIL(nullptr), size(0) {}

// LinkedList class destructor
LinkedList::~LinkedList() {
    Node* current = HEAD;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

// Method to check if the list is empty
bool LinkedList::isEmpty() {
    return HEAD == nullptr;
}

// Method to check if the list is full
bool LinkedList::isFull() {
    return size >= MAX_SIZE;
}

// Method to add a node to the head of the list
void LinkedList::addToHead(int data) {
    if (!isFull()) {
        Node* newNode = new Node(data);
        newNode->next = HEAD;
        HEAD = newNode;
        if (TAIL == nullptr) {
            TAIL = HEAD;
        }
        size++;
    } else {
        cout << "Sorry, cannot add more elements. The linked list is already full." << endl;
    }
}

// Method to add a node to the tail of the list
void LinkedList::addToTail(int data) {
    if (!isFull()) {
        Node* newNode = new Node(data);
        if (TAIL != nullptr) {
            TAIL->next = newNode;
        }
        TAIL = newNode;
        if (HEAD == nullptr) {
            HEAD = TAIL;
        }
        size++;
    } else {
        cout << "Sorry, cannot add more elements. The linked list is already full." << endl;
    }
}

// Method to remove a node from the head of the list
void LinkedList::removeFromHead() {
    if (isEmpty()) {
        cout << "List is empty. No nodes to remove." << endl;
        return;
    }
    Node* temp = HEAD;
    HEAD = HEAD->next;
    delete temp;
    size--;
    if (HEAD == nullptr) {
        TAIL = nullptr;
    }
}

// Method to remove a node with specific data from the list
void LinkedList::remove(int data) {
    if (isEmpty()) {
        cout << "List is empty. No nodes to remove." << endl;
        return;
    }

    if (HEAD->info == data) {
        removeFromHead();
        return;
    }

    Node* current = HEAD;
    while (current->next != nullptr) {
        if (current->next->info == data) {
            Node* temp = current->next;
            current->next = current->next->next;
            if (temp == TAIL) {
                TAIL = current;
            }
            delete temp;
            size--;
            return;
        }
        current = current->next;
    }

    cout << "Data not found in the list." << endl;
}

// Method to retrieve a node with specific data from the list
bool LinkedList::retrieve(int data, Node*& outputPtr) {
    Node* current = HEAD;
    while (current != nullptr) {
        if (current->info == data) {
            outputPtr = current;
            return true;
        }
        current = current->next;
    }
    outputPtr = nullptr;
    return false;
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



