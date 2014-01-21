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

	//i è inizializzato a zero, è il valore standard che se non modificato corrisponde a una continuazione del gioco
	//essendo mandato poi nel ciclo while della funzione main

	while(i==0)
	{
		std::cout<<"e' il turno del giocatore uno:\n";

		//il giocatore uno muove, per mossa si intende la generazione di una sequenza e il tentativo di 
		//indovinare quella dell'avversario tramite il metodo check presente all'interno del metodo moove
		//di ciascun giocatore

		i=g1->moove();

		//ora se il giocatore indovina e quindi i=1 il gioco termina e quindi non ha senso giochi il giocatore
		//due (motivo di questo if che segue)

		if(i==1) std::cout<<"il giocatore uno ha vinto!\n";
		else
		{
			std::cout<<"e' il turno del giocatore due:\n";

			i=g2->moove();

			if(i==1) std::cout<<"il giocatore due ha vinto!\n";
		}
	}

	//una volta usciti dal while i=1 e uno dei due giocatori avrà vinto

 	return(i);
}
		
