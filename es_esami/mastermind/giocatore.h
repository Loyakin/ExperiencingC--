#ifndef GIOCATORE
#define GIOCATORE

#include<iostream>
#include<vector>
using std::vector;

class Giocatore
{
  protected:

	//ogni giocatore avrà una sequenza propria e un puntatore all'avversario al fine di poter invocare il metodo 
	//check_sequenza qui di sotto

	vector<int> sequenza;

	Giocatore* g;	

  public:

	Giocatore(): g(NULL) {};

	void set_avversario(Giocatore&);

	virtual void set_sequenza();

	virtual int moove ();

	int check_sequenza(vector<int> v);

};

#endif
