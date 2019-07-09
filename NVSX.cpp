#include"NVSX.h"
NVSX::NVSX()
{
	numberProduct = 0;
}
NVSX::NVSX(const NVSX& nvsx) : Employee(nvsx)
{
	this->numberProduct = nvsx.numberProduct;
}
NVSX &NVSX::operator=(const NVSX& nvsx)
{
	if (this == &nvsx)
	{
		return *this;
	}
	Employee::operator = (nvsx);
	this->numberProduct = nvsx.numberProduct;
	return *this;
}
void NVSX::input()
{
	Employee::input();
	cout << "Enter the number of Products: ";
	cin >> numberProduct;
}
void NVSX::output()
{
	cout << "\nNVSX" << endl;
	Employee::output();
	cout << "The number of Products: " << numberProduct << endl;
}
long double NVSX::Payroll()
{
	return Employee::Payroll() + numberProduct * 2;
}
