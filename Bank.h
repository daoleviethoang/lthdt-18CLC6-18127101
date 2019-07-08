#pragma once
#include "customer.h"
class Bank
{
private:
	string name;
	string address;
	vector<Customer> cus;
public:
	Bank();
	void login();
	void menu(int a);
	void changeCMND(long int a, int &b);
	~Bank();
};
