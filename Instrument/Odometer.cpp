#include "Odometer.h" 
#include <iostream>

using namespace std;

Odometer::Odometer() {
	mileage = 0;
}

int Odometer::getMileage() {
	return mileage;
}

void Odometer::addMile(FuelGauge &f) {
	int fuelEconomy = 24;
	if(f.getGallons() > 0){
		if (mileage < 99999) {
			mileage += 1;
			if ((mileage % fuelEconomy) == 0) {
				f.decrementGallon();
			}
		}
		else {
			mileage = 0;
		}
	}
	else {
		cout << "you're out of fuel" << endl;
	}
}