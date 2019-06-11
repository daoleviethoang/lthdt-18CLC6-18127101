#include "Employee.h"
class NVVP:public Employee
{
private:
	int NumberOfWork;
	double Subsidize;
public:
	NVVP();
	NVVP(int NumberOfWork, double Subsidize);
	NVVP(char name[31], int yearofWork, double salary, int numberofwork, double subsidize);
	NVVP(const NVVP &nvvp);
	NVVP &operator=(const NVVP &nvvp);
	string getname();
	void input();
	void output();
	double Payroll();
};
