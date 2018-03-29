#pragma once
ref class ATM
{
private:
	int Money;
	int AmountOfRecommendedMoney;
	float ATMCoordinateX;
	float ATMCoordinateY;
	int number;
	int mark;
	bool VisitTops;
public:
	ATM();
	int GetMoney();
	float GetATMCoordinateX();
	float GetATMCoordinateY();
	int GetNumber();
	int GetMark();
	bool GetVisitTops();
	bool SetMoney(int Money1);
	bool SetATMCoordinateX(float ATMCoordinateX1);
	bool SetATMCoordinateY(float ATMCoordinateY1);
	bool SetNumber(int Number1);
	bool SetMark(int Mark1);
	bool SetVisitTops(bool VisitTops1);
};