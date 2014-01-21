#include<iostream>
#include"scacchiera.h"
#include"giocatore.h"

void Giocatore::set_giocatore(char c, Scacchiera& b)
{
	tipo=c;

	s=&b;
}
