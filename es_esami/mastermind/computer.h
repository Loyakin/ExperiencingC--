#ifndef COMPUTER
#define COMPUTER

#include<iostream>
#include"giocatore.h"

class Computer: public Giocatore
{
  public:

	void set_sequenza();

	int moove();
};

#endif
