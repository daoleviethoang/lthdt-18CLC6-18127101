#include "School.h"
School::School()
{
	Name = "";
	Address = "";
	PhoneNo = "";
	DateFounding = "";
}
School::School(string name)
{
	Name = name;
}
School::School(string Name, string Address)
{
	Name = "";
	Address = "";
}
School::School(string Name, string Address, string PhoneNo)
{
	Name = "";
	Address = "";
	PhoneNo = "";
}
School::School(string Name, string Address, string PhoneNo, string DateFounding)
{
	Name = "";
	Address = "";
	PhoneNo = "";
	DateFounding = "";
}
void School::print()
{
	cout << "*********************************" << endl;
	cout << "*         " << Name << "        *" << endl;
	cout << "*********************************" << endl;
}
School::~School()
{}

