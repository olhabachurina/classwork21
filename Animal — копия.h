#pragma once
#include <string>
class Animal {
public:
    Animal(const std::string& name);
    virtual ~Animal();

    const std::string& getName() const;
    virtual void eat() = 0;
    virtual void makeSound() = 0;

private:
    std::string name;
};