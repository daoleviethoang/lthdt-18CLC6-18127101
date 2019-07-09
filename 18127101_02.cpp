#include "School.h"
void main()
{
	School sch;
	cout << "_Create Teacher_" << endl;
	sch.input();
	system("cls");
	cout << "_Information Teacher_" << endl;
	sch.output();
	cout << "--------------------------" << endl;
	cout << "Sum Salary of School: " << sch.SumSalary() << fixed << endl;
	cout << "--------------------------" << endl;
	cout << "Max Salary of School: " << sch.SeachMaxSalary() << fixed << endl;
	cout << "--------------------------" << endl;
	cout << "Number of Teacher: " << sch.NotHomeTeacher() << endl;
	cout << "--------------------------" << endl;
	cout << "Number of Homeroom Teacher: " << sch.HomeTeacher() << endl;
	cout << "--------------------------" << endl;
	cout << "List of teachers with salary above 10000000: " << endl;
	sch.ListedTeacher();
	cout << "--------------------------" << endl;
	sch.SeachID();
	cout << "--------------------------" << endl;
	sch.SeachName();
	cout << "--------------------------" << endl;
	cout << "Number of teachers taking more than 4 days a month: " << sch.NumTeacherAbsent() << endl;
	_getch();

}