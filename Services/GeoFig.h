#ifndef PROGA_LAB4_GEOFIG_H
#define PROGA_LAB4_GEOFIG_H

#include "PObject.h"
#include "Printable.h"
#include "DialogInitiable.h"
#include "BObject.h"


namespace Services {
    class GeoFig: public Printable, public PObject, public BObject, public DialogInitiable {
    public:
        virtual double square() = 0;
        virtual double perimeter() = 0;
    };
}
#endif //PROGA_LAB4_GEOFIG_H
