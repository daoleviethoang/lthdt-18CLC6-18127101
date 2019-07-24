#pragma once
#include<iostream>
#include<exception>
#include<string>
#include<conio.h>
#include<sstream>
#include<fstream>
#include<vector>
using namespace std;
class IndexOutOf2DRangeException
{
private:
	int iRow;
	int iCol;
public:
	IndexOutOf2DRangeException(int iRow, int iCol)
	{
		this->iRow = iRow;
		this->iCol = iCol;
	}
	const char* what() const throw()
	{
		return "Unauthorized access\n";
	}
};