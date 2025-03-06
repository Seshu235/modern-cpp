
#include <iostream>
#include <format>

using std::cout, std::endl, std::format;

class myclass {
    int var;
    public:
        // setter method
        void setvar(int val);

        // getter method
        int getvar(void); 
        
        void display(void);
};

void myclass::setvar(int val) {
    var = val;
}

int myclass::getvar() {
    return var;
}

void myclass::display() {
    cout << "Value of var: " << var << endl;
}

int main() {
    myclass obj;

    obj.setvar(45);
    cout << format("value: {}\n",obj.getvar());
    obj.display();

    return 0;
}