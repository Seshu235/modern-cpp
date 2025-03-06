#include <iostream>

// Function overloading is a feature in C++ 
// where two or more functions can have the same name but different parameters.
// When a function is called, the compiler picks the correct function by examining 
// the number, types, and order of the arguments.
// Function overloading is commonly used to create multiple functions of the same name 
// that perform similar tasks but on different data types.

// Function overloading is a compile-time polymorphism.
// Compile-time polymorphism is a type of polymorphism in which the compiler
// resolves the method call at compile time.
// It is also known as static polymorphism.

// Function overloading is not possible by changing the return type of the function only
// because the return type does not play any role in function overloading.

int myFunction(int x){
    return x;
} 

float myFunction(float x) {
    return x;
}

double myFunction(double x) {
    return x;
}

int main() {
    std::cout << "Int: " << myFunction(10) << std::endl;
    std::cout << "Float: " << myFunction(10.5f) << std::endl;
    std::cout << "Double: " << myFunction(10.5) << std::endl;
    return 0;
}