#pragma once
#include <string>
#include <sstream>

using namespace std;

class Address
{
public:
	Address(); //constructor
	Address(string street, string city, string state, string zip);

private:
	string street;
	string city;
	string state;
	string zip; //is a string bc we dont do math on it

public:
	//getters and setter methods
	void setStreet(string street);
	string getStreet();

	void setCity(string city);
	string getCity();

	void setState(string state);
	string getState();

	void setZip(string zip);
	string getZip();

	//print method
	string print();

	~Address(); //deconstructor
};

