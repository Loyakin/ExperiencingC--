#ifndef COMPUTER
#define COMPUTER

#include<iostream>
#include"giocatore.h"
#include"scacchiera.h"

class Computer: public Giocatore
{
	public:

		int moove();
};

#endif
