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
long double Company::Max4(long double a, long double b, long double c)
{
	int max = 0;
	if (a > b && a > c) max = a;
	if (b > a && b > c) max = b;
	if (c > a && c > b) max = c;
	return max;
}
long double Company::Max2(long double &max, long double a)
{
	if (a > max)
	{
		max = a;
	}
	return max;
}
void Company::seachMaxSalary()
{
	long double max = 0;
	long double max1 = 0, max2 = 0, max3 = 0, max4 = 0;
	for (int i = 0; i < listNVQL.size(); i++)
	{
		max1 = Max2(max, listNVQL[i].Payroll());
	}
	for (int i = 0; i < listNVSX.size(); i++)
	{
		max2 = Max2(max, listNVSX[i].Payroll());
	}
	for (int i = 0; i < listNVVP.size(); i++)
	{
		max3 = Max2(max, listNVVP[i].Payroll());
	}
	max4 = Max4(max1, max2, max3);
	for (int i = 0; i < Max(listNVQL.size(), listNVSX.size(), listNVVP.size()); i++)
	{
		if (max4 == listNVQL[i].Payroll())
		{
			cout << "Found employee Successfull" << endl;
			cout << "Information of Employee" << endl;
			listNVQL[i].output();
			break;
		}
		else if (max4 == listNVSX[i].Payroll())
		{
			cout << "Found employee Successfull" << endl;
			cout << "Information of Employee" << endl;
			listNVSX[i].output();
			break;
		}
		else if (max4 == listNVVP[i].Payroll())
		{
			cout << "Found employee Successfull" << endl;
			cout << "Information of Employee" << endl;
			listNVVP[i].output();
			break;
		}
	}
}
int Company::numberNVSX()
{
	return listNVSX.size();
}
int Company::numberNVQL()
{
	return listNVQL.size();
}
Company::~Company()
{}