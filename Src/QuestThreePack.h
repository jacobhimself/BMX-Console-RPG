#pragma once
#include <iostream>
#include "Character.h"
using namespace std;

class QuestThreePack
{
public:
	QuestThreePack(Character *player);
	virtual ~QuestThreePack();
	void introduction();
	void hitSet();
	void hitJump(int jumpNum);

	int currentTrick;
	int setLength = 10;
private:
	Character* currentPlayer;
	vector<Trick> playerTrickList;
};

