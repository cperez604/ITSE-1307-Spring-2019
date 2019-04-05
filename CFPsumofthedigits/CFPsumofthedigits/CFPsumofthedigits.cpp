// CFPsumofthedigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Fernando Perez
//April 2nd, 2019

#include "pch.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int intsum = 0;
	int intnum = 0;

	vector<int> vintInput;
	do {
		intsum += intnum;
		cout << " Sum equals: " << intsum << endl;

		cout << "Please enter a number:" << endl;
		cin >> intnum; 
		vintInput.push_back(intnum);
		cout << "Integers: ";
		for (int intIndex =0; intIndex < vintInput.size(); intIndex++)
		{
			cout << vintInput.at(intIndex) << " ";
		}
	} while (intnum > 0);
	//cout << "Sum equals: " << intsum << endl;
}


