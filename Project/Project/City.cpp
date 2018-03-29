#include "City.h"



City::City()
{
	crossRoads = gcnew ArrayList();
	atm = gcnew ArrayList();
}

ArrayList^ City::GetCrossRoads()
{
	return crossRoads;
}

ArrayList^ City::GetATM()
{
	return atm;
}
bool City::AddCrossRoad(Object^ element)
{
	crossRoads->Add(element);
	return true;
}

bool City::AddATM(Object^ element)
{
	atm->Add(element);
	return true;
}

