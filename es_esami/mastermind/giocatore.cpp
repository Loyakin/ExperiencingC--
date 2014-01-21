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


int Giocatore::check_sequenza(vector<int> v)
{
	int  num_pos;

	int num;

	for(int i=0; i!=v.size(); i++)
	{
		for(int j=0; j!=sequenza.size(); j++)
		{
			if(v.at(i)==sequenza.at(j))
			{
				if(j==i) num_pos++;
				else num++;
			}
		}
	}

	if(num_pos==3) return (1);
	else return(0);
}
