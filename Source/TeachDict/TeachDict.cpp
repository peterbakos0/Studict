#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "../Utils/ShuffleIntArray.hpp"
#include "TeachDict.hpp"

using namespace std;

void TeachDict(vector<array<string, 2>> dict, int blockSize)
{
	int entryCount = dict.size();
	int blockCount = (entryCount + blockSize - 1) / blockSize; // ceil entryCount/blockSize

	for(int i = 0; i < blockCount; i++)
	{
		vector<int> entryIndexes;

		bool isBlockCorrect = false;

		int startEntryIndex = i * blockSize;
		int endEntryIndex = min(startEntryIndex + blockSize, entryCount);

		for(int j = startEntryIndex; j < endEntryIndex; j++)
		{
			entryIndexes.push_back(j);
		}

		while(!isBlockCorrect)
		{
			isBlockCorrect = true;

			ShuffleIntArray(&entryIndexes);

			for(unsigned j = 0; j < entryIndexes.size(); j++)
			{
				int entryIndex = entryIndexes[j];

				array<string, 2> entry = dict[entryIndex];

				string question = entry[0];
				string correctAnswer = entry[1];

				system("clear");

				cout << "BI: " << i + 1 << "/" << blockCount << endl;
				cout << "QI: " << j + 1 << "/" << entryIndexes.size() << endl;
				cout << "IBC: " << isBlockCorrect << endl;

				cout << question << ": ";

				string answer;
				getline(cin, answer);

				if(answer == correctAnswer)
				{
					cout << "Correct! ";
				}
				else
				{
					isBlockCorrect = false;
					cout << "Incorrect! " << correctAnswer << " ";
				}

				cin.get();
			}
		}
	}
}
