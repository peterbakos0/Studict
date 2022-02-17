#include <string>
#include <iostream>
#include <fstream>
#include "ReadFile.hpp"

using namespace std;

string ReadFile(string filePath)
{
	string result;

	ifstream file(filePath);
	string line;

	while(getline(file, line))
	{
		result = result + line + "\n";
	}

	file.close();

	return result;
}
