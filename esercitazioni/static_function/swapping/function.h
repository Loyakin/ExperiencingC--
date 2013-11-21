#include<iostream>
using namespace std;

void swapping (int* a, int* b)
{
	int tmp;

	tmp=*a;

	*a=*b;

	*b=tmp;
}

void referrment (int &x, int &y)
{
	int temp;

	temp=x;

	x=y;

	y=temp;
}

