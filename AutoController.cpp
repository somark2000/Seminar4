#include "AutoController.h"


using namespace std;

AutoController::AutoController()
{
	repo = AutoInMemoryRepository();
}

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