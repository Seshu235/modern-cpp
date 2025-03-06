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
};

class mercedes : public vehicle {
    std::string model;
public:
    void updateBrand(const std::string& brand_name) {
        setbrand(brand_name);
    }
    
    mercedes(const std::string& brand_name = "", const std::string& model_name = "") : vehicle(brand_name), model(model_name) {
        std::cout << "Mercedes constructor" << std::endl;
    }

    std::string getmodel() const {
        return model;
    }
};

int main() {
    mercedes obj("Mercedes", "S-Class");
    std::string model = obj.getmodel();
    std::cout << "Model: " << model << "\n";
    obj.honk();

    return 0;
}