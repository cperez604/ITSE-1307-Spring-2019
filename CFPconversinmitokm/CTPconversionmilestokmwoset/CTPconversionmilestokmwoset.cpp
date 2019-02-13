// CTPconversionmilestokmwoset.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int intMiles = 0; //establish int for miles

	cout << "enter amount of miles" << endl; //prompt user to input amount of miles
	cin >> intMiles;
	float fltKilometers = (float)intMiles * 1.609; //calculations for converting miles to kilometers

	cout << setprecision(3) << "the amount of kilometers is: " << endl;
}

