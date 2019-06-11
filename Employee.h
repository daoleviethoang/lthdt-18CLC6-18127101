#pragma once
#include<conio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Employee
{
private:
	char Name[31];
	int YearOfWork;
	double Salary;
public:
	Employee();
	Employee(char name[31]);
	Employee(char name[31], double salary);
	Employee(char name[31], double salary, int YearOfWork);
	Employee(const Employee &emp);
	string getname();
	void input();
	void output();
	double Payroll();
};