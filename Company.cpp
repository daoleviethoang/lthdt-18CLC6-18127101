#include "company.h"
Company::Company()
{
	numNVVP = 0;
	numNVSX = 0;
	numNVQL = 0;
}
void Company::input()
{
	cout << "Enter amount NVVP: ";
	cin >> numNVVP;
	for (int i = 0; i < numNVVP; i++)
	{
		listNVVP.push_back(nvvp);
		listNVVP[i].input();
	}
	cout << "Enter amount NVSX: ";
	cin >> numNVSX;
	for (int i = 0; i < numNVSX; i++)
	{
		listNVSX.push_back(nvsx);
		listNVSX[i].input();
	}
	cout << "Enter amount NVQL: ";
	cin >> numNVQL;
	for (int i = 0; i < numNVQL; i++)
	{
		listNVQL.push_back(nvql);
		listNVQL[i].input();
	}
}
void Company::output()
{
	int i = 0;
	cout << "List NVVP: " << endl;
	for (int i = 0; i < listNVVP.size(); i++)
	{
		cout << "Information NVVP " << i << "" << endl;
		listNVVP[i].output();
	}
}
long double Company::SumPayroll()
{
	return nvvp.Payroll() + nvsx.Payroll() + nvql.Payroll();
}
int Company::Max(int a, int b, int c)
{
	int max = 0;
	if (a > b && a > c) max = a;
	if (b > a && b > c) max = b;
	if (c > a && c > b) max = c;
	return max;
}
void Company::seachEmployee()
{
	string employee;
	cout << "Enter Full Name You want to seach: ";
	cin >> employee;
	for (int i = 0; i < Max(listNVQL.size(), listNVSX.size(), listNVVP.size()); i++)
	{
		if (employee == listNVQL[i].getname())
		{
			cout << "Found employee Successfull" << endl;
			cout << "Information of Employee" << endl;
			listNVQL[i].output();
			break;
		}
		else if (employee == listNVSX[i].getname())
		{
			cout << "Found employee Successfull" << endl;
			cout << "Information of Employee" << endl;
			listNVSX[i].output();
			break;
		}
		else if (employee == listNVVP[i].getname())
		{
			cout << "Found employee Successfull" << endl;
			cout << "Information of Employee" << endl;
			listNVVP[i].output();
			break;
		}
	}
}
Company::~Company()
{}