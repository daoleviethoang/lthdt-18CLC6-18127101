#pragma once
#include<conio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Employee
{
private:
	string Name;
	int YearOfWork;
	double Salary;
public:
	Employee();
	Employee(const Employee &emp);
	string getname();
	virtual void input();
	virtual void output();
	virtual double Payroll();
};