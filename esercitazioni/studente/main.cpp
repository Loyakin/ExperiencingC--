#include<iostream>
#include"header.h"
using namespace std;

int main()
{
	string nome, cognome, data;

	long matricola;

	char choice;

	cin<<"inserire nome cognome e data di uno studente\n";

	getline(cin, nome);

	getline(cin, cognome);

	getline(cin, data);
	
	cout<<"inseririe la matricola\n";

	cin>>matricola;

	Studente s1(nome, cognome, data, matricola);

	cout<<"si desideranpo cambiare i dati inseriti?\n;

	cin>>choice;

	while (choice=='y')
	{
		cout<<"reinserire i dati\n";

		getline(cin,nome);

		getline(cin,cognome);

		getline(cin,data);

		cin>>matricola;

		s1.set(nome,cognome,data,matricola);

		cout<<"ecco la nuova versione dello studente:\n";

		s1.stampa()<<endl;

		cout<<"si desidera cambiare nuovamente i dati?\n";

		cin>>choice;
	}

	cout<<"si desidera vedere qualche valore?\n";

	cin>>choice;

	while (choice=='y')
	{
		cout<<"quale dei valori si desidera visualizzare?\n";

		cinn>>choice;

		switch (choice)
		{

			case 'n' : s1.get_nome();

				   break;

			case 'c' : s1.get_cognome();

				   break;

			case 'd' : s1.get_data();

				   break;

			case 'm' : s1.get_matricola();

				   break;

			default  : cout<<"inserita scelta errata si prega di reinserire\n";
		}

		cout<<"si desidera ottenere un nuovo valore?\n";

		cin>>choice;

	}
}
