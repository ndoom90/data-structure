//
// Created by N on 2021/03/02.
//

#include <stdlib.h>
#include "ArrayList.h"

using namespace std;

template <typename T>
class ArrayList {
    T *data;
    int bufferSize;

public:
    ArrayList(const int bufferSize) {
        this->bufferSize = bufferSize;
        data = (T *)malloc(sizeof(T)*bufferSize);
    }

    ~ArrayList() {
        free(data);
    }
};
