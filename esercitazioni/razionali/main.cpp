#include<iostream>
#include"header.h"
using namespace std;

int main()
{
	int a,b;

	Razionale ris;

	char choice='y';

	while (choice=='y')
	{
		cout<<"inserire il primo numero razionale\n";

		cin>>a>>b;

		Razionale q1(a,b);

		cout<<"inserire il secondo numero razionale\n";

		cin>>a>>b;

		Razionale q2(a,b);

		cout<<"cosa si desidera calcolare?\n a)somma\n b)sottrazione\n c)divisione\n d)moltiplicazione";

		cin>>choice;

		switch (choice)
		{
			case 'a': cout<<"la somma vale: ";

				  ris=somma(q1,q2);
				  
				  ris.stampa();

				  cout<<endl;

				 break;
	
			case 'b': cout<<"la sottrazione vale: ";

				  ris=sottrai(q1,q2);

				  ris.stampa();

                                  cout<<endl; 
 
                                 break;  


			case 'c': cout<<"la divisione vale: ";
                                  
				  ris=dividi(q1,q2);

				  ris.stampa();

                                  cout<<endl; 
 
                                 break;  


			case 'd': cout<<"la moltiplicazione vale: ";

				  ris=moltiplica(q1,q2);

				  ris.stampa();

                                  cout<<endl; 
 
                                 break;  

		}

		cout<<"si desidera effettuare un nuovo calcolo?\n";

		cin>>choice;

	}
}
		
		
