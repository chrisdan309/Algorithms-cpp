#ifndef IntCell_HPP
#define IntCell_HPP

class IntCell{
    public:
        explicit IntCell(int initialValue = 0);
        int read() const;
        void write(int x);
        ~IntCell(); // destructor
        IntCell(const IntCell &rhs); // copy constructor
        IntCell(IntCell &&rhs); // move constructor
        IntCell &operator=(const IntCell &rhs); // copy assignment operator
        IntCell &operator=(IntCell &&rhs); // move assignment operator
    private:
        int storedValue;
};

#endif