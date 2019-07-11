#include "Vehicle.h"
Vehicle::Vehicle()
{
	Weight = 0;
	AmountofFuel = 0;
	LengthofKm = 0;
}
double Vehicle::getWeight()
{
	return Weight;
}
double Vehicle::getAmountofFuel()
{
	return AmountofFuel;
}
double Vehicle::getLengthofKm()
{
	return LengthofKm;
}
void Vehicle::AddWeight()
{
	double w;
	do
	{
		cout << "Enter the Weight of Goods you want to add: ";
		cin >> w;
		Weight += w;
	} while (w < 0);
}
void Vehicle::RemoveWeight()
{
	double a;
	do
	{
		cout << "Enter the Weight of Goods you want to remove: ";
		cin >> a;
		if (a > Weight)
		{
			Weight = 0;
		}
		else Weight -= a;
	} while (a < 0);
}
void Vehicle::AddFuel()
{
	do
	{
		cout << "Enter the Amount of Fuel you want to add: ";
		cin >> AmountofFuel;
	} while (AmountofFuel < 0);
}
double Vehicle::VehicleRun()
{
	cout << "Enter the path length of the vehicle: ";
	cin >> LengthofKm;
	return LengthofKm;
}
double Vehicle::getFuel()
{
	return AmountofFuel;
}