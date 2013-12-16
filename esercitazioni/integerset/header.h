#include<iostream>
#define MAX_LENGHT 100
class Integerset 
{
	bool a[MAX_LENGHT];

  public:

	Integerset();

	Integerset(int*, int);

	Integerset U (const Integerset&);

	Integerset V (const Integerset&);

	void delet (int);

	void set (int);

	void print (const Integerset&);

	bool equal (const Integerset&);

	void stampa ();

};

int* vector_inizializer ();
