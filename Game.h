#pragma once
#include <string>
#include <iostream>
#include "Character.h"
#include "QuestThreePack.h"
#include <vector>

class Game
{
public:
	Game();
	virtual ~Game();

	//Operators (for overloading)

	//Functions
	void initGame();
	void mainMenu();
	void endGame();

	void createNewCharacter();


	//Accessors
	inline bool isPlaying() const { return this->playing;  }

	//Modifiers

private:
	int choice;
	bool playing;

	int activeCharacter;
	
	std::vector<Character> characters;



};

