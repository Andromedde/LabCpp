#ifndef PROGA_LAB4_POBJECT_H
#define PROGA_LAB4_POBJECT_H
#include "Vector.h"

namespace Services {
    class PObject{
    public:
        virtual double mass() = 0;
        virtual Services::Vector position() = 0;
    };
}
#endif //PROGA_LAB4_POBJECT_H
