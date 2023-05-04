#ifndef PROGA_LAB4_BOBJECT_H
#define PROGA_LAB4_BOBJECT_H
#include "string"

namespace Services {
    class BObject{
    public:
        virtual std::string classname() = 0;
        virtual unsigned int size() = 0;
    };
}
#endif //PROGA_LAB4_BOBJECT_H
