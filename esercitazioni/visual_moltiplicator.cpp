#include<iostream>
#include<string>
using namespace std;

void tabulazione (int a, int b)
{
	cout<<"sono nella funzione\n";	

	string s;

	int i,l,diff=0;

	for (i=1; (b/i)!=0; i*=10);

	for (l=1; (a/l)!=0; l*=10);

	i=i/10;

	l=l/10;

	if(i>l) 
		diff=i/l;
	else
		diff=l/i;

	for (int c=1; c!=diff; c*=10)
		s+=" ";

	if(i>l)
	{	cout<<s<<a<<"*\n"
	    	    <<b<<"=\n"
	    	    <<"---------------\n";
	}
	else
	{
		cout<<a<<"*\n"
		    <<s<<b<<"=\n"
		    <<"-------------\n";
	}

	cout<<"\n"<<"--------------\n"<<a*b;
}

void moltiplica (int a, int b)
{
	for(int i=1; (b/i)!=0; i*=10);

	i=i/10;

	if((b/i)*a==0)
			

int main()
{


	int x,y;

	cout<<"inserire i numeri di cui si desidera ottenere il prodotto\n";

	cin>>x>>y;

	tabulazione(x,y);

	moltiplica(x,y);
}
