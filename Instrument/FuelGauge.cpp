#include "FuelGauge.h"
#include <iostream>

using namespace std;

FuelGauge::FuelGauge() {
	gallons = 0;
}

int FuelGauge::getGallons() {
	return gallons;
}

void FuelGauge::decrementGallon() {
	if (gallons > 0) {
		gallons -= 1;
	}
	else {
		cout << "refuel to drive farther" << endl;
	}
}

void FuelGauge::refuel() {
	if (gallons < 15) {
		gallons += 1;
	}
	else {
		cout << "car already full" << endl;
	}
}
