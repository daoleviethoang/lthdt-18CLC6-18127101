#include "Course.h"

Course::Course()
{
	ID = "";
	Name = "";
	LecToHour = "";
	PraToHour = "";
	semester = new Semester;
	numStudents = 0;
	maxStudents = 10;
}
Course::Course(string ID, string Name)
{
	ID = "";
	Name = "";
}
Course::Course(string ID, string Name, string LecToHour, string PracToHour)
{
	ID = "";
	Name = "";
	LecToHour = "";
	PraToHour = "";
}
Course::Course(string ID, string Name, string LecToHour, string PracToHour, Semester* semester)
{
	ID = "";
	Name = "";
	LecToHour = "";
	PraToHour = "";
	semester = new Semester;
}
Course::Course(string ID, string Name, string LecToHour, string PracToHour, Semester* semester, int numStudents, int maxStudents)
{
	ID = "";
	Name = "";
	LecToHour = "";
	PraToHour = "";
	semester = new Semester;
	numStudents = 0;
	maxStudents = 0;
}
int Course::getnumStudents()
{
	return numStudents;
}
int Course::getmaxStudents()
{
	return maxStudents;
}
string Course::getID()
{
	return ID;
}
void Course::createCourse()
{
	cout << "Enter ID: ";
	cin >> ID;
	cin.get();
	cout << "Enter Name: ";
	getline(cin, Name);
	cout << "Enter LecToHour: ";
	getline(cin, LecToHour);
	cout << "Enter PraToHour: ";
	getline(cin, PraToHour);
}
void Course::print()
{
	cout << "ID: " << ID << endl;
	cout << "Name: " << Name << endl;
	cout << "LecToHour: " << LecToHour << endl;
	cout << "PraToHour: " << PraToHour << endl;
}
Course::~Course()
{}