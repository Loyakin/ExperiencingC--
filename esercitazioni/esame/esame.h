#ifndef ESAME
#define ESAME

#include<iostream>
#include<vector>
#include"studente.h"
#include"docente.h"
#include"sstudente.h"
using std::string;

class Esame
{
  protected:

	string nome;

	string data;

	std::vector<Studente*> iscritti;

	Docente* prof;

  public:

	Esame(): nome(""), data(""), prof(NULL) {}

	void set_esame();

	void set_docente(Docente&);

	void get_info();

	void add_students(Studente&);

};


#endif
