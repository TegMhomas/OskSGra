#pragma once
#include <iostream>
#include "Gracz.h"

using namespace std; 

class Przedmioty
{
public:
	string nazwa;
	int koszt;

	Przedmioty(string fnazwa, int fcena)
	{
		koszt = fcena;
		nazwa = fnazwa;
	}


};
