#include "ATM.h"
#include "CrossRoads.h"
#include "CashСollectorMachine.h"
#include <stdio.h>
#include <stdlib.h>
#include "City.h"
#include "ATM.h"
#include "CrossRoads.h"

#define MAXCOUNTCROSSROADS 100
#define MAXMARKVALUE 10000

using namespace System;

int main()
{
	//	Начало алгоритма по нахождению кратчайшего пути
	
	City^ town = gcnew City();	//	Объект класса "Город"
	CrossRoads^ elCR = gcnew CrossRoads();	// Объект класса "Перекресток" для использования текущего элемента массива объектов
	ATM^ elATM = gcnew ATM(); // Объект класса "Банкомат" для использования текущего элемента массива объектов

	int a[MAXCOUNTCROSSROADS][MAXCOUNTCROSSROADS]; // Матрица длинн связей (-1 означает, что связи нет) 
	float x, y; //	Координаты точки

	//		Временные переменные (для ввода с консоли)
	
	Console::Write("Type count of points: "); int crossRoadsCount = int::Parse(Console::ReadLine()); Console::WriteLine();
	Console::Write("Type count of ATM: "); int atmCount = int::Parse(Console::ReadLine()); Console::WriteLine();

	// ------------------------------------------------------------------------------------------------
	
	
	for (int i = 0; i < crossRoadsCount; i++)
	{
		elCR->SetNumber(i);
		elCR->SetMark(MAXMARKVALUE);

		Console::Write("Type x of {0} point: ", i); x = float::Parse(Console::ReadLine()); Console::WriteLine();
		Console::Write("Type y of {0} point: ", i); y = float::Parse(Console::ReadLine()); Console::WriteLine();

		elCR->SetCoordinateX(x);
		elCR->SetCoordinateY(y);

		town->AddCrossRoad(elCR);

		elCR = gcnew CrossRoads();
	}

	for (int i = 0; i < atmCount; i++)
	{
		elATM->SetNumber(i);
		elATM->SetMark(MAXMARKVALUE);

		Console::Write("Type x of {0} ATM: ", i); x = float::Parse(Console::ReadLine()); Console::WriteLine();
		Console::Write("Type y of {0} ATM: ", i); y = float::Parse(Console::ReadLine()); Console::WriteLine();

		elATM->SetATMCoordinateX(x);
		elATM->SetATMCoordinateY(y);

		town->AddATM(elATM);

		elATM = gcnew ATM();
	}
	
	return 0;
}