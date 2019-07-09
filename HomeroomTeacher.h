#pragma once
#include "Teacher.h"
class HomeroomTeacher:public Teacher
{
private:
	string NameClass;
	double Allowance;
	int YearStart;
	int YearEnd;
public:
	HomeroomTeacher();
	HomeroomTeacher(string nameclass);
	HomeroomTeacher(string nameclass, double allowance);
	HomeroomTeacher(string nameclass, double allowance, int yearstart);
	HomeroomTeacher(string nameclass, double allowance, int yearstart, int yearend);
	void input();
	void output();		
	long double Payroll();
};