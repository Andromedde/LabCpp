#ifndef PROGA_LAB3_ARRAY_H
#define PROGA_LAB3_ARRAY_H
#include <cmath>
class Array {
public:
    Array();
    void add(int value);
    bool operator==(const Array& other) const;
    bool operator!=(const Array& other) const;
    bool operator<(const Array& other) const;
    bool operator>(const Array& other) const;
    Array operator+(const Array& other) const;

private:
    static const int MAX_SIZE = 100;
    int size;
    int data[MAX_SIZE];
};


#endif //PROGA_LAB3_ARRAY_H
