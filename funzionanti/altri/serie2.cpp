#include <iostream>
#define min 1;
using namespace std;

int main() 
{
	double x,ris,fact=1;

	int n=0;

	cout<<"inserire il punto ove effettuare l'approssimazione\n";

	cin>>x;

	cout<<"\ninserire il numero di somme da effettuare\n";

	cin>>n;
	
	switch (n)
	{
		case 1: cout<<"\nil numero richiesto è:"<<1<<"\n";
			break;

		case 2: cout<<"\nil numero richiestiìo è:"<<x+min;
			cout<<"\n";
			break;

		default: ris=x+min;
			 for (int i=2; i!=n; i++)
			{
				for(int l=2; l!=i+2; l++)
				{
					fact*=(x/(l-1));
				};

				ris=ris+fact;

				fact=1;
			};
			cout<<"\nil numero richiesto è:"<<ris<<"\n";
			break;
	};

	return 0;
}
