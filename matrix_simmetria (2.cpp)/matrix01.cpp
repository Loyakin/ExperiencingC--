#include<iostream>
#include<vector>
using namespace std;

int main()
{
	void simmetrica (vector<vector<int> > a, const int dim);	

	const int DIM=5;

	vector<vector<int> > matrix(DIM);

	for (int i=0; i<DIM; i++)
	{
		matrix[i].resize(DIM);
	};

	for(int i=0;i!=DIM; i++)
	{
		cout<<"inseriere la riga "<<i<<"°\n";

		for(int a=0; a!=DIM; a++)
		{
			cin>>matrix[i][a];
		};
	};

	simmetrica(matrix,DIM);
}
	
