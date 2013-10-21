#include<iostream>
#include<string>
using namespace std;

void lunghezza (string a, string b)
{
	if(a.size()==b.size()) {cout<<"le due stringhe sono uguali\n";}

	else    if( (a.size()<b.size()) && (a.size()!=b.size()) ) {cout<<"la s1 è minore della s2\n";}

		else {cout<<"la tringa s2 è ERminore della stringa s1\n";};
}

void uguali (string a, string b)
{
	if(a==b) {cout<<"le due stringhe sono uguali\n";}

	else {cout<<"le due stringhe non sono uguali\n";};
}

void stampa (string a, string b)
{
	for (int i=0; i!=a.size() && i!=b.size(); i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]>b[i])
			{
				cout<<"le stringhe in ordine alfabetico sono:\n"<<b<<"\n"<<a<<"\n";

				break;
			}
			else 
			{
				cout<<"le stringhe in ordine alfabetico sono\n"<<a<<"\n"<<b<<"\n";
			};
		};
	};
}



int main ()
{
	string s1,s2,espressione;
	
	string op="=&$";

	cout<<"inserire la stringa 1\n";

	getline(cin,s1);

	cout<<"inserire la stringa 2\n";

	getline(cin,s2);

	void (*f[]) (string, string)={lunghezza,uguali,stampa};

	cout<<"inserire l'espressione da calcolare\n";

	getline(cin,espressione);

	for (int i=0; i!=3; i++)
	{
		if(espressione[2]==op[i])
		{
			f[i](s1,s2);
		};
	};
}
