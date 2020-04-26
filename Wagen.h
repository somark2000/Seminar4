#pragma once
#include <iostream>
using namespace std;

class Wagen
{
public:
	//constructor
	Wagen();
	Wagen(int id, std::string markre, std::string model);
	//ID getter
	int getID();
	//Marke getter
	std::string getMarke();
	//Modell getter
	std::string getModell();
	//ID setter
	void setID(int ID);
	//Marke setter
	void setMarke(std::string Marke);
	//Modell setter
	void setModell(std::string Modell);
private:
	int ID;
	std::string Marke, Modell;
};
