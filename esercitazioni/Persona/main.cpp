#include<iostream>
#include"persona.h"
#include"studente.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	Persona piero;

	string a,b,c,d,e;

	cout<<"inserire nome, cognome, CF della prossima persona\n";

	cin>>a>>b>>c;

	Persona paolo(a,b,c);

	Studente ciccio;

	cout<<"inserire nome, cognome, CF, matricola e CdL del prossimo studente\n";

	cin>>a>>b>>c>>d>>e;

	Studente caio(a,b,c,d,e);

	cout<<"i dati inseriti sono: \n";

	paolo.get_nome();

	paolo.get_cognome();

	paolo.get_CF();

	cout<<"\n\n";

	caio.get_nome();

	caio.get_cognome();

	caio.get_CF();

	caio.get_matricola();

	caio.get_CdL();

	cout<<"\nabbiamo utilizzato le funzioni get, ora utilizziamo le funzioni print\n";

	caio.print();

	cout<<"\n\n";

	paolo.print();

	cout<<"\n\n";
}
