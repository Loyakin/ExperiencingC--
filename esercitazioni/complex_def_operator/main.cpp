#include<iostream>
#include"header.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float x,y;

	cout<<"inserire i numeri del secondo complex\n";

	cin>>x>>y;

	Complex c1(x,y),ris;

	cout<<"inserire i numeri del primo complex\n";

	cin>>x>>y;

	Complex c2(x,y);

	cout<<"la somma vale: "<<endl;

	ris=(c1+c2);

	ris.stampa();

	ris<<"\nAAA stampato col la ridefinizione degli operatori stampa\n";

	cout<<"\n la differenza vale: "<<endl;

	ris=(c1-c2);

	ris.stampa();

	if(c1!=c2) {cout<<"\n sono anche diversi";}

	else {cout<<"\n sono anche uguali\n";}

	cout<<"inserire l'incremento per il primo valore\n";

	cin>>x>>y;
	
	c2+=Complex(x,y);

	cout<<"adesso il primo valore inserito vale: "<<endl;

	c2.stampa();

	c2-=Complex(x,y);

	cout<<"\ndecrementando è tornato come prima...: "<<endl;

	c2.stampa();

	cout<<"infine il coniugato vale\n";

	~c2;

	c2.stampa();
}
