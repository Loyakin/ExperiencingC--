#include<iostream>
#include"header.h"
using namespace std;

int main()
{
	double a,b,A,perimetr;

	cout<<"inserire i dati\n";

	cin>>a>>b;

	Rectangle r1(a,b);

	A=r1.area();

	perimetr=perimetro(r1);

	cout<<"l'area richiesta è uguale a: "<<A<<endl;

	cout<<"il perimetro richiesto è uguale a: "<<perimetro(r1)<<" "<<perimetr<<endl;
}
