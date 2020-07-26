#include "Game.h"

using namespace std;

Game::Game()
{
	choice = 0;
	playing = true;
	activeCharacter = 0;
	
}

Game::~Game()
{

}

void Game::initGame()
{
	createNewCharacter();
	GameIO gIO;
	trickList = gIO.LoadTricks();
}

void Game::mainMenu()
{
	cout << "= MAIN MENU =" << endl << endl;
	cout << "0: Quit" << endl;
	cout << "1: Ride Local Three Pack" << endl;
	cout << "2: Shop" << endl;
	cout << "3: Level Up" << endl;
	cout << "4: Rest" << endl;
	cout << "5: Character sheet" << endl;
	cout << "6: Create New Character" << endl;
	cout << "7: Save Characters" << endl;
	cout << "8: Load Characters" << endl;
	cout << "9: Test Functions" << endl;

	cout << endl << "Choice" << endl;
	cin >> choice;
	cin.ignore(); // in tutorial this was in each case
	cout << endl;

	switch (choice)
	{
		//Quit
	case 0:
		playing = false;
		break;
	case 1: {
		QuestThreePack threePack;
		break; }
		//Travel
		//Shop
		//Level Up
		//Rest
		//Character Sheet
	case 5:
		characters[activeCharacter].printStats();
		break;

		//Create New Character
	case 6:
		createNewCharacter();
		//saveCharacters();
		break;

		//Save Character
	case 7:
		//saveCharacters();
		break;

		//Load Characters
	case 8:
		//loadCharacters();
		break;
	case 9: {
		//test functions
		/*GameIO gIO;
		gIO.LoadTricks();*/

		characters[0].LoadPlayerTricks(trickList);
		
		break;
	}
		//
	default:
		break;
	}
}

void Game::createNewCharacter()
{
	std::string name = "Jacob";

	//std::cout << "Enter name for character: ";
	//std::getline(std::cin, name);

	characters.push_back(Character());
	activeCharacter = characters.size() - 1;
	characters[activeCharacter].initialise(name);

}