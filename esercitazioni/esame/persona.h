#ifndef PERSONA
#define PERSONA

#include<iostream>
using std::string;


class Persona
{
  protected:

	string nome;

	string cognome;

	string eta;

  public:

	Persona(): nome(""), cognome(""), eta("") {};

	void set_persona();

	void get_info();
};

#endif
 
