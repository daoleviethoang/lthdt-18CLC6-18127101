#include"Motorbike.h"
void Motorbike::menu()
{
	int a;
	cout << "**MotorBike**" << endl;
	cout << "1: Add a weight of goods to the MotorBike" << endl;
	cout << "2: Remove a weight goods from the MotorBike" << endl;
	cout << "3: Add an amount of fuel to the MotorBike" << endl;
	cout << "4: Run the MotorBike a length of km" << endl;
	cout << "5: Get the current fuel left in the MotorBike" << endl;
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
void Motorbike::AddWeight()
{
	Vehicle::AddWeight();
}
void Motorbike::RemoveWeight()
{
	Vehicle::RemoveWeight();
}
void Motorbike::AddFuel()
{
	Vehicle::AddFuel();
}
double Motorbike::VehicleRun()
{
	if (Vehicle::VehicleRun() > 200)
		return 200 * 0.02 + Vehicle::getWeight() * 0.01;
	else
		return Vehicle::getLengthofKm() * 0.02 + Vehicle::getWeight() * 0.01;
}
double Motorbike::getFuel()
{
	return Vehicle::getFuel() - VehicleRun();
}