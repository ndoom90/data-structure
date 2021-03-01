#include <iostream>
#include <stdio.h>
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList list = LinkedList<int>();
    cout << list.toString() << endl;
    cout << "Length: " << list.length() << endl;
    list.add(0);
    cout << list.toString() << endl;
    cout << "Length: " << list.length() << endl;
    list.add(1);
    cout << list.toString() << endl;
    cout << "Length: " << list.length() << endl;
    list.add(2);
    cout << list.toString() << endl;
    cout << "Length: " << list.length() << endl;
    list.add(3);
    cout << list.toString() << endl;
    cout << "Length: " << list.length() << endl;

    list.remove(2);
    cout << list.toString() << endl;
    cout << "Length: " << list.length() << endl;

    return 0;
}
