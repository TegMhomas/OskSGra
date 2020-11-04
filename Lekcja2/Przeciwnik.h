#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include "Przedmioty.h"
#include "Gracz.h"
using namespace std;

class Przeciwnik
{
public:
	string nazwa;
	int hp, dmg, pancerz;
	vector<Przedmioty> drop;
	int iloscexp;

	Przeciwnik(int fhp, int fdmg, int fpancerz, int filoscexp, Przedmioty przedmiot1, Przedmioty przedmiot2, Przedmioty przedmiot3)
	{
		hp = fhp;
		dmg = fdmg;
		pancerz = fpancerz;
		iloscexp = filoscexp;
		drop.push_back(przedmiot1);
		drop.push_back(przedmiot2);
		drop.push_back(przedmiot3);
	}

	static bool Walka(Gracz g3, Przeciwnik p1)
	{
		int start;
		int a;
		srand(time(0));
		start = rand ()%2 + 1;
		if(start==1)
		{
			do
			{
				
				a = rand() % 2 + 1;
				if(a==1)
				{
					p1.hp = p1.hp - (g3.obrazenia - p1.pancerz);
					cout << "Zadales obrazenia w wysokosci " << (g3.obrazenia - p1.pancerz) << " zostalo przeciwnikowi " << p1.hp << " hp" << endl;
					system("pause");
				}
				else
				{
					p1.hp = p1.hp - ((g3.obrazenia*2) - p1.pancerz);
					cout << "Zadales obrazenia w wysokosci " << (g3.obrazenia*2 - p1.pancerz) << " zostalo przeciwnikowi " << p1.hp << " hp" << endl;
					system("pause");
				}



				a = rand() % 2 + 1;
				if(a==1)
				{
					g3.hp = g3.hp - (p1.dmg - g3.pancerz);
					cout << "Otrzymales obrazenia w wysokosci " << (p1.dmg - g3.pancerz) << " zostalo ci " << g3.hp << " hp" << endl;
					system("pause");
				}
				else
				{
					g3.hp = g3.hp - ((p1.dmg*2) - g3.pancerz);
					cout << "Otrzymales obrazenia w wysokosci " << (g3.obrazenia*2 - p1.pancerz) << " zostalo ci " << g3.hp << " hp" << endl;
					system("pause");
				}



			} while (g3.hp <= 0 || p1.hp<=0); 
		}
		else
		{
			do
			{

				a = rand() % 2 + 1;
				if (a == 1)
				{
					g3.hp = g3.hp - (p1.dmg - g3.pancerz);
					cout << "Otrzymales obrazenia w wysokosci " << (g3.obrazenia - p1.pancerz) << " zostalo ci " << g3.hp << " hp" << endl;
					system("pause");
				}
				else
				{
					g3.hp = g3.hp - ((p1.dmg * 2) - g3.pancerz);
					cout << "Otrzymales obrazenia w wysokosci " << (g3.obrazenia*2 - p1.pancerz) << " zostalo ci " << g3.hp << " hp" << endl;
					system("pause");
				}

				a = rand() % 2 + 1;
				if(a==1)
				{
					p1.hp = p1.hp - (g3.obrazenia - p1.pancerz);
					cout << "Zadales obrazenia w wysokosci " << (g3.obrazenia - p1.pancerz) << " zostalo przeciwnikowi " << p1.hp << " hp" << endl;
					system("pause");
				}
				else
				{
					p1.hp = p1.hp - ((g3.obrazenia*2) - p1.pancerz);
					cout << "Zadales obrazenia w wysokosci " << (g3.obrazenia*2 - p1.pancerz) << " zostalo przeciwnikowi " << p1.hp << " hp" << endl;
					system("pause");
				}



			} while (g3.hp <= 0 || p1.hp<=0); 
		}

		if(g3.hp<0)
		{
			cout << "Wygral przeciwnik" << endl;
			return false;

		}
		else
		{
			cout << "Wygrales" << endl;
			g3.exp = g3.exp + p1.iloscexp;
			return true;
		}
	}
};