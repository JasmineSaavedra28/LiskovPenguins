#include "Eagle.hpp"
#include <iostream>

Eagle::Eagle(const std::string& name) : FlyingBird(name) {}

void Eagle::fly() {
    std::cout << name << " is flying!" << std::endl;
}
