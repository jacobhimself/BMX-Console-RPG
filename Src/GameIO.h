#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include "Trick.h"

using namespace std;

class GameIO
{
public:
	GameIO();
	~GameIO();

	vector<Trick> LoadTricks();
	vector<string> splitLine(char delimit, string stringIn);


private:
	string trickFilePath = "Tricks.txt";
	//char fileName[50];
	Trick trickList[4] { 
		Trick("One Hander",1,10),
		Trick("No Hander", 2,15),
		Trick("No Hand One Foot",3,20),
		Trick("Nothing",4,25)
	};
	

};

