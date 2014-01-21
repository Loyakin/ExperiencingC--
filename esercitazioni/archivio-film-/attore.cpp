#include<iostream>

#include"persona.h"
#include"attore.h"

void Attore::set_attore()
{
	std::cout<<"inserire qui di sotto il nome d'arte dell'attore\n";

	std::cin>>nome_arte;

	std::cout<<"inserire quindi anche il numero di fil a cui a partecipato\n";

	std::cin>>n_film;
}
	
