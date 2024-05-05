#pragma once

class Node
{
    int info;
    int *next;
};

class LinkedList
{
private:
    Node *HEAD;
    Node *TAIL;

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