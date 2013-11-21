#include<iostream>
using namespace std;

void function ()
{
	static int a=1;

	for(int i=0; i!=a; i++)
	{
		cout<<i;
	}

	a++;
}
