#include "Game.h"
#include <iostream>

Game::Game(int _maxSims)
{
	sims = new Sim * [_maxSims];
	maxSims = _maxSims;
	numSims = 0;
}

bool Game::addSim(Sim* sim)
{
	if (!canAddSims() || findSim(sim->getName()))
	{
		return false;
	}
	else
	{
		sims[numSims] = sim;
		numSims++;
		return true;
	}
}

bool Game::addSim(const char* simName)
{
	Sim* toAdd = new Sim(simName);
	if (!addSim(toAdd))
	{
		delete toAdd;
		toAdd = nullptr;
		return false;
	}

	return true;
}

void Game::printStatus() const
{
	for (int i = 0; i < numSims; i++)
	{
		sims[i]->printSim();
	}
	std::cout << std::endl;
}

Game::~Game() {
	for (int i = 0; i < numSims; i++) {
		delete sims[i];
		sims[i] = nullptr;
	}
	delete[] sims;
	sims = nullptr;
	numSims = 0;
	maxSims = 0;
}

void Game::passTime() const
{
	//for all sims, randomize decrement values and add to properties
	for (int i = 0; i < numSims; i++)
	{
		//we should replace this with object use from <random>,
		//	plus, % operation breaks uniformity of uniform distributions (in random variables)
		int decEnergy = -(std::rand() % 15 + 1);
		int decHunger = -(std::rand() % 15 + 1);
		sims[i]->setEnergy(sims[i]->getEnergy() + decEnergy);
		sims[i]->setHunger(sims[i]->getHunger() + decHunger);
	}
}

Sim* Game::findSim(const char* name) const
{
	for (int i = 0; i < numSims; i++)
	{
		if (strcmp(name, sims[i]->getName()) == 0)
			return sims[i];
	}

	return nullptr;
}

bool Game::performAction(const char* name, int action) const
{
	Sim* found = findSim(name);
	if (!found) return false;

	switch (action)//this switch should use enum class but some students did not learn this feature
	{
	case 0://action EAT
		found->eat();
		std::cout << "\"" << found->getName() << "\" ate\n";
		break;
	case 1://action SLEEP
		found->sleep();
		std::cout << "\"" << found->getName() << "\" slept\n";
		break;
	case 2://action AGE_UP
		found->ageUp();
		std::cout << "aged Sim \"" << found->getName() << "\" by 1 year\n";
		break;
	case 3://action prctice
		found->GetSkill();
		std::cout << "add skill \"" ; // <<  found->typskilchus()\n";

		break;
	default:
		return false;
	}

	return true;
}

bool Game::canAddSims() const
{
	return numSims < maxSims;
}