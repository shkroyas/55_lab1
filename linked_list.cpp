#include <iostream>      //header file for standard input and output
#include "linked_list.h" //header file to be included in main.cpp

global int size = 0;
// node class to create node for linked list
Node::Node(info data)
{
    info = data;
    next = nullptr;
};

LinkedList::LinkedList(){
    HEAD = nullptr;
    TAIL = nullptr;
}

bool LinkedList::isEmpty(){
    if(HEAD==TAIL){
        return true;
    }
    return false;
}

bool LinkedList::isFull(){
}

void LinkedList::addToHead(int data){
    Node *t = new Node(data);
    t->info = data;
    t->next = head


}