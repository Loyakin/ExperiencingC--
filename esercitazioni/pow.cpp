#include<iostream>
using namespace std;

void pow (int a, int b, int &c)
{
	if(b==0) c=1;

	else
	{
		for (int i=0; i!=b; i++)
		{
			c*=a;
		}
	}
};

int pow2 (int a, int b)
{
	int ris=1;

	if(b==0) {ris=1;}

	else
	{
		for (int i=0; i!=b; i++)
		{
			ris*=a;
		}
	}

	return (ris);
}

int main()
{
	int a,b,ris=1;

	cout<<"inserire  la base seguita dall'esponente\n";

	cin>>a>>b;

	cout<<"\ncalcolata con la funzione a valore vale\n";

	cout<<pow2(a,b)<<"\n";

	pow(a,b,ris);

	cout<<"il risultato con la funzione a riferimento vale\n"<<ris<<"\n";

}
