#include <iostream>
#include <stdio.h>
#include "LinkedList.cpp"

using namespace std;

struct Node {
    int data;
    Node *next;
};


int main() {

    LinkedList list = LinkedList();
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

//    Node *head;
//    head = (Node *)malloc(sizeof(Node));
//
//    Node *node1 = (Node *)malloc(sizeof(Node));
//    Node *node1;
//    node1 = (Node *)malloc(sizeof(Node));
//    head->next = node1;
//    node1->data = 1;
//
//    Node *node2;
//    node2 = (Node *)malloc(sizeof(Node));
//    node1->next = node2;
//    node2->data = 2;
//
//    cout << head->next->data << endl << head->next->next->data;

    return 0;
}
