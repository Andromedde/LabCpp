#ifndef PROGA_LAB6_ALGORITM_H
#define PROGA_LAB6_ALGORITM_H
#include "iostream"
#include "string"

template<class Iterator, class Predicate>
bool anyOf(Iterator begin, Iterator end, Predicate pred);

template<class Iterator, class Predicate>
bool isPartitioned(Iterator begin, Iterator end, Predicate pred);

template<class Iterator, class Number>
Iterator findNot(Iterator begin, Iterator end, const Number& num);

#endif //PROGA_LAB6_ALGORITM_H
