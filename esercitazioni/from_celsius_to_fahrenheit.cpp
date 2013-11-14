#include<iostream>
using namespace std;

double conv1 (double c)
{
	double f=0;

	f=(c*1.8)+32;

	return (f);
}

void conv2 (double &c, int i)
{
	static int a=0;

	c=(c*1.8)+32;

	a++;

	if(a==(i))
	cout<<"la funzione count2 è stata chiamata: "<<a<<"volte\n";
}

int main()
{
	double c;

	cout<<"inserire i gradi celsius\n";

	cin>>c;

	cout<<"con la funzione a valore: "<<conv1(c);
	
	for(int i=0; i!=4; i++)
	conv2(c,4);

	cout<<"\n con la funzione a riferimento: "<<c<<"\n";
}
