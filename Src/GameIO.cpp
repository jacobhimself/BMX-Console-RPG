#include "GameIO.h"

GameIO::GameIO()
{
	//std::cout << "Hello World";
}

GameIO::~GameIO()
{

}

vector<Trick> GameIO::LoadTricks()
{
	string line;
	ifstream trickFile;
	trickFile.open(trickFilePath);

	vector<Trick> trickVector;
	if (trickFile.is_open())
	{
		Trick addTrick;

		string tName;
		int tLevel;
		int tDiff;
		while (getline(trickFile, line))
		{
			//1. parse through line & split based on delimiter
			vector<string> tempLine = splitLine(',',line);

			//2. go through each item of templine vector and use it to
			//initialise a Trick variable (casting str->int as needed)
			tName = tempLine[0];
			tLevel = stoi(tempLine[1]);
			tDiff = stoi(tempLine[2]);

			//3.Push the new variable onto the trickVector
			trickVector.push_back(Trick(tName, tLevel, tDiff));

		}
		
		//Print Trick Vector for debug purposes
		/*for (unsigned int i = 0; i < trickVector.size(); i++)
		{
			trickVector[i].printTrick();
		}*/
		trickFile.close();

		
	}
	else
	{
		cout << "Unable to open file, trick vector is default trick only";
		trickVector.push_back(Trick());
	}
	return trickVector;
}

vector<string> GameIO::splitLine(char delimit, string stringIn)
{
	vector<string> stringVectorOut;
	string currentWord = "";

	//Loop through each char in string looking for delimiter
	for (unsigned int i = 0; i < stringIn.size(); i++)
	{
		if (stringIn[i] == delimit)
		{
			stringVectorOut.push_back(currentWord);
			currentWord = "";
		}
		else
		{
			currentWord += stringIn[i];
		}
	}
	
	return stringVectorOut;
}

