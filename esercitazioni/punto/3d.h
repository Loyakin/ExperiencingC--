#ifndef POINT3
#define POINT3

#include<iostream>
#include"2d.h"

class Point3: public Point2
{
	double z;

    public:

	Point3(): z(0){};

	void set_point(double, double, double);

	void get_point();

	double get_quot();

	double distanza (Point3&, Point3&);
};

#endif

