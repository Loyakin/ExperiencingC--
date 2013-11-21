#include<iostream>

int  recoursive (int a)
{
	if ((a==0)||(a==1)) return 1;

	else
	{
		a*=recoursive(a-1);
	}

	return (a);
}

int iterative (int a)
{
	if(a==0) return 1;

	else
		for(int b=a;b!=2;--b) { a*=(b-1); };

	return (a);
}
