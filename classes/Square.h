#ifndef Square_H
#define Square_H
#include <iostream>
using namespace std;
class Square{
    public:
        explicit Square(double side = 0.0);
        double getSide() const;
        void setSide(double side);
        double getArea() const;
        double getPerimeter() const;
        void print(std::ostream &out = std::cout) const;
        bool operator< (const Square &rhs) const;
        friend ostream &operator<< (ostream &stream, const Square &rhs);

    private:
        double side;
};

#endif
