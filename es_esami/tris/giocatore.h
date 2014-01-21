#ifndef GIOCATORE
#define GIOCATORE

#include<iostream>
#include"scacchiera.h"

class Giocatore
{
  protected:

	char tipo;

	Scacchiera* s;

  public:

	void set_giocatore(char, Scacchiera&);

	virtual int moove();
};

#endif
