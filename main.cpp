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
    // Traverse the list
    cout << "Traversing the list:" << endl;
    list.traverse();
    return 0;
}
