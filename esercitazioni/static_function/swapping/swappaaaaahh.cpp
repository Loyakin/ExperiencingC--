#include<iostream>
#include"header.h"
#include"function.h"

int main()
{
	int a,b;

	cout<<"inserire le due variabili\n";

	cin>>a>>b;

	cout<<"il nuovi a e b\n";

	swapping(&a,&b);

	cout<<a<<" "<<b<<"\n";

	cout<<"per riferimenti invece valgono\n";

	referrment(a,b);

	cout<<a<<" "<<b<<"\n";
}
