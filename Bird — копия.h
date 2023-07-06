#pragma once
#include "Animal.h"
#include <iostream>
#include <string>

class Bird : virtual public Animal {
public:
    Bird(const std::string& name);
    ~Bird();

    void fly();
    void eat() override;
    void makeSound() override;
};