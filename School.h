#ifndef sc
#define sc

#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
class School
{
private:
	string Name, Address, PhoneNo, DateFounding;
public:
	School();
	School(string Name);
	School(string Name, string Address);
	School(string Name, string Address, string PhoneNo);
	School(string Name, string Address, string PhoneNo, string DateFounding);
	void print();
	~School();
};
#endif