#include "stdafx.h"
#include "Contact.h"
#include <iostream>
#include <string>
#include <fstream>
#include<sstream>
#include<iomanip>
#include<vector>

using std::string;



Contact::Contact()
{
	this->name = "Unkown";
	this->email = "N/A";
	this->stAddress = "N/A";
	this->phoneNumber = "N/A";
}

Contact::Contact(string name, const string email, const string stAddress, string phoneNumber) 
{
	this->name = name;
	this->email = email;
	this->stAddress = stAddress;
	this->phoneNumber = phoneNumber;

}



void Contact::setName(const string name)
{
	this->name = name;
}

void Contact::setStAddress(const string stAddress)
{
	this->stAddress = stAddress;
}

void Contact::setEmail(const string email)
{
	this->email = email;
}


void Contact::setPhoneNumber(const string phoneNumber)
{
	if (phoneNumber.length() != 7) 
	{
		this->phoneNumber = "N/A";
	}
	else
	{
		this->phoneNumber = phoneNumber;
	}
}

Contact::~Contact()
{
}

