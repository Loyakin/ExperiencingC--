#include<iostream>

class Albero 
{
	class Nodo* node;

  public:

	Albero() {node=NULL;};

	Albero(const Nodo& n) {node=&n;};
}

class Nodo
{
	int valore;

	Nodo* dx;

	Nodo* sx;

   public:

	Nodo() {valore=0; dx=NULL; sx=NULL; };

	Nodo(int i) {valore=i; dx=NULL; sx=NULL; };

	void set (int&);

	int get (const Nodo&);

	void create (int& number);

	void delet (int& number);

	
}

	
