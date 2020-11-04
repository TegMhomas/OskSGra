#pragma once
#include <iostream>
#include <string>
#include "widok.h"
#include "Zdarzenie.h"
#include <vector>
#include "Przedmioty.h"
#include "Przeciwnik.h"


using namespace std;

class Gracz
{
public:
	int hp, gold, exp, mana, level, moc_umiejetnosci, punkty_umiejetnosci, obrazenia, pancerz;
	bool zyje;
	//lista przedmitow - todo
	vector<Przedmioty> eq;

	Gracz()
	{
		hp = 100;
		pancerz = 20;
		mana = 100;
		gold = 120;
		exp = 0;
		level = 1;
		//sila = 10;
		obrazenia = 10;

		punkty_umiejetnosci = 0;
		moc_umiejetnosci = 5;
		zyje = true;
	}
	static void tura(Gracz g)
	{
		Przedmioty przed = Przedmioty("miecz", 30);
		Przeciwnik p1 = Przeciwnik(50, 3, 5, 10, przed, przed, przed);
		p1.Walka(g);
		//Zdarzenie z = Zdarzenie("Idziesz w prawo czy w lewo?", "1.W prawo", "2.W lewo", 1);
		//z.show();
	//	konsekwencje(z);
	}

	void smierc()
	{
		cout << "Umarles :(";
		system("pause");
		zyje = false;
		exit(0);
	}

	void konsekwencje(Zdarzenie z)
	{
		if (z.fwybor() == true)
		{
			gold = gold + 30;
			exp = exp + 50;
		}
		else
		{
			smierc();
		}
	}

	void Wyswietl_eq()
	{
		for(int i=0; i<eq.size(); i++)
		{
			cout << i + 1 << ". " << eq[i].nazwa << endl;

		}
		system("pause");
	}
	void Dodaj_do_eq(Przedmioty p)
	{
		eq.push_back(p);
	}

};