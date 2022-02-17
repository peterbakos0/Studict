#include <string>
#include <vector>
#include <sstream>
#include "SplitText.hpp"

using namespace std;

vector<string> SplitText(string text, char seperator)
{
	vector<string> result;

	stringstream stream(text);
	string part;

	while(getline(stream, part, seperator))
	{
		result.push_back(part);
	}

	return result;
}
