#include <iostream>
using namespace std;

void printPointerValue(int* pointer) {
	cout << "Value of Pointer: " << pointer << endl;
}//end printPointerValue()

int increaseUsingPointer(int* pointer) {
	*pointer += 1; //Note that the ++ or -- operators cannot be used.
	return *pointer;
}//end increaseUsingPointer()

int increaseUsingReference(int &variable) {
	variable++;
	return variable;
}//end increaseUsingReference()

int* returnPointer() {
	static int newVariable = 5; //It's not a good idea to return a local variable to outside of the function. The static keyword preserves newVariable even after the function has ended.
	return &newVariable;
}//end returnPointer()

void main() {

	//As you have seen in the Functions tutorial, you can use the COPY-BY-REFERENCE technique to pass the variable itself to the function instead of a copy.
	//This is a classic case where pointers are used. Without a pointer, it would be impossible to modify the original value of a variable from within a function.
	
	//You can also pass a pointer variable to a function just like any other variable:
	int myVariable = 6;
	int* myPointer = &myVariable;
	printPointerValue(myPointer);

	//When passing a pointer to variable in a function, the value of ALWAYS directly modified. In this example function, the original value of myVariable will be increased:
	cout << "Value of myVariable after using increaseUsingPointer(): " << increaseUsingPointer(myPointer) << endl;

	//This is exactly the same as the reference method which was introduced in the functions tutorial. In this case the variable itself is passed:
	cout << "Value of myVariable after using increaseUsingReference(): " << increaseUsingReference(myVariable) << endl;

	//You can also make a function return a pointer using:
	cout << "Pointer to newVariable value: " << returnPointer() << endl;

	system("pause");
}//end main()