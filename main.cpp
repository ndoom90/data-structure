#include <iostream>
#include <stdio.h>

#include "LinkedList.cpp"
#include "ArrayList.cpp"
#include "Stack.cpp"
#include "HashTable.cpp"

using namespace std;

int main() {
    // Hash Table
    HashTable hashTable = HashTable();

    char key[7] = {'B', 'L', 'o', 'w', 'e', 's', 't'};
    int value = 155;

    cout << "Add key and value to hash table\n\n";
    cout << "Key:" <<(string)key << '\n' << "Value: " << value << '\n\n';
    if (hashTable.add(key, value)) cout << "Success" << "\n\n";
    else cout << "Fail" << "\n\n";

    cout << "Key:" <<(string)key << '\n' << "Value: " << value << '\n';
    if (hashTable.add(key, value)) cout << "Success" << "\n\n";
    else cout << "Fail" << "\n\n";

    cout << "Get value by key\n\n";
    cout << "Key:" <<(string)key << '\n';
    cout << hashTable.getValue(key) << '\n';

//    // Linked List
//    LinkedList list = LinkedList<int>();
//
//    cout << endl << "Add Test" << endl;
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl;
//    list.add(0);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl;
//    list.add(1);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl;
//    list.add(2);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl;
//    list.add(3);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl << endl;
//
//    cout << "Remove Test" << endl;
//    list.remove(2);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl;
//    list.remove(1);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl << endl;
//
//    cout << "Clear Test" << endl;
//    list.clear();
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl << endl;
//
//    cout << "Re-Add Test" << endl;
//    list.add(0);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl;
//    list.add(1);
//    cout << list.toString() << endl;
//    cout << "Length: " << list.length() << endl;



//    // Array List
//    ArrayList arrayList = ArrayList<int>(2);
//
//    cout << "Add Test" << endl;
//    cout << arrayList.toString() << endl;
//    arrayList.add(0);
//    cout << arrayList.toString() << endl;
//    arrayList.add(1);
//    cout << arrayList.toString() << endl;
//    arrayList.add(2);
//    cout << arrayList.toString() << endl;
//    arrayList.add(3);
//    cout << arrayList.toString() << endl;
//    arrayList.add(4);
//    cout << arrayList.toString() << endl << endl;
//
//    cout << "Set Test" << endl;
//    arrayList.set(0, 4);
//    cout << arrayList.toString() << endl;
//    arrayList.set(1, 3);
//    cout << arrayList.toString() << endl;
//    arrayList.set(2, 2);
//    cout << arrayList.toString() << endl;
//    arrayList.set(3, 1);
//    cout << arrayList.toString() << endl;
//    arrayList.set(4, 0);
//    cout << arrayList.toString() << endl << endl;
//
//    cout << "Remove Test" << endl;
//    arrayList.remove(1);
//    cout << arrayList.toString() << endl;
//    arrayList.remove(0);
//    cout << arrayList.toString() << endl << endl;
//
//    cout << "Clear Test" << endl;
//    arrayList.clear();
//    cout << arrayList.toString() << endl << endl;
//
//    cout << "Re-Add Test" << endl;
//    arrayList.add(1);
//    cout << arrayList.toString() << endl;
//    arrayList.add(2);
//    cout << arrayList.toString() << endl;

//    // Stack
//    Stack stack = Stack<int>();
//
//    stack.push(0);
////    cout << stack.length() << endl;
//    stack.push(1);
////    cout << stack.length() << endl;
//
//    cout << stack.pop() << endl;
////    cout << stack.length() << endl;
//    cout << stack.pop() << endl;
////    cout << stack.length() << endl;

    return 0;
}
