#pragma once
#ifndef __SIM_CLASS_HW2_
#define __SIM_CLASS_HW2_

#include "Skill.h"

class Sim {
private:
    char* name;
    int age;
    int hunger;
    int energy;
    Skill* Skill; //pointer to arry of skill

    

  
    void PrintOption();

public:
    // Constructors
    Sim();
    Sim(const char* name, int age, int hunger, int energy);
    Sim(const char* name);
    Sim(const Sim& other);

    // Destructor
    ~Sim();

    // Getters
    const char* getName() const;

    int getAge() const;
    int getHunger() const;
    int getEnergy() const;

    // Setters

    void setAge(int _age);
    void setHunger(int _hunger);
    void setEnergy(int _energy);

    // Other Methods
    void sleep();
    void eat();
    void ageUp();
    void printSim() const;
    void GetSkill();
};

#endif // !__SIM_CLASS_HW2_