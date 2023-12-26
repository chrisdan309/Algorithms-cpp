#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double initialSide) : side{initialSide} {}

double Square::getSide() const{
    return side;
}

void Square::setSide(double newSide){
    side = newSide;
}

double Square::getArea() const{
    return side * side;
}

double Square::getPerimeter() const{
    return 4 * side;
}

void Square::print(ostream &out) const{
    out << "Square with side " << side;
}

bool Square::operator< (const Square &rhs) const{
    return getArea() < rhs.getArea();
}

ostream &operator<< (ostream &stream, const Square &rhs){
    rhs.print(stream);
    return stream;
}