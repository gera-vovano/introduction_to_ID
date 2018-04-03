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
	CrossRoads(int);
	float GetCoordinateX();
	float GetCoordinateY();
	int GetNumber();
	int GetMark();
	bool GetVisitTops();
	void SetCoordinateX(float CoordinateX1);
	void SetCoordinateY(float CoordinateY1);
	bool SetMark(int Mark1);
	bool SetVisitTops(bool VisitTops1);
};