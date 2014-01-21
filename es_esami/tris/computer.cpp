#include<iostream>
#include<cstdlib>
#include"scacchiera.h"
#include"giocatore.h"
#include"computer.h"
using std::cin;
using std::cout;


int Computer::moove()
{
	int t_x,t_y;

	int ris=2;

	while(ris==2)
	{
		srand(time(NULL));

		t_x=rand()%2;

		t_y=rand()%2;

		ris=s->verifica(tipo,t_x,t_y);
	}

	return(ris);
}

	
