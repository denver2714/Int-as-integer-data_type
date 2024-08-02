#ifndef INT_H
#define INT_H

#include <iostream>
#include <stdexcept>

class Int {
private:
    int value;
public:
    Int();
    Int(int rhs);

    // Arithmetic operations
    friend Int operator+(const Int& number1, const Int& number2);
    friend Int operator-(const Int& number1, const Int& number2);
    friend Int operator*(const Int& number1, const Int& number2);
    friend Int operator/(const Int& number1, const Int& number2);
    friend Int operator%(const Int& number1, const Int& number2);

    // Comparison operators
    friend bool operator==(const Int& number1, const Int& number2);
    friend bool operator!=(const Int& number1, const Int& number2);
    friend bool operator<(const Int& number1, const Int& number2);
    friend bool operator>(const Int& number1, const Int& number2);
    friend bool operator<=(const Int& number1, const Int& number2);
    friend bool operator>=(const Int& number1, const Int& number2);

    // Stream operators
    friend std::ostream& operator<<(std::ostream& os, const Int& out);
    friend std::istream& operator>>(std::istream& is, Int& in);

    // Compound assignment operators
    friend Int& operator+=(Int& left, const Int& right);
    friend Int& operator-=(Int& left, const Int& right);
    friend Int& operator*=(Int& left, const Int& right);
    friend Int& operator/=(Int& left, const Int& right);
    friend Int& operator%=(Int& left, const Int& right);

    // Custom pointer deleter
    friend void ptr_deleter(Int*& ptr);
    template<typename... Args>
    friend void ptr_deleter(Int* first, Args... args);

    ~Int();
};

// Definition of template function
template<typename... Args>
void ptr_deleter(Int* first, Args... args) {
    delete first;
    ptr_deleter(args...);  // Recursively call for the remaining pointers
}

#endif
