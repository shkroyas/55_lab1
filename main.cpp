#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {
    LinkedList list;

    if (list.isEmpty()) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }


    // Adding elements to the list
    list.addToHead(14);
    list.addToHead(27);
    list.addToTail(35);
    list.addToTail(10);
    cout << "List contents: ";
    list.display();

    //a node pointer pointing to the nullptr node
    Node* node = nullptr;
    list.retrieve(1, node);
    if (node) {
        cout << "Node with data 1 found: " << node->info << endl;
    } else {
        cout << "Node with data 1 not found." << endl;
    }
    // the given data 10 is found and returns the position of the data in the list
    list.retrieve(35, node);
    if (node) {
        cout << "Node with data 35 found: " << node->info << endl;
    } else {
        cout << "Node with data 35 not found." << endl;
    }

    return 0;
}
