#pragma once
#include "bee.h"
class ScoutBee :
	public bee
{
private:
	int howmuchinraduis;
	
	int radius;



public:
	ScoutBee() : howmuchinraduis(0),  radius(0) {};
	ScoutBee(int howmuchinraduis , int radius) : bee(lifeinday, hhoney) {};

	int getHowmuchinraduis();
	void setHowmuchinraduis(int howmuchinraduis);
	



	int getRadius();
	void setRadius(int Radius);
};

