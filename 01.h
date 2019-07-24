#pragma once
#include<conio.h>
#include<iostream>
#include<exception>
#include<string>
#include<sstream>
using namespace std;
class DividedByZeroException : public exception {
private:
	string m_msg;
public:
	DividedByZeroException()
	{
		m_msg = "Message: Divided by zero exception";
	}
	const char* what() const throw() {
		return m_msg.c_str();
	}
};