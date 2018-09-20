#include "ATM.h"



ATM::ATM(int a)
{
	number = a;
	mark = 2147483647;
	VisitTops = false;
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