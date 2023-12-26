#include "MemoryCell.h"
#include <iostream>
using namespace std;

int main(){
    MemoryCell<int> m{23}; // one parameter constructor
    MemoryCell<double> n{23.4}; // zero parameter constructor
    MemoryCell<string> k{"Hello"}; // zero parameter constructor

    cout << "Cell contents: " << m.read() << endl;
    cout << "Cell contents: " << n.read() << endl;
    cout << "Cell contents: " << k.read() << endl;
    return 0;
}