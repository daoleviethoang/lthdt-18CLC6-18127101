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
	void input();
	void output();
	long double Payroll();
};
