#ifndef PROGA_LAB5_EXCEPTIONS_H
#define PROGA_LAB5_EXCEPTIONS_H

#include "stdexcept"

class QueueExceptions : public std::logic_error {
public:
    explicit QueueExceptions(const char* message): std::logic_error(message) {}
};

class QueueException : public QueueExceptions{
public:
    explicit QueueException() : QueueExceptions("Error: the queue is empty"){}
};
#endif //PROGA_LAB5_EXCEPTIONS_H
