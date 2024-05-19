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

    cout << "List contents: ";
    list.display();

    // Adding elements to the list
    list.addToHead(42);
    list.addToHead(12);
    list.addToHead(45);
    list.addToHead(17);
    list.addToHead(85);

    cout << "List contents: ";
    list.display();

    list.removeFromHead();
    cout << "List contents after removing from head of the linked list: ";
    list.display();

    list.removeFromHead();
    cout << "List contents after removing from head of the linked list: ";
    list.display();

    return 0;
}
