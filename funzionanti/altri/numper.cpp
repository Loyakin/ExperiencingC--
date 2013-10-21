#include<iostream>
using namespace std;

int main()
{
	int tot,n;

	cout<<"inserire il numero sotto il quale si desidera trovare l'elenco dei perfetti\n";

	cin>>n;

	cout<<"l'elenco dei numeri primi è:\n";

	for(int i=n; i!=0; i--)
	{
		tot=i;

		for(int b=1; b!=i; b++)
		{

			if(i%b==0) {tot=tot-b;};
	
		};

		if (tot==0) {cout<<i<<endl;};

	};

}
