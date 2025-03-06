#include <iostream>
#include <format>
// #include <print>

extern "C" {
    #include <stdio.h>
};

// std::print;

class myclass {
    int var;
    public:
        myclass(int a) {
            var = a;
        }

        void display() {
            printf("Value of var: %d\n", var);
        }
};

int main() {
    myclass obj(56);
    obj.display();
    return 0;
}