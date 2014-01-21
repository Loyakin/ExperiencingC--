#include<iostream>
#include"persona.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;

void Persona::set_persona()
{
	cout<<"inserire qui di seguito nome, cognome e età della persona\n";

	cin>>nome>>cognome>>eta;
}

void Persona::get_info()
{
	cout<<"la persona desiderata ha i seguenti dati:\n NOME: "<<nome<<endl<<"COGNOME: "<<cognome<<endl<<"ETA' :"<<eta<<endl;
}


