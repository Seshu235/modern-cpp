#include <iostream>
#include <string>

class vehicle {
    std::string brand;
public:
    vehicle(const std::string& brand = "") : brand(brand) {
        std::cout << "Vehicle constructor" << std::endl;
    }

    void honk() {
        std::cout << "Tuut, tuut!" << std::endl;
    }

    void setbrand(const std::string& brand_name) {
        brand = brand_name;
    }

    std::string getbrand() const {
        return brand;
    }
};

class mercedes : public vehicle {
    std::string model;
public:
    void updateBrand(const std::string& brand_name) {
        setbrand(brand_name);
    }

    mercedes(const std::string& model_name = "") : model(model_name) {
        std::cout << "Mercedes constructor" << std::endl;
    }

    std::string getmodel() const {
        return model;
    }

    void display() {
        std::cout << "\nVehicle details: \n";
        std::cout << "Brand: " << getbrand() << "\n";
        std::cout << "Model: " << getmodel() << "\n";
    }
};

int main() {
    mercedes obj("S-Class");
    obj.updateBrand("Mercedes");
    obj.honk();
    obj.display();
    return 0;
}