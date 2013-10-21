#include<iostream>
#include<vector>
using namespace std;

int max (vector<int> v)
{
	auto start=v.begin();
	auto end=v.end();
	int temp;

	while(start!=end)
	{
		if (*start<*(start+1))
		{
			*start=temp;

			*start=*(start+1);

			*(start+1)=temp;

			++start;
		};
	};
}		
		
		
	
