// Assignment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Contact.h"
#include <string>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include<sstream>
#include<iomanip>
#include<vector>
 
using namespace std;
using std::vector;
using std::string;


int main()
{
	string line;
	InputFile input(data.txt);
	vector<string>fields;

	if (input=false)
	{
		cout << "File not found. Will exit..." << endl;
		return 1;
	}

	Contact name;
	Contact Zeke = {"Zeke", "ThunderZ@thomas.edu", "37 Fore St.",  "6727878"};
	Contact Jonny = {"Jonny", "BravoJ@thomas.edu", "Kamehameha St.", "7899019"};
	vector <Contact> tres = { name, Zeke, Jonny };
	for (int i = 0; i < 3; i++)
	{
		cout << "Name: " << tres[i].getName()<<endl;
		cout << "Email: " << tres[i].getEmail() << endl;
		cout << "St Address: " << tres[i].getStAddress() << endl;
		cout << "Phone Number: " << tres[i].getPhoneNumber() << endl;
	}

	Contact Goku = tres[0];
	Contact *Gohan = &tres[1];
	Contact &ChiChi = tres[2];
	Goku.setName("Bardock");
	Gohan->setEmail("SonG@thomas.edu");
	ChiChi.setPhoneNumber("5672878");
	for (int i = 0; i < 3; i++)
	{
		cout << "Name: " << tres[i].getName() << endl;
		cout << "Email: " << tres[i].getEmail() << endl;
		cout << "St Address: " << tres[i].getStAddress() << endl;
		cout << "Phone Number: " << tres[i].getPhoneNumber() << endl;
	}
	

    return 0;
}//This first one change because it's a copy. The second change because of the pointers and refernce are linked to the orginal objects

