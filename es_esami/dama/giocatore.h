#ifndef GIOCATORE
#define GIOCATORE

#include<iostream>
#include"scacchiera.h"

class Giocatore
{
	int num;

	int pezzi;

	Scacchiera* board1;

  public:

	Giocatore(): num(0), pezzi(12) {};

	Giocatore(int i, Scacchiera& s): num(i), pezzi(12), board(&s) {};

	void moove(int from_x, int from_y, int to_x, int to_y)

	bool loose ();

	void togli_pezzo();
}
