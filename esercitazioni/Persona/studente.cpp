#include<iostream>
#include"persona.h"
#include"studente.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

Studente::Studente():Persona(){ nome=""; cognome=""; CF=""; matricola=""; CdL=""; cout<<"S-constructor-one\n";};

Studente::Studente(string n, string c, string cod, string mat, string cl):Persona(n, c, cod)
{
	nome=n;

	cognome=c;

	CF=cod;

	matricola=mat;

	CdL=cl;

	cout<<"S-constructor-two\n";
}

void Studente::get_matricola()
{
	cout<<"la matricola dello studente è: "<<matricola<<endl;
}

void Studente::get_CdL()
{
	cout<<"il corso di laurea dello studente è: "<<CdL<<endl;
}

void Studente::print()
{
	cout<<"lo studente ha:\n"<<"NOME: "<<nome<<endl<<"COGNOME: "<<cognome<<endl<<"CODIUCE FISCALE: "<<CF<<endl;

	cout<<"MATRICOLA: "<<matricola<<endl<<"CORSO DI LAUREA "<<CdL<<endl;
}
