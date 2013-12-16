#include<iostream>
#include"header.h"
using namespace std;

Rectangle::Rectangle (double x, double y)
{
	weight=x;

	large=y;
};

Rectangle::Rectangle ()
{
	weight=0;

	large=0;
};

Rectangle::Rectangle(double x)
{
	weight=x;
};



double Rectangle::area ()

 { return (weight*large); };



double perimetro (Rectangle r)
 { return(((r.weight)*2)+((r.large)*2)); };



ostream& Rectangle::stampa (ostream& s)
{
	s<<"l'altezza è: "<<weight<<"\nla larghezza è: "<<large<<"\n";
};
