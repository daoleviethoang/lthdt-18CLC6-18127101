#ifndef cr
#define cr

#include "Semester.h"
class Course
{
private:
	string ID, Name, LecToHour, PraToHour;
	Semester* semester;
	int numStudents, maxStudents;
public:
	Course();
	Course(string ID, string Name);
	Course(string ID, string Name, string LecToHour, string PracToHour);
	Course(string ID, string Name, string LecToHour, string PracToHour, Semester* semester);
	Course(string ID, string Name, string LecToHour, string PracToHour, Semester* semester, int numStudents, int maxStudents);
	int getnumStudents();
	int getmaxStudents();
	string getID	();
	void createCourse();
	void print();
	~Course();
};
#endif