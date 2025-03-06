#include <iostream>

class Employee {
    int salary;
    public:
        void setSalary(const int& s) {
            salary = s;
        }

        int getSalary() const {
            return salary;
        }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    std::cout << "Salary: " << myObj.getSalary() << std::endl;
    return 0;
}