#pragma once


#include <string>
using namespace std;
class bee
{

protected:
	int hhoney;
	int lifeinday;
public:
	bee() : lifeinday(0), hhoney(0) {};
	bee(int lifeinday, int honey) : lifeinday(lifeinday), hhoney(hhoney) {} ;
};

