#pragma once
ref class CrossRoads
{
private:
	float CoordinateX;
	float CoordinateY;
	int number;
	int mark;
	bool VisitTops;
public:
	CrossRoads();
	float GetCoordinateX();
	float GetCoordinateY();
	int GetNumber();
	int GetMark();
	bool GetVisitTops();
	bool SetCoordinateX(float CoordinateX1);
	bool SetCoordinateY(float CoordinateY1);
	bool SetNumber(int Number1);
	bool SetMark(int Mark1);
	bool SetVisitTops(bool VisitTops1);
};