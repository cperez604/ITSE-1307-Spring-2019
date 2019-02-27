// CFPVbusinesscard.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Perez, Christian
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ofstream fileVCard;

	//open vcard file
	fileVCard.open("cperez.vcf");
	//vcard file information
	fileVCard << "BEGIN:VCARD" << endl;
	fileVCard << "N: Perez, Christian" << endl;
	fileVCard << "FN: Christian Fernando Perez" << endl;
	fileVCard << "TEL;TYPE=home,voice;VALUE=uri: 210-456-8901" << endl;
	fileVCard << "Email: leprogrammette@hotmail.com" << endl;
	fileVCard << "ORG: ITSE 1307" << endl;
	//close vcard file
	fileVCard << "END:VCARD" << endl;
	fileVCard.close();
}


