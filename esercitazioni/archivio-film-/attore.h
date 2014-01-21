#ifndef ATTORE
#define ATTORE

#include<iostream>

#include"persona.h"

class Attore: public Persona
{
		string nome_arte;

		int n_film;

	public:

		Attore(): nome_arte(""), n_film(0) {};

		Attore(string n, string c, int e ):Persona (n,c,e) {};

		void set_attore();
};

#endif
