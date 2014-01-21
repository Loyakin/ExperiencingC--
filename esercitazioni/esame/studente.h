#ifndef STUDENTE
#define STUDENTE

#include<iostream>
#include"persona.h"
using std::string;

class Studente: public Persona
{
  protected:

	string CdL;

  public:

	Studente(): CdL("") {};

	void set_studente();

	void get_info();
};

#endif
