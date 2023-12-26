#ifndef MemoryCell_H
#define MemoryCell_H

template <typename Object>
class MemoryCell{
    public:
        explicit MemoryCell(const Object &initialValue = Object{});
        const Object &read() const;
        void write(const Object &x);
    private:
        Object storedValue;
};

#include "MemoryCell.cpp"

#endif