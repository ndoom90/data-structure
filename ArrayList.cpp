//
// Created by N on 2021/03/02.
//

#include <stdlib.h>
#include <string>
#include "ArrayList.h"

using namespace std;

template <typename T>
class ArrayList {
    T *data;
    int bufferSize;
    int length = 0;

// add, remove, clear 실행시 buffersize 결정 정책 필요함
public:
    ArrayList(const int bufferSize) {
        this->bufferSize = bufferSize;
        data = (T *)malloc(sizeof(T)*bufferSize);
    }

    ~ArrayList() {
        free(data);
    }

    bool add(T value) {
        if (length>=bufferSize) {
            bufferSize = bufferSize * 2;
            T *t = (T *)realloc(data, bufferSize * sizeof(T));

            if (t) {
                data = t;
            }
            else return false;
        }

        data[length++] = value;
        return true;
    };

    T remove(int index) {
        T d = data[index];

        // void* memmove (void* dest, const void* src, size_t num);
        memmove(data + index, data + index + 1, (--length - index) * sizeof(T));

        return d;
    }

    void set(int index, T value) {
        data[index] = value;
    }

    string toString() {
        string result = "";
        if (length == 0) return "NULL";

        for (int i = 0; i < length; i++) {
            result += "[" + to_string(data[i]) + "]";
        }

        return result;
    }

    int size() {
        return length;
    }

    void clear() {
        length = 0;
    }

};
