#ifndef PROGA_LAB6_ITERATOR_H
#define PROGA_LAB6_ITERATOR_H

#include "iterator"
#include "vector"

using namespace std;

class Iterator : public vector<int>::iterator {
    using Number = vector<int>::iterator;
    using Number::Number;
public:
    auto operator--(int) const = delete;
    auto operator--() const = delete;
    auto operator-(difference_type __n) const = delete;
    Iterator(__normal_iterator <pointer, vector<int>> iterator) : Number(iterator){};
};
#endif //PROGA_LAB6_ITERATOR_H
