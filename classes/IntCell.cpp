#include "IntCell.hpp"
#include <iostream>
using namespace std;

IntCell::IntCell(int initialValue) : storedValue{initialValue} {}

int IntCell::read() const{
    return storedValue;
}

void IntCell::write(int x){
    storedValue = x;
}

IntCell::~IntCell(){
    cout << "Destructor called for IntCell with value " << storedValue << endl;
}

IntCell::IntCell(const IntCell &rhs) : storedValue{rhs.storedValue}{
    cout << "Copy constructor called for IntCell with value " << storedValue << endl;
}

IntCell::IntCell(IntCell &&rhs) : storedValue{rhs.storedValue}{
    cout << "Move constructor called for IntCell with value " << storedValue << endl;
}

IntCell &IntCell::operator=(const IntCell &rhs){
    cout << "Copy assignment operator called for IntCell with value " << storedValue << endl;
    storedValue = rhs.storedValue;
    return *this;
}

IntCell &IntCell::operator=(IntCell &&rhs){
    cout << "Move assignment operator called for IntCell with value " << storedValue << endl;
    storedValue = rhs.storedValue;
    return *this;
}

