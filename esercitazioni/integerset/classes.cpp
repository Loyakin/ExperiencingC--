#include<iostream>
#include"header.h"
using std::cin;
using std::cout;

int* vector_inizializer()
{
	int v[100];

	int* v1;

	int i=0,x;

	cout<<"inserire i valori\n";

	while (cin>>x)
	{

		v[i]=x;

		i++;
	}

	cout<<"sono uscito dal while\n";

	v1= new int [i];

	cout<<"ho creato il vettore int\n";

	for (x=0; x!=i;x++)
	{
		cout<<"sono nel for per la "<<x<<"-esima volta\n";
		v1[x]=v[x];
	}

	cout<<"sono uscito dal for\n";

	return(v1);
}



Integerset::Integerset()
{
	for (int i=0; i!=MAX_LENGHT;i++)
	{
		a[i]=false;
	}
}

Integerset::Integerset(int* c,int size)
{
	int y;

	for(int i=0; i!=MAX_LENGHT;i++)
	{
		for(int y=0; y!=size; y++)
		{
			if(i==c[y]) 
			{	
				a[i]=true;
				break;
			}

			else a [i]=false;
		}
	}
}

void Integerset::stampa()
{
	for(int i=0; i!=MAX_LENGHT; i++)
	{
		if(a[i]==true) cout<<i<<"  ";
	}

	cout<<"\n";
}

Integerset Integerset::U (const Integerset& b)
{
	Integerset c;

	for(int i=0; i!=MAX_LENGHT;i++)
	{
		if((a[i]==true) || (b.a[i]==true)) c.a[i]=true;

		else c.a[i]=false;
	}

	return (c);
}

Integerset Integerset::V (const Integerset& b)
{

	Integerset c;

        for(int i=0; i!=MAX_LENGHT;i++)
       	{
 	        if((a[i]==true) && (b.a[i]==true)) c.a[i]=true;

               	else c.a[i]=false;
	 }	

        return (c);
}
