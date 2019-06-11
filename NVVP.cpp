#include "NVVP.h"
NVVP::NVVP()
{
	NumberOfWork = 0;
	Subsidize = 0;
}
NVVP::NVVP(int numberofwork, double subsidize)
{
	NumberOfWork = numberofwork;
	Subsidize = subsidize;
}
NVVP::NVVP(char name[31], int yearofWork, double salary, int numberofwork, double subsidize) :Employee(name, yearofWork, salary)
{
	this->NumberOfWork = numberofwork;
	this->Subsidize = subsidize;
}
NVVP::NVVP(const NVVP &nvvp) : Employee(nvvp)
{
	this->NumberOfWork = nvvp.NumberOfWork;
	this->Subsidize = nvvp.Subsidize;
}
NVVP& NVVP::operator=(const NVVP &nvvp)
{
	if (this == &nvvp)
	{
		return *this;
	}
	Employee::operator = (nvvp);
	this->NumberOfWork = nvvp.NumberOfWork;
	this->Subsidize = nvvp.Subsidize;
	return *this;
}
string NVVP::getname()
{
	return Employee::getname();
}
void NVVP::input()
{
	Employee::input();
	do
	{
		cout << "Enter number of working days: ";
		cin >> NumberOfWork;
	} while (NumberOfWork < 0 && cout << "Please, Re-enter" << endl);
	do
	{
		cout << "Enter Subsidize: ";
		cin >> Subsidize;
	} while (Subsidize < 0 && cout << "Please, Re-enter" << endl);
}
void NVVP::output()
{
	Employee::output();
	cout << "Number of working days: " << NumberOfWork << endl;
	cout << "Subsidize: " << Subsidize << endl;
}
double NVVP::Payroll()
{
	return Employee::Payroll() + NumberOfWork * 100000 + Subsidize;
}