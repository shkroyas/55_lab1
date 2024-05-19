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
    // Search for a node with data 27
    if (list.search(27)) {
        cout << "Node with data 27 found." << endl;
    } else {
        cout << "Node with data 27 not found." << endl;
    }

    // Search for a node with data 11
    if (list.search(11)) {
        cout << "Node with data 11 found." << endl;
    } else {
        cout << "Node with data 11 not found." << endl;
    }
    // Display the list
    list.display();

    return 0;
}
