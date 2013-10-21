#include<iostream>
using namespace std;

int mcd (int y, int z)
{
	int mcd=1;

	



	for (int i=2; (i<y+1) && (i<z+1); i++)
	{
		if ((y%i==0) && (z%i==0)) {mcd=i;};
		
	};

	return(mcd);
}
