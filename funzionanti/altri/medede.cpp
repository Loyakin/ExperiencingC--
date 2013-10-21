#include<iostream>
using namespace std;

int main()
{
	int h,d,m;

	cout<<"inserire il numero da convertire dove ogni cifra sia seguita da uno spazio\n";

	cin>>h>>d>>m;

	cout<<"\n in decimetri corrisponde a:\n"
	    <<((h*1000)+(d*100)+(m*10))
	    <<"\n\n";

	return 0;

}

