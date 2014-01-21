#include<iostream>
#include<vector>

#include"persona.h"
#include"attore.h"
#include"film.h"

void Film::set_attori(Attore& a)
{
	Attore* ptr=&a;

	if(attori.size()<5)
	{
		attori.push_back(ptr);
	}
	else
	{
		std::cout<<"raggiunto il limite massimo di attori!\n";
	}
}
