#include<iostream>
#include<vector>
using namespace std;

void simmetrica (vector<vector<int> > a,const int dim)
{
	int i,b;

	for(i=0; i<dim; i++)
	{
		for(b=0; b<dim; b++)
		{
			if (i!=b)
			{
				if(a[i][b]!=a[b][i])
				{
					cout<<"la matrice non è simmetrica\n";
					i=b=dim;
				};
			};
		};
	};

	if ((b==dim) && (i==dim)) {cout<<"la matrice è simmetrica\n";};
}
