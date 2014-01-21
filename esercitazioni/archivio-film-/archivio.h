#ifndef ARCHIVIO
#define ARCHIVIO

#include<iostream>
#include<vector>

#include"persona.h"
#include"cliente.h"
#include"noleggio.h"
#include"film.h"
#include"noleggio.h"
using std::vector;


class Archivio
{
	protected:

		vector<Cliente*> elenco_client;

		vector<Film*> elenco_film;

		Noleggio* noleggio;
	public:

		void add_film(Film&);

		void add_cliente(Cliente&);

		void add_noleggio(Noleggio&);

};

#endif
