#include"Bank.h"

void main()
{
	Bank bk;
	int i = 0;
	while (1)
	{
		cout << "BankHoang - Live your life" << endl;
		cout << "1: Banking" << endl;
		cout << "2: Quit" << endl;
		cout << "Enter: ";
		do
		{
			cin >> i;
		} while ((i < 1 && i > 2) && cout << "Please, re-enter" << endl);
		switch (i)
		{
		case 1:
		{
			bk.login();
			break;
		}
		case 2:
		{
			exit(0);
			break;
		}
		default:
			break;
		}
	}
	_getch();
}