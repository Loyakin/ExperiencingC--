#include<iostream>
#include"header.h"
using std::cout;

int main()
{
	Test t1;

	cout<<"primo\n";

	Test t2(3);

	cout<<"secondo\n";

	Test t3(t2);

	cout<<"terzo\n";

	t1=t1.add(t3);

	cout<<"ultimo\n";
}
