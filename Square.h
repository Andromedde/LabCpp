#ifndef PROGA_LAB3_SQUARE_H
#define PROGA_LAB3_SQUARE_H
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
#endif //PROGA_LAB3_SQUARE_H
