#include "QuestThreePack.h"

QuestThreePack::QuestThreePack()
{
	setLength = 3;
	introduction();
}
QuestThreePack::~QuestThreePack()
{

}

void QuestThreePack::introduction()
{
	cout << "Hello Player " << endl;
	cout << "Welcome to your first contest " << endl;
	cout << "There are three jumps for you to hit " << endl;
	cout << "The tricks you decide to perform are up to you " << endl;
	cout << "But remember... your skill level only goes so far and you only have so much time in the air... " << endl;
	cout << endl;
	cout << "Time to drop in" << endl;
	hitSet();
}


void QuestThreePack::hitSet()
{
	printTrickList();
	int currentJumpNum = 1;
	while (currentJumpNum <= setLength)
	{
		hitJump(currentJumpNum);
		currentJumpNum++;
	}
	cout << "congratulations, you made it through the set!!" << endl;
	cout << endl;

}

void QuestThreePack::printTrickList()
{
	cout << "0: X-Up " << endl;
	cout << "1: No Hander " << endl;
	cout << "2: Tabletop " << endl;
	cout << "3: Turndown " << endl;
	cout << "4: Nothing " << endl;
	cout << "5: Barspin " << endl;
	cout << "6: Tailwhip " << endl;
	cout << endl;
	cout << endl;
	
}

void QuestThreePack::hitJump(int jumpNum)
{
	cout << "You are about to hit jump number " << jumpNum << endl;
	cout << "Select your trick from the trick options shown above" << endl;
	cin >> currentTrick;
	currentTrick = currentTrick % std::size(this->trickList);
	cout << "You selected " << trickList[currentTrick] << " on jump " << jumpNum << ". " << endl;
	cout << endl;
	cout << endl;
}