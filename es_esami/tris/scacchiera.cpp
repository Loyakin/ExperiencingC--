#include<iostream>
#include<vector>
#include"scacchiera.h"
using std::cout;

int Scacchiera:Scacchiera:::verifica(char tipo, int x, int y)
{
	int ver;

	int hor=1;

	int vert=1;

	int diag=1;

	for(int i=0;i!=3;i++)
	{
		for(int j=0; j!=3; j++)
		{
			if((x==i)&&(y==j))
			{
				if((scacchiera[i][j]!='x')&&(scacchiera[i][j]!='o')) 
				{
					cout<<"mossa accettata\n";

					scacchiera[i][j]=tipo;
				}
				else
				{
					cout<<"mossa non accettata!\n";

					return(2);
				};
			}
		}
	}

	for(int i=0;i!=3;i++)
	{
		for(int j=0;j!=3;j++)
		{
			if((x=i)&&(y!=j))
				if(scacchiera[i][j]==tipo) hor++;

			if((y=j)&&(x!=i))
				if(scacchiera[i][j]==tipo) ver++;

			if((i=j)&&(x=y)&&(x!=i))
				if(scacchiera[i][j]==tipo) diag++;

			if(((i+j)==4)&&((x+y)==4)&&(x!=y))
				if(scacchiera[i][j]==tipo) diag++;
		}
	}

	if((diag==3)||(hor==3)||(ver==3)) return (1);
	else return(0);
			

}

void Scacchiera::print()
{
	for(int a=0;a!=3; a++)
	{ 
		if(a!=0) cout<<"--------------\n";
		for(int b=0; b!=3; b++)
		{
			cout<<scacchiera[a][b];

			if(b!=3) cout<<" | ";
		}
	}
}
