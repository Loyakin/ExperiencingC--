#ifndef PERSONA
#define PERSONA

#include<iostream>
using std::string;


class Persona
{
	protected:

	string nome;

	string cognome;

	string CF;

	public:

	Persona();

	Persona(string, string, string);

	void get_nome();

	void get_cognome();

	void get_CF();

	void print();

	~Persona(){std::cout<<"P-destructor\n";};			
}; 


#endif
