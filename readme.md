A project made for my Advanced C++ programming class at GTCC


An object oriented project made in Visual Studio in C++.
I create the Address, Customer, and Book objects to be used in the addressTestClass.cpp
The customer and the address objects relate to eachother as in the Customer.h header file, it inherits the Address.h header file 
The book object is read from a file, and then each book object is used to populate an array of books
In the test class, the address and customer objects are instantiated through hard code, the book object is read from the Books.txt text file

Each element of each object can be easily accessed, for example, if you want to access only the authors from the array of books you can put a simple
"cout << books[i].getAuthor() << endl;" command and it will print each author from the array of book objects.
