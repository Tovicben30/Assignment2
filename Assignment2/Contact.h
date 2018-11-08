#ifndef CONTACT_H
#define CONTACT_H

#include <string>

using std::string;

class Contact
{
public:
	Contact();
	Contact(const string name, const string email, const string stAddress, string phoneNumber);
	
	//getters
	string getName() { return this ->name; }
	string getEmail() { return this->email; }
	string getStAddress() { return this->stAddress; }
	string getPhoneNumber() { return this->phoneNumber; }


	//setters
	void setName(const string);
	void setStAddress(const string);
	void setEmail(const string);
	void setPhoneNumber(const string);
	~Contact();




private:
	//data members
	string name;
	string email;
	string stAddress;
	string phoneNumber;
	
};

#endif // !CONTACT_H