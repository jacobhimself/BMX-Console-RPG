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
	void printTrickList();

	int currentTrick;
	int setLength;
private:
	Character currentPlayer;
	string trickList[7] = {
		"X-Up",
		"No Hander",
		"Tabletop",
		"Turndown",
		"Nothing",
		"Barspin",
		"Tailwhip" };

};

