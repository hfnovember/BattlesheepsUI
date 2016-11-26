#include <iostream>
using namespace std;

void main() {

	//You can use loops to quickly iterate through arrays and process a large amount of data very quickly:
	const int sizeOfArray = 10;
	int grades[sizeOfArray] = { 71, 58, 48, 79, 68, 98, 59, 85, 68, 99 };

	cout << "ALL GRADES: ";
	for (int i = 0; i < sizeOfArray; i++)
		cout << grades[i] << "% ";
	cout << endl;

	//You can combine if statements as well, to filter this data:
	cout << "GRADES LESS THAN 60: ";
	for (int i = 0; i < sizeOfArray; i++)
		if (grades[i] < 60) cout << grades[i] << "% ";
	cout << endl;

	//You can perform operations on data to find statistics such as sum, average, min and max:
	int sum = 0;
	double average = 0.0;
	int min = grades[0]; //Initialize minimum and maximum to first element.
	int max = grades[0];

	for (int i = 0; i < sizeOfArray; i++) {
		sum += grades[i]; //Add current grade to the sum
		if (grades[i] > max) max = grades[i]; //if current grade is more than the maximum, then the maximum becomes the current grade.
		if (grades[i] < min) min = grades[i]; //if current grade is less than the minimum, then the minimum becomes the current grade.
	}//end for
	average = (double)sum / sizeOfArray; //Use (double) to cast a double type when dividing 2 integers. Otherwise the returned value will also be an integer.
	cout << "SUM: " << sum << endl;
	cout << "AVERAGE: " << average << endl;
	cout << "MINIMUM: " << min << endl;
	cout << "MAXIMUM: " << max << endl;

	system("pause");
}//end main()