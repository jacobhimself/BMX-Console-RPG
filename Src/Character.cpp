#include "Character.h"
using namespace std;

Character::Character()
{
	this-> xPos = 0.0;
	this->yPos = 0.0;

	this->name = "NONE";
	this->level = 1;
	this->exp = 0;
	this->expNext = 0;

	this->strength = 0;
	this->trickStat = 0;
	this->speed = 0;
	this->styleStat = 0;
	this->boost = 0;
	this->vitality = 0;
	this->charisma = 0;

	//dig skills
	this->barrowSkill = 0;
	this->stackSkill = 0;
	this->shapeSkill = 0;
	this->vegetationSkill = 0;

	this->hp = 0;
	this->hpMax = 0;
	this->stamina = 0;
	this->staminaMax = 0;

	this->statPoints = 0;
	this->skillPoints = 0;
}
Character::~Character()
{

}

void Character::printStats()
{
	cout << "Character Sheet =" << endl;

	cout << "xPos = " << this->xPos << endl;
	cout << "yPos = " << this->yPos << endl;
	cout << endl;

	cout << "Name = " << this->name << endl;
	cout << "Level = " << this->level << endl;
	cout << "Exp = " << this->exp << endl;
	cout << "Exp To Next Level = " << this->expNext << endl;
	//std::cout << std::setw(10) << std::setfill('=') << std::endl;
	cout << endl;

	cout << "Strength = " << this->strength << endl;
	cout << "Trick Stat = " << this->trickStat << endl;
	cout << "Style Stat = " << this->styleStat << endl;
	cout << "Boost = " << this->boost << endl;
	cout << "Vitality = " << this->vitality << endl;
	cout << "Charisma = " << this->charisma << endl;
	//std::cout << std::setw(10) << std::setfill('=') << std::endl;
	cout << endl;

	cout << "Barrow Skill = " << this->barrowSkill << endl;
	cout << "Stack Skill = " << this->stackSkill << endl;
	cout << "Shape Skill = " << this->shapeSkill << endl;
	cout << "Vegetation Skill = " << this->vegetationSkill << endl;

	cout << "Stamina = " << this->stamina << " / " << this->staminaMax << endl;
	cout << "HP = " << this->hp << " - " << this->hpMax << endl;
	cout << endl;

	cout << "Stat Points = " << this->statPoints << endl;
	cout << "Skill Points = " << this->skillPoints << endl;
	cout << endl;
}

void Character::initialise(const std::string name)
{
	this->xPos = 0.0;
	this->yPos = 0.0;

	this->masterTrickListIndices = { 1,3,5 };

	this->name = name;
	this->trickStat = 10;
	this->styleStat = 1;
	this->level = 1;
	this->exp = 0;
	this->expNext = static_cast<int>((50 / 3) * (pow(level, 3) -
		6 * pow(level, 3) +
		(17 * level) - 11));

	this->strength = 0;
	//this->tricks = 0;
	this->speed = 0;
	//this->style = 0;
	this->boost = 0;
	this->vitality = 0;
	this->charisma = 0;

	//dig skills
	this->barrowSkill = 0;
	this->stackSkill = 0;
	this->shapeSkill = 0;
	this->vegetationSkill = 0;

	this->hp = 0;
	this->hpMax = (this->vitality * 2) + (this->strength / 2);
	this->stamina = 0;
	this->staminaMax = this->vitality + (this->strength / 2);

	this->statPoints = 0;
	this->skillPoints = 0;
}

void Character::levelUp()
{
	while (this->exp >= this->expNext)
	{
		//this->exp -= expNext;
		this->level++;
		//std::cout << "You leveled up. You are now level " << level << endl;
		//this->exp = 0;
		this->expNext =
			static_cast<int>((50 / 3) * (pow(level, 3) -
				6 * pow(level, 3) +
				(17 * level) - 11));

		this->statPoints++;
		this->skillPoints++;
	}
}

void::Character::LoadPlayerTricks(vector<Trick> trickListIn)
{
		//Print Trick Vector for player to see
		for (unsigned int i = 0; i < trickListIn.size(); i++)
		{
			cout << "Trick Index: " << i << endl;
			trickListIn[i].printTrick();
			cout << endl;
		}

		//Using an array of indices from the main list, populate the player tricklist
		for (unsigned int i = 0; i < masterTrickListIndices.size(); i++)
		{
			playerTrickList.push_back(trickListIn[masterTrickListIndices[i]]);
		}


		//Print the player trick list
		cout << "Player Tricks" << endl;
		for (unsigned int i = 0; i < playerTrickList.size(); i++)
		{
			cout << i;
			playerTrickList[i].printTrick();
			cout << endl;
		}
}

void Character::UpdatePlayerTricks(vector<Trick> trickListIn)
{
	cout << "Congratulations, " << this->getName() << ", you have earned a new trick slot." << endl;
	cout << "Choose from the tricks shown below to add a new trick to your trick list." << endl;
	//Print Trick Vector for player to see
	for (unsigned int i = 0; i < trickListIn.size(); i++)
	{
		cout << "Trick Index: " << i << endl;
		trickListIn[i].printTrick();
		cout << endl;
	}

	bool validChoice = false;
	int choice;
	while (!validChoice)
	{
	cout << "Enter the index of your trick to add it to your trick list" << endl;
	cin >> choice;

	if (find(masterTrickListIndices.begin(), masterTrickListIndices.end(), choice) != masterTrickListIndices.end())
	{
		cout << "You already have this trick, select another trick" << endl;
	}
	else
	{
		if (choice < trickListIn.size() && choice >= 0)
		{
			playerTrickList.push_back(trickListIn[choice]);
			masterTrickListIndices.push_back(choice);
			cout << "You added " << trickListIn[choice].getName() << endl << endl;
			validChoice = true;
		}
		else
		{
			cout << "You've entered an invalid trick index. Please try again" << endl;
		}
	}
	}
}

void Character::printTricks()
{
	for (unsigned int i = 0; i < playerTrickList.size(); i++)
	{
		cout << playerTrickList[i].getName() << endl;
		cout << endl;
	}
}