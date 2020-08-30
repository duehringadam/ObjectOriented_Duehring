#include "Book.h";
#include <cstddef> 
#include <iomanip>


Book::Book()
{
}

Book::Book(string ISBN, string author, string title, double price)
{
	this->ISBN = ISBN;
	this->author = author;
	this->title = title;
	this->price = price;
}

void Book::setISBN(string ISBN)
{
	//make sure to validate isbn length 9-13 chars
	int stringLength = ISBN.length();
	if (stringLength > 8 && stringLength < 14)
	{
		this->ISBN = ISBN;
	}
	else
	{
		this->ISBN = "0";
	}
		
}
string Book::getISBN()
{
	return ISBN;
}

void Book::setAuthor(string author)
{
	this->author = author;
}
string Book::getAuthor()
{
	return author;
}

void Book::setTitle(string title)
{
	this->title = title;
}
string Book::getTitle()
{
	return title;
}

void Book::setPrice(double price)
{
	if (price > 0 && price < 201) //validate price between 1 and 200 dollars
	{
		this->price = price;
	}
	else
	{
		this->price = 0;
	}
}
double Book::getPrice()
{
	return price;
}

string Book::print()
{
	stringstream ss;
	ss << this->ISBN << endl;
	ss << this->author << endl;
	ss << this->title << endl;
	ss << this->price << endl;
	ss << endl;
	return ss.str();
}

Book::~Book()
{
}
