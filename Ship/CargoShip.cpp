#include "CargoShip.h"

CargoShip::CargoShip(int num, string n, string yB) : Ship(n, yB)
{
	tonnage = num;
}

int CargoShip::getTonnage() {
	return tonnage;
}

void CargoShip::setTonnage(int num) {
	tonnage = num;
}