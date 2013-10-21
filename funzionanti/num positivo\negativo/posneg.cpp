#include<iostream>
using namespace std;

char posneg (int m)
{
	if (m<0) {return 'N';}
	else {return 'P';};
};

int main ()
{
	int n;

	cout<<"inserire il numero di cui si vuole calcolare se positivo o negativo\n";

	cin>>n;

	cout<<posneg(n)<<"\n";

}

