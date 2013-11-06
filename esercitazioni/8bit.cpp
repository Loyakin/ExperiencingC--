#include<iostream>
using namespace std;

int converti (int dec)
{
	int bit=0, bin=0;

	for (int n=1, i=1; i<=dec; i*=2, n*=10)
	{
		if((dec&i)!=0) 
		{
			bit=1;

			bin+=(bit*n);
		}
	}

	return(bin);
}

int main()
{
	int a;

	cout<<"inserire il numero di cui si vuole calcolare gli otto bit significativi\n";

	cin>>a;

	cout<<"il numero dei bit significativi è\n"<<"in decimale:"<<(a&511)<<"\nin binario è:"<<converti(a & 511)<<"\n";

	
}
