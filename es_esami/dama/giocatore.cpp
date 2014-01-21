#include<iostream>
#include"scacchiera.h"
#include"giocatore.h"
using std::string;

int moove (int f_x, int f_y, int t_x, int t_y)
{
	char pedina;
	int ret;

	if((f_x-)
	{
		if(num==1) pedina='*';
		else pedina='o';

		if((board->get_pos(f_x,f_y))!=pedina) 
		{
			cout<<"posizione sbagliata!\n";
			return(1);
		}
		else
		{
			if(board->get_pos(t_x,t_y)=='+')
			board->move(f_x, f_y, t_x, t_y);

			else if(board->get_pos(t_x,t_y)==pedina)
			{
				cout<<"impossibile! è gia presente una propria pedina!\n";
				return (1);
			}

			else 
			{
				cout<<"stai per mangiare la pedina nel posto "<<t_x<<"  "<<t_y;
				ret=board->eat(f_x,f_y,t_x,t_y);
				return(ret);
			};
		}
	}
	else 
	{
		cout<<"impossibile! non ti puoi muovere di cosi tanti spazi!\n";
	};

	return(0);
}

bool loose()
{
	if (pezzi==0) return (true)
	else return (false);
}

void togli_pezzo()
{
	pezzi=pezzi-1;
}		
