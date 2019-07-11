#include "Motorbike.h"
#include "TRuck.h"
void main()
{
	int a;
	int b;
	cout << "1: MotorBike" << endl;
	cout << "2: Truck" << endl;
	cout << "Select: ";
	cin >> b;
	if (b == 1)
	{
		Motorbike mtb;
		mtb.menu();
	}
	else if(b == 2)
	{
		Truck T;
		T.menu();
	}
	_getch();
}