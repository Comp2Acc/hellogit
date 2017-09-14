#include "Zoo.h"
using namespace std;
Zoo::Zoo(string a, int c)
{
	animals = a;
	num = c;
}

void Zoo::setName(string a)
{
	animals = a;
}

string Zoo::getName()
{
	return animals;
}

void Zoo::setNumber(int c)
{
	number = c;
}

int Zoo::getNumber()
{
	return num;
}
