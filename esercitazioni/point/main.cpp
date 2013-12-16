#include<iostream>
#include"header.h"
using namespace std;

int main()
{
	double a,b;

	Point med;

	cout<<"inserire i valore del primo punto\n";

	cin>>a>>b;

	Point p1(a,b);

	cout<<"inserire i valori del secondo punto\n";

	cin>>a>>b;

	Point p2(a,b);

	cout<<"la distanza vale: "<<p1.distanza(p2);

	cout<<"il valore medio vale: ";

	med=p1.medio(p2);

	med.stampa(cout)<<endl;;
}
