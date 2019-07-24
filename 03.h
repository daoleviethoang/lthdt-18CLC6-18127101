#pragma once
#include<iostream>
#include<exception>
#include<string>
#include<conio.h>
#include<sstream>
#include<fstream>
using namespace std;
class FileNotFoundException :public exception
{
private:
	string File_Name;
public:
	FileNotFoundException(string File_Name)
	{
		this->File_Name = File_Name;
	}
	const char* what() const throw()
	{
		return "File not exist\n";
	}
	bool openFile()
	{
		ifstream fin;
		fin.open(File_Name);
		if (!fin.is_open())
			return false;
		fin.close();
		return true;
	}
};