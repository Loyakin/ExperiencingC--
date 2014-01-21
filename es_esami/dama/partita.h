#ifndef PARTITA
#define PARTITA

#include<iostream>
#include<vector>

#include"giocatore.h"
#include"scacchiera.h"

class Partita
{
	Giocatore* g1;

	Giocatore* g2;

	Scacchiera* s;

  public:

	Partita() {};

	Partita(Giocatore& p1, Giocatore& p2, Scacchiera& b): g1(&p1), g2(&p2), s(&b) {};

	void win();
}

