#include "Student.h"
Student::Student()
{
	Name = "";
	ID = "";
	school = new School;
	NumCourse = 0;
}
Student::Student(School *school)
{
	school = new School;
}
Student::Student(School *school, string Name)
{
	school = new School;
	Name = "";
}
Student::Student(School *school, string Name, string ID)
{
	Name = "";
	school = new School;
	ID = "";
}
Student::Student(School *school, string Name, string ID, int NumCourse)
{
	Name = "";
	ID = "";
	school = new School;
	NumCourse = 0;
}
void Student::createSt()
{
	cout << "Enter Name: ";
	getline(cin, Name);
	cout << "Enter ID: ";
	cin >> ID;
}
int Student::enroll(Course * cs)
{
	int check = 0;
	for (int i = 0; i < NumCourse; i++)
	{
		if (enrolledCourses[i]->getID() == cs->getID())
			check = 1;
	}
	if (cs->getnumStudents() == cs->getmaxStudents() || check == 1 || NumCourse == 6)
		return 0;
	else
	{
		enrolledCourses.push_back(cs);
		NumCourse++;
	}
	return 1;
}
void Student::print()
{
	cout << "Name: " << Name << endl;
	cout << "ID: " << ID << endl << endl;
	
	cout << "Course Of Student" << endl;
	cout << "----------------------" << endl;
	for (int i = 0; i < NumCourse; i++)
	{
		cout << "Course " << i + 1 << ": " << endl;
		enrolledCourses[i]->print();
		cout << "----------------------" << endl;
	}
}
Student::~Student()
{}