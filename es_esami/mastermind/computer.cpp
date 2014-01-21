#include<iostream>
#include<vector>
#include<cstdlib>
#include"giocatore.h"
#include"computer.h"

void Computer::set_sequenza()
{
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
	int i=0;

	int c;

	std::vector<int> prova;

	for(int j=0;j!=3;j++)
	{
		srand(time(NULL));

		c=rand()%10;

		prova.push_back(c);

	};

	i=g->check_sequenza(prova);

	return(i);
}
	
		
