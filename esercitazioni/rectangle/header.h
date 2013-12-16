#include<iostream>
using namespace std;

class Rectangle 
{
	double weight;

	double large;

 public:

	Rectangle (double x, double y);

	Rectangle ();

	Rectangle (double x);

	double area ();

	friend double perimetro (Rectangle r);

	ostream& stampa (ostream&);
};

	
