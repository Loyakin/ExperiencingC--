#include<iostream>

#include"persona.h"
#include"cliente.h"
#include"film.h"
#include"noleggio.h"

void Noleggio::set_noleggio(Cliente& c, Film& f)
{
	std::string begin,end;

	cliente=&c;

	film=&f;

	std::cout<<"inserire qui sotto data inizio e fine noleggio separate da un invio";

	std::cin>>begin>>end;

	cliente->noleggio();
}
 
