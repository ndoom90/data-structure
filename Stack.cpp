//
// Created by N on 2021/03/02.
//

#include "Stack.h"
#include <stdlib.h>

using namespace std;

template<typename T>
class Stack {
    struct Node {
        T data;
        Node *next;
        Node *prev;
    };
    Node *tail = (Node *)malloc(sizeof(Node));

public:
    Stack() {
        tail->data = NULL;
        tail->next = nullptr;
        tail->prev = nullptr;
    }
    void push(T input) {

        Node *node = (Node *)malloc(sizeof(Node));
        node->data = input;
        node->next = nullptr;
        node->prev = tail->next;

        tail->next = node;
    }

    T pop() {

        T targetData = tail->next->data;
        Node *targetPtr = tail->next;


        tail->next = targetPtr->prev;
        free(targetPtr);

        return targetData;
    }

    // Code 문제 있음
    int length() {
        int cnt = 0;
        Node *ptr = tail;
        while(ptr->next != nullptr) {
            cnt++;
            ptr->next = ptr->next->prev;
        }
        free(ptr);
        return cnt;
    }
};