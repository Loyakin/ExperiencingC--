#include<iostream>
#include<vector>
#include"giocatore.h"
#include"umano.h"
#include"computer.h"
using std::vector;

void Giocatore::set_avversario(Giocatore& p)
{
	g=&p;
}	

int Giocatore::check_sequenza(vector<int> v)
{
	//qui eccoci nella funzione check sequenza abbiamo due variabili: num_pos -> numeri nella posizione giusta
	//e num -> numeri semplicemente presenti nella stringa 

	int  num_pos=0;

	int num=0;

	for(int i=0; i!=v.size(); i++)
	{
		for(int j=0; j!=sequenza.size(); j++)
		{

		//pertanto se il valore del vettore di prova è uguale al valore del vettore sequenza si
		// incrementa: num_pos se i due indici sono uguali, num altrimenti


			if(v.at(i)==sequenza.at(j))
			{
				if(j==i) num_pos++;
				else num++;
			}
		}
	}

	//alla fine del ciclo verifichiamo se le cifre al psoto giusto siano 3 (nel qual caso il giocatore avrebbe
	//indovinato tutte le cifre e quindi vinto (che corrisponde a restituire 1 oppure restituiamo 0 che corrisponde
	//alla non vittoria

	if(num_pos==3) return (1);
	else return(0);
}
