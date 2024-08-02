#include "Int.h"

Int::Int() : value(0) {}
Int::Int(int rhs) : value(rhs) {}

// Arithmetic operations
Int operator+(const Int& number1, const Int& number2) {
    return Int(number1.value + number2.value);
}

Int operator-(const Int& number1, const Int& number2) {
    return Int(number1.value - number2.value);
}

Int operator*(const Int& number1, const Int& number2) {
    return Int(number1.value * number2.value);
}

Int operator/(const Int& number1, const Int& number2) {
    if (number2.value == 0) throw std::runtime_error("Division by zero");
    return Int(number1.value / number2.value);
}

Int operator%(const Int& number1, const Int& number2) {
    if (number2.value == 0) throw std::runtime_error("Division by zero");
    return Int(number1.value % number2.value);
}

// Comparison operators
bool operator==(const Int& number1, const Int& number2) {
    return number1.value == number2.value;
}

bool operator!=(const Int& number1, const Int& number2) {
    return number1.value != number2.value;
}

bool operator<(const Int& number1, const Int& number2) {
    return number1.value < number2.value;
}

bool operator>(const Int& number1, const Int& number2) {
    return number1.value > number2.value;
}

bool operator<=(const Int& number1, const Int& number2) {
    return number1.value <= number2.value;
}

bool operator>=(const Int& number1, const Int& number2) {
    return number1.value >= number2.value;
}

// Stream operators
std::ostream& operator<<(std::ostream& os, const Int& out) {
    os << out.value;
    return os;
}

std::istream& operator>>(std::istream& is, Int& in) {
    is >> in.value;
    return is;
}

// Compound assignment operators
Int& operator+=(Int& left, const Int& right) {
    left.value += right.value;
    return left;
}

Int& operator-=(Int& left, const Int& right) {
    left.value -= right.value;
    return left;
}

Int& operator*=(Int& left, const Int& right) {
    left.value *= right.value;
    return left;
}

Int& operator/=(Int& left, const Int& right) {
    if (right.value == 0) throw std::runtime_error("Division by zero");
    left.value /= right.value;
    return left;
}

Int& operator%=(Int& left, const Int& right) {
    if (right.value == 0) throw std::runtime_error("Division by zero");
    left.value %= right.value;
    return left;
}

// Single pointer deleter
void ptr_deleter(Int*& ptr) {
    delete ptr;
    ptr = nullptr;  // Avoid dangling pointer
}

Int::~Int() {}
