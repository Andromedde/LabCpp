#include "Triangle.h"

Services::Vector Services::Triangle::position() {
    Services::Vector res{};
    res.x = (dotA.x *  massA + dotB.x * massB) / (massA + massB);
    res.y = (dotA.y *  massA + dotB.y * massB) / (massA + massB);
    return res;
}

double Services::Triangle::square() {
    return (side*side * sqrt(3))/ 4;
}

double Services::Triangle::perimeter() {
    return side*3;
}

void Services::Triangle::draw() {
    std::cout << " Side length: " << side;
    std::cout << " Mass: " << mass() << "kg";
}

void Services::Triangle::DialogService() {
    std::cout << "Coordinate x of point A: " << std::endl;
    std::cin >> dotA.x;
    std::cout << "Coordinate y of point A: " << std::endl;
    std::cin >> dotA.y;
    std::cout << "Coordinate x of point B: " << std::endl;
    std::cin >> dotB.x;
    std::cout << "Coordinate y of point B: " << std::endl;
    std::cin >> dotB.y;
    std::cout << "Coordinate x of point C: " << std::endl;
    std::cin >> dotC.x;
    std::cout << "Coordinate y of point C: " << std::endl;
    std::cin >> dotC.y;
    std::cout << "Mass of point A: " << std::endl;
    std::cin >> massA;
    std::cout << "Mass of point B: " << std::endl;
    std::cin >> massB;
    std::cout << "Mass of point C: " << std::endl;
    std::cin >> massC;
    std::cout << "Side length: " << std::endl;
    std::cin >> side;
}

std::string Services::Triangle::classname() {
    std::cout << "Triangle";
}

unsigned int Services::Triangle::size() {
    return sizeof(Triangle);
}

double Services::Triangle::mass() {
    return massA + massB + massC;
}
