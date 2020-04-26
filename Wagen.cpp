#include <iostream>
#include "Wagen.h"
using namespace std;

Wagen::Wagen()
{
	
}

Wagen::Wagen(int id, std::string marke,std::string model)
{
	this->ID = id;
	this->Marke = marke;
	this->Modell = model;
}

int Wagen::getID()
{
	return this->ID;
}

std::string Wagen::getMarke()
{
	return this->Marke;
}

std::string Wagen::getModell()
{
	return this->Modell;
}

void Wagen::setID(int ID)
{
	this->ID = ID;
}

void Wagen::setMarke(std::string Marke)
{
	this->Marke = Marke;
}

void Wagen::setModell(std::string Modell)
{
	this->Modell = Modell;
} 