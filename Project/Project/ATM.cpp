#include "ATM.h"



ATM::ATM()
{
}

int ATM::GetMoney()
{
	return Money;
}

float ATM::GetATMCoordinateX()
{
	return ATMCoordinateX;
}

float ATM::GetATMCoordinateY()
{
	return ATMCoordinateY;
}

int ATM::GetNumber()
{
	return number;
}

int ATM::GetMark()
{
	return mark;
}

bool ATM::GetVisitTops()
{
	return VisitTops;
}

bool ATM::SetMoney(int Money1)
{
	Money = Money1;
	return true;
}

bool ATM::SetATMCoordinateX(float ATMCoordinateX1)
{
	ATMCoordinateX = ATMCoordinateX1;
	return true;
}

bool ATM::SetATMCoordinateY(float ATMCoordinateY1)
{
	ATMCoordinateY = ATMCoordinateY1;
	return true;
}

bool ATM::SetNumber(int Number1)
{
	number = Number1;
	return true;
}

bool ATM::SetMark(int Mark1)
{
	mark = Mark1;
	return true;
}

bool ATM::SetVisitTops(bool VisitTops1)
{
	VisitTops = VisitTops1;
	return true;
}