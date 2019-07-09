#include "HomeroomTeacher.h"
HomeroomTeacher::HomeroomTeacher()
{
	NameClass = "";
	Allowance = 500000;
	YearStart = 0;
	YearEnd = 0;
}
HomeroomTeacher::HomeroomTeacher(string nameclass)
{
	NameClass = nameclass;
}
HomeroomTeacher::HomeroomTeacher(string nameclass, double allowance)
{
	NameClass = nameclass;
	Allowance = allowance;
}
HomeroomTeacher::HomeroomTeacher(string nameclass, double allowance, int yearstart)
{
	NameClass = nameclass;
	Allowance = allowance;
	YearStart = yearstart;
}

HomeroomTeacher::HomeroomTeacher(string nameclass, double allowance, int yearstart, int yearend)
{
	NameClass = nameclass;
	Allowance = allowance;
	YearStart = yearstart;
	YearEnd = yearend;
}
void HomeroomTeacher::input()
{
	Teacher::input();
	cin.get();
	cout << "Enter your class name: ";
	getline(cin, NameClass);
}
void HomeroomTeacher::output()
{
	cout << "Information Homeroom Teacher " << NameClass << endl;
	Teacher::output();
	cout << "Allowance: " << Allowance << endl;
}
long double HomeroomTeacher::Payroll()
{
	return Teacher::Payroll() + Allowance;
}