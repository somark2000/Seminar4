#include "LKW.h"
#include <string>

LKW::LKW()
{

}
LKW::LKW(int id1, std::string marke1, std::string modell1, std::string bez1, int gesamtgewicht): Wagen(id1,marke1,modell1)
{
	//this->ID = id1;
	//this->Marke = marke1;
	//this->Modell = modell1;
	this->Bezeichnung = bez1;
	this->Gesamtgewicht = gesamtgewicht;
}

void LKW::load(int l)
{
	this->Gesamtgewicht += l;
}

void LKW::unload(int l)
{
	if (this->Gesamtgewicht - l < 0)
		this->Gesamtgewicht = 0;
	this->Gesamtgewicht -= l;
}