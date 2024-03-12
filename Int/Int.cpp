#include <iostream>
#include "Int.h"

Int::Int(int rhs = 1) :value(rhs) {}

Int operator+(const Int& number1, const Int& number2) {
    Int final = 0;

    final.value = number1.value + number2.value;
    return final;
}

std::ostream& operator<<(std::ostream& os,const Int& out) {
    os << out.value;
    return os;
}

std::istream& operator>>(std::istream& is, Int& in) {
    is >> in.value;
    return is;
}

Int& operator+=(Int& left, const Int& right) {
    left.value += right.value;
    return left;
}


Int::~Int() {}

