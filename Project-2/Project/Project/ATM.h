#pragma once
ref class ATM
{
private:
	float ATMCoordinateX;
	float ATMCoordinateY;
	int number;
	int mark;
	bool VisitTops;
public:
	ATM(int a);
	float GetATMCoordinateX();
	float GetATMCoordinateY();
	int GetNumber();
	int GetMark();
	bool GetVisitTops();
	void SetATMCoordinateX(float ATMCoordinateX1);
	void SetATMCoordinateY(float ATMCoordinateY1);
	bool SetMark(int Mark1);
	bool SetVisitTops(bool VisitTops1);
};