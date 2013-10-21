//nota1: programma interamente funzionante, problema: i vettori probabilmente sono passati per valore pertanto non vengono modificati nel main principale...trovare un modo per far si che ciò avveng//nota1: programma interamente funzionante, problema: i vettori probabilmente sono passati per valore pertanto non vengono modificati nel main principale...trovare un modo per far si che ciò avvengaa

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void scambia (vector<vector<float> > mat, int Dimr, int Dimc, string expression)
{
	float temp;

	int x,y;

	char c=expression[1];

	const int ascii=48;

	//tolgo 48 perchè conversione char-->int in ascii

	x=expression[3]-ascii;

	y=expression[9]-ascii;

	//se c=c allora si opera a colonne altrimenti a righe

	if (c=='c')
	{
		for(int b=0; b!=Dimr; b++)
		{
			temp=mat[b][x];
			
			mat[b][x]=mat[b][y];
			
			mat[b][y]=temp;
		};

	}

	else
	{
		for(int b=0; b!=Dimc; b++)
		{
			temp= mat[x][b];

			mat[x][b]=mat[y][b];

			mat[y][b]=temp;
		}
	};
}

void combina_linearmente (vector<vector<float> > mat, int Dimr,int Dimc, string expression)
{

	int a,b,x,y,ris;

	char c,operatore=expression[5];

	const int ascii=48;

	a=expression[0]-ascii;

	b=expression[6]-ascii;

	x=expression[3]-ascii;

	y=expression[9]-ascii;

	c=expression[0];

	cout<<"si desidera posizionare il risultato in che riga/colonna?? x o y\n";

	cin>>ris;

	//verifico se l'elemento inserito sia x o y

	if(ris!=x) {y=x;}; 

	if(c=='c')
	{
		for (int i=0; i!=Dimr; i++)
		{
			if(operatore=='+')
			{
				mat[ris][i]=mat[ris][i]*a+mat[y][i]*b;
			}
			else
			{
				mat[ris][i]=mat[ris][i]*a-mat[y][i]*b;
			};
		};
	}
	else
	{
		for(int i=0; i!=Dimc; i++)
		{
			if(operatore=='+')
			{
				mat[i][ris]=mat[i][ris]*a+mat[i][y]*b;
			}
			else
			{
				mat[i][ris]=mat[i][ris]*a-mat[i][y]*b;
			};
		};
	};
}

		 
	


void operazioni_lineari(vector<vector<float> > m, int DIMr, int DIMc)
{
//	void *f (vector<vector<float> >, int, int, string);

	string espressione;

	cout<<"inserire l'espressione che si vuole attuare\n"<<"si ricorda che l'espressione deve essere del tipo:\n";

	cout<<" ·)a*r(opure c)[i] op b*r(oppure c)[i]\n";

	cout<<"NOTA BENE: si accettano combinazioni di al piu due righe/colonne..grazie\n";

	cout<<"NOTA BENE2: inserire sempre i coefficenti a e b\n";
	
	cin>>espressione;

	if(espressione[5]=='&')
	{
//		f=&scambia;

		scambia(m,DIMr,DIMc, espressione);
	}
	else
	{
//		f=&combina_linearmente;

		combina_linearmente(m,DIMr,DIMc, espressione);
	};
};

	

	

	

	

	


