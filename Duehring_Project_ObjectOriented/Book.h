#pragma once
#include <string>
#include "Customer.h";
using namespace std;

class Book
{
public:
	Book();
	Book(string ISBN, string author, string title, double price);

private:
	string ISBN;
	string author;
	string title;
	double price;

public:

	void setISBN(string ISBN);
	string getISBN();

	void setAuthor(string author);
	string getAuthor();

	void setTitle(string title);
	string getTitle();

	void setPrice(double price);
	double getPrice();

	string print();
	
	~Book();
};

