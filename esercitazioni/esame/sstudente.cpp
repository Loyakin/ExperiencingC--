#include<iostream>
#include"persona.h"
#include"studente.h"
#include"sstudente.h"
using std::string;

void Dottore::set_dottore()
{
	Studente::set_studente();

	std::cout<<"inserire la laurea posseduta dal dottore\n";

	std::cin>>laurea;
}

void Dottore::get_info()
{
	std::cout<<"il dottore richiesto ha i seguenti dati: 	\n";

	std::cout<<"NOME:  "<<nome<<std::endl<<"COGNOME:   "<<cognome<<std::endl<<"ETA':  "<<eta<<std::endl<<"CdL:  "<<CdL<<std::endl<<"LAUREA:  "<<laurea<<std::endl;

}
