#include<iostream>
using namespace std;

bool primo (int y)
{
	for (int i=2; i!=y-1; i++)
	{
		if(y%i==0) 
		{
			return(false);
		};
	};
	
	return(true);
}

int main ()
{
	int x;

	bool b;

	cout<<"inserire il vlaore di cui si vuole verificare la primaggine\n";

	cin>>x;

	b=primo(x);

	if (b==true) {cout<<"si è un numero primo\n";}

	else {cout<<"non è un numero primo\n";};

}
