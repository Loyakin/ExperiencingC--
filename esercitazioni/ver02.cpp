#include<iostream>
using namespace std;

int main ()
{
	cout<<2.5*(3/2)<<"\n"<<2.5f*(3/2)<<"\n"<<2*(3/2L)<<"\n"<<2*(5/2.5)<<"\n"<<15/12<<"\n"<<15%12;

	int a;

	double b;

	float c;

	unsigned int d;

	long e;

	long long f;

	short g;

	long double h;

	char i;

	bool l;

	cout<<"\nint"<<sizeof(a)<<"\ndouble"<<sizeof(b)<<"\nfloat"<<sizeof(c)<<"\nunsigned int"<<sizeof(d);

	cout<<"\nlong"<<sizeof(e)<<"\nlong long"<<sizeof(f)<<"\nshort"<<sizeof(g)<<"\nlong double"<<sizeof(h);

	cout<<"\nchar"<<sizeof(i)<<"\nbool"<<sizeof(l);

}

