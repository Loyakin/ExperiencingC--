#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s,d;

	cout<<"si desidera utilizzare la funzione getline o parola?\n";

	cin>>d;

	switch (d[0])
	{

		case 'g':	while (getline(cin,s))
				{
					cout<<s<<"\n";
				};

				break;

		case 'p':	while (cin>>s)
				{
					cout<<s;
				};

		default: break;
	};
}
