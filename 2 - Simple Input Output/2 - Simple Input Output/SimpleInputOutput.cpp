#include <iostream> //Load input/output stream which is used to control input and output operations
#include <string> //Load string library
using namespace std; //Load "standard" namespace which holds basic C++ functions.

void main() {
	string name; //Declares a variable of type string. You need to load the <string> library above to do this.
	//Variable names should always start with lowercase letter. They should contain only letters, numbers and _.
	cout << "Enter your name: "; //Prints "Enter your name" on the console
	cin >> name; //Reads the value typed by the user and stores it in the variable "name"
	cout << "Hello, " << name << endl; //Prints "Hello" and the typed name on the screen
	system("pause"); //Pauses the console before exit so you can see the output
}//end main()