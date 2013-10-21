#include<iostream>
#include "maggioritario01.h"
using namespace std;

int main()
{
	const int MAX=10;

	int v[MAX];
//	system("clear");
	cout<<"Inserire il vettore di cui si vuole verificare che sia maggioritario\n";

	for (int i=0; i<MAX; i++)
	{
		cin>>v[i];
	};

	maggioritary(v,MAX);

}
