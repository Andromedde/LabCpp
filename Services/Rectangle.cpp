#include "Rectangle.h"

using namespace std;
Services::Vector Services::Rectangle::position() {
    Vector res{};
    res.x = (dotA.x * massA + dotB.x * massB) / (massA + massB);
    res.y = (dotA.y * massA + dotB.y * massB) / (massA + massB);
    return res;
}

double Services::Rectangle::square() {
    return (side1 * side2);
}

double Services::Rectangle::perimeter() {
    return (side1 + side2) * 2;
}

void Services::Rectangle::draw() {
    cout << "Side1's length: " << side1 << " " << "Side2's length: " << side2;
    cout << "Mass: " << mass() << "kg";
}

void Services::Rectangle::DialogService() {
    cout << "Coordinate x of point A: " << std::endl;
    cin >> dotA.x;
    cout << "Coordinate y of point A: " << std::endl;
    cin >> dotA.y;
    cout << "Coordinate x of point B: " << std::endl;
    cin >> dotB.x;
    cout << "Coordinate y of point B: " << std::endl;
    cin >> dotB.y;
    cout << "Coordinate x of point C: " << std::endl;
    cin >> dotC.x;
    cout << "Coordinate y of point C: " << std::endl;
    cin >> dotC.y;
    cout << "Coordinate x of point D: " << std::endl;
    cin >> dotD.x;
    cout << "Coordinate y of point D: " << std::endl;
    cin >> dotD.y;
    cout << "Mass of point A: " << std::endl;
    cin >> massA;
    cout << "Mass of point B: " << std::endl;
    cin >> massB;
    cout << "Mass of point C: " << std::endl;
    cin >> massC;
    cout << "Mass of point D: " << std::endl;
    cin >> massD;
    cout << "Side1's length: " << std::endl;
    cin >> side1;
    cout << "Side2's length: " << std::endl;
    cin >> side2;
}

string Services::Rectangle::classname() {
    cout << "Rectangle";
}

unsigned int Services::Rectangle::size() {
    return sizeof(Rectangle);
}

double Services::Rectangle::mass() {
    return massA + massB + massC + massD;
}