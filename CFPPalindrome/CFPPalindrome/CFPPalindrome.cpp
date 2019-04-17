// CFPPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Fernando Perez
//ITSE 1307
//04042019

//This program takes a string input and determines if it qualifies as a palindrome or not

//enter string
//determines if it qualifies as a Palindrome
//outputs if it is or isn't a Palindrome

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//function that determines if string qualifies as a Palindrome
bool isPalindrome(string pstrPalindrome) {
	int intlength = pstrPalindrome.length();
	for (int intPalindrome = 0; intPalindrome < intlength / 2; intPalindrome++)
		if (pstrPalindrome[intPalindrome] != pstrPalindrome[intlength - 1 - intPalindrome])
			return false;

	return true;
}
int main()
{
	//establish str value for input
	string strPalindrome;
	//prompt user for string input
	cout << "Enter a Palindrome: " << endl;
	cin >> strPalindrome;
	//output for palindrome or not a palindrome
	cout << (isPalindrome(strPalindrome) ? "Is Palindrone!" : "Not a Palindrone!") << endl;
}

