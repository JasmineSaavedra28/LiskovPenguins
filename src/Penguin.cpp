#include "Penguin.hpp"
#include <iostream>

Penguin::Penguin(const std::string& name) : SwimmingBird(name) {}

void Penguin::swim() {
    std::cout << name << " is swimming!" << std::endl;
}
