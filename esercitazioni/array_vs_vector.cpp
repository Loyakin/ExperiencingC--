#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a=0,x;

	int c[10],d[10]={0};

	vector<int> v1,v2;

	for(int &i:c)
	{
		cin>>i;
	}

	cout<<"\n";

	for(int i:c)
	{
		d[a]=i;

		cout<<d[a]<<" ";

		a++;
	}

	a=0;

	cout<<"inizializzare i vector\n";

	for (int i=0;i!=10;i++)
	{
		cin>>x;
		
		v1.push_back(x);
	}

	v2.resize(sizeof(v1));

	v2=v1;

	cout<<"il vettore v2= ";

	for(int i:v2)
	{
		cout<<i<<" ";
	}

	cout<<"\n";

}

