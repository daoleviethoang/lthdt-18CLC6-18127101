#include "TRuck.h"
void Truck::menu()
{
	int a;
	cout << "Truck" << endl;
	cout << "1: Add a weight of goods to the Truck" << endl;
	cout << "2: Remove a weight goods from the Truck" << endl;
	cout << "3: Add an amount of fuel to the Truck" << endl;
	cout << "4: Run the Truck a length of km" << endl;
	cout << "5: Get the current fuel left in the Truck" << endl;
	cout << "6: EXIT" << endl;
	cout << "Select: ";
	cin >> a;
	switch (a)
	{
	case 1:
	{
		AddWeight();
		int b;
		cout << "1: Back / 0: Exit" << endl;
		cin >> b;
		if (b == 1)
		{
			system("cls");
			menu();
		}
		else
		{
			exit(0);
		}
		break;
	}
	case 2:
	{
		RemoveWeight();
		AddWeight();
		int b;
		cout << "1: Back / 0: Exit" << endl;
		cin >> b;
		if (b == 1)
		{
			system("cls");
			menu();
		}
		else
		{
			exit(0);
		}
		break;
	}
	case 3:
	{
		AddFuel();
		AddWeight();
		int b;
		cout << "1: Back / 0: Exit" << endl;
		cin >> b;
		if (b == 1)
		{
			system("cls");
			menu();
		}
		else
		{
			exit(0);
		}
		break;
	}
	case 4:
	{
		cout << "The amount of raw materials used up: " << VehicleRun() << endl;
		AddWeight();
		int b;
		cout << "1: Back / 0: Exit" << endl;
		cin >> b;
		if (b == 1)
		{
			system("cls");
			menu();
		}
		else
		{
			exit(0);
		}
		break;
	}
	case 5:
	{
		cout << "The amount of remaining material: " << getFuel() << endl;
		AddWeight();
		int b;
		cout << "1: Back / 0: Exit" << endl;
		cin >> b;
		if (b == 1)
		{
			system("cls");
			menu();
		}
		else
		{
			exit(0);
		}
		break;
	}
	case 6:
	{
		exit(0);
		break;
	}
	}
}
void Truck::AddWeight()
{
	Vehicle::AddWeight();
}
void Truck::RemoveWeight()
{
	Vehicle::RemoveWeight();
}
void Truck::AddFuel()
{
	Vehicle::AddFuel();
}
double Truck::VehicleRun()
{
	if (Vehicle::VehicleRun() > 500)
		return 500 * 0.2 + Vehicle::getWeight() * 0.001;
	else
		return Vehicle::getLengthofKm() * 0.2 + Vehicle::getWeight() * 0.001;
}
double Truck::getFuel()
{
	if (Vehicle::getFuel() > VehicleRun())
	{
		return Vehicle::getFuel() - VehicleRun();
	}
	else return 0;
}