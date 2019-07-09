#define _CRT_SECURE_NO_WARNINGS
#include"Employee.h"
Employee::Employee()
{
	ID = "";
	Name = "Khong biet";
	YearOfWork = 2011;
	Salary = 800000;
	day = 0;
	month = 0;
	year = 0;
}
Employee::Employee(const Employee &emp)
{
	Name = emp.Name;
	YearOfWork = emp.YearOfWork;
	Salary = emp.Salary;
	ID = emp.ID;
}
string Employee::getID()
{
	return ID;
}
string Employee::getname()
{
	return Name;
}
void Employee::input()
{
	cout << "Enter ID: ";
	getline(cin, ID);
	cout << "Enter Name: ";
	getline(cin, Name);
	cout << "Birth day" << endl;
	cout << "  Day: ";
	cin >> day;
	cout << "  Month: ";
	cin >> month;
	cout << "  Year: ";
	cin >> year;
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
	cout << "ID: " << ID.c_str() << endl;
	cout << "Name: " << Name.c_str() << endl;
	cout << "Birthday: " << day << "/" << month << "/" << year << endl;
	cout << "Year to Work: " << YearOfWork << endl;
	cout << "Salary: " << Salary << endl;
}
long double Employee::Payroll()
{
	return Salary;
}
int Employee::getMonth()
{
	return month;
}
