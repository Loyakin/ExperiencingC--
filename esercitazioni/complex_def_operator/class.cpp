#include<iostream>
#include"header.h"
using std::cin;
using std::cout;

Complex Complex::operator+ (const Complex& p)
{
	Complex c;

	c.a=a+p.a;

	c.b=b+p.b;

	return (c);
}

Complex Complex::operator- (const Complex& p)
{
	Complex c;

	c.a=a-p.a;

	c.b=b-p.b;

	return (c);
}

bool Complex::operator== (const Complex& p)
{
	if((a==p.a)&&(b==p.b)) {return true;}

	return false;
}

bool Complex::operator!= (const Complex& p)
{
	if ((*this==p)==false) {return false;}

	return true;
}
	
void Complex::operator+= (const Complex& p)
{
	a=a+p.a;

	b=b+p.b;
}
	
void Complex::operator-= (const Complex& p)
{
	a=a-p.a;

	b=b-p.b;
}

void Complex::operator~ ()
{
	b=-b;
}

std::ostream&  Complex::operator<< ()
{
	cout<<a<<" "<<b<<"i";

	return(cout);
}

