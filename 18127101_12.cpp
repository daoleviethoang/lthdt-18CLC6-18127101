#include "company.h"
void main()
{
	Company cp;
	cout << "_Create Employees_" << endl;
	cp.input();
	system("cls");
	cout << "_Information Employee_" << endl;
	cp.output();
	cout << "Sum Salary of Company: " << cp.SumPayroll() << endl;
	cp.seachEmployee();
	_getch();
	return;
}