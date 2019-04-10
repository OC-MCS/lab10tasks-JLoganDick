#pragma once
#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
	double salary;
	double bonus;
public:
	ShiftSupervisor(string n, string num, string date, double sal, double bon);
	double getSalary();
	void setSalary(double sal);
	double getBonus();
	void setBonus(double bon);

};