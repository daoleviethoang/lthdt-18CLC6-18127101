#ifndef ss
#define ss

#include "School.h"
class Semester
{
private:
	string Smt, StartDate, EndDate, AmountStu;


public:
	Semester();
	Semester(string Smt);
	Semester(string Smt, string StartDate);
	Semester(string Smt, string StartDate, string EndDate);
	Semester(string Smt, string StartDate, string EndDate, string AmountStu);
	void createSmt();
	void print();
	~Semester();
};
#endif