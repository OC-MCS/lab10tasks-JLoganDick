#include "Ship.h"
#include <iostream>

string Ship::getName()
{
	return name;
}

void Ship::setName(string n)
{
	name = n;
}

// getter for bonus
string Ship::getYearBuilt()
{
	return yearBuilt;
}
// setter to set bonus
void Ship::setYearBuilt(string yB)
{
	yearBuilt = yB;
}

void Ship::print(){
	cout << name << endl;
	cout << yearBuilt << endl;
	cout << endl;
}