#include<iostream>
#include"esame.h"
#include"persona.h"
#include"docente.h"
#include"studente.h"
#include"sstudente.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
	char choice;

	cout<<"si desidera creare una nuova classe esame?\n";

	cin>>choice;

	if(choice=='y')
	{

		Esame e1;

		Studente s1,s3;

		Dottore s2;

		e1.set_esame();

		cout<<"si crei per completezza dell'esame l'elemento docente\n";

		Docente d1;

		d1.set_docente();

		e1.set_docente(d1);

		cout<<"si desiderano creare studenti?\n";

		cin>>choice;

		if(choice=='y')
		{

			s1.set_studente();

			s3.set_studente();

			s2.set_dottore();

			cout<<"si desidera aggiungerli all'esame?\n";

			cin>>choice;

			if (choice=='y')
			{
				e1.add_students(s1);

				e1.add_students(s2);

				e1.add_students(s3);
			}
		}	

	int scelta;

	cout<<"si desidare avere informazioni sull'esame (1), sul docente(2) o sui studenti(3)?";

	cin>>scelta;

	switch (scelta)
		{
			case 2: d1.get_info();
				cout<<endl;
				break;
	
			case 3: s1.get_info();
				cout<<endl;

				s2.get_info();
				cout<<endl;
		
				s3.get_info();
				cout<<endl;
				break;

			case 1: e1.get_info();
				break;

			default: break;
		};

	};

}
