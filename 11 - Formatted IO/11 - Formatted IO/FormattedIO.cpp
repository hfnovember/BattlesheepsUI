#include <iostream>
using namespace std;

void main() {
	//You can use the printf() function to print output (numbers and strings) in the format you would like.

	const double pi = 3.141592653589793;
	double x = 2.12;
	int y = 4;

	printf("%.2f", pi); //This prints pi, with an accuracy of 2 decimal places.
	cout << endl;

	printf("%.6f", x); //This prints x, with an accuracy of 6 decimal places.
	cout << endl;

	printf("%6d", y); //This prints y, with a field width of 6 digits.
	cout << endl;

	printf("%-6d", y); //This prints y, with a field width of 6 digits and aligned to the left.
	cout << endl;

	char* str1 = "hello world";
	printf("%20s", str1);   //This prints str1, with a field width of 20 characters.
	cout << endl;

	printf("%-20s", str1);   //This prints str1, with a field width of 20 characters, aligned to the left.
	cout << endl;

	printf("%20.5s", str1);   //This prints the first 5 characters of str1, with a field width of 20 characters.
	cout << endl;

	printf("%-20.8s", str1);   //This prints the first 8 characters of str1, with a field width of 20 characters, aligned to the left.
	cout << endl;

	//--- ESCAPE CHARACTERS / LITERALS ---
	//Several characters have special meaning and can be used to trigger specific behaviors.

	//You can use \n to change line. This is called the newline character.
	cout << "My name is John\n";
	cout << "My name is Jane\n";

	//You can use \" to enter a " character in a string:
	cout << "\"" << endl;

	//You can use \' to enter a ' character as a character:
	cout << '\'' << endl;

	//You can use \\ to enter a \ character in a string or character:
	cout << "\\" << endl;

	//You can use \b to act as a backspace:
	cout << "Hello\b" << endl;

	//You can use \t to act as a tab:
	cout << "Hello\tWorld" << endl;

	system("pause");

	//You can use \a to sound sound an alarm:
	cout << "\a" << endl;

	system("pause");
}//end main()