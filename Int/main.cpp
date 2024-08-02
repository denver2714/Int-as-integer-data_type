#include <iostream>
#include "Int.h"

int main() {
    Int a(10);
    Int b(5);

    
    std::cout << "Initial values: a = " << a << ", b = " << b << std::endl;

    
    Int c = a + b;
    std::cout << "a + b = " << c << std::endl;

    Int d = a - b;
    std::cout << "a - b = " << d << std::endl;

    Int e = a * b;
    std::cout << "a * b = " << e << std::endl;

    Int f = a / b;
    std::cout << "a / b = " << f << std::endl;

    Int g = a % b;
    std::cout << "a % b = " << g << std::endl;

    
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;

    
    a += b;
    std::cout << "After a += b, a = " << a << std::endl;

    a -= b;
    std::cout << "After a -= b, a = " << a << std::endl;

    a *= b;
    std::cout << "After a *= b, a = " << a << std::endl;

    a /= b;
    std::cout << "After a /= b, a = " << a << std::endl;

    a %= b;
    std::cout << "After a %= b, a = " << a << std::endl;

    
    Int inputInt;
    std::cout << "Enter an integer: ";
    std::cin >> inputInt;
    std::cout << "You entered: " << inputInt << std::endl;

    
    Int* ptr1 = new Int(15);
    Int* ptr2 = new Int(25);
    Int* ptr3 = new Int(35);

    std::cout << "Pointer values before deletion: " << *ptr1 << ", " << *ptr2 << ", " << *ptr3 << std::endl;

    ptr_deleter(ptr1, ptr2, ptr3);

    return 0;
}
