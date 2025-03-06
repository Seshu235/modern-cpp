#include <iostream>

// base class (parent)
class MyClass {
    public:
        void myFunction() {
            std::cout << "Some content in parent class" << std::endl;
        }
};

// derived class (child)
class Child : public MyClass {
};

// derived class (grandchild)
class GrandChild : public Child {
};

int main() {
    GrandChild myObj;
    myObj.myFunction();
    return 0;
}