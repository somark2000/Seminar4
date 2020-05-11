#include "AutoController.h"


using namespace std;

AutoController::AutoController()
{
	repo = AutoInMemoryRepository();
	saveAuto(new Wagen(1, "Dacia", "Logan"));
	saveAuto(new Wagen(2, "Renault", "Clio"));
	saveAuto(new Wagen(3, "Audi", "R8"));
	saveAuto(new Wagen(4, "Volkswage", "Golf"));
}

AutoController* AutoController::instanta = NULL;

Wagen* AutoController::findAutoById(int id)
{
	return repo.findOne(id);
}

vector<Wagen*> AutoController::findAll()
{
	return repo.findAll();
}

Wagen* AutoController::saveAuto(Wagen* a)
{
	return repo.save(a);
}

Wagen* AutoController::updateAuto(Wagen* a)
{
	return repo.update(a);
}

Wagen* AutoController::deleteAuto(int id)
{
	return repo.del(id);
}

AutoController* AutoController::ret_instanta()
{
	if(instanta==NULL)
		instanta = new AutoController();

	return instanta;
}

void AutoController::sort_autos()
{
	for (int i = 0; i < repo.autos.size(); ++i)
	{
		for (int j = 0; j < repo.autos.size(); ++i)
		{
			if (repo.autos[i]->getMarke() > repo.autos[j]->getMarke())
			{
				swap(repo.autos[i], repo.autos[j]);
			}//mai trebuie bool
		}
	}
}