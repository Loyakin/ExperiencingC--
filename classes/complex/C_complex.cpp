#include<iostream>
#include"header.h"
using namespace std;

Complex::Complex()
{
	a=0;

	bi=0;
}

Complex::Complex (int x, int y)
{
	a=x;

	b=y;
}

Complex Complex::sum (const Complex& x)
{
	Complex ris(a+x.a,bi+x.bi);

	return(ris);
}

Complex Complex::sub (const Complex& x)
{
	Complex ris(a-x.a,bi-x.bi);

	return(ris);
}

Complex Complex::mul (const Complex& x)
{
	Complex ris(a*x.a,bi*x.bi);

	return(ris);
}

Complex Complex::con ()
{
	bi*=(-1);
}


	


