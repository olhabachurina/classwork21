#include "Bird.h"
#include <iostream>
Bird::Bird(const std::string& name) : Animal(name) {}

Bird::~Bird() {}

void Bird::fly() {
    std::cout << getName() << " is flying." << std::endl;
}

void Bird::eat() {
    std::cout << getName() << " is eating." << std::endl;
}

void Bird::makeSound() {
    std::cout << getName() << " is making bird sound." << std::endl;
}