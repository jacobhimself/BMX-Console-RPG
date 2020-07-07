#include <iostream>
#include "Game.h"

using namespace std;

int main()
{

	Game game;
	game.initGame();

	while (game.isPlaying())
	{
		game.mainMenu();
	}
	return 0;
}