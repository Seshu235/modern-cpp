#include <iostream>

// Base class 
class MyClass {
    public:
        void myFunction() {
            std::cout << "Some content in parent class" << std::endl;
        }
};

// Another base class 
class MyOtherClass {
    public:
        void myOtherFunction() {
            std::cout << "Some content in another class" << std::endl;
        }
};

class MyChildClass : public MyClass, public MyOtherClass {
}; 

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}