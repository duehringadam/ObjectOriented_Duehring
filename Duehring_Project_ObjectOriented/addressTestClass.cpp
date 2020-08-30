#include <iostream>
#include <string>
#include <fstream>
#include "Address.h";
#include "Customer.h";
#include "Book.h";

using namespace std;

int main()
{

	ifstream bookRead;

	//addresses for our customers
	Address ad1 = Address();
	ad1.setCity("Town City");
	ad1.setState("NC");
	ad1.setStreet("Street Rd Ct");
	ad1.setZip("27410");

	Address ad2 = Address("123 street road", "City", "NC", "27410");

	//customers

	Customer cust1 = Customer(); //default constructor
	cust1.setAddress(ad1);
	cust1.setCustId("1234");
	cust1.setFName("Adam");
	cust1.setLName("Duehring");

	Customer cust2 = Customer("4321", "Ezra", "Rutledge", ad2);//overloaded constructor

	//books	
	Book b1 = Book();
	b1.setISBN("987654321");
	b1.setAuthor("Writer");
	b1.setPrice(12.22);
	b1.setTitle("Title goes here");

	Book b2 = Book("abcd", "Author", "Title", 22.00);//overloaded constructor

	cout << cust2.print();
	cout << cust1.print();
	cout << b1.print();
	cout << b2.print();

	//here we declare variables for our file reading
	string title;
	string author;
	string ISBN; 
	double price;

	//instantiate our book array and counter
	int counter = 0;
	Book books[6];
	

	//open file
	bookRead.open("Books.txt");
	//while not end of file
	while (bookRead.peek() != EOF)
	{
		bookRead >> title >> author >> ISBN >> price;
		Book b3 = Book(title, author, ISBN, price);
		books[counter] = b3;
		counter++;
	}
	bookRead.close();

	for (int i = 0; i < 6; i++)
	{
		cout << books[i].getAuthor() << endl;
	}
	
	system("Pause");
	return 0;
}
