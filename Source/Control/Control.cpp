#include <string>
#include <array>
#include <vector>
#include <iostream>
#include "../Utils/ReadFile.hpp"
#include "../ParseDict/ParseDict.hpp"
#include "../TeachDict/TeachDict.hpp"
#include "Control.hpp"

using namespace std;

void Control(int argCount, char** args)
{
	if(argCount < 3)
	{
		return;
	}

	string dictPath = args[1];
	int blockSize = stoi(args[2]);

	string dictText = ReadFile(dictPath);
	vector<array<string, 2>> dict = ParseDict(dictText);

	TeachDict(dict, blockSize);

	cout << "DONE!" << endl;
}
