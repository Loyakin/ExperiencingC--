#include<iostream>
using namespace std;

int main ()
{
	int n,a,b;

	int mcd (int y, int z);

	int mcm (int y, int z);

	while (n!=3)
	{

		cout<<"inserire se si desidera calcolare l'mcm(1) o l'mcd(2) o si desidera terminare il programma(3)\n";

		cin>>n;

		switch (n)
		{

			case 1: cout<<"inserire i numeri di cui si desidera calcolare l'mcm\n";
				cin>>a>>b;
				cout<<"l'mcm è il seguente\n"<<mcm(a,b)<<"\n";
				break;

			case 2: cout<<"inserire i numeri di cui si desidera calcolare l'mcd\n";
				cin>>a>>b;
				cout<<"l'mcd è il seguente\n"<<mcd(a,b)<<"\n";
			
			case 3: break;

		};

		if( (n!=1) && (n!=2) && (n!=3)) {cout<<"scelta non corretta si prega di reinserire\n";};
	}
}
		


