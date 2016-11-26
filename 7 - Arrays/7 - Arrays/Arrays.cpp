#include <iostream>
using namespace std;

void main(int argc, char* argv []) {

	//Arrays are fixed-size data structures which can store many variables of the same type.
	int temperatures[5]; //For example, this declares an array of 7 integers.

	//Arrays are used because the data inside them is sequentially stored. (i.e the variables are stored one after another)
	//This makes processing a large amount of data very fast using loops, which you will learn in the following tutorial.
	//Arrays are also used to organized data of the same type together easily, as opposed to isngle variables.

	//You can set the value of an array element using:
	temperatures[0] = 32; //Bear in mind that arrays ALWAYS have their first element as 0, second as 1, etc...
	temperatures[1] = 35;
	temperatures[2] = 41;
	temperatures[3] = 32;
	temperatures[4] = 42; //Since arrays start with 0 as the first element, they can only have an index up to their size-1. (e.g 5-1 = 4)

	//temperatures[5] = 25; - Be careful! This line will create an error, since there is no element 5!
	//temperatures[-1] = 45; - Also be careful! This line will also create an error, since there are no negative elements.

	//You can get the value of an array element using:
	cout << "The temperature on Monday was: " << temperatures[0] << " degrees." << endl;
	cout << "The temperature on Friday was: " << temperatures[4] << " degrees." << endl;

	//You can also declare and initialize elements in an array at the same time using:
	double humidity[5] = { 20.3, 16.8, 25.6, 18.8, 51.2 };
	cout << "The humidity on Monday was: " << humidity[0] << "%." << endl;
	cout << "The humidity on Friday was: " << humidity[4] << "%." << endl;

	int wind[] = { 11, 18, 12, 10, 8 }; //Note that the size of the array is automatically taken from the number of the elements you declare at initialization.
	cout << "The wind on Monday was: " << wind[0] << "." << endl;
	cout << "The wind on Friday was: " << wind[4] << "." << endl;

	//You can also create multi-dimensional arrays (matrices) using:
	int coordinates[3][2];
	
	//You can set the value of an element in a multi-dimensional array using two indices:
	coordinates[0][0] = 3;
	coordinates[0][1] = 5;
	coordinates[1][0] = 6;
	coordinates[1][1] = 4;
	coordinates[2][0] = 5;
	coordinates[2][1] = 1;

	//To access a matrix element, use:
	cout << "Coordinate 1:  -- X: " << coordinates[0][0] << " -- Y: " << coordinates[0][1] << endl;
	cout << "Coordinate 2:  -- X: " << coordinates[1][0] << " -- Y: " << coordinates[1][1] << endl;
	cout << "Coordinate 3:  -- X: " << coordinates[2][0] << " -- Y: " << coordinates[2][1] << endl;

	//The program arguments you have used in the Arguments tutorial are stored in an array.
	//argc is the number of elements in the array.
	//argv is a an array of character arrays (strings).
	if (argc > 1) cout << argv[1] << endl; //This line will print the first parameter given to the program if there is one.

	system("pause");
}//end main()