#pragma once
using namespace std;
#include <iostream>

class Kunde
{
public:
	//constructor
	Kunde();
	Kunde(int id,std::string name);
	//ID getter
	int getID();
	//Name getter
	std::string getName();
	//ID setter
	void setID(int ID);
	//Name Setter
	void setName(std::string Name);

private:
	int ID;
	std::string Name;
};
