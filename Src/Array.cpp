#include "Array.h"
#include "iostream"

using namespace std;

Array::Array(int size) {
    if (size == 0) {
        len = 100;
    } else {
        len = size;
    }
    ptr = new int[len];
    for (int i = 0; i < len; i++) {
        ptr[i] = 0;
    }
}

void Array::setArray() {
    for (int ix = 0; ix < len; ix++)
        cin >> ptr[ix];
}

template<typename Type>
Type Array::Max(Type *array) {
    int m = 0;
    for (int i = 0; i < sizeof(array)/sizeof(*array); i++) {
        if (array[i] > m) {
            m = array[i];
        }
    }
    return m;
}