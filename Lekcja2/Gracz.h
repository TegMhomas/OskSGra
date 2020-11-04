#pragma once
#include <iostream>
#include <string>
#include "widok.h"
#include "Zdarzenie.h"
#include <vector>
#include "Przedmioty.h"


using namespace std;

class Gracz
{
public:
	int hp, gold, exp, mana, sila, level, moc_umiejetnosci, punkty_umiejetnosci;
	bool zyje;
	//lista przedmitow - todo
	vector<Przedmioty> eq;

	Gracz()
	{
		hp = 100;
		mana = 100;
		gold = 120;
		exp = 0;
		level = 1;
		sila = 10;
		punkty_umiejetnosci = 0;
		moc_umiejetnosci = 5;
		zyje = true;
	}
	void tura()
	{
		Zdarzenie z = Zdarzenie("Idziesz w prawo czy w lewo?", "1.W prawo", "2.W lewo", 1);
		z.show();
		konsekwencje(z);
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