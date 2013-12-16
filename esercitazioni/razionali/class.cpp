#include<iostream>
#include"header.h"
using namespace std;

Razionale::Razionale(int x, int y)
{
	num=x;

	div=y;
}

Razionale::Razionale()
{
	num=0;

	div=0;
}

void Razionale::semplifica ()
{
	int set;

	if(num>div) set=num;

	else set=div;

	for(;set!=1;set--)
	{
		if((num%set==0)&&(div%set==0))
		{
			num=num/set;

			div=div/set;
		}
	}
}

void Razionale::stampa ()
{
	cout<<"il numero richiesto ha valore: "<<num<<"/"<<div;
}

Razionale somma (Razionale r1, Razionale r2)
{
	Razionale ris;

	if(r1.div==r2.div)
	{
		ris.div=r1.div;

		ris.num=r1.num+r2.num;
	}
	else
	{
		ris.div=r1.div*r2.div;

		ris.num=(r2.div*r1.num)+(r1.div*r2.num);
	}

	return(ris);
}

Razionale sottrai (Razionale r1, Razionale r2)
{
        Razionale ris;
        
        if(r1.div==r2.div)
        {
                ris.div=r1.div;

                ris.num=r1.num-r2.num;
        }
        else
        {
                ris.div=r1.div*r2.div;

                ris.num=(r2.div*r1.num)-(r1.div*r2.num);
        }

	return(ris);
}

Razionale moltiplica (Razionale r1, Razionale r2)
{
	Razionale ris;

	ris.num=r1.num*r2.num;

	ris.div=r1.div*r2.div;

	return(ris);
}

Razionale dividi (Razionale r1, Razionale r2)
{
	Razionale ris;

	ris.num=r1.num*r2.div;

	ris.div=r1.div*r2.num;
}
	
	
