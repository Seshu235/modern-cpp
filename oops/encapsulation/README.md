# C++ Encapsulation Guide

**Overview**

Encapsulation is one of the four fundamental Object-Oriented Programming(OOP) concepts in C++ along with inheritance, polymorphism, and abstraction.
This README provides an overview of encapsultion principles, benefits, and implementation techniques in C++.

**What is Encapsulation?**

Encapsulation is the bundling of data(attributes) and methods(functions) that operate on the data into a single unit called a class, while restricting direct access to some of the object's components. It is essentially a protective wrapper that prevents data from being accessed by code outside the wrapper.

**Core Principles**

1.**Data Hiding**: Restricting access to class members by using access specifiers
2.**Controlled Access**: Providing public methods to access and modify private data
3.**Implementation Hiding**: Concealing the internal workings of a class
4.**Interface Exposure**: Exposing only what is necessary through well-defined interfaces.

**Access Specifiers in C++**

C++ supports three types of access specifiers:
* **private**: Members are accessible only within the class
* **protected**: Members are accessible within the class and derived class
* **public**: Members are accessible from anywhere