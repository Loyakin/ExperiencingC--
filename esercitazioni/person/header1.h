#include<iostream>
#include<string>
using namespace std;

class Person
{

	string name;

	string adress;

 public:
	Person();

	Person(string x);

	Person(string  x,string y);

	ostream& stampa (ostream& s);
};
