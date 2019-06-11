#pragma once
#include "Employee.h"
class NVQL:public Employee
{
private:
	double rankPosition;
	double Reward;
public:
	NVQL();
	NVQL(double rankposition);
	NVQL(char name[31], int yeartowork, double salary, double rankposition, double reward);
	NVQL(const NVQL& nvql);
	NVQL& operator=(NVQL& nvql);
	string getname();
	void input();
	void output();
	double Payroll();
};
