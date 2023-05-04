#include "GeoFig.h"
#include "Rectangle.h"
#include "Triangle.h"

namespace Services {
    class Creation {
    public: virtual GeoFig *createGeoFig() = 0;
        virtual ~ Creation() {}
    };

    class TriangleCreation: public Creation{
    public: GeoFig *createGeoFig() {
            return new Triangle();
        }
    };

    class RectangleCreation: public Creation {
    public: GeoFig *createGeoFig() {
            return new Rectangle();
        }
    };
}
