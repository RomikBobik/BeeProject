#pragma once
#include "QueenBee.h"
#include "GuardBee.h"
#include "Drone.h"
#include "NurseBee.h"
#include "ScoutBee.h"
#include "BuilderBee.h"

class hive
{
private:
	bee* list;
	int number;
	string constactiontype;
	string material;
	double lenght;
	double weight;
	double heigh;

public:
	void add(bee bee);
	void remove(bee bee);

	
};

