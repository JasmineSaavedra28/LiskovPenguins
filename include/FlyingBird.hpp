#ifndef FLYINGBIRD_HPP
#define FLYINGBIRD_HPP

#include "Bird.hpp"

class FlyingBird : public Bird {
public:
    FlyingBird(const std::string& name);
    virtual void fly() = 0;
};

#endif

