# Int Wrapper for C++

![C++](https://img.shields.io/badge/language-C++-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

Welcome to **Int-as-integer-data_type**! This project provides a robust, custom `Int` class wrapper for C++ that enhances the standard integer type with additional object-oriented features, safety mechanisms, and utility functions.

Whether you're looking to simplify pointer management or just want a more flexible integer type for your next project, this library has you covered.

## 🚀 Features

- **Seamless Arithmetic**: Fully supports `+`, `-`, `*`, `/`, and `%` operations, working just like native integers.
- **Full Comparison Suite**: Includes all comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`) for easy logic flow.
- **Stream Integration**: Built-in support for `std::cin` and `std::cout`, making I/O operations intuitive and clean.
- **Smart Pointer Deletion**: Comes with a unique `ptr_deleter` utility to safely handle and delete multiple `Int` pointers recursively—no more memory leaks!
- **Compound Assignments**: Supports `+=`, `-=`, `*=`, `/=`, and `%=` for concise code.

## 🛠️ Getting Started

### Installation

Integrating `Int` into your project is as simple as dropping the files in!

1.  Copy `Int.h` and `Int.cpp` into your project directory.
2.  Include the header file in your code:
    ```cpp
    #include "Int.h"
    ```

### Compilation

Compile your project using your favorite C++ compiler. For example, using `g++`:

```bash
g++ main.cpp Int.cpp -o my_program
```

## 📖 Usage Examples

Here are a few ways you can use the `Int` class to make your C++ coding easier.

### Basic Arithmetic

```cpp
#include <iostream>
#include "Int.h"

int main() {
    Int a(10);
    Int b(5);

    Int sum = a + b;
    Int product = a * b;

    std::cout << "Sum: " << sum << std::endl;      // Output: 15
    std::cout << "Product: " << product << std::endl; // Output: 50

    return 0;
}
```

### Advanced Pointer Management

Forget about manually deleting every single pointer. Use `ptr_deleter` to clean up multiple objects in one go!

```cpp
Int* p1 = new Int(100);
Int* p2 = new Int(200);
Int* p3 = new Int(300);

// Do some work...

// Clean up all pointers nicely
ptr_deleter(p1, p2, p3);
```

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the specific files to understand how implementations work and suggest improvements.

## 📄 License

This project is open resource. See the `LICENSE` file for more details.
