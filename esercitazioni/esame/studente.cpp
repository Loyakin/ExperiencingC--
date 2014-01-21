#include<iostream>
#include"persona.h"
#include"studente.h"
using std::string;

void Studente::set_studente()
{
	Persona::set_persona();

	std::cout<<"inserire il corso di laurea\n";

	std::cin>>CdL;
}

void Studente::get_info()
{
	std::cout<<"lo studente richiesto ha i dati: \n";

	std::cout<<"NOME:  "<<nome<<std::endl<<"COGNOME:  "<<cognome<<std::endl<<"ETA':  "<<eta<<std::endl<<"CdL:   "<<CdL<<std::endl;

}
