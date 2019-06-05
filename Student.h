#ifndef st
#define st

#include "School.h"
#include "Course.h"
class Student
{
private:
	string Name, ID;
	School *school;
	vector<Course*> enrolledCourses;
	int NumCourse;
public:
	Student();
	Student(School *school);
	Student(School *school, string Name);
	Student(School *school, string Name, string ID);
	Student(School *school, string Name, string ID, int NumCourse);
	void createSt();
	int enroll(Course *cs); //check numSt exceeds maxSt
	void print();
	~Student();
};
#endif