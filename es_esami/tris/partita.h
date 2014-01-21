#ifndef PARTITA
#define PARTITA

#include<iostream>
#include"giocatore.h"
#include"scacchiera.h"

class Partita
{
	Giocatore* g1;

	Giocatore* g2;

	Scacchiera *s;

  public:

	void set_partita(Giocatore&, Giocatore&, Scacchiera&);

	int play();
};

#endif

	
