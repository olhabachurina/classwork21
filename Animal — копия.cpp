#include "Animal.h"
#include <string>
Animal::Animal(const std::string& name) : name(name) {}

Animal::~Animal() {}

const std::string& Animal::getName() const {
    return name;
}