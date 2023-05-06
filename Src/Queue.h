#ifndef PROGA_LAB5_QUEUE_H
#define PROGA_LAB5_QUEUE_H

#include "Exceptions.h"
#include "iostream"
#include <cstdlib>

template<class T> class Queue {
private:
    int size;
    T *head;
    T *tail;
public:
    Queue();
    void push(T x);
    T pop();
    bool isEmpty();
    int sizeOf();
};

struct Node {
    int data;
    Node *next;
};
#endif //PROGA_LAB5_QUEUE_H
