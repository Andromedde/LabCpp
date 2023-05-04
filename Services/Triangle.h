#ifndef PROGA_LAB4_TRIANGLE_H
#define PROGA_LAB4_TRIANGLE_H

#include <iostream>
#include <cmath>
#include "GeoFig.h"


namespace Services{
    class Triangle: public GeoFig{
    private:
        double massA, massB, massC;
        Vector dotA, dotB, dotC;
        int side;
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

#endif //PROGA_LAB4_TRIANGLE_H
