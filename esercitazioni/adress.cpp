#include <iostream>
using namespace std;

int* cerca (int vect[10],int val)
{
	int* p;

	for (int i=0; i!=10; i++)
	{
		p=&vect[i];

		if (*p==val) {return (p);}
	};

	p=NULL;

	return (p);
}

	

int main ()
{
	int array[10],x;

	int* pval;

	cout<<"inserire l'array\n";

	for (int i=0;i!=10;i++)
	{
		cin>>array[i];
	};


	cout<<"inserire il valore da cercare\n";

	cin>>x;

	pval=cerca(array,x);

	if(pval==NULL)
	{
		cout<<"il valore no è stato trovato\n";
	}
	else
	{
		cout<<"l'inidirizzo cercato è="<<pval<<"\n";
	};

}
