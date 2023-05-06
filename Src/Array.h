#ifndef PROGA_LAB5_ARRAY_H
#define PROGA_LAB5_ARRAY_H

class Array {
private:
    int len;
    int *ptr;
public:
    explicit Array(int);

    void setArray();
    void printArray(const Array &a);
    template<typename T> T Max(T *array);
};
#endif //PROGA_LAB5_ARRAY_H
