#pragma once
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Trick
{
public:
	Trick(string trickName = "NONE", int level = 1, int difficulty = 10);
	virtual ~Trick();

	//Methods
	bool executeTrick(int riderTrickSkill);
	void printTrick();

	//Getters
	inline string getName() { return this->name; }

private:
	string name;
	int level;
	int difficulty;
};




