#include "City.h"

using namespace System;
using namespace System::Collections;

City::City()
{
	crossRoads = gcnew ArrayList();
	atm = gcnew ArrayList();
	all = gcnew ArrayList();
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

bool City::AddAll(Object^ obj)
{
	all->Add(obj);
	return true;
}

ArrayList^ City::GetAll()
{
	return all;
}