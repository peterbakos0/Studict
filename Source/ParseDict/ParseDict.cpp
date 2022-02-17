#include <string>
#include <array>
#include <vector>
#include "../Utils/SplitText.hpp"
#include "ParseDict.hpp"

using namespace std;

vector<array<string, 2>> ParseDict(string dictText)
{
	vector<array<string, 2>> dict;

	vector<string> lines = SplitText(dictText, '\n');

	for(unsigned i = 0; i < lines.size(); i++)
	{
		string line = lines[i];

		vector<string> entryVector = SplitText(line, ':');
		array<string, 2> entry;

		entry[0] = entryVector[0];
		entry[1] = entryVector[1];

		entry[1].erase(0, 1);

		dict.push_back(entry);
	}

	return dict;
}
