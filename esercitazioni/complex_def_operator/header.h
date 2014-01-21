#include<iostream>
using std::endl;
using std::cout;


class Complex
{
	double a;

	double b;

   public:

	Complex() {a=0; b=0;}

	Complex(float x) {a=x; b=0;}

	Complex(float x, float y) {a=x; b=y;}

	Complex operator+ (const Complex&);

	Complex operator- (const Complex&);

	bool operator== (const Complex&);

	bool operator!= (const Complex&);

	void operator+= (const Complex&);

	void operator-= (const Complex&);

	void operator~();

	void stampa () { cout<<a<<" i"<<b<<endl;}

	std::ostream&  operator<< ();
};
