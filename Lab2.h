#ifndef PROGA_LAB2_LAB2_H
#define PROGA_LAB2_LAB2_H
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
class Square {
public:
    Square(double x, double y, double side, double angle);
    double getX() const;
    double getY() const;
    double getSide() const;
    double getAngle() const;
    double getArea() const;
    void increaseSide(double factor);
    void moveByVector(const Vector& v);

    bool operator==(const Square& other) const;
    bool operator!=(const Square& other) const;
    bool operator<(const Square& other) const;
    bool operator>(const Square& other) const;

private:
    double x;
    double y;
    double side;
    double angle;
};
class Array {
public:
    Array();
    void add(int value);
    bool operator==(const Array& other) const;
    bool operator!=(const Array& other) const;
    bool operator<(const Array& other) const;
    bool operator>(const Array& other) const;
    Array operator+(const Array& other) const;

private:
    static const int MAX_SIZE = 100;
    int size;
    int data[MAX_SIZE];
};


#endif //PROGA_LAB2_LAB2_H
