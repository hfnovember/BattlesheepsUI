#include <iostream>
#include <string>
using namespace std;

void main() {

	//--BASIC DATA TYPES
	int myInteger = 1; //An integer is an integer (whole) number in the range of -2147483648 to 2147483647.
	double myDouble = 5.5; //A double is a real number (with decimals) with an accuracy of 15 digits. 
	float myFloat = 6.1; //A float is a real number (with decimals) with an accuracy of 7 digits.
	bool myBool = false; //A bool holds a boolean value of true or false.
	char myChar = 'a'; //A char is a single character.
	string myString = "Hello World!"; //A string is an array of many characters.

	//--BASIC DATA TYPE SIZES
	cout << "Integers have a size of " << sizeof(myInteger) << " Bytes." << endl;
	cout << "Doubles have a size of " << sizeof(myDouble) << " Bytes." << endl;
	cout << "Floats have a size of " << sizeof(myFloat) << " Bytes." << endl;
	cout << "Booleans have a size of " << sizeof(myBool) << " Bytes." << endl;
	cout << "Chars have a size of " << sizeof(myChar) << " Bytes." << endl;
	cout << "Strings have a size of " << sizeof(myString) << " Bytes." << endl;

	cout << endl;

	//--MODIFIERS
	signed int myInteger2 = 3; //Signed is used by default. It allows a number to have both + and - values.
	unsigned int myInteger3 = -5; //Unsigned makes a number have only + values. (-5 will create an overflow error)
	unsigned int myInteger4 = 5; //5 is OK since it is a positive number.
	cout << "Signed Integer myInteger2: " << myInteger2 << endl;
	cout << "Unsigned Integer myInteger3 (With error): " << myInteger3 << endl;
	cout << "Unsigned Integer myInteger4 (Without error): " << myInteger4 << endl;

	cout << endl;

	long int myInteger5 = 0; //Long gives 4 bytes of memory (default) to integers.
	short int myInteger6 = 0; //Short gives half the memory space to integers, so they represent a shorter range of numbers.
	long long int myInteger7 = 0; //Long Long gives 8 bytes (x2) to integers, so they represent a larger range of numbers.
	cout << "Long Integers have a size of " << sizeof(myInteger5) << " Bytes." << endl;
	cout << "Short Integers have a size of " << sizeof(myInteger6) << " Bytes." << endl;
	cout << "Long Long Integers have a size of " << sizeof(myInteger7) << " Bytes." << endl;

	cout << endl;

	//You can get the value of a specific character of a string using:
	char myChar2 = myString[0]; //Gets the value of the FIRST character of the string.
	char myChar3 = myString[1]; //Gets the value of the SECOND character of the string.

	cout << "myString[0] = " << myChar2 << endl;
	cout << "myString[1] = " << myChar3 << endl;

	cout << endl;

	//You can convert a string to an integer using atoi():
	char* myString2 = "1"; //You can also use char* to create an array of characters which is the same as a string.
	char* myString3 = "2";
	int myInteger8 = atoi(myString2);
	int myInteger9 = atoi(myString3);
	int sum = myInteger8 + myInteger9;
	cout << "The sum of the converted integer strings is: " << sum << endl;

	cout << endl;

	//You can also convert a string to a double using atof():
	char* myString4 = "1.1"; //You can also use char* to create an array of characters which is the same as a string.
	char* myString5 = "2.3";
	double myInteger10 = atof(myString4);
	double myInteger11 = atof(myString5);
	double sum2 = myInteger10 + myInteger11;
	cout << "The sum of the converted double strings is: " << sum2 << endl;

	system("pause");
}//end main()