#include<iostream>
using namespace std;


int main ()
{
	int a=0, pos=0, neg=0;

	while (cin>>a)
	{
		if(a<0) neg++;

		else pos++;

	}

	cout<<"il totalle dei numeri positivi è: "<<pos<<"\nil totale dei numeri negativi è: "<<neg<<"\n";

}
