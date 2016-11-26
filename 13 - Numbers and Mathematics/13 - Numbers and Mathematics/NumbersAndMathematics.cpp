#include <iostream>
#include <time.h> //Load library time, for generating random numbers
#include <math.h> //Math library, contains mathematical functions
using namespace std;

void main() {

	//You can generate random numbers using:
	srand(time(NULL)); //Initialize a seed according to time

	//Generate 10 random numbers
	cout << "Random Numbers: ";
	for (int i = 0; i < 10; i++) {
		int randomNumber = rand();
		cout << randomNumber << " ";
	}//end for

	cout << endl;

	//You can use mathematical functions from the math library:
	const double pi = 3.14;
	double angle = 2 * pi;
	//IMPORTANT NOTE: Angles should be entered in radians!
	cout << "COS of " << angle << ": " << cos(angle) << endl;
	cout << "SIN of " << angle << ": " << sin(angle) << endl;
	cout << "TAN of " << angle << ": " << tan(angle) << endl;

	double num = 0.05;
	cout << "ARCCOS of " << num << ": " << acos(num) << endl;
	cout << "ARCSIN of " << num << ": " << asin(num) << endl;
	cout << "ARCTAN of " << num << ": " << atan(num) << endl;

	cout << "NATURAL LOG of Pi: " << log(pi) << endl;
	double power = 2;
	cout << "Pi to the power of " << power << ": " << pow(pi, power) << endl;
	double adjacent = 4;
	double opposite = 3;
	cout << "HYPOTENUSE of " << adjacent << " and " << opposite << ": " << hypot(adjacent, opposite) << endl;
	cout << "SQUARE ROOT of 9.5: " << sqrt(9.5) << endl;
	cout << "ABSOLUTE VALUE of 2: " << abs(2) << endl;
	cout << "ABSOLUTE VALUE of -2: " << abs(-2) << endl;
	cout << "ABSOLUTE VALUE of 2.8: " << fabs(2.8) << endl;
	cout << "ABSOLUTE VALUE of -2.8: " << fabs(-2.8) << endl;
	cout << "FLOOR of 6.8: " << floor(6.8) << endl;
	cout << "FLOOR of 6.2: " << floor(6.2) << endl;

	cout << endl;
	system("pause");

	//You can use the limits (maximum-minimum possible) of integers:
	cout << "Minimum Integer: " << INT_MIN << endl;
	cout << "Maximum Integer: " << INT_MAX << endl;
	cout << "Minimum Short: " << SHRT_MIN << endl;
	cout << "Maximum Short: " << SHRT_MAX << endl;
	cout << "Maximum Unsigned Integer: " << UINT_MAX << endl;
	cout << "Maximum Unsigned Short: " << USHRT_MAX << endl;
	cout << "Minimum Long: " << LONG_MIN << endl;
	cout << "Maximum Long: " << LONG_MAX << endl;
	cout << "Maximum Unsigned Long: " << ULONG_MAX << endl;

	system("pause");
}//end main()