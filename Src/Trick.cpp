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


void Trick::printTrick()
{
	cout << "Trick Name: " << this->name << endl;
	cout << "Trick Level: " << this->level << endl;
	cout << "Trick difficulty: " << this->difficulty << endl;
	cout << endl;
}