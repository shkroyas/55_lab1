#include <iostream>
#include "linked_list.h"

using namespace std;

int main(){
    LinkedList list;

    if (list.isEmpty()) {
        cout << "1" << endl;
        cout << "List is empty" << endl;
    } else {
        cout << "0" << endl;
        cout << "List is not empty" << endl;
    }

    return 0;
}
