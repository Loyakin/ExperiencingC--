//#ifndef STUDENTE
//#define STUDENTE

#include<iostream>
#include"persona.h"
using std::string;


class Studente: public Persona
{
	string matricola;

	string CdL;

	public:

	Studente();

	Studente(string, string, string, string, string);

	void get_matricola();

	void get_CdL();

	void print();

	~Studente(){std::cout<<"S-destructor\n";};
};

//#endif
