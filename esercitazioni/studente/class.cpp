#include<iostream>
#include"header.h"
using namespace std;

Studente::Studente(): nome(""), cognome(""), data(""), matricola(0) {};

Studente::Studente(string n, string c, string d, long m): nome(n), cognome(c), data(d), matricola(m) {};

Studente::set()
{
	nome="";

	cognome="";

	data="";

	matricola=0;
}

Studente::set(string n,string c, string d, long m)
{
	nome=n;

	cognome=c;

	data=d;

	matricola=m;
}

(ostream&) Studente::get_nome (ostream& s)
{
	s<<nome;
}

(ostream&) Studente::get_cognome (ostream& s)
{
	s<<cognome;
}

(ostream&) Studente::get_data (ostream& s)
{
	s<<data;
}

(ostream&) Studente::get_matricola (ostream& s)
{
	s<<matricola;
}
	
