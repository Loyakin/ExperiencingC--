#include<iostream>
using std::cout;
using std::cin;

int main()
{
	int i[3][3];

	for(int x=0;x!=3;x++)
	{
		for (int y=0; y!=3; y++)
		{
			cin>>i[x][y];		

			cout<<"il valore appena inserito è"<<i[x][y]<<std::endl;
		}
	};

	for(int x=0; x!=3; x++)
	{
		if(x!=0) cout<<"-------------\n";	

		for(int y=0; y!=3; y++)
		{
			cout<<i[x][y];
			if(y!=2) cout<<"  |  ";
		}
		
		cout<<"\n";
	}

	
}
		
