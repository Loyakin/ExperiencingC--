#ifndef GIOCATORE
#define GIOCATORE

#include<iostream>
#include<vector>
using std::vector;

class Giocatore
{
  protected:

	vector<int> sequenza[3];

	Giocatore* g;

  public:

	void set_avversario(Giocatore&);

	virtual void set_sequenza();

	virtual int moove ();

	int check_sequenza(vector<int> v[3]);

};

#endif
