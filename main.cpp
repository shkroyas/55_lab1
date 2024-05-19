#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {
    LinkedList list;



    if (list.isEmpty()) {
        cout << "1" << endl;
        cout << "List is empty" << endl;
    } else {
        cout << "0" << endl;
        cout << "List is not empty" << endl;
    }


    cout << "List contents: ";
    list.display(); // Displaying the contents of the list

    // Adding elements to the list
    list.addToHead(42);
    list.addToHead(12);
    list.addToHead(45);
    list.addToHead(17);
    list.addToHead(85);

    cout << "List contents: ";
    list.display(); // Displaying the contents of the list

    list.removeFromTail();
    cout << "List contents after removing from tail of the linked list: ";
    list.display();

    list.removeFromTail();
    cout << "List contents after removing from tail of the linked list: ";
    list.display();

    return 0;
}