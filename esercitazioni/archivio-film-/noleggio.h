#ifndef NOLEGGIO
#define NOLEGGIO

#include<iostream>

#include"persona.h"
#include"cliente.h"
#include"film.h"
using std::string;


class Noleggio
{
		Cliente* cliente;

		Film* film;

		string inizio;

		string fine;

	public:

		void set_noleggio(Cliente&, Film&);
};

#endif

