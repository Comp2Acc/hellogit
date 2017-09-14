#include "Zoo.h"
#include <string>
#include <iostream>
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
	num = c;
}

int Zoo::getNumber()
{
	return num;
}
