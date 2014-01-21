#include<iostream>
#include<vector>
#include<string>
using namespace std;

void converting (long seconds, vector<long> result)
{
	long temp;

	int c=0;

	vector<string> stampa{"secondi","ore","giorni","settimane"};

	vector<long long> converting{60,(60*60),(60*60*24),(60*60*34*7)};

	auto i=converting.begin();

	auto end=converting.end();

	auto a=result.begin();

	while((seconds/(*i)==0)) {i++; a++;}

	for(;i!=end;i++,a++)
	{
		*a=seconds%(*i);
	}

	for (long i:result)
	{
		cout<<stampa[c]<<" "<<i<<" ";

		c++;

	}


}

int main ()
{
	vector<long> result(4);

	long number;

	cout<<"inserire il numero di secondi trascorsi\n";

	cin>>number;

	converting(number,result);

	cout<<"il risultato è il seguente\n";

	cout<<"\n";

}
	

