#include <iostream>

void myFunction(const std::string& state = "Andhra Pradesh", const std::string& country = "India") {
    std::cout << "I am from " << state << ", " << country << std::endl;
}

int main() {
    myFunction();
    myFunction("Krishna District, Andhra Pradesh");
    return 0;
}