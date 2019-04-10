#include "CruiseShip.h"

CruiseShip::CruiseShip(int num, string n, string yB) : Ship(n, yB)
{
	numOfPeople = num;
}

int CruiseShip::getNumOfPeople() {
	return numOfPeople;
}

void CruiseShip::setNumOfPeople(int num) {
	numOfPeople = num;
}