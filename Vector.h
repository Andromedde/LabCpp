#ifndef PROGA_LAB3_VECTOR
#define PROGA_LAB3_VECTOR
#include <cmath>
#include "vector"
class Vector {
public:
    Vector(double x, double y);
    double getX() const;
    double getY() const;

    Vector operator+(const Vector& other) const;

private:
    double m_x;
    double m_y;
};
#endif //PROGA_LAB3_VECTOR
