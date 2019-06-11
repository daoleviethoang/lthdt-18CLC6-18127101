#pragma once
#include "Employee.h"

class NVSX:public Employee
{
private:
	int numberProduct;
public:
	NVSX();
	NVSX(int numberproduct);
	NVSX(char name[31], int yeartowork, double salary, int numbertoproduct);
	NVSX(const NVSX& nvsx);
	NVSX& operator=(const NVSX& nvsx);
	string getname();
	void input();
	void output();
	double Payroll();
};
