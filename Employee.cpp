#define _CRT_SECURE_NO_WARNINGS
#include"Employee.h"
Employee::Employee()
{
	string a = "Khong biet";
	Name = a;
	YearOfWork = 2011;
	Salary = 800000;
}
Employee::Employee(const Employee &emp)
{
	Name = emp.Name;
	YearOfWork = emp.YearOfWork;
	Salary = emp.Salary;
}
string Employee::getname()
{
	return Name;
}
void Employee::input()
{
	cout << "Enter Name: ";
	cin.ignore();
	getline(cin, Name);
	do
	{
		cout << "Enter Year to Work: ";
		cin >> YearOfWork;
	} while (YearOfWork < 0 && cout << "Please re-enter !!!" << endl);
	do
	{
		cout << "Enter Salary: ";
		cin >> Salary;
	} while (Salary < 0 && cout << "Please re-enter !!!" << endl);
}
void Employee::output()
{
	cout << "Name: " << Name << endl;
	cout << "Year to Work: " << YearOfWork << endl;
	cout << "Salary: " << Salary << endl;
}
double Employee::Payroll()
{
	return Salary;
}
