#include "QuestThreePack.h"

QuestThreePack::QuestThreePack(Character *player)
{
	currentPlayer = player;
	playerTrickList = currentPlayer->getTrickList();
	introduction();
}
QuestThreePack::~QuestThreePack()
{

}

void QuestThreePack::introduction()
{
	cout << "Hello " << currentPlayer->getName() << endl;
	cout << "Welcome to your first contest " << endl;
	cout << "There are " << setLength << " jumps for you to hit " << endl;
	cout << "The tricks you decide to perform are up to you " << endl;
	cout << "But remember... your skill level only goes so far and you only have so much time in the air... " << endl;
	cout << endl;
	cout << "Time to drop in" << endl;
	hitSet();
}


void QuestThreePack::hitSet()
{
	currentPlayer->printTricks();
	int currentJumpNum = 1;
	while (currentJumpNum <= setLength)
	{
		hitJump(currentJumpNum);
		currentJumpNum++;
	}
	cout << "congratulations, you made it through the set!!" << endl;
	cout << endl;

}



void QuestThreePack::hitJump(int jumpNum)
{
	cout << "You are about to hit jump number " << jumpNum << endl;
	cout << "Select your trick from the trick options shown above" << endl;
	cin >> currentTrick;
	currentTrick = currentTrick % std::size(playerTrickList);
	cout << "You selected " << playerTrickList[currentTrick].getName() << " on jump " << jumpNum << ". " << endl;
	cout << endl;
	cout << endl;
}