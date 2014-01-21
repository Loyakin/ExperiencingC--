#include<iostream>
#include"2d.h"
#include"3d.h"
#include<math.h>
using std::cin;
using std::cout;
using std::endl;

void Point3::set_point(double a, double b, double c)
{
	Point2::set_point(a, b);

	z=c;
}

void Point3::get_point()
{
	cout<<"l'ascissa ha valore: "<<x<<endl<<"l'ordinata vale: "<<y<<endl<<"la quota vale: "<<z<<endl;
}

double Point3::get_quot()
{
	return(z);
}

double Point3::distanza (Point3& a, Point3& b)
{
	double d,s,o,q;

	s=((a.get_asc())-(b.get_asc()));

	o=((a.get_ord())-(b.get_ord()));

	q=((a.get_quot())-(b.get_quot()));

	d=sqrt((s*s)+(o*o)+(q*q));

	cout<<"s o e q valgono: "<<s<<"   "<<o<<"   "<<q<<endl;


	return(d);
}


