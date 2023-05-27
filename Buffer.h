#ifndef PROGA_LAB7_BUFFER_H
#define PROGA_LAB7_BUFFER_H
#include <iterator>
#include <string>
#include "Iter.h"

using namespace std;
template<class T>
class Buffer {
private:
    T* buffer;
    int capacity;
    int beginn;
    int size;
public:
    Buffer(int C) {
        buffer = new T[C];
        capacity = C;
        size = 0;
        beginn = 0;
    }

    ~Buffer(){
        delete[] buffer;
    }

    Iterator<T> begin() const {
        return Iterator<T>(buffer, beginn, capacity, 0);
    }

    Iterator<T> end() const {
        return Iterator<T>(buffer, beginn, capacity, size);
    }

    void addFirst(const T& t) {
        if (beginn == 0)
            beginn = capacity - 1;
        else
            beginn--;
        buffer[beginn] = t;
        if (size != capacity)
            size ++;
    }

    void addLast(const T& t) {
        buffer[(beginn + size) % capacity] = t;
        if (size != capacity)
            size++;
    }

    T first() {
        return buffer[beginn];
    }

    T last() {
        return buffer[(beginn + size - 1) % capacity];
    }

    T& operator [](int i) const {
        if (i < 0 || i >= size) {
            string exc = "Call to the " + to_string(i) + " element, buffer size is " + to_string(size);
            throw out_of_range(exc);
        }
        return buffer[(beginn + i) % capacity];
    }

    void deleteFirst() {
        beginn = (beginn + 1) % capacity;
        if (size != 0)
            size --;
    }

    void deleteLast() {
        if (size != 0)
            size --;
    }

    void changeCapacity(int c) {
        T* newBuffer = new T[c];
        if (c < size)
            size = c;
        int cur = beginn;
        for (int i = 0; i < size; i++) {
            newBuffer[i] = buffer[cur];
            cur = (cur + 1) % capacity;
        }
        delete[] buffer;
        buffer = newBuffer;
        beginn = 0;
        capacity = c;
    }
};
#endif //PROGA_LAB7_BUFFER_H
