#pragma once
#include <string>

using namespace std;

class Ship
{
private:
	string name;
	string yearBuilt;
public:
	Ship(string name, string yearbuilt);
	void setName(string n);
	string getName();
	void setYearBuilt(string yB);
	string getYearBuilt();
	virtual void print();

};