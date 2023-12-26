#include "MemoryCell.h"

template <typename Object>
MemoryCell<Object>::MemoryCell(const Object &initialValue) : storedValue{initialValue} {}

template <typename Object>
const Object &MemoryCell<Object>::read() const{
    return storedValue;
}

template <typename Object>
void MemoryCell<Object>::write(const Object &x){
    storedValue = x;
}