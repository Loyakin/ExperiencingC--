#include<iostream>
#include<vector>
using namespace std;

int main ()
{
	vector<int> a;

	int i=0;

	while(cin>>i)
	{
		a.push_back(i);
	};

	for(auto c=a.begin(); c!=a.end(); c++)
	{
		if(c== a.begin()) {cout<<*c+(*c+1)<<" ";}
		
		else if(c==a.end()-1) { cout<<(*c-1)+*c<<" ";}

		else {cout<<(*c-1)+*c+(*c+1)<<" ";};
	};

	cout<<"\n";
}
	
