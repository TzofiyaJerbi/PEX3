
#pragma once
#include "Game.h"

/// <summary>
/// a menu class to handle all game operations and user input
/// </summary>
class Menu_Wrapper
{
private:
	static const char* info;//used in some cout prints
	Game mainGameObject = Game(2);//in class default initializer
	void printMenu() const;
	void cleanBuffer() const;//emties the standard input. use before cin.getline
	int basicValidateInteger() const;//very basic use of cin object methods to disallow character inputs
public:
	Menu_Wrapper() = default;//this will use the in class default initialization
	Menu_Wrapper(int numPlayers) : mainGameObject(numPlayers) {}
	void run();
};

