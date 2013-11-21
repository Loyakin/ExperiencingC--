#include<iostream>
#include"header.h"
#include"function.h"
using namespace std;

int main()
{
	int b;

	cout<<"inserire il numero di cui calcolare il fattoriale\n";

	cin>>b;

	cout<<"il fattoriale mediante ricorsiva vale\n";

	cout<<recoursive(b)<<"\n";

	cout<<"il fattoriale mediante iterativa1n\n";

	cout<<iterative(b)<<"\n";

}
