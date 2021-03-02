//
// Created by N on 2021/03/01.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
class LinkedList {
    struct Node {
        T data;
        Node *next;
    };

    Node *head = (Node *)malloc(sizeof(Node));
//    Node *head;
//    head = (Node *)malloc(sizeof(Node));

public:
    LinkedList() {
        head->next = nullptr;
        head->data = NULL;
    }

public:
    void add(const T input) {
        Node *node = (Node *)malloc(sizeof(Node));
        Node *ptr = head;

        while(ptr->next != nullptr) {
            ptr = ptr->next;
        }

        ptr->next = node;
        node->data = input;
        node->next = nullptr;
    }

    int remove(const int index) {
        Node *ptr = head;
        Node *targetPtr;
        T targetData;

        for (int i = 0; i < index; i++) {
            ptr = ptr->next;
        }
        targetPtr = ptr->next;
        targetData = targetPtr->data;
        ptr->next = ptr->next->next;

        free(targetPtr);
        return targetData;
    }

    int length() {
        Node *ptr = head;
        int cnt = 0;

        while(ptr->next != nullptr) {
            ptr = ptr->next;
            cnt++;
        }
        return cnt;
    }

    void clear() {
        Node *ptr = head;
        Node *targetPtr;

        while (head->next != nullptr) {
            targetPtr = ptr->next;
            ptr->next = ptr->next->next;
            free(targetPtr);
        }
    }

    string toString() {
        Node *ptr = head;

        if (ptr->next == nullptr) {
            return "NULL";
        }

        else {
            string result = "";
            do {
                ptr = ptr->next;
                if (result != "") {
                    result.append("->");
                }
                result.append(to_string(ptr->data));
            } while(ptr->next != nullptr);

            return result;
        }
    }


};
