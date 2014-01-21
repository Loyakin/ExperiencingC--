#ifndef GIOCATORE
#define GIOCATORE

#include<iostream>
#include<vector>
using std::vector;

class Giocatore
{
  protected:

	vector<int> sequenza;

	Giocatore* g;

  public:

	Giocatore() {};

	void set_avversario(Giocatore&);

	virtual void set_sequenza();

	virtual int moove ();

	int check_sequenza(vector<int> v);

};

#endif
