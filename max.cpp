#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	int max(vector<int>);

	vector<int> a;

	int b;

	while(cin>>b)
	{
		a.push_back(b);
		break;
	};

	for(int i:a)
		cout<<i;

	cout<<max(a);
}
