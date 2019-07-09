#pragma once
#include "NVVP.h"
#include "NVSX.h"
#include "NVQL.h"

class Company
{
	vector<Employee *> epl;
	int numNVVP;
	int numNVSX;
	int numNVQL;
public:
	Company();
	void input();
	void output();
	long double SumPayroll();
	long double seachMaxSalary();
	int numberNVSX();
	int numberNVQL();
	long double AverageSalary();
	void ListedEpl();
	void seachEplID();
	void seachName();
	int seachBirthday();
	~Company();
};
