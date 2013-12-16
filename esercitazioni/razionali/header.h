#include<iostream>

class Razionale
{
	int num;

	int div;

 public:

	Razionale(int x, int y);

	Razionale();

	void semplifica ();

	void stampa ();

	friend	Razionale somma (Razionale, Razionale);

	friend	Razionale moltiplica (Razionale, Razionale);

	friend	Razionale sottrai (Razionale, Razionale);

	friend	Razionale dividi (Razionale, Razionale);
};
