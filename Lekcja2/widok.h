#pragma once
#include <iostream>
#include <string>
#include "Gracz.h"
#include <Windows.h>

using namespace std;

class widok
{
public:
	static void wid(Gracz g)
	{
		system("cls");
		cout << "HP: " << g.hp << endl;
		cout << "Mana: " << g.mana << endl;
		cout << "Sila: " << g.sila << endl;
		cout << "Moc Umiejetnosci: " << g.moc_umiejetnosci << endl;
		cout << "Gold: " << g.gold << endl;
		cout << "Level: " << g.level << endl;
		cout << "EXP: " << g.exp << endl;
		cout << "Punkty umiejetnosci: " << g.punkty_umiejetnosci << endl << endl << endl;
	}


};