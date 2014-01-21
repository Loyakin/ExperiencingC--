#include<iostream>
#include"header.h"
using namespace std;

int main()
{
	int a,b;

	cout<<"inserire i numeri di cui si vogliono effettuare i calcoli\n";

	cin>>a>>b;

	Complex c1(a,b);

	cout<<"inserire i dati del secondo numero complesso\n";

	cin>>a>>b;

	Complex c2(a.b);

	cout<<"che operazione si desidera effettuare?\n a)somma\n b)sottrazione c)moltiplicazione\n d)coniugato\n";

	cin>>choice;

	switch (choice)
	{

		case 'a': Complex c3;

			  c3=c1.sum(c2);

			  c3.stampa();

			  break;

		case 'b': Complex c3;

			  c3=c1.sub(c2);

			  c3.stampa();

			  break;

		case 'c': Complex c3;

			  c3=c1.mul(c2);

			  c3.stampa();

			  break;

		case 'd': cout<<"di chi si desidera fare il coniugato?\n a)del primo\n b)del secondo\n";

			  cin>>choice;

			  if(choice=='a') 
			  {
				c1.con();

				c1.stampa();
			  }
			  else 
			  {
				c2.con();

				c2.stampa();
			  }

			  break;

	}
}

