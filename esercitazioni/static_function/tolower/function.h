#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

void count_low (string s)
{
	int a;

	for (char c: s)
	{
		if (isupper(c)!=0) a++;
	}
}

void lower (string &s)
{
	for (char &c: s)
	{
		if(isupper(c)!=0) 
		{
			tolower
