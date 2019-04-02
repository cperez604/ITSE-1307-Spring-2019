// CFPTelephonedigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Fernando Perez

#include "pch.h"
#include <iostream>
#include <cmath> 
using namespace std;
//Program that converts alphabet letters to phone digits
int main()
{
	char chrletter;
	int intdigit;
	int intnum;

	cout << "Enter an Uppercase Letter" << endl;
	cin >> chrletter;
	cout << endl;

	while (chrletter != '#') {
		cout << "Letter: " << chrletter << endl;
		cout << "Telephone Digit: " << endl;

		intnum = static_cast<int>(chrletter)
			- static_cast<int>('A');

		if (0 <= intnum && intnum < 26) {
			intdigit = (intnum / 3) + 2;

			if (((intnum / 3 == 6) || (intnum / 3 == 7))
				&& (intnum % 3 == 0))
				intdigit = intdigit - 1;

			if (intdigit > 9)
				intdigit = 9;

			cout << intdigit << endl;

			return 0;
	

		}
	}

    
}

