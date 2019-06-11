#include "NVQL.h"
NVQL::NVQL()
{
	rankPosition = 0;
	Reward = 0;
}
NVQL::NVQL(double rankposition)
{
	rankPosition = rankposition;
}
NVQL::NVQL(char name[31], int yeartowork, double salary, double rankposition, double reward) :Employee(name, salary, yeartowork)
{
	this->rankPosition = rankposition;
	this->Reward = reward;
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
string NVQL::getname()
{
	return Employee::getname();
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
	Employee::output();
	cout << "Rank of Position: " << rankPosition << endl;
	cout << "Reward: " << Reward << endl;
}
double NVQL::Payroll()
{
	return Employee::Payroll()*rankPosition + Reward;
}