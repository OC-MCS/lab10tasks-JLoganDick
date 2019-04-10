#pragma once
#include "Ship.h"

using namespace std;

class CargoShip : public Ship
{
private:
	int tonnage;

public:
	CargoShip(int num, string n, string yB);
	int getTonnage();
	void setTonnage(int num);

};