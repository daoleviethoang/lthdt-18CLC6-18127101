#include "NVQL.h"
NVQL::NVQL()
{
	rankPosition = 0;
	Reward = 0;
}
NVQL::NVQL(const NVQL& nvql) : Employee(nvql)
{
	this->rankPosition = nvql.rankPosition;
	this->Reward = nvql.Reward;
}
NVQL& NVQL::operator=(NVQL& nvql)
{
	if (this == &nvql)
	{
		return *this;
	}
	Employee::operator=(nvql);
	this->rankPosition = nvql.rankPosition;
	this->Reward = nvql.Reward;
	return *this;
}
void NVQL::input()
{
	Employee::input();
	do
	{
		cout << "Enter rank of Position: ";
		cin >> rankPosition;
	} while (rankPosition < 0 && cout << "Please, Re-enter" << endl);
	do
	{
		cout << "Enter Reward: ";
		cin >> Reward;
	} while (Reward < 0 && cout << "Please, Re-enter" << endl);
}
void NVQL::output()
{
	cout << "\nNVQL" << endl;
	Employee::output();
	cout << "Rank of Position: " << rankPosition << endl;
	cout << "Reward: " << Reward << endl;
}
long double NVQL::Payroll()
{
	return Employee::Payroll()*rankPosition + Reward;
}