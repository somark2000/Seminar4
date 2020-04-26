#pragma once
#include "crudrepo.h"
#include "Wagen.h"
#include "Kunde.h"

class AutoController
{
	friend class AutoInMemoryRepository;
public:
	AutoInMemoryRepository repo;
	AutoController();
	~AutoController();
	Wagen* findAutoById(int id);
	vector<Wagen*> findAll();
	Wagen* saveAuto(Wagen* a);
	Wagen* updateAuto(Wagen* a);
	Wagen* deleteAuto(int id);
};

