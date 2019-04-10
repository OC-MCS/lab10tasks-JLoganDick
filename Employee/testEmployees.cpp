// main goes here
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"


using namespace std;

int main() {
	ProductionWorker emp1(1, 12.00, "sam", "153240", "01/21/1999");

	cout << fixed << showpoint << setprecision(2);
	cout << "Employee Name: " << emp1.getName() << endl;
	cout << "Employee Number: " << emp1.getNumber() << endl;
	cout << "Employee Hourly Pay: $" << emp1.getHourlyPay() << endl;
	cout << "Employee Shift: " << emp1.getShift() << endl;
	cout << "Employee Hire Date: " << emp1.getDate() << endl;
	cout << endl;


	ShiftSupervisor super1("James", "111111", "16/12/2006", 87000, 10000);

	cout << "Employee Name: " << super1.getName() << endl;
	cout << "Employee Number: " << super1.getNumber() << endl;
	cout << "Employee salary: $" << super1.getSalary() << endl;
	cout << "Employee bonus:  $" << super1.getBonus() << endl;
	cout << "Employee Hire Date: " << super1.getDate() << endl;

	return 0;
}