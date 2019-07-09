#include "Teacher.h"
Teacher::Teacher()
{
	ID = "";
	Name = "";
	CoefficientsSalary = 0;
	Salary = 0;
	SomeHolidays = 0;
}
Teacher::Teacher(string id)
{
	ID = id;
}
Teacher::Teacher(string id, string name)
{
	ID = id;
	Name = name;
}
Teacher::Teacher(string id, string name, int coefficientsSalary)
{
	ID = id;
	Name = name;
	CoefficientsSalary = coefficientsSalary;
}
Teacher::Teacher(string id, string name, int coefficientsSalary, long double salary)
{
	ID = id;
	Name = name;
	CoefficientsSalary = coefficientsSalary;
	Salary = salary;
}
void Teacher::input()
{
	cout << "Enter ID: ";
	getline(cin, ID);
	cout << "Enter Name: ";
	getline(cin, Name);
	do
	{
		cout << "Enter Coefficiens Salary: ";
		cin >> CoefficientsSalary;
	} while (CoefficientsSalary < 0 && cout << "Please re-enter !!!" << endl);
	do
	{
		cout << "Enter Salary: ";
		cin >> Salary;
	} while (Salary < 0 && cout << "Please re-enter !!!" << endl);
	do
	{
		cout << "Enter Some Holidays: ";
		cin >> SomeHolidays;
	} while (SomeHolidays < 0 && cout << "Please re-enter !!!" << endl);
}
void Teacher::output()
{
	cout << "ID: " << ID.c_str() << endl;
	cout << "Name: " << Name.c_str() << endl;
	cout << "Coefficiens Salary: "<< CoefficientsSalary << endl;
	cout << "Salary: " << Salary << endl;
	cout << "Some Holidays: " << SomeHolidays << endl;
}
long double Teacher::Payroll()
{
	return CoefficientsSalary * Salary - SomeHolidays * 100000;
}
string Teacher::getID()
{
	return ID;
}
string Teacher::getName()
{
	return Name;
}
int Teacher::getSomeHolidays()
{
	return SomeHolidays;
}