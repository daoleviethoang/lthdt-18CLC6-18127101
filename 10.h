#pragma once
#include<iostream>
#include<exception>
#include<string>
#include<conio.h>
#include<sstream>
#include<fstream>
#include<vector>
using namespace std;
class CourseEnrollmentException : public exception
{
private:
	string CourseID, CourseName;
	int maxStudents;
public:
	CourseEnrollmentException()
	{
		CourseID = "CTT006";
		CourseName = "LapTrinhHuongDoiTuong";
		maxStudents = 10;
	}
	const char* what() const throw()
	{
		stringstream sout;
		sout << "A student can not enroll to a course\n";
		return _strdup(sout.str().c_str());
	}
};