#include<iostream>
#include"partita.h"
#include"giocatore.h"
#include"umano.h"
#include"computer.h"
#include"scacchiera.h"
using std::cout;


void Partita::set_partita(Giocatore& p1, Giocatore& p2, Scacchiera& b)
{
	g1=&p1;

	g2=&p2;

	s=&b;
}

int Partita::play()
{
	int game=0;

	while (game==0)
	{
		cout<<"è il turno del giocatore 1\n";

		game=g1->moove();

		if(game==1) cout<<"il giocatore 1 ha vinto!\n";
		else
		{
			cout<<"è il turno del goicatore 2\n";

			game==g2->moove();

			if (game==1) cout<<"il giocatore 2 ha vinto!\n";

		}

		return(game);
	}
}
