#include "Employee.h"



Employee::Employee(string eName, string eNum,string dateHired)
{
	name = eName;
	eNumber = eNum;
	hireDate = dateHired;
}

void Employee::setName(string n)
{
	name = n;
}
// getter function to return employee name
string Employee::getName()
{
	return name;
}

// mutator function to set employee number
void Employee::setNumber(string num)
{
	eNumber = num;
}
// getter function to return employee number
string Employee::getNumber()
{
	return eNumber;
}

// mutator function to set hire date
void Employee::setDate(string date)
{
	hireDate = date;
}
// getter function to return hire date
string Employee::getDate()
{
	return hireDate;
}


