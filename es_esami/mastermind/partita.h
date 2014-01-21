#ifndef PARTITA
#define PARTITA

#include<iostream>
#include"giocatore.h"


class Partita
{
	Giocatore* g1;

	Giocatore* g2;

  public:
	void set_g1();

	void set_g2();

	void set_partita(Giocatore&, Giocatore&);

	int play();
};

#endif
