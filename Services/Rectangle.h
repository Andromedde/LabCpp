#ifndef PROGA_LAB4_RECTANGLE_H
#define PROGA_LAB4_RECTANGLE_H

#include <iostream>
#include <cmath>
#include "GeoFig.h"
#include "PObject.h"
#include "Printable.h"
#include "DialogInitiable.h"
#include "BObject.h"
#include "string"
#include "cmath"

namespace Services{
    class Rectangle: public GeoFig{
    private:
        double massA, massB, massC, massD;
        Vector dotA, dotB, dotC, dotD;
        int side1, side2;
    public:
        Vector position() override;
        double square() override;
        double perimeter() override;
        void draw() override;
        void DialogService() override;
        std::string classname() override;
        unsigned int size() override;
        double mass() override;
    };

}
#endif //PROGA_LAB4_RECTANGLE_H
