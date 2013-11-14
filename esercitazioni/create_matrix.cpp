#include<iostream>
#include<stdlib.h>
using namespace std;

void inizializza (int mat[][10])
{
	for(int i=0; i!=5;i++)
		for(int j=0;j!=10;j++)
		{
			mat[i][j]=rand()%100 +1;
		}
}

void find_max_min (int mat[][10])
{
	int max=0; min=100;

	for (int i=0; i!=5; i++)
		for (int j=0; j!=10; j++)
		{
			if(mat[i][j]>max) max=mat[i][j];

			if(mat[i][j]<min) min=mat[i][j];
		}

	cout<<"il massimo è: "<<max<<"\nil minimo è: "<<min<<"\n";
}

int main()
{
	int mat[5][10];

	inizializza(mat);

	for(int i=0; i!=5; i++)
	{
		for(int j=0; j!=10; j++)
			{
				cout<<mat[i][j]<<"  ";
			}
		cout<<"\n";
	}

	find_max_min(mat);

}



