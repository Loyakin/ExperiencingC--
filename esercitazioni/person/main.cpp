#include<iostream>
#include<string>
#include"header1.h"
using namespace std;

int main()
{
	string name, adress;

	cout<<"Inserire le tre persone di cui si desidera memorizzare nome e indirizzo\n";

	cout<<"inserire nome 1 persona: ";

	getline(cin,name);

	cout<<"\ninserire l' indirizzo: ";

	getline(cin,adress);

		Person p1(name,adress);

	cout<<"\nInserire il nome della seconda persona: ";

	getline(cin,name);

	cout<<"inserire l' indirizzo: ";

	getline(cin,adress);

		Person p2(name,adress);

	p1.stampa(cout);

	p2.stampa(cout);
}
