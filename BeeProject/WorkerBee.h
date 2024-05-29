#pragma once
#include "bee.h"
class WorkerBee :
	public bee
{

private:

	string type;
	int radius;


public:
public:
	WorkerBee() : type("" ) , radius(0) {};
	WorkerBee(string  type, int radius) : type(type) , radius(radius) , bee(lifeinday, hhoney) {};


	
	string type();
	void setType(string type);
	
	int getRadius();
	void setRadius(int Radius);

};

