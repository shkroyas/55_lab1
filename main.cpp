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

    return 0;
}
