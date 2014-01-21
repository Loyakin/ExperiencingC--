#include<iostream>
#include<vector>
#include"giocatore.h"
#include"umano.h"
#include"computer.h"
using std::vector;

void Giocatore::set_avversario(Giocatore& p)
{
	g=&p;
}


int Giocatore::check_sequenza(vector<int> v[3])
{
	int  num_pos;

	int num;

	for(int i=0;i!=3;i++)
	{
		for(int j=0;j!=3;j++)
		{

			if(v[i]==sequenza[j])
			{
				if(i==j) num_pos++;
				else num++;
			}
		}
	};

	std::cout<<"ci sono:\n"<<num_pos<<" numeri nella posizione giusta;\n"<<num<<" numeri comunque presenti nella sequenza\n";

	if(v==sequenza) return (1);
	else return (0);
}	
	
