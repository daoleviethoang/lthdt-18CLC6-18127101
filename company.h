#pragma once
#include "NVVP.h"
#include "NVSX.h"
#include "NVQL.h"

class Company
{
	NVQL nvql;
	NVSX nvsx;
	NVVP nvvp;
	vector<NVVP> listNVVP;
	int numNVVP;
	vector<NVSX> listNVSX;
	int numNVSX;
	vector<NVQL> listNVQL;
	int numNVQL;
public:
	Company();
	void input();
	void output();
	long double SumPayroll();
	void seachMaxSalary();
	int Max(int a, int b, int c);
	long double Max2(long double &a, long double b);
	long double Max4(long double a, long double b, long double c);
	int numberNVSX();
	int numberNVQL();
	~Company();
};
