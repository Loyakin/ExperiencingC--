#include<iostream>
#include"scacchiera.h"
#include"giocatore.h"
#include"umano.h"
using std::cout;
using std::cin;


int Umano::moove()
{
	int t_x,t_y;

	int ris=2;

	while(ris=2)
	{
		cout<<"inserire la posizione in cui si vuole posizionare la pedina\n";

		cin>>t_x>>t_y;

		ris=s->verifica(tipo,t_x,t_y);
	}

	return(ris);
}
	
	
