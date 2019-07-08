#define _CRT_SECURE_NO_WARNINGS
#include"Employee.h"
Employee::Employee()
{
	char a[31] = "Khong biet";
	strcpy(Name, a);
	YearOfWork = 2011;
	Salary = 800000;
}
Employee::Employee(char name[31])
{
	strcpy(Name, name);
	YearOfWork = 2011;
	Salary = 800000;
}
Employee::Employee(char name[31], double salary)
{
	strcpy(Name, name);
	YearOfWork = 2011;
	Salary = salary;
}
Employee::Employee(char name[31], double salary, int yearofwork)
{
	strcpy(Name, name);
	YearOfWork = yearofwork;
	Salary = salary;
}
Employee::Employee(const Employee &emp)
{
	strcpy(Name, emp.Name);
	YearOfWork = emp.YearOfWork;
	Salary = emp.Salary;
}
void Employee::input()
{
	cout << "Enter Name: ";
	cin.ignore();
	cin.getline(Name, 31);
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
