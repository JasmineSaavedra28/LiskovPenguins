#ifndef PENGUIN_HPP
#define PENGUIN_HPP

#include "SwimmingBird.hpp"

class Penguin : public SwimmingBird {
public:
    Penguin(const std::string& name);
    void swim() override;
};

#endif

