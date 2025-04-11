#ifndef SWIMMINGBIRD_HPP
#define SWIMMINGBIRD_HPP

#include "Bird.hpp"

class SwimmingBird : public Bird {
public:
    SwimmingBird(const std::string& name);
    virtual void swim() = 0;
};

#endif

