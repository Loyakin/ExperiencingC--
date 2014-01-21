#include<iostream>
#include<vector>
#include<cstdlib>
#include"giocatore.h"
#include"computer.h"

void Computer::set_sequenza()
{
	for(int i=0;i!=3;i++)
	{
		srand(time(NULL));

		sequenza[i]=rand()%10;
	};
}

int Computer::moove ()
{
	int i=0;

	std::vector<int> prova[3];

	for(int j=0;j!=3;j++)
	{
		srand(time(NULL));

		prova[j]=rand()%10;

	};

	i=g->check_sequenza(prova);

	return(i);
}
	
		
