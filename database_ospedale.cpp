#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct patience
{
	string nome;

	string indirizzo;

	string nascita;

	char genere;

	string ingresso;

	string uscita;

	string malattia;

};

patience* inizialize (void)
{
	patience a;

	patience* b=&a;

	cout<<"inserire il nome";

	getline(cin,a.nome);

	cout<<"inserire l'indirizzo\n";

	getline(cin,a.indirizzo);

	cout<<"inserire la data di nascita (gg/mm/nn)\n";

	getline(cin,a.nascita);

	cout<<"inserire genere (M o F)\n";

	cin>>a.genere;

	cout<<"inserire data di ingresso (gg/mm/nn)\n";

	getline(cin,a.ingresso);

	cout<<"inserire data d'uscita (gg/mm/nn)\n";

	getline(cin,a.uscita);

	cout<<"inserire malattia\n";

	getline(cin,a.malattia);

	return (b);
}

int main ()
{
	char responce;

	string day;

	patience* a;
	
	vector<patience> s;

	cout<<"si desidera inserire un nuovo paziente?\n";

	cin>>responce;

	while (responce=='y')
	{
		a=inizialize;

		s.push_back(*a);

		cout<<"si desidera inserire un nuovo paziente?\n";

		cin>>responce;

	}

	cout<<"inserire il giorno su cui si desidera effettuare la ricerca\n";

	getline(cin,day);

	cout<<"qui di seguito l'elenco dei pazienti ricoverati quel giorno\n";

	for(patience* i:s)
	{
		if (i->ingresso==day) {cout<<i->nome;};
	}

	cout<<"\n";
}
	
