#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

void read (string s)
{
	bool a=0;

	for(char c : s)
	{
		if (isupper(c)!=0)  {cout<<"si sono presenti lettere maiuscole\n"; a=1; break;};
	}

	if (a==0) cout<<"non sono presenti lettere maiuscole\n";
}

void lowerize (string &s)
{
	for(char &c : s)
	{
		c=tolower(c);
	}
}
	 
