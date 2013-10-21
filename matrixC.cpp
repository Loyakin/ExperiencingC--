//programma interamente funzionante...problema 1: i vettori molto probablimente vengono passati per valore pertanto non vengono modificati durante l'esecuzione del programma...trovare un modo per far si che avvenga

#include<iostream>
#include<vector>
using namespace std;


int main ()
{
	int dimC, dimR;

	void operazioni_lineari(vector<vector<float> > m, int DIMr, int DIMc);

	vector<vector<float> > matrix;

	cout<<"inserire la dimensione delle colonne\n";

	cin>>dimC;

	matrix.resize(dimC);

	cout<<"inserire la dimensione delle righe\n";

	cin>>dimR;

	for (int i=0; i!=dimC; i++)
	{
		matrix[i].resize(dimR);
	}

	cout<<"si procede ora all'inizializzazzione della matrice...\n";

	for(int i=0; i!=dimC; i++) 
	{
		cout<<"inserire il vettore riga\n";

		for(int a=0; a!=dimR; a++)
		{
			cin>>matrix[i][a];
		}; 
	};

	operazioni_lineari (matrix,dimR,dimC);

	cout<<"la matrice modificata è la seguente\n";

	for(int i=0; i!=dimC; i++)
	{
		for(int a=0; a!=dimR; a++)
		{
			cout<<matrix[i][a]<<"\t";
		};

		cout<<"\n";
	};

	return (0);

}

	
