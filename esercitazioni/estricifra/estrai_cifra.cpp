#include<iostream>
#include"header.h"
#include"function.h"
using namespace std;

int main ()
{
	int cifra;

	cout<<"inserire il valore di cui separare le cifre\n";

	cin>>cifra;

	cout<<"le cifre richeste sono:\n";

	separatore(cifra);

	cout<<"\n";

}
