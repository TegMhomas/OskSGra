#pragma once
#include <iostream>
#include <string>
#include "Gracz.h"
#include <Windows.h>

using namespace std;

class Zdarzenie
{
public:
	string opis;
	string dobra;
	string zla;
	int wybor;

	Zdarzenie(string fopis, string db, string zl, int w)
	{
		opis = fopis;
		dobra = db;
		zla = zl;
		wybor = w;
	}

	void load()
	{

	}

	void show()
	{
		cout << opis << endl;
		cout << dobra << endl;
		cout << zla << endl;
	}

	bool fwybor()
	{
		int w;
		cin >> w;
		if (w == wybor)
		{
			cout << "Przechodzisz dalej" << endl;
			system("pause");
			return true;
		}
		else
		{
			cout << "Zle" << endl;
			system("pause");
			return false;
		}
	}

};