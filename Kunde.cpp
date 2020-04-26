#include <iostream>
#include "Kunde.h"
using namespace std;

Kunde::Kunde()
{

}

Kunde::Kunde(int id,std::string name)
{
	this->ID = id;
	this->Name = name;
}

int Kunde::getID()
{
	return this->ID;
}

std::string Kunde::getName()
{
	return this->Name;
}

void Kunde::setID(int ID)
{
	this->ID = ID;
}

void Kunde::setName(std::string name)
{
	this->Name = name;
}