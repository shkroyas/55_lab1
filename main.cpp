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

    list.remove(12) ;
    cout << "List contents after removing 12 from the linked list: ";
    list.display();
    list.remove(45);
    cout << "List contents after removing 45 from the linked list: ";
    list.display();
    list.remove(85);//85 not available in the list
    list.remove(42);
    cout << "List contents after removing 42 from the linked list: ";
    list.display();
    list.removeFromHead();//returns an error for empty list

    return 0;
}
