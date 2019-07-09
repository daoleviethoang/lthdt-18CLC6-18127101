#pragma once
#include "HomeroomTeacher.h"
class School
{
private:
	vector<Teacher *> TC;
	int numTeacher;
	int numHomeTeacher;
public:
	School();
	void input();
	void output();
	long double SumSalary();
	long double SeachMaxSalary();
	int NotHomeTeacher();
	int HomeTeacher();
	long double AverageSalary();
	void ListedTeacher();
	void SeachID();
	void SeachName();
	int NumTeacherAbsent();
};