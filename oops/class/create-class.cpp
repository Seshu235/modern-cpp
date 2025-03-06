// Create a class named HelloWorld and define a method named print to print "Hello, World!".
// Create an object of HelloWorld class and call the print method.

#include <iostream>

using std::cout, std::endl;

class HelloWorld {  // Define a class named HelloWorld
public:        // Define the access specifier
    void print() {  // Define a method named print
        cout << "Hello, World!" << endl;
    }
};  

int main() {
    HelloWorld hello;  // Create an object of HelloWorld class
    hello.print();   // Call the print method of HelloWorld class
    return 0;
}