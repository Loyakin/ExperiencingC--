#ifndef UMANO
#define UMANO

#include<iostream>
#include"scacchiera.h"
#include"giocatore.h"

class Umano: public Giocatore
{
  public:

	int moove();
};

#endif

