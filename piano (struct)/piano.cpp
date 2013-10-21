#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct punto
{
	float ascissa;

	float ordinata;
};

float distanza (punto a, punto b)
{
	float ris;

	ris=sqrt((a.ascissa-b.ascissa)*(a.ascissa-b.ascissa)+(a.ordinata-b.ordinata)*(a.ordinata-b.ordinata));
	
	return (ris);
}

punto  p_medio (punto a, punto b)
{
	punto medio;

	medio.ascissa=(a.ascissa+b.ordinata)/2;

	medio.ordinata=(a.ordinata+b.ordinata)/2;

	return (medio);
}

int main ()
{
	punto P,P1,Pm;

	std::string espressione;

	cout<<"inserire i sue punti ascissa e ordinata\n";

	cout<<"ascissa e ordinata del punto 1\n";

	cin>>P.ascissa>>P.ordinata;

	cout<<"ascissa e ordinata del punto 2\n";

	cin>>P1.ascissa>>P1.ordinata;

	cout<<"inserire l'espressione: D(P,P1) oppure Pm\n";

	cin>>espressione;

	switch (espressione[0])
	{
		case 'D' : cout<<distanza(P,P1);
			break;

		case 'P' : Pm= p_medio(P,P1);
			   
			   cout<<"il punto medio Pm("<<Pm.ascissa<<","<<Pm.ordinata<<")\n";
			break;

		default: break;

	};

}


	
	


