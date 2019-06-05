#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
class Student
{
private:
	int code;
	int socialId;
	char *fullname;
	char *address;
	double gpa;
public:
	Student();
	Student(int code_temp, int socialId_temp, char* name, char* add, double gpa_temp);
	Student(const Student &st);
	Student &operator=(const Student &st);
	~Student();
	void input();
	void output();
};
Student::Student()
{
	code = 0;
	socialId = 0;
	fullname = new char[30];
	address = new char[30];
	gpa = 0;
}
Student::Student(int code_temp, int socialId_temp, char* name, char* add, double gpa_temp)
{
	code = code_temp;
	socialId = socialId_temp;
	fullname = name;
	address = add;
	gpa = gpa_temp;
}
Student::Student(const Student &st)
{
	code = st.code;
	socialId = st.socialId;
	fullname = st.fullname;
	address = st.address;
	gpa = st.gpa;
}
Student& Student::operator=(const Student &st)
{
	if (&st != this)
	{
		code = st.code;
		socialId = st.socialId;
		fullname = st.fullname;
		address = st.address;
		gpa = st.gpa;
	}
	return *this;
}
Student::~Student()
{
	delete[] fullname;
	delete[] address;
}
void Student::input()
{
	do
	{
		cout << "Enter Code: ";
		cin >> code;

	} while (code < 0 && cout << "Please re-enter Code > 0" << endl);
	do
	{
		cout << "Enter social ID: ";
		cin >> socialId;
	} while (socialId < 0 && cout << "Please re-enter social ID > 0" << endl);
	cout << "Enter Full Name: ";
	cin >> fullname;
	cout << "Enter address: ";
	cin >> address;
	do
	{
		cout << "Enter Gpa: ";
		cin >> gpa;

	} while (gpa < 0 && cout << "Please re-enter GPA > 0" << endl);
}
void Student::output()
{
	cout << "Code: " << code << endl;
	cout << "Social ID: " << socialId << endl;
	cout << "Full Name: " << fullname << endl;
	cout << "Address: " << address << endl;
	cout << "GPA: " << gpa << endl;
}
void main()
{
	Student st;
	Student st1;
	cout << "Create Student: " << endl;
	st.input();
	cout << endl;
	cout << "Background Student: " << endl;
	st.output();
	cout << endl;
	Student st_temp(st);
	cout << "Background Student copy constructor: " << endl;
	st_temp.output();
	cout << endl;
	st1 = st;
	cout << "Background Student operator(=): " << endl;
	st1.output();
	cout << endl;
	
	_getch();
}