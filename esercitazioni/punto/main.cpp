#include<iostream>
#include"2d.h"
#include"3d.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	Point2 p1,p2;

	double x,y,z;

	cout<<"inserire le coordinate del nuovo punto\n";

	cin>>x>>y;

	p1.set_point(x,y);

	p2.set_point(3.0,4.0);

	Point3 P1,P2;

	cout<<"inserire le coordinate del nuovo punto\n";

	cin>>x>>y>>z;

	P1.set_point(x,y,z);

	P2.set_point(3.0,4.0,5.0);

	cout<<"i punti inseriti sono:\n"<<"        p1: \n";

	p1.get_point();

	cout<<"      P1:\n";

	P1.get_point();

	double distance1, distance2;

	distance1= p1.distanza(p1,p2);

	distance2= P1.distanza(P1,P2);

	cout<<"le distanze calcolate sono: \n la prima in due dimensioni vale: "<<distance1<<endl<<"la seconda in tre d vale: "<<distance2<<endl;

}

	
