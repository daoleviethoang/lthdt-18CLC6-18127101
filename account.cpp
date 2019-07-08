#include "account.h"
account::account()
{
	name = "";
	birthday = "";
	sex = "";
	user = "";
	pass = "";
	balance = 0;
	usersecond = "";
	passsecond = "";
}
string account::getUser()
{
	return user;
}
string account::getPass()
{
	return pass;
}
void account::c_User(string User)
{
	user = User;
}
void account::c_Pass(string Pass)
{
	pass = Pass;
}
void account::c_UserSecond(string User)
{
	usersecond = User;
}
void account::c_PassSecond(string Pass)
{
	passsecond = Pass;
}
double account::getBalance()
{
	return balance;
}
string account::getUserSecond()
{
	return usersecond;
}
string account::getPassSecond()
{
	return passsecond;
}
void account::recharge()
{
	int abc = 0;
	double amount;
	int a;
	string  b;
	do
	{
		cout << "Enter the Amount (min 10,0000 VND): " << endl;
		cout << "         ";
		cin >> amount;
	} while (amount < 10 && cout << "please re-enter" << endl);
	cout << "Confirm Payment" << endl;
	cout << "1: Agree" << endl << "0: Disagree" << endl;
	cout << "Enter 1 or 0: ";
	cin >> a;
	if (a == 1)
	{
		balance += amount;
		cout << "Recharge to successfull" << endl;
	}
	else
	{
		cout << "Do you want to make another transaction?" << endl;
		cout << "Enter 1(yes) or 0(no): ";
		cin >> a;
		if (a == 1)
		{
			myBank(abc);
		}
		else
		{
			cout << "Thank you, see you again !!!" << endl;
			return;
		}
	}
}
void account::withdrawal()
{
	int abc = 0;
	double amount;
	int a;
	do
	{
		cout << "Enter the Amount (min 10,0000 VND): " << endl;
		cout << "         ";
		cin >> amount;
	} while ((amount < 10 || amount > balance - 50) && cout << "please re-enter" << endl);
	cout << "Confirm Payment" << endl;
	cout << "1: Agree" << endl << "0: Disagree" << endl;
	cout << "Enter 1 or 0: ";
	cin >> a;
	if (a == 1)
	{
		balance -= amount;
		cout << "Withdrawal to successfull" << endl;
	}
	else
	{
		cout << "Do you want to make another transaction?" << endl;
		cout << "Enter 1(yes) or 0(no): ";
		cin >> a;
		if (a == 1)
		{
			myBank(abc);
		}
		else
		{
			cout << "Thank you, see you again !!!" << endl;
			return;
		}
	}
}
void account::withdrawalSecond()
{
	double amount;
	int a;
	do
	{
		cout << "Enter the Amount (min 10,0000 VND): " << endl;
		cout << "         ";
		cin >> amount;
		if (amount > 3000)
		{
			cout << "This is account second, You can only withdraw <= 3000VND" << endl;
		}
	} while ((amount < 10 || amount > 3000) && cout << "please re-enter" << endl);
	cout << "Confirm Payment" << endl;
	cout << "1: Agree" << endl << "0: Disagree" << endl;
	cout << "Enter 1 or 0: ";
	cin >> a;
	if (a == 1)
	{
		balance -= amount;
		cout << "Withdrawal to successfull" << endl;
	}
	else
	{
		cout << "Thank you, see you again!!!" << endl;
		return;
	}
}
void account::createAccSecond(int &tempnumAcc)
{
		string User, Pass;
		account ac;
		if (tempnumAcc >= 0 && tempnumAcc < 11)
		{
			cout << "Create a new account second" << endl;
			cout << "Name: ";
			cin.get();
			getline(cin, name);
			cout << "Birthday: ";
			getline(cin, birthday);
			cout << "Sex: ";
			getline(cin, sex);
			cout << "Username: ";
			getline(cin, usersecond);
			cout << "Password: ";
			getline(cin, passsecond);
			tempnumAcc++;
		}
		else
		{
			cout << "Sorry, You have created more than the allowed number of accounts!!!" << endl;
			return;
		}
}
void account::informationsAcSecond()
{
	cout << "Information" << endl;
	cout << "Name: " << name << endl;
	cout << "Birthday: " << birthday << endl;
	cout << "Sex: " << sex << endl;
}
void account::myBank(int numac)
{
	int a = 0;
	int k = 0;
	cout << "1: Account balance inquiry" << endl;
	cout << "2: Recharge" << endl;
	cout << "3: Withdrawal" << endl;
	cout << "4: Create Account Second" << endl;
	cout << "5: Log out" << endl;
	do
	{
		cout << "Enter: ";
		cin >> a;
	} while ((a < 1 || a > 5) && cout << "Please re-enter" << endl);
	switch (a)
	{
	case 1:
	{
		cout << "Account balance: " << getBalance() << endl;
		cout << "Do you want to make another transaction?" << endl;
		cout << "Enter 1(yes) or 0(no): ";
		cin >> k;
		if (k == 1)
		{
			myBank(numac);
		}
		break;
	}
	case 2:
	{
		recharge();
		cout << "Do you want to make another transaction?" << endl;
		cout << "Enter 1(yes) or 0(no): ";
		cin >> k;
		if (k == 1)
		{
			myBank(numac);
		}
		break;
	}
	case 3:
	{
		withdrawal();
		cout << "Do you want to make another transaction?" << endl;
		cout << "Enter 1(yes) or 0(no): ";
		cin >> k;
		if (k == 1)
		{
			myBank(numac);
		}
		break;
	}
	case 4:
	{
		createAccSecond(numac);
		cout << "Do you want to make another transaction?" << endl;
		cout << "Enter 1(yes) or 0(no): ";
		cin >> k;
		if (k == 1)
		{
			myBank(numac);
		}
		break;
	}
	case 5:
	{
		cout << "Thank you, see you again !!!" << endl;
		break;
	}
	}
}
account::~account()
{}