#ifndef DOCENTE
#define DOCENTE

#include<iostream>
#include"persona.h"
using std::string;

class Docente: public Persona
{
	string materia;

  public:

	Docente(): materia("") {};

	void set_docente();

	string get_nome();

	void get_info();
};

#endif
