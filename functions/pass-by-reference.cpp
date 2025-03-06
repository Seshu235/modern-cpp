#include <iostream>

void swap(int &a, int &b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Before swapping" << std::endl;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of y: " << y << std::endl;

    swap(x, y);

    std::cout << "After swapping" << std::endl;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of y: " << y << std::endl;
    return 0;
}