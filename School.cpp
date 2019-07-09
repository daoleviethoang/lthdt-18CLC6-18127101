#include "School.h"
School::School()
{
	numTeacher = 0;
	numHomeTeacher = 0;
}
void School::input()
{
	int enter;
	cout << "1: Create Teacher" << endl;
	cout << "2: Create Homeroom Teacher" << endl;
	cout << "3: End" << endl;
	do
	{
		cout << " |*| Sellect of You: ";
		cin >> enter;
		cin.get();
		if (enter == 1)
		{
			Teacher *temp = new Teacher;
			temp->input();
			TC.push_back(temp);
			numTeacher++;
		}
		else if (enter == 2)
		{
			Teacher *temp = new HomeroomTeacher;
			temp->input();
			TC.push_back(temp);
			numHomeTeacher++;
		}
		else
		{
			cout << "Finish initializing" << endl;
			break;
		}
	} while (enter < 2 || enter >= 0 && cout << "\nContinue to initialize" << endl);
}
void School::output()
{
	cout << "List Teacher" << endl;
	for (int i = 0; i < TC.size(); i++)
	{
		cout << "Information Teacher" << endl;
		TC[i]->output();
	}
}
long double School::SumSalary()
{
	long double Sum = 0;
	for (int i = 0; i < TC.size(); i++)
	{
		Sum += TC[i]->Payroll();
	}
	return Sum;
}
long double School::SeachMaxSalary()
{
	long double Max = 0;
	for (int i = 0; i < TC.size(); i++)
	{
		if (TC[i]->Payroll() > Max)
		{
			Max = TC[i]->Payroll();
		}
	}
	return Max;
}
int School::NotHomeTeacher()
{
	return numTeacher;
}
int School::HomeTeacher()
{
	return numHomeTeacher;
}
long double School::AverageSalary()
{
	if (numTeacher == 0 && numHomeTeacher == 0)
	{
		return 0;
	}
	else
	{
		return SumSalary() / (numTeacher + numHomeTeacher);
	}
}
void School::ListedTeacher()
{
	int check = 0;
	for (int i = 0; i < TC.size(); i++)
	{
		if (TC[i]->Payroll() > 10000000)
		{
			TC[i]->output();
			check = 1;
		}
	}
	if (check == 0) cout << "Not found 404" << endl;
}
void School::SeachID()
{
	string id;
	int check = 0;
	cout << "Enter the ID you want to seach: ";
	getline(cin, id);
	for (int i = 0; i < TC.size(); i++)
	{
		if (TC[i]->getID() == id)
		{
			TC[i]->output();
			check = 1;
			break;
		}
	}
	if (check == 0) cout << "Not found 404" << endl;
}
void School::SeachName()
{
	string name;
	int check = 0;
	cout << "Enter the Name you want to seach: ";
	getline(cin, name);
	for (int i = 0; i < TC.size(); i++)
	{
		if (TC[i]->getName() == name)
		{
			TC[i]->output();
			check = 1;
			break;
		}
	}
	if (check == 0) cout << "Not found 404" << endl;
}
int School::NumTeacherAbsent()
{
	int index = 0;
	for (int i = 0; i < TC.size(); i++)
	{
		if (TC[i]->getSomeHolidays() > 4)
		{
			index++;
		}
	}
	if (index > 0)
	{
		return index;
	}
	else
	{
		return 0;
	}
}