#include <iostream>
using namespace std;
//NOTE: Run this program with arguments after the name of the program. i.e "arguments.exe john"

void main(int argc, char* argv[]) {
	cout << "The number of arguments is: " << argc << endl; //Prints argc, which holds the number of arguments

	//Loop which iterates through all arguments. You will learn about loops later.
	for (int i = 0; i < argc; i++) {
		cout << "argv[" << i << "] = " << argv[i] << endl; //Print the value all elements in argv[].
	}//end for

	system("pause");
}//end main()