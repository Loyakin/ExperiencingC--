#include<iostream>
using namespace std;

int OR (int x, int y)
{
	int bit=0, bin=0, i=1, n=1;

	for(; i<=x || i<=y; i*=2, n*=10)
	{
		if (((x&i)|(y&i))!=0) bit=1; else bit=0;
		
		cout<<"il valore di bit è= "<<bit<<"\n";		

		bin+=(bit*n);

	}

	return (bin);
};

int AND (int x, int y)
{
	int bin=0, bit=0, i=1, n=1;

	for(; i<=x || i<=y; i*=2, n*=10)
	{
		if(((x&i)&(y&i))!=0) bit=1; else bit=0 ;

		cout<<((x&i)&(y&i))<<"\n";

		bin+=bit*n;
	}

	return (bin);
};

int XOR (int x, int y)
{
	int bin=0, bit=0, i=1, n=1;
	
	for(;i<=x || i<=y; i*=2, n*=10)
	{
		if(((x&i)^(y&i))!=0) bit=1; else bit=0;;

		cout<<((x&i)^(y&i))<<"\n";		

		bin+=bit*n;
	}

	return(bin);
};



int main ()
{
	int a,b;

	char choice;

	cout<<"inserire i numero di cui calcolare and xor e or\n";

	cin>>a>>b;

	cout<<"si desidera fare and xor or?\n";

	cin>>choice;

	switch (choice)
	{

		case 'o': cout<<"il risultato dell'operazione è:\n"<<a<<" or "<<b<<" = "<<OR(a,b)<<"\n";
			break;

		case 'a': cout<<" il risultato dell'operazione è:\n"<<a<<" and "<<b<<" = "<<AND(a,b)<<"\n";
			break;

		case 'x': cout<<"il risultato dell'operazione è:\n"<<a<<" xor "<<b<<"= "<<XOR(a,b)<<"\n";
			break;

		default: break;
	};
}
