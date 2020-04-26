#include <iostream>
#include "Rental.h"
using namespace std;

Rental::Rental()
{
	this->ca = 100;
	this->cc = 100;
	this->la = 0;
	this->lc = 0;
	this->autos = new Wagen[ca];
	this->clients = new Kunde[cc];
}

bool Rental::search_auto(int ID)
{
	if (la == 0) return false;
	for (int i = 0; i < this->la; ++i)
	{
		if (ID == this->autos[i].getID())
		{
			return true;
		}
	}
	return false;
}

bool Rental::search_client(int ID)
{
	if (la == 0) return false;
	for (int i = 0; i < this->la; ++i)
	{
		if (ID == this->clients[i].getID())
		{
			return true;
		}
	}
	return false;
}

void Rental::add_auto(int ID)
{
	if (search_auto(ID) == true)
	{
		cout << "Car already listed\n";
	}
	else
	{
		cout << "ID avaible";
		Wagen a = Wagen();
		a.setID(ID);
		std::string s;
		cout << "Please enter the Marke ";
		cin >> s;
		a.setMarke(s);
		cout << "Please enter the Modell ";
		cin >> s;
		a.setModell(s);
		la++;
		if (la == ca)
		{
			ca *= 2;//daca acesta e plin dublam spatiul si efectuam realocarea dinamica
			Wagen* np = new Wagen[ca];
			for (int i = 0; i < la; ++i)
			{
				np[i] = autos[i];
			}
			delete autos;
			autos = np;
		}
	}
}

void Rental::add_client(int ID)
{
	if (search_client(ID) == true)
	{
		cout << "Client already listed\n";
	}
	else
	{
		cout << "ID avaible";
		Kunde a = Kunde();
		a.setID(ID);
		std::string s;
		cout << "Please enter the Name ";
		cin >> s;
		a.setName(s);
		lc++;
		if (lc == cc)
		{
			cc *= 2;//daca acesta e plin dublam spatiul si efectuam realocarea dinamica
			Kunde* np = new Kunde[cc];
			for (int i = 0; i < lc; ++i)
			{
				np[i] = clients[i];
			}
			delete clients;
			clients = np;
		}
	}
}

void Rental::delete_auto(int ID)
{
	if (search_auto(ID) == false)
	{
		cout << "Car not listed\n";
	}
	else
	{
		cout << "ID found";
		for (int i = 0; i < this->la; ++i)
		{
			if (ID == this->autos[i].getID())
			{
				for (int k = i + 1; k < this->la; ++k)
				{
					this->autos[k - 1].setID(this->autos[k].getID());
					this->autos[k - 1].setMarke(this->autos[k].getMarke());
					this->autos[k - 1].setModell(this->autos[k].getModell());
				}
				la--;
			}
		}
	}
}

void Rental::delete_client(int ID)
{
	if (search_client(ID) == false)
	{
		cout << "Client not listed\n";
	}
	else
	{
		cout << "ID found";
		for (int i = 0; i < this->la; ++i)
		{
			if (ID == this->clients[i].getID())
			{
				for (int k = i + 1; k < this->lc; ++k)
				{
					this->clients[k - 1].setID(this->clients[k].getID());
					this->clients[k - 1].setName(this->clients[k].getName());
				}
				lc--;
			}
		}
	}
}

void Rental::update_client(int ID)
{
	if (search_client(ID) == false)
	{
		cout << "Client not listed\n";
	}
	else
	{
		cout << "ID found";
		for (int i = 0; i < this->la; ++i)
		{
			if (ID == this->clients[i].getID())
			{
				int w;
				cout << "The current ID is " << ID << " do you want to change it? (1/0)";
				cin >> w;
				if (w == 1)
				{
					cout << "Please enter the new ID ";
					cin >> w;
					if (search_client(w) == true) cout << "ID already taken\n";
					else this->clients[i].setID(w);
				}

				cout << "The current Name is " << this->clients[i].getName() << " do you want to change it? (1/0)";
				cin >> w;
				if (w == 1)
				{
					cout << "Please enter the new Name ";
					std::string s;
					cin >> s;
					this->clients[i].setName(s);
				}
				
			}
		}
	}
}