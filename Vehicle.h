#pragma once
#include<conio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Vehicle
{
private:
	double Weight;
	double AmountofFuel;
	double LengthofKm;
public:
	Vehicle();
	void AddWeight();
	void RemoveWeight();
	void AddFuel();
	double VehicleRun();
	double getFuel();
	double getWeight();
	double getAmountofFuel();
	double getLengthofKm();
};