#pragma once
#include "Bird.h"
#include "Mammal.h"

class Bat : public Bird, public Mammal {
public:
    Bat(const std::string& name);
    ~Bat();

    void eat() override;
    void makeSound() override;
};