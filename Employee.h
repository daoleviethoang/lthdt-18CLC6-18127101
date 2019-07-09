#pragma once
#include<conio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Employee
{
private:
	string ID;
	string Name;
	int day, month, year;
	int YearOfWork;
	long double Salary;
public:
	Employee();
	Employee(const Employee &emp);
	string getname();
	string getID();
	int getMonth();
	virtual void input();
	virtual void output();
	virtual long double Payroll() = 0;
};