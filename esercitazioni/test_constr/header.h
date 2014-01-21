#include<iostream>
using std::endl;
using std::cout;


class Test 
{
	int ID;

  public:

	Test () {ID=0; cout<<"costruttore default"<<endl;}

	Test(int i) {ID=i; cout<<"costruttore per valore intero: "<<ID<<endl;}

	Test(const Test& r) { ID=r.ID; cout<<"costruttore per copia: "<<ID<<endl;}

	Test add (const Test& r) { Test t; t.ID=r.ID+ID; return (t);}

	~Test() {cout<<"distruttore: "<<ID<<endl;}
};


