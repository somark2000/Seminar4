#pragma once
#include "Wagen.h"
#include <vector>
#include <iostream>
using namespace std;

template <class E>
class CrudRepository
{
public:
	virtual E findOne(int id) = 0;
	virtual vector< E > findAll() = 0;
	virtual E save(E entity) = 0;
	virtual E del(int id) = 0;
	virtual E update(E entity) = 0;
	virtual ~CrudRepository() {};
};

class AutoInMemoryRepository: public CrudRepository<Wagen*>
{
public:
	AutoInMemoryRepository();
	vector<Wagen*>autos;
	Wagen* findOne(int id);
	vector<Wagen*> findAll();
	Wagen* save(Wagen* entity);
	Wagen* del(int id);
	Wagen* update(Wagen* entity);
};
