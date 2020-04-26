#include "ui.h"
#include <iostream>
#include <vector>
using namespace std;

ui::ui()
{
	cont = AutoController();
}

void ui::menu()
{
	cout << "Please select an option\n";
	cout << "\t 1. Find a car by ID\n";
	cout << "\t 2. Display all cars\n";
	cout << "\t 3. Save a new car\n";
	cout << "\t 4. Update an existing car\n";
	cout << "\t 5.Delete an existing car\n";
	cout << "\t 6. Exit\n";
}

void ui::run()
{
	while (true)
	{
		cout << "Your option: ";
		int op;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			cout << "The ID you are searching for: ";
			int id;
			cin >> id;
			Wagen* a = cont.findAutoById(id);
			if (a == nullptr) cout << "Car not listed\n";
			else cout << a->getID() << ' ' << a->getMarke() << ' ' << a->getModell() << '\n';
			break;
		}
		case 2:
		{
			cout << "All our cars\n";
			vector<Wagen*> v = cont.findAll();
			for(int i=0;i<v.size();++i)
				cout << v[i]->getID() << ' ' << v[i]->getMarke() << ' ' << v[i]->getModell() << '\n';
			break;
		}
		case 3:
		{
			cout << "Save a new car\n";
			int id;
			string mark, modell;
			cout << "ID: ";
			cin >> id;
			cout << "Marke: ";
			cin >> mark;
			cout << "Modell: ";
			cin >> modell;
			Wagen* a =new Wagen(id, mark, modell);
			if (cont.saveAuto(a) == nullptr) cout << "Save successfull\n";
			else cout<< "Save unsuccessfull\n";
			break;
		}
		case 4:
		{
			cout << "Update an existing car\n";
			int id;
			string mark, modell;
			cout << "ID: ";
			cin >> id;
			cout << "New marke: ";
			cin >> mark;
			cout << "New modell: ";
			cin >> modell;
			Wagen* a =new Wagen(id, mark, modell);
			if (cont.updateAuto(a) == nullptr) cout << "Update successfull\n";
			else cout << "Update unsuccessfull\n";
			break;
		}
		case 5:
		{
			cout << "Delete an existing car\n";
			int id;
			cout << "ID: ";
			cin >> id;
			if (cont.deleteAuto(id) == nullptr) cout << "Delete successfull\n";
			else cout << "Delete unsuccessfull\n";
			break;
		}
		default:
			return;
		}
	}
}