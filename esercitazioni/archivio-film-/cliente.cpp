#include<iostream>

#include"persona.h"
#include"cliente.h"

void Cliente::set_credito()
{
	std::cout<<"di quanto credito disponde il cliente?\n";

	std::cin>>credito;
}

void Cliente::get_client_info()
{
	std::cout<<"il cliente richiesto ha dati:\n";

	Persona::get_info();

	std::cout<<"CREDITO:   "<<credito<<std::endl;
}

void Cliente::noleggio()
{
	credito=credito-3;
}
