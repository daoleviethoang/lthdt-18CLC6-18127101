#include"customer.h"
Customer::Customer()
{
	CMND = 0;
	name = "";
	birthday = "";
	phoneNo = "";
	sex = "";
	email = "";
	numAcc = 0;
}
void Customer::information()
{
	cout << "Information" << endl;
	cout << "Name: " << name << endl;
	cout << "Birthday: " << birthday << endl;
	cout << "Phone: " << phoneNo << endl;
	cout << "Sex: " << sex << endl;
	cout << "Email: " << email << endl;
}
void Customer::getinfor(int i)
{
	acc[i].informationsAcSecond();
}
void Customer::wdSecond(int i)
{
	acc[i].withdrawalSecond();
}
void Customer::createAccount()
{
	string User, Pass;
	account ac;
	if (numAcc >= 0 && numAcc < 11)
	{
		cout << "Create a new account" << endl;
		cout << "Name: ";
		cin.get();
		getline(cin, name);
		cout << "Birthday: ";
		getline(cin, birthday);
		cout << "Phone: ";
		getline(cin, phoneNo);
		cout << "Sex: ";
		getline(cin, sex);
		cout << "Email: ";
		getline(cin, email);
		cout << "Username: ";
		getline(cin, User);
		acc.push_back(ac);
		acc[numAcc].c_User(User);
		cout << "Password: ";
		getline(cin, Pass);
		acc[numAcc].c_Pass(Pass);
		numAcc++;
	}
	else
	{
		cout << "Sorry, You have created more than the allowed number of accounts!!!" << endl;
		return;
	}
}
void Customer::checkMyBank(int temp)
{
	acc[temp].myBank(numAcc);
}
void Customer::c_CMND(long int cmnd)
{
	CMND = cmnd;
}
long int Customer::getCMND()
{
	return CMND;
}
int Customer::getnumAcc()
{
	return numAcc;
}
void Customer::checkRecharge()
{
	acc[numAcc - 1].recharge();
}
bool Customer::login(int &a, int &check)
{
	string User, Pass;
	do
	{
		cout << "Username: ";
		cin.get();
		getline(cin, User);
		cout << "Password: ";
		getline(cin, Pass);
		for (int i = 0; i < acc.size(); i++)
		{
			if (acc[i].getUserSecond() == User && acc[i].getPassSecond() == Pass)
			{
				check = 1;
				a = i;
				return true;
			}
			else if (acc[i].getUser() == User && acc[i].getPass() == Pass)
			{
				check = 2;
				a = i;
				return true;
			}
		}
	} while (check < 1 || check > 2 && cout << "User account or password incorrect. Please re-enter" << endl);
}
Customer::~Customer()
{}