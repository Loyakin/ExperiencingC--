#include<iostream>
using namespace std;

void  maggioritary (int a[10], const int MACS)
{
	int magg;

	for (int i=0; i<MACS-1; i++)
	{
		for(int j=0; i<MACS; i++)
		{
			if(a[i]==a[j]) {magg+=1;};
		};

		if (magg>(MACS/2)) {break;};
	};

	if (magg>(MACS/2)) 
	{
		cout<<"il vettore è maggioritario\n";

	}

	else 
	{
		cout<<"il vettore non è maggioritario\n";
	};
};

