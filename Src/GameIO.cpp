#include "GameIO.h"

GameIO::GameIO()
{
	//std::cout << "Hello World";
}

GameIO::~GameIO()
{

}

void GameIO::LoadTricks()
{
	string line;

	
	ifstream trickFile;
	trickFile.open(trickFilePath);

	//cin.getline(fileName, 50);
	//trickFile.open("Tricks.txt");

	if (trickFile.is_open())
	{
		while (getline(trickFile, line))
		{
			cout << line << endl;
		}
		trickFile.close();

		/*char word[50];
		trickFile >> word;
		while (trickFile.good())
		{
			cout << word << " ";
			trickFile >> word;
		}*/
	}
	else
	{
		cout << "Unable to open file";
	}
}