#include<iostream>
#include<cmath>
#include"header.h"
using namespace std;

Point::Point(): x(0),y(0) {};

Point::Point(double a,double b): x(a),y(b) {};

float Point::distanza (const Point& a)
{
	double distanza;

	distanza=sqrt(((x-a.x)*(x-a.x))+((y-a.y)*(y-a.y)));

	return (distanza);
}

Point Point::medio (const Point& a)
{
	Point medium;

	medium.x=((a.x+x)/2);

	medium.y=((a.y+y)/2);

	return (medium);
}


ostream& Point::stampa (ostream& s)
{
	s<<x<<" "<<y;

	return (s);
}
