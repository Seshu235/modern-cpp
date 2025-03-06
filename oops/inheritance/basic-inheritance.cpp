#include <iostream>

// Base class
class Vehicle {
    public:
    std::string brand = "Ford";
    void honk() {
        std::cout << "Tuut, tuut!\n";
    }
};

// Derived class
class Car : public Vehicle {
    public:
        std::string model = "Mustang";
};

int main() {
    Car myCar;
    std::cout << myCar.brand + " " + myCar.model << std::endl;
    myCar.honk();
    return 0;
}