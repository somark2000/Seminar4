#pragma once
#include <iostream>
#include "Kunde.h"
#include "Wagen.h"
#include "LKW.h"
#include "PKW.h"
#include <vector>
#include "Reservierung.h"
using namespace std;

class Rental
{
private:
	vector<Reservierung> reservierung;
public:
	//constructor
	Rental();
	//destructor
	~Rental();

	void reserve_auto(Kunde p, Wagen a, int t);
};
