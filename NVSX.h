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
	string getname();
	void input();
	void output();
	double Payroll();
};
