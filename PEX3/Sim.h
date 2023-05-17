#pragma once
#ifndef __SIM_CLASS_HW2_
#define __SIM_CLASS_HW2_

class Sim {
private:
    char* name;
    int age;
    int hunger;
    int energy;

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
};

#endif // !__SIM_CLASS_HW2_