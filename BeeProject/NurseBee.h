#pragma once
#include "bee.h"
class NurseBee :
	public bee
{
private:
	int royaljellyperday;



public:
	NurseBee() : royaljellyperday(0){};
	NurseBee(int Lifeinday) : royaljellyperday(royaljellyperday),  bee(lifeinday, hhoney) {};

	int getroyaljellyperday();
	void setroyaljellyperday(int royaljellyperday);


};

