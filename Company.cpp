#include "company.h"
Company::Company()
{
	int numNVVP = 0;
	int numNVSX = 0;
	int numNVQL = 0;
}
void Company::input()
{
	int slt = 0;
	cout << "1: Create NVVP" << endl;
	cout << "2: Create NVSX" << endl;
	cout << "3: Create NVQL" << endl;
	cout << "4: End" << endl;
	do
	{
		cout << "Sellect of You: ";
		cin >> slt;
		cin.get();
		if(slt == 1)
		{
			Employee *temp = new NVVP;
			temp->input();
			epl.push_back(temp);
			numNVVP++;
		}
		else if(slt == 2)
		{
			Employee *temp = new NVSX;
			temp->input();
			epl.push_back(temp);
			numNVSX++;
		}
		else if(slt == 3)
		{
			Employee *temp = new NVQL;
			temp->input();
			epl.push_back(temp);
			numNVQL++;
		}
		else
		{
			cout << "Finish initializing" << endl;
			break;
		}
	} while (slt < 3 || slt >= 0 && cout << "\nContinue to initialize" << endl);
}
void Company::output()
{
	cout << "List Employee: " << endl;
	for (int i = 0; i < epl.size(); i++)
	{
		cout << "Information Employee "<< endl;
		epl[i]->output();
	}
}
long double Company::SumPayroll()
{
	long double Sum = 0;
	for (int i = 0; i < epl.size(); i++)
	{
		Sum += epl[i]->Payroll();
	}
	return Sum;
}
long double Company::seachMaxSalary()
{
	long double Max = 0;
	for (int i = 0; i < epl.size(); i++)
	{
		if (epl[i]->Payroll() > Max)
		{
			Max = epl[i]->Payroll();
		}
	}
	return Max;
}
int Company::numberNVSX()
{
	return numNVSX;
}
int Company::numberNVQL()
{
	return numNVQL;
}
long double Company::AverageSalary()
{
	if (numNVQL == 0 && numNVSX == 0 && numNVVP == 0)
	{
		cout << "No staff has been created yet" << endl;

	}
	else
	{
		return (SumPayroll() / (numNVVP + numNVSX + numNVQL));
	}
}
void Company::ListedEpl()
{
	int check = 0;
	for (int i = 0; i < epl.size(); i++)
	{
		if (epl[i]->Payroll() < 3000000)
		{
			epl[i]->output();
			check = 1;
		}
	}
	if (check == 0) cout << "Not found 404" << endl;
}
void Company::seachEplID()
{
	string ID;
	int check = 0;
	cout << "Enter the ID you want to find: ";
	getline(cin, ID);
	for (int i = 0; i < epl.size(); i++)
	{
		if (ID == epl[i]->getID())
		{
			epl[i]->output();
			check = 1;
		}
	}
	if (check == 0) cout << "Not found 404" << endl;
}
void Company::seachName()
{
	string name;
	int check = 0;
	cout << "Enter the Name you want to find: ";
	getline(cin, name);
	for (int i = 0; i < epl.size(); i++)
	{
		if (epl[i]->getname() == name)
		{
			check = 1;
			epl[i]->output();
		}
	}
	if (check == 0) cout << "Not found 404" << endl;
}
int Company::seachBirthday()
{
	int index = 0;
	for (int i = 0; i < epl.size(); i++)
	{
		if (epl[i]->getMonth() == 5)
		{
			index++;
		}
	}
	return index;
}
Company::~Company()
{}