// CFPExercise2.21.2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
   	//establish variables
	double dblfirstvariable = .0;
	double dblsecondvariable = .0;
	double dblvariablec = .0;
	cout << "Calculator for equation C = A*B/A-B" << endl;
	//input output for first variable/A
	cout << "Please Enter Decimal Value for A variable" << endl;
	cin >> dblfirstvariable;
	//input output for second variable/B
	cout << "Please Enter Decimal Value for B variable" << endl;
	cin >> dblsecondvariable;
	//calculate for C = A*B/A-C
	float fltvariablec = (float)(dblfirstvariable * dblsecondvariable) / (dblfirstvariable - dblsecondvariable);
	cout << "C equals: " << fltvariablec << endl;
}


