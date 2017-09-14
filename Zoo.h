#ifndef ZOO_H
#define ZOO_H
#include <string>
#include <iostream>

class Zoo
{
	public:
		Zoo (std::string a, int c);
		void setName(std::string);
		std::string getName();
		void setNUmber(int c);
		int getNumber();
		
	private:
		std::string animals;
		int num;
};

#endif
