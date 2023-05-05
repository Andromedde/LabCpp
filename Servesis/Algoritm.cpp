#include "Algoritm.h"

template<class Iterator, class Predicate>
bool anyOf(Iterator begin, Iterator end, Predicate pred){
    for (Iterator current = begin; current != end; current++){
        if (pred(*current))
            return true;
    }
    return false;
}

template<class Iterator, class Predicate>
bool isPartitioned(Iterator begin, Iterator end, Predicate pred){
    Iterator newEnd = end;
    newEnd--;
    bool A = pred(*begin);
    bool B = pred(*newEnd);
    if (A != B) {
        bool secondHalf = false;
        Iterator newBeg = begin;
        newBeg++;
        for (Iterator current = newBeg; current != newEnd; current++) {
            if (secondHalf && pred(*current) != B)
                return false;
            if (!secondHalf && pred(*current) != A)
                secondHalf = true;
        }
    }
    else
        return false;
    return true;
}

template<class Iterator, class Number>
Iterator findNot(Iterator begin, Iterator end, const Number& num){
    for (Iterator current = begin; current != end; current++){
        if (*current != num)
            return current;
    }
    return end;
}