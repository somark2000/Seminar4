#include <iostream>
#include "Rental.h"
using namespace std;

Rental::Rental()
{
	
}

void Rental::reserve_auto(Kunde p, Wagen a, int t)
{
	reservierung.push_back(Reservierung(p, a, t));
}