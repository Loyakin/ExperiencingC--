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
	int i=0;

	int c;

	vector< int > prova;

	cout<<"inserire la sequenza di prova\n";

	for(int j=0; j!=3; j++)
	{
		cin>>c;

		prova.push_back(c);
	}

	i=g->check_sequenza(prova);

	return (i);
}
	
