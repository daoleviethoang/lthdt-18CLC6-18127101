#include "company.h"
void main()
{
	Company cp;
	cout << "_Create Employees_" << endl;
	cp.input();
	system("cls");
	cout << "_Information Employee_" << endl;
	cp.output();
	cout << "Sum Salary of Company: " << cp.SumPayroll() << fixed << endl;
	cp.seachMaxSalary();
	cout << "Number of management personnel: " << cp.numberNVSX() << fixed << endl;
	cout << "Number of production staff: " << cp.numberNVQL() << fixed<< endl;
	_getch();
	return;
}