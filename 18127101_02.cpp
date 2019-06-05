#include "School.h"
#include "Course.h"
#include "Semester.h"
#include "Student.h"

void main()
{
	School* school = new School("VNU - HCMUS");
	school->print();
	Semester* sem = new Semester("SEMESTER III");
	sem->print();
	cout << "Create Course" << endl << endl;
	Course* courses1 = new Course;
	courses1->createCourse();
	Course* courses2 = new Course;
	courses2->createCourse();
	Course* courses3 = new Course;
	courses3->createCourse();
	Course* courses4 = new Course;
	courses4->createCourse();
	Course* courses5 = new Course;
	courses5->createCourse();
	Course* courses6 = new Course;
	courses6->createCourse();
	system("cls");
	cout << "Create Student" << endl << endl;
	Student stud;
	stud.createSt();
	stud.enroll(courses1);
	stud.enroll(courses2);
	stud.enroll(courses3);
	stud.enroll(courses4);
	stud.enroll(courses5);
	stud.enroll(courses6);
	system("cls");
	cout << "Backgroud Student" << endl << endl;
	stud.print();
	delete school;
	delete sem;
	delete courses1;
	delete courses2;
	delete courses3;
	delete courses4;
	delete courses5;
	delete courses6;
	_getch();
}