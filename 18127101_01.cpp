#include "01.h"
int main() {
	int x = 20;
	int y = 0;
	int z;
	try {
		if (y == 0)
			throw DividedByZeroException();
		z = x / y;
		cout << z << endl;
	}
	catch (DividedByZeroException &DZE) {
		cout << DZE.what() << endl << endl;
	}
	cout << "End DividedByZeroException" << endl;
	_getch();
	return 0;
}