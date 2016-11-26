#include <iostream>
#include <string>
using namespace std;

void main() {
	//You can assign the value of 1 variable to another using:
	int myInt = 3;
	int myInt2 = myInt;
	cout << "Copied integer = " << myInt2 << endl;

	//You can find the sum of 2 or more numbers using:
	int a = 3;
	int b = 5;
	int c = 2;
	int sumOfIntegers = a + b + c;
	cout << "The sum of a, b and c is: " << sumOfIntegers << endl;

	//You can find the difference of 2 or more numbers using:
	int differenceOfIntegers = c - b;
	cout << "The difference of c - b = " << differenceOfIntegers << endl;

	//You can multiply 2 or more numbers using:
	int productOfIntegers = b * c;
	cout << "The product of b x c = " << productOfIntegers << endl;

	//You can divide 2 numbers using:
	double quotientOfIntegers = b / 2;
	cout << "The quotient of b / 2 = " << quotientOfIntegers << endl;

	//You can find the remainder of a division using:
	double remainderOfIntegers = a % c;
	cout << "The remainder of a / c is: " << remainderOfIntegers << endl;

	//Be careful! You cannot divide a number by 0. It will result in a compile time error...
	/*double errorQuotient = 8 / 0;
	cout << "The quotient of 8 / 0 = " << errorQuotient << endl;*/

	//You can add or remove 1 from an integer using ++ or --:
	int d = 0;
	cout << "d before: " << d << endl;
	d++; //This is the same as d = d + 1
	cout << "d after increment: " << d << endl;
	d--; //This is the same as d = d - 1
	cout << "d after decrement: " << d << endl;

	//You can quickly modify the value of a variable related to its current value using:
	int e = 5;
	cout << "e before: " << e << endl;
	e += 3; //This is the same as e = e + 3
	cout << "e after: " << e << endl;

	int f = 10;
	cout << "f before: " << f << endl;
	f *= 4; //This is the same as f = f * 4
	cout << "f after: " << f << endl;

	int g = 100;
	cout << "g before: " << g << endl;
	g /= 4; //This is the same as g = g / 4
	cout << "g after: " << g << endl;

	cout << endl;

	//You can add 2 or more strings together (concatenate) using: 
	string stringA = "Hello";
	string stringB = "World";
	string stringC = stringA + stringB;
	cout << "Concatenated stringA + stringB: " << stringC << endl;

	//You can also copy one string to another using:
	string stringD = stringA;
	cout << "Copied StringG: " << stringD << endl;

	cout << endl;

	system("pause");
}//end main()