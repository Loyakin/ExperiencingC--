#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a,b{0,0,0,0,0,0,0,0,0,0};

	int x;

	cout<<"inserire il vettore\n";

	while(cin>>x)
	{
		a.push_back(x);
	}

	for(int &i:a)
	{
		if(i!=100) {b[i/10]++;}

		else {b[9]++;};
	}

	cout<<"i numeri rischiesti sono\n";

	for (int &i:b)
	{
		cout<<i<<" ";
	}

	cout<<"\n";
}	
