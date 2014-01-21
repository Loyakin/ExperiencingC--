ii#ifndef POINT2
#define POINT2

#include<iostream>


class Point2
{
  protected:

	double x;

	double y;

    public:

	Point2():x(0.0), y(0.0) {};

	void set_point(double, double);

	void get_point();

	double get_asc();

	double get_ord();

	double distanza(Point2&, Point2&);
};

#endif
