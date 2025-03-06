#include <iostream>

extern "C" {
    #include <stdio.h>
};

class myclass {
    int var;
    public:
        myclass(int a);
        // {
        //     //
        // }

        void display() {
            printf("Value of var: %d\n", var);
        }
};

myclass::myclass(int a) : var(a) {
    //  
}

int main() {
    myclass obj(56);
    obj.display();
    return 0;
}