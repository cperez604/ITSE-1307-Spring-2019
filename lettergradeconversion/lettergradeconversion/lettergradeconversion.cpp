// lettergradeconversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Fernando Perez

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{	//double establishing grade value
	double dblgradevalue = 90;
	//user input for grade value
	cout << "Enter grade value" << endl;
	cin >> dblgradevalue;
	//rounding double into an int
	int intgrade = rint(dblgradevalue);
	//if and statements to calculate letter grade
	if (intgrade > 89) {
		cout << "A";
	}
	else if (intgrade > 79) {
		cout << "B";
	}
	else if (intgrade > 69) {
		cout << "C";
	}
	else if (intgrade > 59) {
		cout << "D";
	}
	else {
		cout << "F";
	}

	cout << endl;
	cout << "Letter Grade Is: " << dblgradevalue << endl;
	//switch statements calculating grade averages
	cout << "Switch: ";
	switch (intgrade / 10) {
	case 9: case 10:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	default:
		cout << "F" << endl;
	
			return 0;


	}
}


