#ifndef BIRD_HPP
#define BIRD_HPP

#include <string>

class Bird {
protected:
    std::string name;
public:
    Bird(const std::string& name);    // 🔁 Declaración
    virtual ~Bird();                  // 🔁 Declaración
};

#endif

