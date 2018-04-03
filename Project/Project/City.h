#pragma once

#include "ATM.h"
#include "CrossRoads.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections;

ref class City
{
private:
	ArrayList^ crossRoads;
	ArrayList^ atm;
public:
	City();
	ArrayList^ GetCrossRoads();
	ArrayList^ GetATM();
	void AddCrossRoad(Object^);
	void AddATM(Object^);
	bool SetDataFromFile();
};

