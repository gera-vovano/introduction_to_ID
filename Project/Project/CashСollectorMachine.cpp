#include "Cash—ollectorMachine.h"


Cash—ollectorMachine::Cash—ollectorMachine()
{
}

int	Cash—ollectorMachine::GetAmountOfMoney()
{
	return AmountOfMoney;
}
 
float Cash—ollectorMachine::GetCarCoordinateX()
{
	return CarCoordinateX;
}

float Cash—ollectorMachine::GetCarCoordinateY()
{
	return CarCoordinateY;
}

int Cash—ollectorMachine::GetNumber()
{
	return number;
}

int Cash—ollectorMachine::GetMark()
{
	return mark;
}

bool Cash—ollectorMachine::GetVisitTops()
{

	return VisitTops;
}

bool Cash—ollectorMachine::SetAmountOfMoney(int AmountOfMoney1)
{
	AmountOfMoney = AmountOfMoney1;
	return true;
}

bool Cash—ollectorMachine::SetCarCoordinateX(float CarCoordinateX1)
{
	CarCoordinateX = CarCoordinateX1;
	return true;
}

bool Cash—ollectorMachine::SetCarCoordinateY(float CarCoordinateY1)
{
	CarCoordinateY = CarCoordinateY1;
	return true;
}

bool Cash—ollectorMachine::SetNumber(int Number1)
{
	number = Number1;
	return true;
}

bool Cash—ollectorMachine::SetMark(int Mark1)
{
	mark = Mark1;
	return true;
}

bool Cash—ollectorMachine::SetVisitTops(bool VisitTops1)
{
	VisitTops = VisitTops1;
	return true;
}