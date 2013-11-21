#include<iostream>
using namespace std;

void separatore (int a)
{
	cout<<"il numero è dato dalla somma dei seguenti bit\n";

	const int BIN=2;

	int b=a, i,pot=0;

	for(;a>0;a=(a-pot))
	{
		b=a;

		for(i=0; (b!=1)&&(b!=0); i++, b=b>>1);

		pot=pow(BIN,i);
		
		cout<<pot;

		if(pot!=1) cout<<" + ";
	}
}

int pow (int a, int b)
{
	int c=2;

	if (b==0) return (1);

	else 

		for (int i=1; i!=b; i++) {c=c*a;};

	return(c);
}

	

	
			
