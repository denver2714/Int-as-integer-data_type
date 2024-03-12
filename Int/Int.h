#include <iostream>
#ifndef INT_H
#define INT_H


#pragma once

class Int {
private:
    int value;
public:

    Int(int rhs = 1);
    friend Int operator+(const Int& number1, const Int& number2);
    friend std::ostream& operator<<(std::ostream& os,const Int& out);
    friend std::istream& operator>>(std::istream& is, Int& in);
    friend Int& operator+=(Int& left, const Int& right);

    ~Int();
};


#endif
