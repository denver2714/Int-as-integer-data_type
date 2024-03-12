#include <iostream>
#include "Int.h"

int main() {

    Int num1 = 10;
    Int num2 = 20;
    Int num3 = num1 + num2;
    Int user_number;

    std::cout << "Initial number: " << num3 << std::endl;
    std::cout << "Enter the number to add to the initial number: ";
    std::cin >> user_number;
    num3 += user_number;

    std::cout << "Final number: " << num3 << std::endl;


    return 0;
}