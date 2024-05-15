#pragma once

class Node
{
    public:
        int info;
        Node *next;//changed int to Node to store address
        Node(int data);// Constructor to initialise a code
};

class LinkedList
{
private:
    Node *HEAD;
    Node *TAIL;
    static const int MAX_SIZE = 10; // Define the maximum size of the linked list
    int size; // To keep track of the current size of the linked list


public:
    LinkedList();

    bool isEmpty();
    bool isFull();
    void add(Node *pred, int data);
    void addToHead(int data);
    void addToTail(int data);
    void remove(int data);
    void removeFromHead();
    void removeFromTail();
    bool search(int data);
    bool retrieve(int data);
    void traverse();
    void display();

    ~LinkedList();
};