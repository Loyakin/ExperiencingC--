#include<iostream>
#include<vector>
#include"giocatore.h"
#include"umano.h"
using std::vector;
using std::cin;
using std::cout;

void Umano::set_sequenza()
{
	cout<<"inserire la sequenza segreta\n";

	for(int i=0;i!=3;i++)
	{
		cin>>sequenza[i];
	}	
}

int Umano::moove()
{
	int i=0;

	vector< int > prova [3];

	cout<<"inserire la sequenza di prova\n";

	for(int j=0; j!=3; j++)
	{
		cin>>prova[j];
	}

	i=g->check_sequenza(prova);

	return (i);
}
	
