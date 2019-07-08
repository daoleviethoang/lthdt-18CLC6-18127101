#pragma once
#include "account.h"
class Customer
{
private:
	long int CMND;
	string name;
	string birthday;
	string phoneNo;
	string sex;
	string email;
	int numAcc;
	vector <account> acc;
public:
	Customer();
	void c_CMND(long int cmnd);
	long int getCMND();
	int getnumAcc();
	void information();
	bool login(int &a, int &check);
	void getinfor(int i);
	void wdSecond(int i);
	void createAccount();
	void checkMyBank(int temp);
	void checkRecharge();
	~Customer();
};