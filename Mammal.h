#pragma once
#include "Animal.h"

class Mammal : virtual public Animal {
public:
    Mammal(const std::string& name);
    ~Mammal();

    void run();
    void eat() override;
    void makeSound() override;
};