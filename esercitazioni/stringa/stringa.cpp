#include<iostream>
#include<string>
#include"function.h"
#include"header.h"
using namespace std;

int main()
{
	string s;

	cout<<"inserire la stringa\n";

	getline(cin,s);

	read(s);

	lowerize(s);

	cout<<"la nuova stringa dopo la modifica è la seguente: \n"<<s;

}
