#include <iostream>
using namespace std;
//--------------------------------------------------------------------------------
//Declaring and defining a function of return type void, named PrintHello().
void PrintHello() {
	cout << "Hello!" << endl;
}//end PrintHello() 

//Only declaring a function named PrintWorld(). It should be defined later, below main.
void PrintWorld();

//Declaring and defining a function of return type int, named add(). This function will add two numbers, a and b, which are entered as arguments and return their sum.
int Add(int a, int b) {
	return a + b;
}//end add()

//Overloaded function add() which adds 3 numbers instead of just 2.
int Add(int a, int b, int c) {
	return a + b + c;
}//end add()

void MultiplyBy10_CopyByValue(int a) {
	a = a * 10;
	cout << "MultiplyBy10_CopyByValue() Number: " << a << endl;
}//end MultiplyBy10()

//Use the & (Address-Of) symbol before the variable name to create a reference to its original address.
//You will learn more about addresses and pointers in later tutorials.
void MultiplyBy10_CopyByReference(int &a) { 
	a = a * 10;
	cout << "MultiplyBy10_CopyByReference() Number: " << a << endl;
}//end MultiplyBy10()

void printArray(const int size, int arrayVar[]) {
	for (int i = 0; i < size; i++)
		cout << arrayVar[i] << " ";
	cout << endl;
}//end printArray()

//--------------------------------------------------------------------------------
//+++++++++++++ START HERE ++++++++++++++
void main(int argc, char* argv[]) {

	//"main" in which this comment is into, is called a function.
	//Functions are self-contained sub-programs that execute a specific task and may or may not return a value.
	//The "main" function is the starting point of every program, and other functions are called from "main()".
	//Function help you re-use code to perform identical tasks at different sections of a program.
	//Variables declaresd inside a function are called LOCAL VARIABLES, and are only accessible inside that function.

	//Declaring a function:
	//-- You need to specify a return type (int, double, string etc) if the function will return a value. Otherwise the return type used should be "void".
	//-- You need to specify the name of the function, such as "main()". In C++, functions usually start with a capital letter, except main.
	//-- In the brackets, you can specify arguments for the function to take as input. For example "int argc" and "char* argv[]" are arguments of the function "main()".
	//-- You can declare a function above "main()" and define it (specify its content) at the same time. See the PrintHello() example.
	//-- You can also declare a function above "main()" and define it later, below main(). See the PrintWorld() example.
	//-- If you write a function below main(), you need to make sure you declare it above it. If you do not, the function will not be recognized by main(), as it hasn't been initialized when main() runs.

	//Now let's call both functions from main():
	PrintHello();
	PrintWorld();

	//You can return a value from a function using the "return" keyword. See the add() function above.
	int num1 = 3;
	int num2 = 5;
	int sum = Add(num1, num2); //The values of num1 and num2 are passed as parameters to add(). The returned value of the add() function is then assigned to the variable "sum".
	cout << "Sum: " << sum << endl;

	//--- OVERLOADING ---
	//Overloading is when multiple instances of the same function exist. For example there might be two function named add(), one which is used to add 2 numbers and another which is used to add 3 numbers.
	//See Example:
	int num3 = 2;
	sum = Add(num1, num2, num3); //The overloaded function is now used.
	cout << "Overloaded add() Sum: " << sum << endl;

	cout << endl;

	//--- COPY BY VALUE vs COPY BY REFERENCE
	//Function arguments can be copied and changed locally. When the function is done, the original value of the argument will remain. This is called COPY BY VALUE.
	//Arguments can also be passed to a function which modifies their value and that value will remain even after the function exits. I.E The original value will be lost. This is called COPY BY REFERENCE.
	//"Copying by value" involves copying the variable value to a NEW memory location. "Copying by reference" involves copying the ADDRESS of that variable in the memory, so it can be directly changed and accessed.

	//Copying by Value
	int myNumber = 1;
	MultiplyBy10_CopyByValue(myNumber);
	cout << "Main() Number: " << myNumber << endl;
	//You will see that the value of myNumber has NOT changed despite the results of the function.

	//Copying by Reference
	MultiplyBy10_CopyByReference(myNumber);
	cout << "Main() Number: " << myNumber << endl;
	//You will see that the value of myNumber has changed to what was the result of the function.

	cout << endl;

	//You can also pass arrays to functions using:
	const int arraySize = 5;
	int integerArray[arraySize] = { 1, 2, 3, 4, 5 };
	cout << "Array to Function: " << endl;
	printArray(arraySize, integerArray);


	system("pause");
}//end main()

//Definition of PrintWorld() which was declared but not defined above main()
void PrintWorld() {
	cout << "World!" << endl;
}//end PrintWorld()