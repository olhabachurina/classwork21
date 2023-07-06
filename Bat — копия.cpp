#include "Bat.h"
#include <iostream>

Bat::Bat(const std::string& name) : Animal(name), Bird(name), Mammal(name) {}

Bat::~Bat() {}

void Bat::eat() {
    std::cout << getName() << " is eating insects." << std::endl;
}

void Bat::makeSound() {
    std::cout << getName() << " is making bat sound." << std::endl;
}