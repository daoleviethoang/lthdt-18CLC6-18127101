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
	void seachEmployee();
	int Max(int a, int b, int c);
	~Company();
};
