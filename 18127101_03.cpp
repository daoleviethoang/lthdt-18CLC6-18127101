#include "03.h"
void main()
{
	FileNotFoundException F("03.txt");
	try
	{
		if (F.openFile() == false)
			throw FileNotFoundException("03.txt");
		cout << "Open file successfull" << endl;
	}
	catch (FileNotFoundException &file)
	{
		cout << file.what() << endl;
	}
	cout << "End Game" << endl;
	_getch();
}