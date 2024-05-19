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
    // Retrieve the predecessor node with data 35
    Node* predecessor = nullptr;
    if (list.retrieve(35, predecessor)) {
        // Add a new node with data 40 after the predecessor node
        list.add(40, predecessor);
    } else {
        cout << "Predecessor node not found." << endl;
    }

    // Display the list
    list.display();

    return 0;
}
