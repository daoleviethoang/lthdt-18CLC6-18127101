#pragma once
#include<iostream>
#include<exception>
#include<string>
#include<conio.h>
#include<sstream>
#include<fstream>
#include<vector>
using namespace std;
class IntegerFormatException:public exception
{
private:
	string m_String;
public:
	IntegerFormatException(string m_String)
	{
		this->m_String = m_String;
	}
	int CheckConvertedInteger()
	{
		int a;
		a = atoi(m_String.c_str());
		return a;
	}
	bool CheckConvertedThisType()
	{
		return true;
	}
	const char* what() const throw()
	{
		return "String can't be converted to this type\n";
	}
};