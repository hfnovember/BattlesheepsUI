#include <iostream>
#include <string>
using namespace std;

struct Book {
	string name;
	int isbn;
	double price;
}; //Make sure you use ; after defining a structure
void ChangeBookPrice(Book &book, double price);

void main() {
	
	//You can define a name/alias for a pre-existing basic type by using:
	typedef int number; //Use "typedef", the basic data type of the alias and the name of the alias.
	number a = 4; //Declaring a variable of type number.
	cout << a << endl;

	//Sometimes you will need to combine basic types to create a more complex object.
	//This about the case of a Book. A book has a lot of attributes, such as name, isbn, price etc...
	//How can you combine a name (string) with an isbn (int) and a price (double)?
	//You can do so, using the struct keyword, which will define a new user-defined type:
	//Look above main (at the start of this program) to see how to define a struct.

	//You can then declare a book variable using:
	Book book1;

	//You can set the attributes of the book using the . operator.
	book1.name = "Introduction to Programming";
	book1.isbn = 1234567890;
	book1.price = 19.99;

	//You can also access them using the same technique:
	cout << "New Book: " << book1.name << ", " << book1.isbn << ", " << book1.price << endl;

	cout << endl;

	//You can create arrays of user-defined types just like with any other type:
	const int sizeOfArray = 3;
	Book arrayOfBooks[sizeOfArray]; //Declaring an array of Books
	//Setting attributes of first book
	arrayOfBooks[0].name = "The basics of C++";
	arrayOfBooks[0].isbn = 1994175815;
	arrayOfBooks[0].price = 24.51;
	//Setting attributes of second book
	arrayOfBooks[1].name = "How to program I";
	arrayOfBooks[1].isbn = 4455668899;
	arrayOfBooks[1].price = 33.23;
	//Setting attributes of third book
	arrayOfBooks[2].name = "How to program II";
	arrayOfBooks[2].isbn = 123654789;
	arrayOfBooks[2].price = 11.25;

	//You can then user a loop to print the information of all books in the array:
	for (int i = 0; i < sizeOfArray; i++) {
		cout << "BOOK " << i + 1 << ": " << endl;
		cout << "Name: " << arrayOfBooks[i].name << endl;
		cout << "ISBN: " << arrayOfBooks[i].isbn << endl;
		cout << "Price: $" << arrayOfBooks[i].price << endl;
		cout << endl;
	}//end for

	//You can also pass user-defined types as arguments to functions much like any other data type.
	ChangeBookPrice(book1, 10.00);
	cout << "New Book: " << book1.name << ", " << book1.isbn << ", " << book1.price << endl;


	system("pause");
}//end main()

void ChangeBookPrice(Book &book, double price) {
	book.price = price;
}//end ChangeBookPrice()