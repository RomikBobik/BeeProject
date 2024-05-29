#pragma once
#include "bee.h"
#include <string>
class QueenBee :
	public bee
{
private:
	string  size;
	int Egginday;


public:
	QueenBee() : size(" "), Egginday(0) {};
	QueenBee(string size, int egginday) : size(size), Egginday(egginday), bee(lifeinday, hhoney) {};

	string getSize();
	void setSize(string size);

	int getEgginday();
	void getEgginday(int egginday);

};

