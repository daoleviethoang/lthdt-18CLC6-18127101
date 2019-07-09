#pragma once
#include<conio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Teacher
{
private:
	string ID;
	string Name;
	int CoefficientsSalary;
	long double Salary;
	int SomeHolidays;
public:
	Teacher();
	Teacher(string id);
	Teacher(string id, string name);
	Teacher(string id, string name, int coefficientsSalary);
	Teacher(string id, string name, int coefficientsSalary, long double salary);
	string getID();
	string getName();
	int getSomeHolidays();
	virtual void input();
	virtual void output();
	virtual long double Payroll();
};