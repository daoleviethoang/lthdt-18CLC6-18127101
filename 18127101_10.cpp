#include "10.h"
void main()
{
	string ID, Name;
	int check = 0;
	vector<string> student;
	cout << "Course ID: ";
	cin >> ID;
	cout << "Course Name: ";
	cin >> Name;
	for (int i = 0; i < 11; i++)
	{
		stringstream scout;
		scout << "Student " << i + 1 << "" << endl;
		student.push_back(scout.str());
	}
	try
	{
		if (ID != "CTT006" && Name != "LapTrinhHuongDoiTuong" && student.size() > 10)
		{
			check = 1;
			throw CourseEnrollmentException();
		}
		else if (ID != "CTT006" && Name != "LapTrinhHuongDoiTuong")
		{
			check = 2;
			throw CourseEnrollmentException();
		}
		else if (ID != "CTT006")
		{
			check = 3;
			throw CourseEnrollmentException();
		}
		else if (Name != "LapTrinhHuongDoiTuong")
		{
			check = 4;
			throw CourseEnrollmentException();
		}
		else if (student.size() > 10)
		{
			check = 5;
			throw CourseEnrollmentException();
		}
		cout << "A student enroll to a course successfull" << endl;
	}
	catch (CourseEnrollmentException &course)
	{
		cout << course.what();
		if (check == 1)
		{
			cout << "Because: " << endl;
			cout << "" << ID << " are invalid " << endl;
			cout << "" << Name << " are invalid " << endl;
			cout << ""<< student.size() <<" Student in this course exceeds to maxStudents is 10..." << endl;

		}
		if (check == 2)
		{
			cout << "Because: " << endl;
			cout << "" << ID << " are invalid " << endl;
			cout << "" << Name << " are invalid " << endl;
		}
		if (check == 3)
		{
			cout << "Because: " << endl;
			cout << "" << ID << " are invalid " << endl;
		}
		if (check == 4)
		{
			cout << "Because: " << endl;
			cout << "" << Name << " are invalid " << endl;
		}
		if (check == 5)
		{
			cout << "Because: " << endl;
			cout << "" << student.size() << " Student in this course exceeds to maxStudents is 10..." << endl;
		}
	}
	cout << "\nEnd game" << endl;
	_getch();
}