#include "05.h"
void main()
{
	IntegerFormatException IFE("123");
	try
	{
		if (IFE.CheckConvertedThisType() == true)
		{
			throw IntegerFormatException("123");
		}
		cout << "The string after conversion is: " << IFE.CheckConvertedInteger() << endl;
	}
	catch (IntegerFormatException &Interger)
	{

		cout << Interger.what() << endl;
	}
	cout << "End Game" << endl;
	_getch();
}