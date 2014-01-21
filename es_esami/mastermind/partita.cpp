#include<iostream>
#include"partita.h"
#include"giocatore.h"
#include"umano.h"
#include"computer.h"

void Partita::set_g1()
{
	g1->set_sequenza();
}

void Partita::set_g2()
{
	g2->set_sequenza();
}

void Partita::set_partita(Giocatore& p1, Giocatore& p2)
{
	g1=&p1;

	g2=&p2;
}

int Partita::play ()
{
	int i=0;

	while(i==0)
	{
		std::cout<<"e' il turno del giocatore uno:\n";

		i=g1->moove();

		if(i==1) std::cout<<"il giocatore uno ha vinto!\n";
		else
		{
			std::cout<<"e' il turno del giocatore due:\n";

			i=g2->moove();

			if(i==1) std::cout<<"il giocatore due ha vinto!\n";
		}
	}

 	return(i);
}
