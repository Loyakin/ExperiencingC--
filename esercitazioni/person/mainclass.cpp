#include<iostream>
#include<string>
#include"header1.h"
using namespace std;

Person::Person (string s1,string s2)
{
	name=s1;

	adress=s2;
};

Person::Person (string s1)
{
	name=s1;

	adress="";
}

Person::Person ()
{
	name="";

	adress="";
};

ostream& Person::stampa (ostream& s)
{
	s<<"il nome inserito è: "<<name<<"\nl'indirizzo è: "<<adress<<"\n";

	return(s);
};
