#include "CrossRoads.h"



CrossRoads::CrossRoads(int a)
{
	number = a;
	mark = 2147483647;
	VisitTops = false;
}

float CrossRoads::GetCoordinateX()
{
	return CoordinateX;
}
float CrossRoads::GetCoordinateY()
{
	return CoordinateY;
}
int CrossRoads::GetNumber()
{
	return number;
}

int CrossRoads::GetMark()
{
	return mark;
}

bool CrossRoads::GetVisitTops()
{
	return VisitTops;
}

bool CrossRoads::SetCoordinateX(float CoordinateX1)
{
	CoordinateX = CoordinateX1;
	return true;
}

bool CrossRoads::SetCoordinateY(float CoordinateY1)
{
	CoordinateY = CoordinateY1;
	return true;
}


bool CrossRoads::SetMark(int Mark1)
{
	mark = Mark1;
	return true;
}

bool CrossRoads::SetVisitTops(bool VisitTops1)
{
	VisitTops = VisitTops1;
	return true;
}