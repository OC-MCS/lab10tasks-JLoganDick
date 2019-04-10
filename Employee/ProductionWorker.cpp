#include "ProductionWorker.h"


ProductionWorker::ProductionWorker(int shiftVal, double payRate, string name, string empNum, string date) : Employee(name,empNum, date)
{
	shift = shiftVal;
	hourlyPay = payRate;
}

void ProductionWorker::setShift(int shiftVal) {
	shift = shiftVal;
}
void ProductionWorker::setHourlyPay(double payRate) {
	hourlyPay = payRate;
}
int ProductionWorker::getShift() {
	return shift;
}
double ProductionWorker::getHourlyPay() {
	return hourlyPay;
}


