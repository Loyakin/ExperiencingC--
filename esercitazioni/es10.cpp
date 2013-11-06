#include<iostream>
using namespace std;

int main()
{
	int a;

	cout<<"inserire il numero desiderato\n";

	cin>>a;

	for (int i=a+1; i>=0; i--)
	{
		for (int b=0;b!=i; b++)
			{	
				cout<<b;

				if ((b!=(i-1)&&(i!=1))) cout<<"?";
			}
	
		cout<<"\n";
	}
}
