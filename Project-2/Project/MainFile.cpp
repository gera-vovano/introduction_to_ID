#include "ATM.h"
#include "CrossRoads.h"
#include "Cash—ollectorMachine.h"
#include <stdio.h>
#include <stdlib.h>
#include "City.h"
#include "ATM.h"
#include "CrossRoads.h"
#include <cmath>

#define MAXCOUNTCROSSROADS 100
#define MAXMARKVALUE 10000

using namespace System;

int main()
{
	//	Õ‡˜‡ÎÓ ‡Î„ÓËÚÏ‡ ÔÓ Ì‡ıÓÊ‰ÂÌË˛ Í‡Ú˜‡È¯Â„Ó ÔÛÚË
	
	City^ town = gcnew City();	//	Œ·˙ÂÍÚ ÍÎ‡ÒÒ‡ "√ÓÓ‰"
	CrossRoads^ elCR; // Œ·˙ÂÍÚ ÍÎ‡ÒÒ‡ "œÂÂÍÂÒÚÓÍ" ‰Îˇ ËÒÔÓÎ¸ÁÓ‚‡ÌËˇ ÚÂÍÛ˘Â„Ó ˝ÎÂÏÂÌÚ‡ Ï‡ÒÒË‚‡ Ó·˙ÂÍÚÓ‚
	ATM^ elATM; // Œ·˙ÂÍÚ ÍÎ‡ÒÒ‡ "¡‡ÌÍÓÏ‡Ú" ‰Îˇ ËÒÔÓÎ¸ÁÓ‚‡ÌËˇ ÚÂÍÛ˘Â„Ó ˝ÎÂÏÂÌÚ‡ Ï‡ÒÒË‚‡ Ó·˙ÂÍÚÓ‚
	Cash—ollectorMachine^ car = gcnew Cash—ollectorMachine();

	float a[MAXCOUNTCROSSROADS][MAXCOUNTCROSSROADS]; // Ã‡ÚËˆ‡ ‰ÎËÌÌ Ò‚ˇÁÂÈ (-1 ÓÁÌ‡˜‡ÂÚ, ˜ÚÓ Ò‚ˇÁË ÌÂÚ) 
	float x, y; //  ÓÓ‰ËÌ‡Ú˚ ÚÓ˜ÍË
	int number = 1; // œÂÂÏÂÌÌ‡ˇ Ò ÌÓÏÂÓÏ

	//		¬ÂÏÂÌÌ˚Â ÔÂÂÏÂÌÌ˚Â (‰Îˇ ‚‚Ó‰‡ Ò ÍÓÌÒÓÎË)
	
	Console::Write("Type count of points: "); int crossRoadsCount = int::Parse(Console::ReadLine()); Console::WriteLine();
	Console::Write("Type count of ATM: "); int atmCount = int::Parse(Console::ReadLine()); Console::WriteLine();

	// ------------------------------------------------------------------------------------------------
	bool flag = true;

	{
		while (flag)
		{
			try
			{
				Console::Write("Type x of car: ");
				x = float::Parse(Console::ReadLine());
				flag = false;
			}
			catch (...)
			{
				Console::Write("\nWrong value! Try again: ");
				flag = true;
			}
		}
		Console::WriteLine();
		flag = true;

		while (flag)
		{
			try
			{
				Console::Write("Type y of car: ");
				y = float::Parse(Console::ReadLine());
				flag = false;;
			}
			catch (...)
			{
				Console::Write("\nWrong value! Try again: ");
				flag = true;
			}
		}
		Console::WriteLine();

		car->SetCarCoordinateX(x);
		car->SetCarCoordinateY(y);
		town->AddAll(car);
	}

	for (int i = 0; i < crossRoadsCount; i++)
	{
		elCR = gcnew CrossRoads(number++);
		elCR->SetMark(MAXMARKVALUE);

		flag = true;

		while (flag)
		{
			try
			{
				Console::Write("Type x of {0} point: ", i + 1);
				x = float::Parse(Console::ReadLine());
				flag = false;
			}
			catch (...)
			{
				Console::Write("\nWrong value! Try again: ");
				flag = true;
			}
		}
		Console::WriteLine();
		flag = true;

		while (flag)
		{
			try
			{
				Console::Write("Type y of {0} point: ", i + 1);
				y = float::Parse(Console::ReadLine());
				flag = false;;
			}
			catch (...)
			{
				Console::Write("\nWrong value! Try again: ");
				flag = true;
			}
		}
		Console::WriteLine();

		elCR->SetCoordinateX(x);
		elCR->SetCoordinateY(y);

		town->AddCrossRoad(elCR);
		town->AddAll(elCR);
	}

	for (int i = 0; i < atmCount; i++)
	{
		elATM = gcnew ATM(number++);
		elATM->SetMark(MAXMARKVALUE);

		flag = true;

		while (flag)
		{
			try
			{
				Console::Write("Type x of {0} ATM: ", i + 1);
				x = float::Parse(Console::ReadLine());
				flag = false;;
			}
			catch (...)
			{
				Console::Write("\nWrong value! Try again: ");
				flag = true;
			}
		}
		Console::WriteLine();
		flag = true;

		while (flag)
		{
			try
			{
				Console::Write("Type y of {0} ATM: ", i + 1);
				y = float::Parse(Console::ReadLine());
				flag = false;;
			}
			catch (...)
			{
				Console::Write("\nWrong value! Try again: ");
				flag = true;
			}
		}
		Console::WriteLine();

		elATM->SetATMCoordinateX(x);
		elATM->SetATMCoordinateY(y);

		town->AddATM(elATM);
		town->AddAll(elATM);
	}

	Console::WriteLine("Now please type all bonds:");

	for (int i = 0; i < number; i++)
		for (int j = 0; j < number; j++)
		{
			if (i != j)
			{
				Console::Write("Are the elements {0} and {1} in bond (type '-1' if no, any other if yes)?: ", i + 1, j + 1);

				bool flag = true;

				while (flag)
				{
					try
					{
						a[i][j] = float::Parse(Console::ReadLine());
						flag = false;
					}
					catch (...)
					{
						Console::Write("\nWrong value! Try again: ");
						flag = true;
					}
				}
				Console::WriteLine();
			}
			else
				a[i][j] = -1;
		}


	for (int i = 0; i < number - 1; i++)
		for (int j = 0; j < number - 1; j++)
		{
			if (a[i][j] != -1)
			{
				int x1, y1, x2, y2;
				ArrayList^ arr = gcnew ArrayList();

				arr = town->GetAll();

				if (i <= crossRoadsCount && i != 0)
				{
					elCR = (CrossRoads^)arr[i];
					x1 = elCR->GetCoordinateX();
					y1 = elCR->GetCoordinateY();
				}
				else if (i > crossRoadsCount)
				{
					elATM = (ATM^)arr[i];
					x1 = elATM->GetATMCoordinateX();
					y1 = elATM->GetATMCoordinateY();
				}
				else if (i == 0)
				{
					car = (Cash—ollectorMachine^)arr[i];
					x1 = car->GetCarCoordinateX();
					y1 = car->GetCarCoordinateY();
				}


				if (j <= crossRoadsCount && j != 0)
				{
					elCR = (CrossRoads^)arr[j];
					x2 = elCR->GetCoordinateX();
					y2 = elCR->GetCoordinateY();
				}
				else if (j > crossRoadsCount)
				{
					elATM = (ATM^)arr[j];
					x2 = elATM->GetATMCoordinateX();
					y2 = elATM->GetATMCoordinateY();
				}
				else if (j == 0)
				{
					car = (Cash—ollectorMachine^)arr[j];
					x1 = car->GetCarCoordinateX();
					y1 = car->GetCarCoordinateY();
				}

				a[i][j] = sqrt(pow(Convert::ToDouble(x2 - x1), 2) + pow(Convert::ToDouble(y2 - y1), 2));
			}
		}

	Console::Write("\n\n\n");

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			Console::Write(Convert::ToString(a[i][j]) + "  ");
		}
		Console::WriteLine("\n");
	}
	Console::ReadKey();

	// “‡·ÎËˆ‡ „ÓÚÓ‚‡
	ArrayList^ arr = gcnew ArrayList();
	arr = town->GetAll();
	{
		for (int i = 0; i < number; i++)
		{
			for (int j = 1; j < number; j++)
			{
				if (i <= crossRoadsCount && i != 0)
				{
					elCR = (CrossRoads^)arr[i];
					int mark = elCR->GetMark();
					if (elCR->GetVisitTops() == false)
					{
						if (a[i][j] != -1)
						{
							if (j <= crossRoadsCount && j != 0)
							{
								elCR = (CrossRoads^)arr[j];
								if (elCR->GetVisitTops() == false)
								{
									int exMark = 0;
									exMark = a[i][j] + mark;
									if (exMark < elCR->GetMark())
									{
										elCR->SetMark(exMark);
									}
								}
							}
							else if (j > crossRoadsCount)
							{
								if (elATM->GetVisitTops() == false)
								{
									elATM = (ATM^)arr[j];
									int exMark = 0;
									exMark = a[i][j] + mark;
									if (exMark < elATM->GetMark())
									{
										elATM->SetMark(exMark);
									}
								}
							}
						}
					}
				}
				else if (i > crossRoadsCount)
				{
					elATM = (ATM^)arr[i];
					int mark = elATM->GetMark();
					if (elATM->GetVisitTops() == false)
					{
						if (a[i][j] != -1)
						{
							if (j <= crossRoadsCount && j != 0)
							{
								elCR = (CrossRoads^)arr[j];
								if (elCR->GetVisitTops() == false)
								{
									int exMark = 0;
									exMark = a[i][j] + mark;
									if (exMark < elCR->GetMark())
									{
										elCR->SetMark(exMark);
									}
								}
							}
							else if (j > crossRoadsCount)
							{
								if (elATM->GetVisitTops() == false)
								{
									elATM = (ATM^)arr[j];
									int exMark = 0;
									exMark = a[i][j] + mark;
									if (exMark < elATM->GetMark())
									{
										elATM->SetMark(exMark);
									}
								}
							}
						}
					}
				}
				else if (i == 0)
				{
					car = (Cash—ollectorMachine^)arr[i];
					int mark = car->GetMark();
					if (car->GetVisitTops() == false)
					{
						if (a[i][j] != -1)
						{
							if (j <= crossRoadsCount && j != 0)
							{
								elCR = (CrossRoads^)arr[j];
								if (elCR->GetVisitTops() == false)
								{

									int exMark = 0;
									exMark = a[i][j] + mark;
									if (exMark < elCR->GetMark())
									{
										elCR->SetMark(exMark);
									}
								}
							}
							else if (j > crossRoadsCount)
							{
								elATM = (ATM^)arr[j];
								if (elATM->GetVisitTops() == false)
								{
									int exMark = 0;
									exMark = a[i][j] + mark;
									if (exMark < elATM->GetMark())
									{
										elATM->SetMark(exMark);
									}
								}
							}
						}
					}
				}

			}
			if (i <= crossRoadsCount && i != 0)
			{
				elCR->SetVisitTops(true);
			}
			else if (i > crossRoadsCount)
			{
				elATM->SetVisitTops(true);
			}
			else if (i == 0)
			{
				car->SetVisitTops(true);
			}
		}
	}
	return 0;
}