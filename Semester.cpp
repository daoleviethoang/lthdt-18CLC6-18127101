#include "Semester.h"
Semester::Semester()
{
	Smt = "";
	StartDate = "";
	EndDate = "";
	AmountStu = "";
}
Semester::Semester(string smt)
{
	Smt = smt;
}
Semester::Semester(string Smt, string StartDate)
{
	Smt = "";
	StartDate = "";
}
Semester::Semester(string Smt, string StartDate, string EndDate)
{
	Smt = "";
	StartDate = "";
	EndDate = "";
}
Semester::Semester(string Smt, string StartDate, string EndDate, string AmountStu)
{
	Smt = "";
	StartDate = "";
	EndDate = "";
	AmountStu = "";
}
void Semester::print()
{
	cout << endl;
	cout << "____________ " << Smt << " ____________" << endl << endl;
}
Semester::~Semester()
{}