#include <iostream>
using namespace std;

int resto (int n, int m)
{
	if (n<m)
	{
		for(;(m-n)>0;)
		{
			m-=n;
		};

		return (m);
	}
	else
	{
		for (;(n-m)>0;)
		{
			n-=m;
		};
		
		return (n);
	};
};

int main()
{
	int x,y;

	cout<<"inserire i due numeri di cui si desidera calcolare il resto\n";

	cin>>x>>y;

	cout<<resto(x,y)<<"\n";

}

