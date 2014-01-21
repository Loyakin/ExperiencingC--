#ifndef DOTTORE
#define DOTTORE

#include<iostream>
#include"persona.h"
#include"studente.h"
using std::string;

class Dottore: public Studente
{
	string laurea;

  public:

	Dottore(): laurea("") {};

	void set_dottore();

	void get_info();
};

#endif
