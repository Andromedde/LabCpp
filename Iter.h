#ifndef PROGA_LAB7_ITER_H
#define PROGA_LAB7_ITER_H
#include <iterator>
#include <string>

template<class T>
class Iterator {
private:
    T *buffer;
    int beginn;
    int capacity;
    int current;
public:
    Iterator(T *buffer, int beginn, int capacity, int current) {
        buffer = buffer;
        beginn = beginn;
        capacity = capacity;
        current = current;
    }

    T& operator*() {
        return buffer[(beginn + current) % capacity];
    }

    Iterator &operator++() {
        current++;
        return *this;
    }

    bool operator == (const Iterator s) const {
        return current == s.current;
    }

    bool operator != (const Iterator s) const {
        return *this != s;
    }

    Iterator& operator -- () {
        current --;
        return *this;
    }

    Iterator& operator += (ptrdiff_t s) {
        current += s;
        return *this;
    }

    Iterator& operator -= (ptrdiff_t s) {
        return *this += -s;
    }

    T& operator[] (ptrdiff_t s) const {
        Iterator t = *this;
        t += s;
        return t;
    }

    T* operator -> () const {
        return current;
    }

    bool operator < (const Iterator& s) {
        return current < s.current;
    }

    bool operator > (const Iterator& s) {
        return current < s.current;
    }

    bool operator <= (const Iterator& s) {
        return *this <= s;
    }

    bool operator >= (const Iterator& s) {
        return *this >= s;
    }

    friend Iterator operator + (Iterator i, ptrdiff_t s) {
        i += s;
        return i;
    }

    friend Iterator operator + (ptrdiff_t s, Iterator i) {
        return i + s;
    }

    friend Iterator operator - (Iterator i, ptrdiff_t s) {
        i -= s;
        return i;
    }

    friend ptrdiff_t operator - (const Iterator& a, const Iterator& b) {
        return a.current - b.current;
    }
};
#endif //PROGA_LAB7_ITER_H
