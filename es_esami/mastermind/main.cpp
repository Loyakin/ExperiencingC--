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

	Partita p;

	cout<<"si desidera giocare:\n 1)in coppia\n 2)contro il computer?\n";

	cin>>choice;

	Umano h1;

	if(choice==1) 
	{
		Umano h2;

		h1.set_avversario(h2);

		h2.set_avversario(h1);

		p.set_partita(h1,h2);
	}
	else
	{
		Computer c;

		c.set_avversario(h1);

		h1.set_avversario(c);

		p.set_partita(h1,c);
	}

	p.set_g1();

	p.set_g2();

	while(game==0)
	{
		game=p.play();
	}

	cout<<"grazie per aver giocato con noi alla prossima!\n;";
}

		
