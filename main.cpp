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
    list.addToHead(42); // Adding a node with data 42 to the head of the list
    list.addToHead(12); // Adding a node with data 12 to the head of the list
    list.addToHead(45); // Adding a node with data 45 to the head of the list
    list.addToHead(17); // Adding a node with data 17 to the head of the list
    list.addToHead(85); // Adding a node with data 85 to the head of the list
    cout << "List contents: ";
    list.display(); // Displaying the contents of the list
    cout<<"We are adding the contents from the Tail of the list"<<endl;
    list.addToTail(12); // Adding a node with data 12 to the Tail of the list
    list.addToTail(45); // Adding a node with data 45 to the Tail of the list
    list.addToTail(17); // Adding a node with data 17 to the Tail of the list
    list.addToTail(85); // Adding a node with data 85 to the Tail of the list

    cout << "List contents: ";
    list.display(); // Displaying the contents of the list

    return 0;
}
