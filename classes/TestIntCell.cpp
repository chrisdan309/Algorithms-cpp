#include <iostream>
#include "IntCell.h"
using namespace std;

int main(){
    IntCell m{23}; // one parameter constructor
    IntCell n{}; // zero parameter constructor
    IntCell k; // zero parameter constructor

    IntCell *p = new IntCell{24}; // one parameter constructor
    IntCell *q = new IntCell{}; // zero parameter constructor
    IntCell *r = new IntCell; // zero parameter constructor

    cout << "Cell contents: " << m.read() << endl;
    cout << "Cell contents: " << p->read() << endl;
    return 0;
}

// g++ -Wall -std=c++11 -o TestIntCell TestIntCell.cpp IntCell.cpp
// ./TestIntCell