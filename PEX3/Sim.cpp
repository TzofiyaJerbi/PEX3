#pragma warning(disable : 4996)
#include <iostream>
#include "Sim.h"
using namespace std;

Sim::Sim(const char* _name, int _age, int _hunger, int _energy) {
    name = strdup(_name);
    age = _age;
    hunger = _hunger;
    energy = _energy;
}

Sim::Sim() : Sim("Jane Doe")
{}

Sim::Sim(const char* name) : Sim(name, 0, 50, 50)
{}

Sim::Sim(const Sim& other) : Sim(other.name, other.age, other.hunger, other.energy)
{}

// Destructor
Sim::~Sim() {
    delete[] name;
    name = nullptr;
}

// Getters
const char* Sim::getName() const {
    return name;
}

int Sim::getAge() const {
    return age;
}

int Sim::getHunger() const {
    return hunger;
}

int Sim::getEnergy() const {
    return energy;
}

// Setters

void Sim::setAge(int _age)
{
    if (_age < 0) {
        age = 0;
    }
    else
    {
        age = _age;
    }
}


void Sim::setHunger(int _hunger) {
    if (_hunger < 0) {
        hunger = 0;
    }
    else if (_hunger > 100) {
        hunger = 100;
    }
    else {
        hunger = _hunger;
    }
}

void Sim::setEnergy(int _energy) {
    if (_energy < 0) {
        energy = 0;
    }
    else if (_energy > 100) {
        energy = 100;
    }
    else {
        energy = _energy;
    }
}

// Methods
void Sim::sleep() {
    energy += 15;
    if (energy > 100) {
        energy = 100;
    }
}

void Sim::eat() {
    hunger += 15;
    if (hunger > 100) {
        hunger = 100;
    }
}

void Sim::ageUp() {
    age++;
}

void Sim::printSim() const
{
    cout << getName() << ", Age: " << getAge();
    cout << ", Hunger: " << getHunger();
    cout << ", Energy: " << getEnergy() << endl;
}