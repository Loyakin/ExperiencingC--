#ifndef FILM
#define FILM

#include<iostream>
#include<vector>

#include"persona.h"
#include"attore.h"

class Film
{
		string titolo;

		int anno_produzione;

		std::vector<Attore*> attori;

	public:

		Film(): titolo(""), anno_produzione(0) {};

		Film(string t, int a): titolo(t), anno_produzione(a) {};

		void set_attori(Attore&);
};

#endif
