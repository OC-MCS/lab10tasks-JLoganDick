#pragma once
#include "Ship.h"

using namespace std;

class CruiseShip : public Ship
{
private:
	int numOfPeople;

public:
	CruiseShip(int num, string n, string yB);
	int getNumOfPeople();
	void setNumOfPeople(int num);

};