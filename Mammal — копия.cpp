#include "Mammal.h"
#include <iostream>

Mammal::Mammal(const std::string& name) : Animal(name) {}

Mammal::~Mammal() {}

void Mammal::run() {
    std::cout << getName() << " is running." << std::endl;
}

void Mammal::eat() {
    std::cout << getName() << " is eating." << std::endl;
}

void Mammal::makeSound() {
    std::cout << getName() << " is making mammal sound." << std::endl;
}