#pragma once
#include <iostream>
using namespace std;

class QuestThreePack
{
public:
	QuestThreePack();
	virtual ~QuestThreePack();
	void introduction();
	void hitSet();
	void hitJump(int jumpNum);
	void printTrickList();

	int currentTrick;
	int setLength;
private:
	string trickList[7] = {
		"X-Up",
		"No Hander",
		"Tabletop",
		"Turndown",
		"Nothing",
		"Barspin",
		"Tailwhip" };

};

