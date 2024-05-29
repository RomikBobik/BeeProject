#pragma once
#include "bee.h"
class BuilderBee :
	public bee
{
private:
	int howmuchhoneyinradius;

public:
	BuilderBee() : howmuchhoneyinradius(0) {};
	BuilderBee(int howmuchhoneyinradius) : bee(lifeinday, hhoney) {};

	int getHowmuchinraduis();
	void setHowmuchinraduis(int howmuchinraduis);

};

