#include "02.h"
int main() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int size = 10;
	int index = -5;
	try {
		if (index < 0 || index >= size)
			throw IndexOutOfRangeException(index, size);
		cout << arr[index] << endl;
	}
	catch (IndexOutOfRangeException &ex) {
		cout << ex.what() << endl;
	}
	cout << "End IndexOutOfRangeException" << endl;
	_getch();
	return 0;
}