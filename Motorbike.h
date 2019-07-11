#pragma once
#include "Vehicle.h"
class Motorbike:public Vehicle
{
public:
	void AddWeight();
	void RemoveWeight();
	void AddFuel();
	double VehicleRun();
	double getFuel();
	void menu();
};