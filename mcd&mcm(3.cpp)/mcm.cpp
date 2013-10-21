#include<iostream>
using namespace std;

int mcm (int y, int z)
{
	int max,ris;

	max=z*y;

	ris=max;

	for(int i=2; i!=max; i++)
	{
		if( ((max-i)%z==0)  &&  ((max-i)%y==0)  )  {ris=max-i;};
	};

	return (ris);
}
	
