#include <iostream>

// Base class
class Animal {
    public:
        void animalSound() {
            std::cout << "The animal makes a sound" << std::endl;
        }
};

// Derived class 
class Dog : public Animal {
    public:
        void animalSound() {
            std::cout << "The dog says: bow bow" << std::endl;
        }
};

// Derived class
class Cat: public Animal {
    public:
        void animalSound() {
            std::cout << "The cat says: meow meow" << std::endl;
        }
};

// Derived class
class Pig : public Animal {
    public:
        void animalSound() {
            std::cout << "The pig says: oink oink" << std::endl;
        }
};

int main() {
    Animal myAnimal;
    Dog myDog;
    Cat myCat;
    Pig myPig;

    myAnimal.animalSound();
    myDog.animalSound();
    myCat.animalSound();
    myPig.animalSound();
    return 0;
}