#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

class GameIO
{
public:
	GameIO();
	~GameIO();

	void LoadTricks();


private:
	string trickFilePath = "Tricks.txt";
	//char fileName[50];
	

};

