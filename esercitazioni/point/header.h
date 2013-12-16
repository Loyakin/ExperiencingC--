#include<iostream>


class Point
{
	double x;

	double y;

	public:

	Point();

	Point(double a, double b);

	std::ostream& stampa(std::ostream&);

	float	distanza (const Point&);

	Point	medio (const Point&);
};
