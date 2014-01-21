#include<iostream>
#include"header"
using std::cout;
using std::cin;

void Nodo::set (int& i)
{
	valore=i;
}

int Nodo::get ()
{
	return(valore);
}

void create (char choice)
{
	if((choice=='d' && dx!=NULL) || (choice=='s' && sx!=NULL)) cout<<"i nodi sono già occupati, si prega di cancellarli\n"; 


	if(choice=='d')
	{
		if(dx==NULL) 
		{
			dx=new Nodo;
		}
	}
	else
	{
		if(sx==NULL)
		{
			sx=new Nodo;
		}
	}
}	
		
		
void delet (char choice&)
{
	if(choice=='s')
	{
		delete 
	
