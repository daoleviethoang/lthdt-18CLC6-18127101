#pragma once
#include "Employee.h"

class NVSX :public Employee
{
private:
	int numberProduct;
public:
	NVSX();
	NVSX(const NVSX& nvsx);
	NVSX& operator=(const NVSX& nvsx);
	void input();
	void output();
	long double Payroll();
};
