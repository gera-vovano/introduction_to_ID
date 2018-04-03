#pragma once

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
	bool AddCrossRoad(Object^);
	bool AddATM(Object^);
};

