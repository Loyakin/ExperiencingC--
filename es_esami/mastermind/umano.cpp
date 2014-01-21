#include<iostream>
#include<vector>
#include"giocatore.h"
#include"umano.h"
using std::vector;
using std::cin;
using std::cout;

void Umano::set_sequenza()
{
	int i;

	cout<<"inserire la sequenza segreta\n";

	for(int i=0;i!=3;i++)
	{
		sequenza.push_back(i);
	}	
}

int Umano::moove()
{
	//come detto la funzione moove legata alla funzione play della partita deve tornare un intero al
	//fine di poter capire se il giocatore ha o meno indovinato la sequenza


	int i=0;

	int c;

	//viene dichiarato il vettore prova

	vector< int > prova;

	cout<<"inserire la sequenza di prova\n";

	//viene inizializzato (l'abuso della funzione push_back mio malgrado è stato reso necessario da strani 
	//errori durante la compilazione xD)

	for(int j=0; j!=3; j++)
	{
		cin>>c;

		prova.push_back(c);
	}

	//si rimanda qui alla funzione prova che verificherà l'esattezza o meno del vettore inviatogli...è universale
	//uguale sia per computer che per l'umano pertanto la si potrà trovare nella classe giocatore.h col file 
	//giocatore.cpp

	i=g->check_sequenza(prova);

	return (i);
}
	
