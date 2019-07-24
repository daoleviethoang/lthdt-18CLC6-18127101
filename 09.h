#pragma once
#include<iostream>
#include<exception>
#include<string>
#include<conio.h>
#include<sstream>
#include<fstream>
using namespace std;
class LoginException :public exception
{
private:
	string Username, Password;
public:
	LoginException(string Username, string Password)
	{
		this->Username = Username;
		this->Password = Password;
	}
	string getUsername()
	{
		return Username;
	}
	string getPassword()
	{
		return Password;
	}
	const char* what() const throw()
	{
		return "Log in to a system failed\n";
	}
};