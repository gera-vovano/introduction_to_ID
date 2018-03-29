#pragma once
ref class Cash—ollectorMachine
{
private:
	int	AmountOfMoney;
	float CarCoordinateX;
	float CarCoordinateY;
	int number = 1;
	int mark;
	bool VisitTops;
public:
	Cash—ollectorMachine();
	int	GetAmountOfMoney();
	float GetCarCoordinateX();
	float GetCarCoordinateY();
	int GetNumber();
	int GetMark();
	bool GetVisitTops();
	bool SetAmountOfMoney(int AmountOfMoney1);
	bool SetCarCoordinateX(float CarCoordinateX1);
	bool SetCarCoordinateY(float CarCoordinateY1);
	bool SetNumber(int Number1);
	bool SetMark(int Mark1);
	bool SetVisitTops(bool VisitTops1);
};

