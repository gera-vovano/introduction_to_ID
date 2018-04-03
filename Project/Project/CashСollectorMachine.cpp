#include "Cash—ollectorMachine.h"


Cash—ollectorMachine::Cash—ollectorMachine()
{
	number = 1;
	mark = 2147483647;
	VisitTops = false;
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