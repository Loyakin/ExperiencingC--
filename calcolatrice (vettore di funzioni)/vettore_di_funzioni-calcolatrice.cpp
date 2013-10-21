#include<iostream>
using namespace std;

double sommare (double a, double b)
{
	return(a+b);
}

double sottrarre (double a, double b)
{
	return(a-b);
}

double moltiplicare (double a, double b)
{
	return(a*b);
}

double dividere (double a, double b)
{
	return (a/b);
}

double *f (double a, double b);

int main ()
{
	double x,y,ris;

	double (*calcolatrice[]) (double, double) = {sommare, sottrarre, moltiplicare, dividere};

	char operatori[4] = {'+','-','*','/'}; 

	char segno;

	cout<<"inserire l'espressione di cui si desidera effettuare il calcolo\n";

	cin>>x>>segno>>y;

	for (int i=0; i<4; i++)
	{
		if(operatori[i]==segno)
		{
					

			ris= calcolatrice [i] (x,y);
		};
	};

	cout<<"il risultato è:\n"<<x<<segno<<y<<" = "<<ris<<"\n";

}
			
