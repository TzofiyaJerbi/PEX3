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
    cout << *SkillOfObg;
   // cout << this->printSim;
   // cout << "the skill is: " << static skillTypeStrings[this->SkillOfObg->type] << "\n" << "the level is: " << this->SkillOfObg->skillLevel << "\n";
}

void Sim::PrintOption(){
    cout << "Enter skill to practice: \n0  -> " << SkillOfObg->intType2string(0) << endl << "1  -> " << SkillOfObg->intType2string(1) << endl << "2  -> " << SkillOfObg->intType2string(2) << endl << "3  -> " << SkillOfObg->intType2string(3) << "\n";
}

void Sim::GetSkill() {
   //s = new Skill;
    PrintOption();
    int choice;
    cin >> choice;
    
    SkillOfObg->type = choice;
    SkillOfObg->practice();
    cout << *SkillOfObg;
   // cout << (this, SkillOfObg);// not work!!
    //cout << "\nthe skill is: " << this->SkillOfObg->skillTypeStrings[choice] << "\n" << "the level is: " << this->SkillOfObg->skillLevel << "\n";
   
}
