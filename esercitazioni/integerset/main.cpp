#include<iostream>
#include"header.h"
using std::cout;
using std::cin;


int main()
{
	int size;

	int* vec;

	vec=vector_inizializer(); 

	Integerset i(vec,size);

	i.stampa();

	vec=vector_inizializer();

	Integerset i2(vec, size),unione,intersezione;

	unione=i.U(i2);

	cout<<"l'unione ha elementi: \n";

	unione.stampa();

	intersezione=i.V(i2);

	cout<<"\nl'intersezione ha elementi: \n";

	intersezione.stampa();


}	
