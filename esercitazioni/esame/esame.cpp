#include<iostream>
#include"studente.h"
#include"sstudente.h"
#include"docente.h"
#include"esame.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;

void Esame::set_esame()
{
	cout<<"inserire qui di seguito il nome e la data dell'esame stesso\n";

	cin>>nome>>data;
}

void Esame::set_docente(Docente& d)
{
	prof=&d;
}

void Esame::get_info()
{
	string n=prof->get_nome();

	cout<<"L'esame è il seguente:"<<endl<<"MATERIA: "<<nome<<endl<<"DATA: "<<data<<endl<<"DOCENTE:  "<<n<<endl;
}

void Esame::add_students (Studente& s)
{
	if(iscritti.size()<200)
	{
		Studente* ptr=&s;

		iscritti.push_back(ptr);
	}
	else
	{
		cout<<"raggiunto limite di prenotazioni!\n";
	}
}
