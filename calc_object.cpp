#include<iostream>
using namespace std;

class calcolatrice 
{
	float x,y;

	public:
	
	void set_values (int a, int b) {x=a; y=b;};

	float somma () { return(x+y);};

	float moltiplica () {return(x*y);};

	float dividi () {return(x/y);};

	float sottrai () {return(x-y);};
};

int main ()
{
	calcolatrice calculator;

	float a,b;

	char choice,operatore;

	cout<<"si desidera eseguire qualche operazione?\n";

	cin>>choice;

	while (choice=='y')
	{
		cout<<"che operazione si desidera fare?\n";

		cin>>operatore;

		cout<<"inserire i numeri\n";

		cin>>a>>b;

		calculator.set_values(a,b);

		switch (operatore)
		{
			case '+': cout<<"il valore della somma è: "<<calculator.somma()<<"\n";
				 break;

			case '*': cout<<"il valore della moltiplicazione è: "<<calculator.moltiplica()<<"\n";
				 break;

			case '/': cout<<"il valore della divisione è: "<<calculator.dividi()<<"\n";
				 break;

			case '-': cout<<"il valore della sottrazione è: "<<calculator.sottrai()<<"\n";
				 break;

			default: cout<<"è stato inserito un simbolo errato reinserire\n";
		}

		cout<<"si desidera eseguire un'altra operazione?\n";

		cin>>choice;
	}
}		
