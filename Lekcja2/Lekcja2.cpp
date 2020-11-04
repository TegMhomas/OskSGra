#include <iostream>
#include <Windows.h>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <fstream>
#include "widok.h"
#include "Gracz.h"
#include "Zdarzenie.h"
#include "Sklep.h"
using namespace std;

int main()
{
	Gracz gracz1=Gracz();
	Sklep sklep1 = Sklep();

	do
	{
		widok::wid(gracz1);
		int menu;
		cout << "Co chcialbys zrobic ? " << endl;
		cout << "1.Kolejne zdarzenie. " << endl;
		cout << "2.Sklep." << endl;
		cout << "3.Rozdaj punkty umiejetenosci." << endl;
		cout << "4.Ekwipunek." << endl;
		cout << "5.WyjdŸ z gry " << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			gracz1.tura(gracz1);
			break;
		}

		case 2:
		{
			sklep1.kup(gracz1);
			break;
		}

		case 3:
		{

			break;
		}

		case 4:
		{
			gracz1.Wyswietl_eq();
			break;
		}

		case 5:
		{

			break;
		}

		}






	} while (true);
	return 0;
}











































