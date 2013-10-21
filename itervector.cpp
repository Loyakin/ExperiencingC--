#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a;

	int b,i=0;

	while(i<10 && cin>>b)
	{
		a.push_back(b);

		i++;
	};

	for(auto c=a.begin(); c!=a.end();c++)
	{
		*c*=2;
	};

	cout<<a[9]<<"\n";

	for(auto c=a.begin(); c!=a.end();c++)
	{
		cout<<*c<<" ";;
	};

	cout<<"\n";
}
