#pragma once
#include<iostream>
#include<exception>
#include<string>
#include<sstream>
#include<conio.h>
using namespace std;
class IndexOutOfRangeException : public exception {
private:
	int index, size;
public:
	IndexOutOfRangeException(int index, int size) {
		this->index = index;
		this->size = size;
	}
	const char* what() const throw() {
		stringstream stream;
		stream << "Message: Index out of range exception" << endl;
		stream << "Detail: index = " << index << ", size = " << size << endl;
		return _strdup(stream.str().c_str());
	}
};
