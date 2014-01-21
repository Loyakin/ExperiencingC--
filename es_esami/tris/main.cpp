#include<iostream>
#include"partita.h"
#include"scacchiera.h"
#include"giocatore.h"
#include"umano.h"
#include"computer.h"
using std::cout;
using std::cin;


int main()
{
	char choice,choice2;

	int gioco=0;

	Scacchiera s;

	Partita p;

	Umano g1;

	cout<<"inserire il tipo di carattere che si vuole utilizzare (scegliere tra 'x' e 'o')\n";

	cin>>choice;

	g1.set_giocatore(choice,s);

	cout<<"si desidera giocare contro il computer(a) o contro un altro giocatore(b)?\n";

	cin>>choice2;

	if(choice=='a')
	{
		Computer c1;
		
		if(choice=='x')	c1.set_giocatore('o',s);
		else c1.set_giocatore('x',s);

		p.set_partita(g1,c1,s);
	}
	else
	{
		Umano g2;

		if(choice=='x') g2.set_giocatore('o',s);
		else g2.set_giocatore('x',s);

		p.set_partita(g1,g2,s);
	} 


	while(gioco=0)
	{
		
		gioco=p.play();

		if(gioco==1) cout<<"grazie per aver giocato con noi! Alla prossima!\n";
	}
}
	
