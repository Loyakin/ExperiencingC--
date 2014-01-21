#include<iostream>

#include"archivio.h"
#include"persona.h"
#include"cliente.h"
#include"film.h"

void Archivio::add_film(Film& f)
{
	Film* ptr=&f;

	elenco_film.push_back(ptr);
}

void Archivio::add_cliente(Cliente& c)
{
	Cliente* ptr=&c;

	elenco_client.push_back(ptr);
}

void Archivio::add_noleggio(Noleggio& n)
{
	noleggio=&n;
}
