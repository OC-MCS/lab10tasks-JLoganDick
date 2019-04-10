#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
using namespace std;

// main code goes here
int main()
{
	FuelGauge f;
	Odometer o;
	for (int i = 0; i < 1; i++) {
		for (int x = 0; x < 17; x++) {
			f.refuel();
		}
		while (f.getGallons() > 0) {
			o.addMile(f);
			cout << "Mileage: " << o.getMileage() << " miles" << endl;
			cout << "Fuel: " << f.getGallons() << " gallons" << endl;
			cout << endl;
		}
	}
}

