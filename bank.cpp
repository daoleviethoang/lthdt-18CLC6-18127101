#include "Bank.h"
Bank::Bank()
{
	name = "";
	address = "";
}
void Bank::menu(int a)
{
	int k;
	system("cls");
	cout << "WELCOME TO BANK" << endl;
	cout << "1: Login" << endl;
	cout << "2: Create Account" << endl;
	cout << "3: Quit" << endl;
	cout << "Sellect of you: ";
	cin >> k;
	switch (k)
	{
	case 1:
	{
		int z = 0;
		int zz = 0;
		system("cls");
		if (cus[a].login(z, zz) == true)
		{
			if (zz == 2)
			{
				cus[a].information();
				cus[a].checkMyBank(z);
			}
			else
			{
				cus[a].getinfor(z);
				cus[a].wdSecond(z);
			}
		}
		break;
	}
	case 2:
	{
		system("cls");
		cus[a].createAccount();
		cout << "Please recharge your account, thanks!" << endl;
		cus[a].checkRecharge();
		break;
	}
	case 3:
	{
		system("cls");
		cout << "Thank you, see you again" << endl;
		break;
	}
	default:
		break;
	}
}
void Bank::changeCMND(long int a, int &b)
{
	for (int i = 0; i < cus.size(); i++)
	{
		if (cus[i].getCMND() == a)
		{
			b = i;
			break;
		}
	}
}
void Bank::login()
{
	int a;
	int b;
	int q;
	int d = 0;
	cout << "Enter CMND ID: ";
	cin >> a;
	cin.ignore();
	changeCMND(a, d);
	Customer c;
	cus.push_back(c);
	cus[d].c_CMND(a);
	if (cus[d].getnumAcc() < 1)
	{
		cout << "Do you want to create a new account? " << endl;
		cout << "1(yes) or 0(no): ";
		cin >> b;
		if (b == 1)
		{
			cus[d].createAccount();
			cout << "Please recharge your account, thanks!" << endl;
			cus[d].checkRecharge();
			cout << "Create Account is successfull" << endl;
			cout << "Do you want login?" << endl;
			cout << "1(yes) or 0(no): ";
			cin >> q;
			if (q == 1) menu(d);
			else 
			{
				cout << "Thanks, see you again" << endl;
				return;
			}
		}
		else
		{
			cout << "Thanks, see you again" << endl;
			return;
		}
	}
	else
	{
		menu(d);
	}
}
Bank::~Bank()
{}