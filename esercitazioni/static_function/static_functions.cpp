#include<iostream>
#include"header.h"
#include"function.h"
using namespace std;

int main ()
{
	char c='y';

	while (c=='y')
	{
		function();

		cout<<"si desidera chiamare nuovament ela funzione?\n";

		cin>>c;
	}
}
