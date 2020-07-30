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
	
	

};

