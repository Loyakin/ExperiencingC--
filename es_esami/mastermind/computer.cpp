#include<iostream>
#include<vector>
#include<cstdlib>
#include"giocatore.h"
#include"computer.h"

void Computer::set_sequenza()
{
	//eccoci in computer! come si nota la differenza dal giocatore umano consiste semplicemente nell'uso
	//della funzione random per inizializzare la sequenza

	int c;

	for(int i=0;i!=3;i++)
	{
		srand(time(NULL));

		c=rand()%10;

		sequenza.push_back(c);
	};
}

int Computer::moove ()
{
	//anche qui nella funzione moove generiamo randomicamente un vettore di prova che inviamo 
	//all'avversario tramite check_sequenza...se la sequenza risulterà corretta allora il giocatore 
	//avrà vinto

	int i=0;

	int c;

	std::vector<int> prova;

	//viene qui generata la sequenza di prova

	for(int j=0;j!=3;j++)
	{
		srand(time(NULL));

		c=rand()%10;

		prova.push_back(c);

	};

	//viene qui inviata all'avversario (si ricorda che la funzione qui di sotto si trova in giocatore.cpp 
	//in quanto uguale per la classe umana e pc 

	i=g->check_sequenza(prova);

	//una volta completata la verifica si riceverà come visto 1 solo nel caso si abbia indovinato
	//se no compariranno comunque a schermo i suggerimenti su quanto vicini ci siamo andati

	return(i);
}
	
		
