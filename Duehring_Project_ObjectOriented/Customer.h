#pragma once
#include "Address.h";
#include <string>

class Customer
{
public:
	Customer();
	//default constructor
	Customer(string custID, string firstName, string lastName, Address address);

private:
	//attributes
	string custId;
	string fName;
	string lName;
	Address address;
public:
	//methods
	void setCustId(string custId);
	string getCustId();

	void setFName(string fName);
	string getFName();

	void setLName(string lName);
	string getLName();

	void setAddress(Address address);
	Address getAddress();

	string print();

	~Customer();
};

