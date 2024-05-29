#pragma once
#include "bee.h"
class GuardBee :
	public bee
{
private:
	int atack;

	int howmuchhneyforatack;




public:
	GuardBee() : howmuchhneyforatack (0),  atack(0) {};
	GuardBee(int howmuchhneyforatack, int atack) : bee(lifeinday, hhoney) {};

	int getHowmuchinraduis();
	void setHowmuchinraduis(int howmuchinraduis);



	int getRadius();
	void setRadius(int Radius);
};


};

