// CFPLooseChange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//establish int for coins
	int intpennies = 1;
	int intnickles = 5;
	int intdimes = 10;
	int intquarters = 25;
	int inthalfdollars = 50;

	//input output for pennies
	cout << "Insert number of pennies" << endl;
	cin >> intpennies;
	//input output for nickles
	cout << "Insert number of nickles" << endl;
	cin >> intnickles;
	//input output for dimes
	cout << "Insert number of dimes" << endl;
	cin >> intdimes;
	//input output for quarters
	cout << "Insert number of quaters" << endl;
	cin >> intquarters;
	//input output for half dollars
	cout << "Insert number of  half dollars" << endl;
	cin >> inthalfdollars;
	//calculation for total amount of change and converting to dollars
	float flttotalchange = (intpennies + (intnickles * 5.0) + (intdimes * 10.0) + (intquarters * 0.25) + (inthalfdollars * 50.)) / 100.0;
	//setprecision for rounding to the hundreth
	cout << setprecision(3) << "Total number of change is $" << setw(2) << flttotalchange << endl;

	return 0;
}