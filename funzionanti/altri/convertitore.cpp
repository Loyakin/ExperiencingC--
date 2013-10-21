#include<iostream>

int main()
{
	double m;

	std::cout<<"inserire il numero da convertire";

	std::cin>>m;

	std::cout<<"\nin pollici sono: "<<(m*12)
		<<"\nin iarde"<<(m/3)
		<<"\nin centimetri"<<((m*2,54)*12)
		<<"\nin metri"<<(double)((m*2,54)*12)/100;

	return 0;
}
