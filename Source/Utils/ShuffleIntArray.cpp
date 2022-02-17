#include <vector>
#include <random>
#include <algorithm>
#include "ShuffleIntArray.hpp"

using namespace std;

void ShuffleIntArray(vector<int>* intArray)
{
	random_device randomDevice;
	default_random_engine randomEngine(randomDevice());

	shuffle(intArray->begin(), intArray->end(), randomEngine);
}
