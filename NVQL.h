#pragma once
#include "Employee.h"
class NVQL :public Employee
{
private:
	double rankPosition;
	double Reward;
public:
	NVQL();
	NVQL(const NVQL& nvql);
	NVQL& operator=(NVQL& nvql);
	void input();
	void output();
	long double Payroll();
};
