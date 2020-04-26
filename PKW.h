#pragma once

#include <iostream>
#include "Wagen.h"
using namespace std;

class PKW:public Wagen
{
public:
	std::string sonderausstattungen;
	PKW();
	PKW(int ID, std::string Marke, std::string Modell, std::string Sonderauss);
	~PKW();
private:
	int ID;
	std::string Marke, Modell, Sonderauss;
};
