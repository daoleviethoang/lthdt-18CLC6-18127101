#include "09.h"
void main()
{
	LoginException login("admin", "admin");
	string User, Pass;
	int check = 0;
	cout << "Username: ";
	cin >> User;
	cout << "Password: ";
	cin >> Pass;
	try
	{
		if (User != login.getUsername() && Pass != login.getPassword())
		{
			check = 1;
			throw LoginException(User, Pass);
		}
		else if(User != login.getUsername())
		{
			check = 2;
			throw LoginException(User, Pass);
		}
		else if (Pass != login.getPassword())
		{
			check = 3;
			throw LoginException(User, Pass);
		}
		cout << "Open program successfull" << endl;
	}
	catch (LoginException &l)
	{
		cout << l.what();
		if (check == 1)
		{
			cout << "Because:" << endl;
			cout << "  Username are invalid." << endl;
			cout << "  Password are invalid." << endl;
		}
		if (check == 2)
		{
			cout << "Because:" << endl;
			cout << "  Username are invalid." << endl;
		}
		if (check == 3)
		{
			cout << "Because:" << endl;
			cout << "  Password are invalid." << endl;
		}
	}
	cout << "End Game" << endl;
	_getch();
}