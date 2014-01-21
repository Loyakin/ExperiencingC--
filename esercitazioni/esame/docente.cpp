#include<iostream>
#include"persona.h"
#include"docente.h"
using std::string;
using std::cin;
using std::cout;
using std::cout;


void Docente::set_docente()
{
	Persona::set_persona();

	cout<<"inserire qui di seguito la materia\n";

	cin>>materia;
}

string  Docente::get_nome()
{
	return(nome);
}

void Docente::get_info()
{
	cout<<"il docente ha i seguenti dati:\n NOME: "<<nome<<std::endl<<"COGNOME:  "<<cognome<<std::endl<<"ETA':  "<<eta<<std::endl<<"MATERIA:   "<<materia<<std::endl;

}

