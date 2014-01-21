#ifndef CLIENTE
#define CLIENTE

#include<iostream>

#include"persona.h"
using std::string;


class Cliente: public Persona
{
		int credito;

	public:

		Cliente(): credito(0) {};

		Cliente(string n, string c, int e):Persona(n,c,e) {};

		void set_credito();

		void get_client_info();

		void noleggio();
};

#endif
