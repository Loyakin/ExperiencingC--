#include<iostream>

#include"archivio.h"
#include"persona.h"
#include"cliente.h"
#include"attore.h"
#include"noleggio.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	string a,b,c;

	int e;

	cout<<"inserire qui di seguito nome cognome eta del primo cliente\n";

	cin>>a>>b>>e;

	Cliente c1(a,b,e);

	cout<<"inserire qui di seguito nome cognome eta del secondo cliente\n";

	cin>>a>>b>>e;

	Cliente c2(a,b,e);

	c1.set_credito();

	c2.set_credito();

	cout<<"i clienti appena inseriti hanno dati:\n";

	c1.get_client_info();

	cout<<endl<<endl;

	c2.get_client_info();

	cout<<"inserire qui sotto nome cognome eta del primo attore\n";

	cin>>a>>b>>e;

	Attore a1(a,b,e);

	a1.set_attore();

	cout<<"inserire qui di seguito nome cognome e eta del secondo attore\n";

	cin>>a>>b>>e;

	Attore a2(a,b,e);

	a2.set_attore();

	cout<<"inserire qui di seguito nome cognome e eta del terzo attore\n";

	cin>>a>>b>>e;

	Attore a3(a,b,e);

	a3.set_attore();

	cout<<"inserire titolo e anno di produzione del primo film\n";

	cin>>a>>e;

	Film f1(a,e);

	f1.set_attori(a1);

	f1.set_attori(a2);

	cout<<"inserire titolo e anno di produzione del secondo film\n";

	cin>>a>>e;

	Film f2(a,e);

	f2.set_attori(a2);

	f2.set_attori(a3);

	cout<<"inserire titolo e anno di produzione del terzo film\n";

	cin>>a>>e;

	Film f3;

	f3.set_attori(a3);

	f3.set_attori(a1);

	Archivio m;

	m.add_film(f1);

	m.add_film(f2);

	m.add_film(f3);

	m.add_cliente(c1);

	m.add_cliente(c2);

	Noleggio n;

	n.set_noleggio(c1,f1);

	c1.get_client_info();




}
	
