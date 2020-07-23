#include "Trick.h"

Trick::Trick(string trickName, int level, int difficulty)
{
	this->name = trickName;
	this->level = level;
	this->difficulty = difficulty;
}

Trick::~Trick()
{

}

bool Trick::executeTrick(int riderTrickSkill)
{
	//Difficult tricks might have difficulty of 100
	//if rider has trick skill of 10 then they only have a 10% chance of landing
	//there is room for this to become more complex later on but this is just a tribute
	int i = rand() % this->difficulty;
	cout << "random number " << i << endl;

	if (i <= riderTrickSkill)
	{
		cout << "Trick Landed" << endl;
	}
	else
	{
		cout << "You Bailed" << endl;
	}
	cin >> i;
	return riderTrickSkill > i;
}

void Trick::printTrick()
{
	cout << "Trick Name: " << this->name << endl;
	cout << "Trick Level: " << this->level << endl;
	cout << "Trick difficulty: " << this->difficulty << endl;
	cout << endl;
}