#include<iostream>
#include"partita.h"
#include"giocatore.h"

void win ()
{
	if(g1->loose()==true)
	{
		std::cout<<"il giocatore 2 ha vinto la partita\n";
	};
	if(g2->lose()==true)
	{
		std::cout<<"il giocatore 1 ha vinto la partita\n";
	};
}	
