#include "City.h"



City::City()
{
	crossRoads = gcnew ArrayList();
	atm = gcnew ArrayList();
}

bool City::SetDataFromFile()
{
	CrossRoads^ elCR;
	ATM^ elATM;
	int Number = 2;
	String^ str;
	StreamReader^ fread = gcnew StreamReader("input.txt");
	str = fread->ReadLine();
	bool i1 = false;
	bool i2 = false;
	String^ strx;
	String^ stry;
	int temp;
	int j = 2;
	bool Right = true;
	while (str != nullptr)
	{
		if (i1)
		{
			elATM = gcnew ATM(j);
			try
			{
				while (str[temp] != ' ')
					temp++;
				strx = str->Substring(0, temp);
				temp++;
				stry = str->Substring(temp, str->Length - temp);
				temp = float::Parse(strx);
				elATM->SetATMCoordinateX(temp);
				temp = float::Parse(stry);
			}
			catch (...)
			{
				return false;
			}

			elATM->SetATMCoordinateY(temp);
			j++;
			AddATM(elATM);
		}

		if (i2)
		{
			elCR = gcnew CrossRoads(j);
			try
			{
				while (str[temp] != ' ')
					temp++;
				strx = str->Substring(0, temp);
				temp++;
				stry = str->Substring(temp, str->Length - temp);
				temp = float::Parse(strx);
				elCR->SetCoordinateX(temp);
				temp = float::Parse(stry);
			}
			catch (...)
			{
				return false;
			}
			elCR->SetCoordinateY(temp);
			j++;
			AddCrossRoad(elCR);
		}

		if (str == "1")
			i1 = true;

		if (str == "2")
		{
			i1 = false;
			i2 = true;
		}

		str = fread->ReadLine();
		temp = 0;
		
	}

	fread->Close();
	return true;
}

ArrayList^ City::GetCrossRoads()
{
	return crossRoads;
}

ArrayList^ City::GetATM()
{
	return atm;
}
void City::AddCrossRoad(Object^ element)
{
	crossRoads->Add(element);
}

void City::AddATM(Object^ element)
{
	atm->Add(element);
}

