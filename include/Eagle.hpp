#ifndef EAGLE_HPP
#define EAGLE_HPP

#include "FlyingBird.hpp"

class Eagle : public FlyingBird {
public:
    Eagle(const std::string& name);
    void fly() override;
};

#endif


