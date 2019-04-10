#pragma once


class FuelGauge
{
private:
	int gallons;
public:
	FuelGauge();
	int getGallons();
	void decrementGallon();
	void refuel();
};

