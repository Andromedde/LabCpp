#include "Vector.h"
#include "Square.h"
#include "Array.h"
//2
Vector::Vector(double x, double y)
        : m_x(x), m_y(y)
{}

double Vector::getX() const {
    return m_x;
}

double Vector::getY() const {
    return m_y;
}

Vector Vector::operator+(const Vector& other) const {
    return Vector(m_x + other.getX(), m_y + other.getY());
}
Square::Square(double x, double y, double side, double angle)
        : x(x), y(y), side(side), angle(angle)
{}

double Square::getX() const {
    return x;
}

double Square::getY() const {
    return y;
}

double Square::getSide() const {
    return side;
}

double Square::getAngle() const {
    return angle;
}

double Square::getArea() const {
    return side * side;
}

void Square::increaseSide(double factor) {
    side *= factor;
}

void Square::moveByVector(const Vector& v) {
    x += v.getX();
    y += v.getY();
}

bool Square::operator==(const Square& other) const {
    return abs(getArea() - other.getArea()) < 0.0001;
}

bool Square::operator!=(const Square& other) const {
    return !(*this == other);
}

bool Square::operator<(const Square& other) const {
    return getArea() < other.getArea();
}

bool Square::operator>(const Square& other) const {
    return getArea() > other.getArea();
}

//6
Array::Array()
        : size(0)
{}

void Array::add(int value) {
    if (size < MAX_SIZE) {
        data[size++] = value;
    }
}

bool Array::operator==(const Array& other) const {
    if (size != other.size) {
        return false;
    }
    for (int i = 0; i < size; i++) {
        if (data[i] != other.data[i]) {
            return false;
        }
    }
    return true;
}

bool Array::operator!=(const Array& other) const {
    return !(*this == other);
}

bool Array::operator<(const Array& other) const {
    return size < other.size;
}

bool Array::operator>(const Array& other) const {
    return size > other.size;
}

Array Array::operator+(const Array& other) const {
    Array result;
    for (int i = 0; i < size; i++) {
        result.add(data[i]);
    }
    for (int i = 0; i < other.size; i++) {
        result.add(other.data[i]);
    }
    return result;
}

