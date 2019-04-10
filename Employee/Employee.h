#pragma once
#include <string>

using namespace std;

class Employee
{
private:
	string name;
	string eNumber;
	string hireDate;

public:
	Employee(string name, string eNumber, string hireDate);
	void setName(string n);
	string getName();
	void setNumber(string num);
	string getNumber();
	void setDate(string date);
	string getDate();
};

