#include<iostream>
#include"2d.h"
#include<math.h>
using std::cout;
using std::cin;
using std::endl;

void Point2::set_point(double ex, double eps)
{
	x=ex;

	y=eps;
}

void Point2::get_point()
{
	cout<<"l'ascissa ha valore: "<<x<<endl<<"l'ordinata ha valore: "<<y<<endl;
}

double Point2::get_asc()
{
	return(x);
}

double Point2::get_ord()
{
	return(y);
}

double Point2::distanza (Point2& a, Point2& b)
{
	double d,s,o;

	s=(a.get_asc())-(b.get_asc());

	o=(a.get_ord())-(b.get_ord());

	d=sqrt((s*s)+(o*o));

	return(d);
}


	
