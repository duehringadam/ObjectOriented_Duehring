#include "Customer.h";
#include <sstream>
#include <iostream>
#include <string>


Customer::Customer()
{
}

Customer::Customer(string custId, string fName, string lName, Address address)
{
	this->custId = custId;
	this->fName = fName;
	this->lName = lName;
	this->address = address;
}
void Customer::setCustId(string custId)
{
	this->custId = custId;
}
string Customer::getCustId()
{
	return custId;
}

void Customer::setFName(string fName)
{
	this->fName = fName;
}
string Customer::getFName()
{
	return fName;
}

void Customer::setLName(string lName)
{
	this->lName = lName;
}
string Customer::getLName()
{
	return lName;
}

void Customer::setAddress(Address address)
{
	this->address = address;

}
Address Customer::getAddress()
{
	return address;
}

string Customer::print()
{
	stringstream ss;
	ss << this->custId << endl;
	ss << this->fName << endl;
	ss << this->lName << endl;
	ss << address.print();
	ss << endl;
	return ss.str();
}


Customer::~Customer()
{
}
