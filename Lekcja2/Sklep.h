#pragma once
#include <iostream>
#include "Gracz.h"
#include "Przedmioty.h"
using namespace std;

class Sklep
{
public:
	int stan_sklepu;
	int ilosclvli;
	int cenalvl;
	int ilosc_mieczy;
	int cena_miecza;

	Sklep()
	{
		stan_sklepu = 1000;
		ilosclvli = 10;
		cenalvl = 20;
		ilosc_mieczy = 1;
		cena_miecza = 50;
	}

	void wyswietl_oferte()
	{
		cout << "1.Lvle:" << ilosclvli << endl;
		cout << "Cena za lvl = " << cenalvl << endl;
		cout << "2.Miecz: " << ilosc_mieczy<< endl;
		cout << "Cena za miecz = " << cena_miecza << endl;
	}


	void kup(Gracz &g)
	{
		wyswietl_oferte();
		int a, ilosc, kwota;
		cout << "Co chcesz kupic ? " << endl;
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "Ile chcialbys kupic lvl? ";
			cin >> ilosc;
			kwota = ilosc * cenalvl;
			if (kwota < g.gold)
			{
				cout << "Udalo sie kupic " << ilosc << " lvl " << endl;
				g.gold = g.gold - kwota;
				g.level = g.level + ilosc;
				stan_sklepu = stan_sklepu + kwota;
				ilosclvli = ilosclvli - ilosc;
				system("pause");

			}
			else
			{
				cout << "Nie stac cie na to :(" << endl;
				system("pause");
			}
			break;

		}
		case 2:
		{
			
			kwota = ilosc_mieczy * cena_miecza;
			if (kwota < g.gold)
			{
				cout << "Udalo sie kupic miecz " << endl;
				g.gold = g.gold - kwota;
				stan_sklepu = stan_sklepu + kwota;
				ilosc_mieczy = 0;
		
				Przedmioty o_miecz = Przedmioty("Miecz", 50);
				g.Dodaj_do_eq(o_miecz);
				system("pause");

			}
			else
			{
				cout << "Nie stac cie na to :(" << endl;
				system("pause");
			}
			break;
		}
		}

	}

};