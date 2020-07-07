#pragma once
#include <string>
#include <iostream>

class Character
{
public:
	Character();
	virtual ~Character();

	//Functions
	void printStats();
	void initialise(const std::string name);
	void levelUp();

	//Accessors
	inline const double& getXPos() const { return this->xPos; }
	inline const double& getyPos() const { return this->yPos; }

	inline const std::string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }
	
	inline const int& getStrength() const { return this->strength; }
	inline const int& getTricks() const { return this->tricks; }
	inline const int& getStyle() const { return this->style; }
	inline const int& getSpeed() const { return this->speed; }
	inline const int& getBoost() const { return this->boost; }
	inline const int& getVitality() const { return this->vitality; }
	inline const int& getCharisma() const { return this->charisma; }

	inline const int& getBarrowSkill() const { return this->barrowSkill; }
	inline const int& getStackSkill() const { return this->stackSkill; }
	inline const int& getShapeSkill() const { return this->shapeSkill; }
	inline const int& getVegetationSkill() const { return this->vegetationSkill; }

	inline const int& getHP() const { return this->hp; }
	inline const int& getHPMax() const { return this->hpMax; }
	inline const int& getStamina() const { return this->stamina; }
	inline const int& getStaminaMax() const { return this->staminaMax; }

	inline const int& getStatPoints() const { return this->statPoints; }
	inline const int& getSkillPoints() const { return this->skillPoints; }
	//Modifiers

private:
	double xPos;
	double yPos;

	std::string name;
	int level;
	int exp;
	int expNext;

	int strength;
	int tricks;
	int speed;
	int style;
	int boost;
	int vitality;
	int charisma;

	//dig skills
	int barrowSkill;
	int stackSkill;
	int shapeSkill;
	int vegetationSkill;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;

	int statPoints;
	int skillPoints;
};
