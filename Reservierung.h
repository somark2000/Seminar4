#pragma once
#include"Kunde.h"
#include"Wagen.h"
class Reservierung
{
private:
	Kunde person;
	Wagen Auto;
	int tage;

public:
	Reservierung(Kunde person, Wagen Auto, int tage);
};

