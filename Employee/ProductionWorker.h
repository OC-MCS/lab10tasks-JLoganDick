#pragma once
#include "Employee.h"

class ProductionWorker :public Employee
{
private:
	int shift;
	double hourlyPay;
public:
	ProductionWorker(int shiftVal, double payRate, string name, string EmpNum, string date);
	void setShift(int shiftVal);
	void setHourlyPay(double payRate);
	int getShift();
	double getHourlyPay();
};

