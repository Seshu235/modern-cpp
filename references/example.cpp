#include <iostream>

int main() {
    {
        std::string food = "Dal Rice";
        std::string meal = food; // meal is a copy of food

        std::cout << "---------------------------------" << std::endl;
        std::cout << "Not using reference" << std::endl;
        std::cout << "Food Address: " << &food << std::endl;
        std::cout << "Food: " << food << std::endl;
        std::cout << "Meal Address: " << &meal << std::endl;
        std::cout << "Meal: " << meal << std::endl;

        food = "Biryani"; // changing the value of food will not change the value of meal
        
        std::cout << "Food Address: " << &food << std::endl;
        std::cout << "Food: " << food << std::endl;
        std::cout << "Meal Address: " << &meal << std::endl;
        std::cout << "Meal: " << meal << std::endl;
    }

    std::cout << "---------------------------------" << std::endl;
    std::cout << "using reference" << std::endl;
    std::string food = "Dal Rice";
    std::string &meal = food; // meal is a reference to food

    std::cout << "Food Address: " << &food << std::endl;
    std::cout << "Food: " << food << std::endl;
    std::cout << "Meal Address: " << &meal << std::endl;
    std::cout << "Meal: " << meal << std::endl;

    food = "Biryani"; // changing the value of food will change the value of meal

    std::cout << "Food Address: " << &food << std::endl;
    std::cout << "Food: " << food << std::endl;
    std::cout << "Meal Address: " << &meal << std::endl;
    std::cout << "Meal: " << meal << std::endl;
    return 0;
}