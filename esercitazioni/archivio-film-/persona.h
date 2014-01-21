#ifndef PERSONA
#define PERSONA

#include<iostream>
using std::string;


class Persona
{
	protected:

		string nome;

		string cognome;

		int  eta;

	public:

		Persona(): nome(""), cognome(""), eta(0) {}

		Persona(string n, string c, int e): nome(n), cognome(c), eta(e) {};

		void get_info();
};

#endif
