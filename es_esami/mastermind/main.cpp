#include<iostream>
#include"partita.h"
#include"giocatore.h"
#include"umano.h"
#include"computer.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int game=0;

	int choice;

	//inizializzo partita qua al fine di non avere problemi di visibilita con lo scope dell'if

	Partita p;
	
	Umano h1;

	cout<<"si desidera giocare:\n 1)in coppia\n 2)contro il computer?\n";

	cin>>choice;

	if(choice==1) 
	{
		Umano h2;

		//essendo l'utente due umano setto i rispettivi avversari (il collegamento lo utilizzo al fine di
		//poter utilizzare la funzione check per controllare la sequenza di numeri dell'avversario per 
		//verificare se si ha o meno vinto la partita.

		h1.set_avversario(h2);

		h2.set_avversario(h1);

		//setto la partita: la partita possiede puntatori a g1 e g2 al fine di poter gestire il tutto attraverso
		//il metodo play e rendere così un interfaccia del main più leggera e immediata (almeno spero)

		p.set_partita(h1,h2);
	}
	else
	{
		Computer c;

		//stessa cosa di prima soltanto che adesso l'avversario e il computer
		//NOTA:: entrambi, umano e computer sono derivati della stessa classe giocatore e differiscono solo per 
		//la funzione set_sequenza e moove che nel caso del computer sara gestita dalla funzione random
		//dell'umano si richiederà l'imput da tastiera

		c.set_avversario(h1);

		h1.set_avversario(c);

		p.set_partita(h1,c);
	}

	//si richiede ora ai vari utenti di immettere la propria sequenza, il motivo di questo doppio rimando al metodo
	//di partita che rimanda al metodo di giocatore è il seguente: prima della compilazione non posso stabilire se 
	//siano entrambi giocatori umani o meno; si trattava di mettere questo o di ripetere le funzioni nell'if sopra

	p1.set_g1();

	p2.set_g2();

	//fulcro del programma la funzione play che restituisce un int pari a uno nel momento che uno dei due giocatori
	//vinca

	while(game==0)
	{
		game=p.play();
	}

	cout<<"grazie per aver giocato con noi alla prossima!\n;";
}

		
