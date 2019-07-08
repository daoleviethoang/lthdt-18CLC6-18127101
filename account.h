#pragma once
#include<conio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class account
{
private:
	string name;
	string birthday;
	string sex;
	string user;
	string usersecond;
	string pass;
	string passsecond;
	double balance;
public:
	account();
	string getUser();
	string getPass();
	string getUserSecond();
	string getPassSecond();
	void c_User(string User);
	void c_Pass(string Pass);
	void c_UserSecond(string User);
	void c_PassSecond(string Pass);
	void informationsAcSecond();
	void myBank(int numac);
	double getBalance();
	void recharge();
	void withdrawal();
	void withdrawalSecond();
	void createAccSecond(int &tempnumAcc);
	~account();
};