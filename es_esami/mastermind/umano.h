#ifndef UMANO
#define UMANO

#include<iostream>
#include"giocatore.h"

class Umano: public Giocatore
{
  public:

	void set_sequenza();

	int moove ();
};

#endif
	
