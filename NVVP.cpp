#include "NVVP.h"
NVVP::NVVP()
{
	NumberOfWork = 0;
	Subsidize = 0;
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