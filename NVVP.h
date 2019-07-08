#include "Employee.h"
class NVVP :public Employee
{
private:
	int NumberOfWork;
	double Subsidize;
public:
	NVVP();
	NVVP(const NVVP &nvvp);
	NVVP &operator=(const NVVP &nvvp);
	string getname();
	void input();
	void output();
	double Payroll();
};
