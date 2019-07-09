#include "company.h"
void main()
{
	Company cp;
	cout << "_Create Employees_" << endl;
	cp.input();
	system("cls");
	cout << "_Information Employee_" << endl;
	cp.output();
	cout << "--------------------------" << endl;
	cout << "Sum Salary of Company: " << cp.SumPayroll() << fixed << endl;
	cout << "--------------------------" << endl;
	cout << "Max Salary of Company: "<< cp.seachMaxSalary() << endl;
	cout << "--------------------------" << endl;
	cout << "Number of management personnel: " << cp.numberNVSX() << fixed << endl;
	cout << "--------------------------" << endl;
	cout << "Number of production staff: " << cp.numberNVQL() << fixed<< endl;
	cout << "--------------------------" << endl;
	cout << "Average Salary of Company: " << cp.AverageSalary() << fixed << endl;
	cout << "--------------------------" << endl;
	cout << "List of employees with wages less than 3000000";
	cp.ListedEpl();
	cout << "--------------------------" << endl;
	cp.seachEplID();
	cout << "--------------------------" << endl;
	cp.seachName();
	cout << "--------------------------" << endl;
	cout << "Number of employees born in May: " << cp.seachBirthday() << endl;
	_getch();
	return;
}