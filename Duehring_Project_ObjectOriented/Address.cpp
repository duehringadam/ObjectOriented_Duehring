#include "Address.h"
#include <sstream>
#include <string>
#include <iostream>

Address::Address()
{

}
Address::Address(string street, string city, string state, string zip)
{
	this->street = street;
	this->city = city;
	this->state = state;
	this->zip = zip;
}

void Address::setStreet(string street)
{
	this->street = street;
}
string Address::getStreet()
{
	return this->street;
}

void Address::setCity(string city)
{
	this->city = city;
}
string Address::getCity()
{
	return this->city;
}

void Address::setState(string state)
{
	this->state = state;
}
string Address::getState()
{
	return this->state;
}

void Address::setZip(string zip)
{
	this->zip = zip;
}
string Address::getZip()
{
	return this->zip;
}

string Address::print()
{
	stringstream ss;
	ss << this->street << endl;
	ss << this->city << endl;
	ss << this->state << endl;
	ss << this->zip << endl;
	ss << endl;
	return ss.str();
}

Address::~Address()
{

}
