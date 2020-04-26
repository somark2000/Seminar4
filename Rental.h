#pragma once
#include <iostream>
#include "Kunde.h"
#include "Wagen.h"
#include "LKW.h"
#include "PKW.h"
using namespace std;

class Rental
{
	friend class Kunde;
	friend class Wagen;
private:
	Kunde *clients;
	Wagen *autos;
	int la, lc, cc, ca;
public:
	//constructor
	Rental();
	//destructor
	~Rental();
	//add new client
	void add_client(int ID);
	//delete existing client
	void delete_client(int ID);
	//update existing client
	void update_client(int ID);
	//add new auto
	void add_auto(int ID);
	//delete existing auto
	void delete_auto(int ID);
	//search auto
	bool search_auto(int ID);
	//search client
	bool search_client(int ID);
};
