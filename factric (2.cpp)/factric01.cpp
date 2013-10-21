#include<iostream>
using namespace std;

int fact (int a)
{
	if(a-1!=0) {return (a*fact(a-1));};

	return 1;
}
