#pragma once
#include "Wagen.h"

class LKW :
	public Wagen
{
private:
	int Gesamtgewicht,ID;
	std::string Bezeichnung,Marke,Modell;
public:
	LKW();
	LKW(int id1, std::string marke1, std::string modell1, std::string bez1, int gesamtgewicht);
	void load(int l);
	void unload(int l);
};