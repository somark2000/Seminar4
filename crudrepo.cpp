#include "crudrepo.h"

AutoInMemoryRepository::AutoInMemoryRepository()
{

}

Wagen* AutoInMemoryRepository::findOne(int id)            //Auto* ... return nullptr;
{
	//Wagen a;
	for (int i = 0; i < autos.size(); i++)
	{
		if (autos[i]->getID() == id) return autos[i];
	}
	return nullptr;
}

vector<Wagen*> AutoInMemoryRepository::findAll()
{
	return autos;
}

Wagen* AutoInMemoryRepository::save(Wagen* entity)
{
	for (int i = 0; i < autos.size(); i++)
	{
		if (entity->getID() == autos[i]->getID())
		{
			return autos[i];
		}
	}
	autos.push_back(entity);
	return nullptr;
}

Wagen* AutoInMemoryRepository::del(int id)
{
	for (int i = 0; i < autos.size(); i++)
	{
		if(autos[i]->getID() == id)
		{
			cout << "intra\n";
			Wagen* aux = autos[i];
			//delete autos[i];
			autos.erase(autos.begin() + i);
			return aux;
		}
	}
	return nullptr;
}

Wagen* AutoInMemoryRepository::update(Wagen* entity)
{
	if (del(entity->getID()) == nullptr)
	{
		return entity;
	}
	//del(entity->getID());
	save(entity);
	return nullptr;
}