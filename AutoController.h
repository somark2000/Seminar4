#pragma once
#include "crudrepo.h"
#include "Wagen.h"
#include "Kunde.h"

class AutoController
{
public:
	AutoInMemoryRepository repo;
	//~AutoController();
	Wagen* findAutoById(int id);
	vector<Wagen*> findAll();
	Wagen* saveAuto(Wagen* a);
	Wagen* updateAuto(Wagen* a);
	Wagen* deleteAuto(int id);
	void sort_autos();
	static AutoController* ret_instanta();
private:
	AutoController();
	static AutoController *instanta;
};

