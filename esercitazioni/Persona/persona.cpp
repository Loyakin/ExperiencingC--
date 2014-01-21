#include<iostream>
#include"persona.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

Persona::Persona(): nome(""), cognome(""), CF("") {cout<<"P-constructor-one\n";};

Persona::Persona(string n, string c, string cod): nome(n), cognome(c), CF(cod) {cout<<"P-constructor-two\n";};

void Persona::get_nome() 
{
	cout<<"il nome della persona è: "<<nome<<endl;
}

void Persona::get_cognome()
{
	cout<<"il cognome della persona è: "<<cognome<<endl;
}

void Persona::get_CF()
{
	cout<<"il codice fiscale della persona è: "<<CF<<endl;
}

void Persona::print()
{
	cout<<"la Persona ha:\n NOME: "<<nome<<endl<<"COGNOME: "<<cognome<<endl<<"CODICE FISCALE: "<<CF<<endl;
}

